/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.0  (the "License"); you may not use this file
 * except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.openairinterface.org/?page_id=698
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */

/*! \file d2d_app.c
 * \brief An example of how to exchange messages between OAI and D2D App via a control socket
 * \author Tien-Thinh NGUYEN
 * \date 20/11/2017
 * \version 0.1
 * \email:tien-thinh.nguyen@eurecom.fr
 * \company Eurecom
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include<pthread.h>
#include <arpa/inet.h>
#include <stdbool.h>

#include "d2d_app.h"


static void usage(const char *argv0)
{
	fprintf(stderr,
			"Usage: %s [-s][-r][-g] source_L2ID dest/groupL2ID or -d  \n example: \n %s -s source_L2ID dest_L2ID #starting app as a sender for a 1-1 communication \n "
			"%s -r source_L2ID dest_L2ID #starting app as a receiver for a 1-1 communication \n %s -g source_L2ID group_L2ID #starting app as a sender/receiver for a 1-n communication \n"
			" %s -d  #starting app for discovery mode\n",
			argv0, argv0, argv0, argv0, argv0);
	exit(EXIT_FAILURE);
}




//--------------------------------------------------------
int main(int argc, char *argv[]) {

	//for the socket
	int serverlen;
	struct hostent *server;
	char *hostname;

	//define the running mode
	bool sender_mode = false;
	bool receiver_mode = false;
	bool onetomany_scenario = false;
	bool discovery_mode = false;
    //cmd parameters
	char *src_string = NULL;
	char *dst_string = NULL;
	uint32_t src_id, dst_id;

	char send_buf[BUFSIZE], receive_buf[BUFSIZE];
	int status;
	int slrb_id;
	int opt, i, n;
	uint8_t pppp = 0;
	uint8_t type = 0;
	int pc5s_slrb = 0;
	int direct_comm_slrb = 0;
	uint32_t group_ip_address = inet_addr("224.0.0.3"); //hardcoded
	uint32_t grp_id = 0x03;//hardcoded


	struct sidelink_ctrl_element *sl_ctrl_msg = NULL;
	sidelink_pc5s_element *sl_pc5s_msg_rcv = NULL;
	sidelink_pc5s_element *sl_pc5s_msg_send = NULL;
	PC5SignallingMessage *pc5_signalling_message = NULL;
	pc5s_header_t *pc5s_header = NULL;
	PC5DiscoveryMessage *pc5_discovery_message = NULL;


   //get input parameters
	while ((opt = getopt(argc, argv, "srdg")) != -1) {
		switch (opt) {
		case 's': //sender for 1-1 communication
			sender_mode = true;
			break;
		case 'r': //receiver for 1-1 communication
			receiver_mode = true;
			break;
		case 'd': //discovery mode
			discovery_mode = true;
			break;
		case 'g'://group communication
			onetomany_scenario = true;
			break;
		default:
			usage(argv[0]);
			break;
		}
	}

	//except the discovery mode, source and destination L2IDs should be provided
	if (!discovery_mode && (argc - optind < 2))
	{
		fprintf(stderr, "%s: too few arguments\n", argv[0]);
		usage(argv[0]);
	}

	//get the information for source and destination L2ID from command line
	if (!discovery_mode){
		src_string = calloc (1, sizeof(char));
		dst_string = calloc  (1, sizeof(char));
		src_string = argv[optind];
		dst_string = argv[optind+1];
		src_id = (uint32_t) strtol(src_string, NULL, 0);
		dst_id = (uint32_t) strtol(dst_string, NULL, 0);
	}

	//printout the selected scenario
	printf ("--------------------------------------------------\n");
	if (sender_mode) printf ("One-to-one Scenario, Sender\n");
	else if (receiver_mode) printf ("One-to-one Scenario, Receiver\n");
	else if (onetomany_scenario) printf ("One-to-many Scenario\n");
	else if (discovery_mode) printf ("Discovery Scenario\n");

	if (!discovery_mode){
		printf("Source L2ID: 0x%08x \n", src_id);
		printf("Destination/Group L2ID: 0x%08x \n", dst_id);
	}


	//get host information
	hostname = "localhost";
	server = gethostbyname(hostname);
	if (server == NULL) {
		fprintf(stderr,"ERROR, no such host as %s\n", hostname);
		exit(0);
	}

	// create the control socket
	ctrl_sockfd = socket(AF_INET, SOCK_DGRAM, 0);
	if (ctrl_sockfd < 0)
		error("ERROR: Failed to create control socket");
	// build the server's address
	memset(&ctrl_sin, 0, sizeof(struct sockaddr_in));
	ctrl_sin.sin_family = AF_INET;
	bcopy((char *)server->h_addr,
			(char *)&ctrl_sin.sin_addr.s_addr, server->h_length);
	ctrl_sin.sin_port = htons(CONTROL_SOCKET_PORT_NO);


	//create the MAC socket
	mac_sockfd = socket(AF_INET, SOCK_DGRAM, 0);
	if (mac_sockfd < 0)
		error("ERROR: Failed to create MAC socket");
	memset(&mac_sin, 0, sizeof(struct sockaddr_in));
	mac_sin.sin_family = AF_INET;
	bcopy((char *)server->h_addr,
			(char *)&mac_sin.sin_addr.s_addr, server->h_length);
	mac_sin.sin_port = htons(MAC_SOCKET_PORT_NO);

	//create the PDCP socket
	pdcp_sockfd = socket(AF_INET, SOCK_DGRAM, 0);
	if (pdcp_sockfd < 0)
		error("ERROR: Failed to create PDCP socket");
	memset(&pdcp_sin, 0, sizeof(struct sockaddr_in));
	pdcp_sin.sin_family = AF_INET;
	bcopy((char *)server->h_addr,
			(char *)&pdcp_sin.sin_addr.s_addr, server->h_length);
	pdcp_sin.sin_port = htons(PDCP_SOCKET_PORT_NO);


	//Init a session with OAI (via control socket)
	status = session_init ();
	if (status == UE_STATE_ON_NETWORK ) {
		printf("[UEStatusInformation] UE is on coverage\n");
	} else if (status == UE_STATE_OFF_NETWORK) {
		printf("[UEStatusInformation] UE is out of coverage\n");
	}

	//Discovery Mode
	if (discovery_mode){
		sleep(10);
		//send PC5_DISCOVERY message via Ctrl socket
		pc5_discovery_message = calloc(1, sizeof(PC5DiscoveryMessage));
		send_PC5D_message(pc5_discovery_message);

		//wait for the replies from other UEs
		printf("Waiting for incoming PC5_discovery_message from other UEs.... \n");
		memset(receive_buf, 0, BUFSIZE);
		serverlen = sizeof(ctrl_sin);
		while (1) {
			n = recvfrom(ctrl_sockfd, receive_buf, BUFSIZE, 0, (struct sockaddr *)&ctrl_sin, &serverlen);
			if (n < 0)
				error("ERROR: Failed to receive from OAI");

			sl_ctrl_msg = (struct sidelink_ctrl_element *) receive_buf;
			if (sl_ctrl_msg->type == PC5_DISCOVERY_MESSAGE) {
				printf("Received PC5DiscoveryMessage on socket from OAI\n");
				//store UE Id which then can be used as the destination address of a PC5-S message
				// receiver_id = sl_ctrl_msg->sidelinkPrimitive.pc5_discovery_message.proSeUEId;
			}
		}
	}


	//One-to-one Communication
	/*
	 * for 1-1 communication,first PC5S signaling messages need to be exchanged between UEs before exchanging the actual data
	 * the call flow is as following:
	 *            UE Sender                                     UE Receiver
	 *                     ----Direct_Communication_Request  -->
	 *                     <---Direct_Security_Mode_Command ----
	 *                     ----Direct_Security_Mode_Complete -->
	 *                     <---Direct_Communication_Accept------
	 *                     <===========Exchanging Data==========>
	 *
	 */

	if (sender_mode | receiver_mode) {

		//Initiate a PDCP session between D2D application and OAI
		status = pdcp_session_init();

		//PC5S signaling messages for sender
		if (sender_mode) {
			//in order to receive the first message from any node, we need to establish a default RB to receive the PC5S message
			//for the moment, we use only one SLRB_ID for PC5S signaling (instead of using 28,29,30)
			type = 0; //rx
			status = setup_PC5s_request(type, src_id, 0x00000000);
			if (status > -1 ){
				printf("[PC5S] SRLBs have been established for PC5S\n");
			} else{
				printf("[PC5S] Failed to establish SLRBs for PC5S\n");
			}

            //then another RB which will be used to send message to another node
			//for the moment, we use only one SLRB_ID for PC5S signaling (instead of using 28,29,30)
			type = 1;//tx
			pc5s_slrb = setup_PC5s_request(type, src_id, dst_id);
			if (pc5s_slrb > -1 ){
				printf("[PC5S] SRLB %d have been established for PC5S\n", pc5s_slrb);
			} else{
				printf("[PC5S] Failed to establish SLRBs for PC5S\n");
			}

			//After that,we can send a PC5-S message over the established SLRB ID [DIRECT COMMUNICATION REQUEST]
			printf("------------------------------------------------\n");
			printf("Send PC5 Direct Communication Request\n");
			//fill PC5S header
			pc5s_header = calloc(1, sizeof(pc5s_header_t));
			pc5s_header->traffic_type = TRAFFIC_PC5S_SIGNALLING; //PC5S message is transparent to the OAI stack
			pc5s_header->rb_id = pc5s_slrb; //for the moment, we use only one SLRB for all PC5S messages
			pc5s_header->data_size = sizeof(sidelink_pc5s_element);
			pc5s_header->inst = 0;
			pc5s_header->sourceL2Id = src_id;
			pc5s_header->destinationL2Id = dst_id;

			//fill the message with a dummy content
			pc5_signalling_message = calloc(1, sizeof(PC5SignallingMessage));
			for (i=0; i<PC5_SIGNALLING_PAYLOAD_SIZE; i++ ){
				pc5_signalling_message->bytes[i] = i+1;
			}

			//allocate the message, fill the content and send
			sl_pc5s_msg_send = calloc(1, sizeof(sidelink_pc5s_element));
			memcpy(&sl_pc5s_msg_send->pc5s_header, pc5s_header,sizeof(pc5s_header_t));
			memcpy(&sl_pc5s_msg_send->pc5sPrimitive.pc5_signalling_message, pc5_signalling_message,sizeof(PC5SignallingMessage));

			printf("Send pc5_signalling_message\n");
			printf("Send pc5_signalling_message, pc5-s header traffic_type: %d \n", pc5s_header->traffic_type);
			printf("Send pc5_signalling_message, pc5-s header rb_id: %d \n", pc5s_header->rb_id);
			printf("Send pc5_signalling_message, pc5-s header data_size: %d \n", pc5s_header->data_size);
			printf("Send pc5_signalling_message, pc5-s header inst: %d \n", pc5s_header->inst);
			printf("Send pc5_signalling_message, pc5-s header source L2Id 0x%08x \n", pc5s_header->sourceL2Id);
			printf("Send pc5_signalling_message, pc5-s header destination L2Id 0x%08x \n", pc5s_header->destinationL2Id);
			printf("Message content: \n");
			for (i=0; i<PC5_SIGNALLING_PAYLOAD_SIZE; i++ ){
				printf(" %d", pc5_signalling_message->bytes[i]);
			}
			printf("\n");

			send_pc5s_message(sl_pc5s_msg_send);


			//Wait for DIRECT SECURITY MODE COMMAND message
			printf("------------------------------------------------\n");
			printf("Listening to incoming message from OAI.... \n");
			printf("Waiting for Direct Security Mode Command.... \n");
			// get the reply from OAI
			memset(receive_buf, 0, BUFSIZE);
			serverlen = sizeof(pdcp_sin);
			sl_pc5s_msg_rcv = calloc(1, sizeof(sidelink_pc5s_element));

			n = recvfrom(pdcp_sockfd, receive_buf, BUFSIZE, 0, (struct sockaddr *)&pdcp_sin, &serverlen);
			if (n < 0)
				error("ERROR: Failed to receive from OAI");

			memcpy((void *)sl_pc5s_msg_rcv, (void *)receive_buf, sizeof(sidelink_pc5s_element));
			printf("------------------------------------------------\n");
			printf("Received on socket from OAI, pc5-s header traffic_type: %d\n",sl_pc5s_msg_rcv->pc5s_header.traffic_type);
			printf("Received on socket from OAI, pc5-s header rb_id: %d\n",sl_pc5s_msg_rcv->pc5s_header.rb_id);
			printf("Received on socket from OAI, pc5-s header inst: %d\n",sl_pc5s_msg_rcv->pc5s_header.inst);
			printf("Received on socket from OAI, pc5-s header data_size: %d\n",sl_pc5s_msg_rcv->pc5s_header.data_size);
			printf("Received on socket from OAI, pc5-s header source L2Id 0x%08x \n", sl_pc5s_msg_rcv->pc5s_header.sourceL2Id);
			printf("Received on socket from OAI, pc5-s header destination L2Id 0x%08x \n", sl_pc5s_msg_rcv->pc5s_header.destinationL2Id);

			if (sl_pc5s_msg_rcv->pc5s_header.traffic_type == TRAFFIC_PC5S_SIGNALLING) {
				printf("Received on socket from OAI, PC5S message\n");
				printf("Message: \n");
				for (i=0; i<PC5_SIGNALLING_PAYLOAD_SIZE; i++ ){
					printf(" %d", sl_pc5s_msg_rcv->pc5sPrimitive.pc5_signalling_message.bytes[i]);
				}
				printf("\n");
			}

			//send DIRECT SECURITY MODE COMPLETE message
			printf("------------------------------------------------\n");
			printf("Send PC5 Direct Security Mode Complete\n");
			send_pc5s_message(sl_pc5s_msg_send);

			//Wait for DIRECT COMMUNICATIOIN ACCEPT message
			printf("------------------------------------------------\n");
			printf("Listening to incoming message from OAI.... \n");
			printf("Waiting for Direct Communication Accept.... \n");
			// get the reply from OAI
			memset(receive_buf, 0, BUFSIZE);
			serverlen = sizeof(pdcp_sin);
			sl_pc5s_msg_rcv = calloc(1, sizeof(sidelink_pc5s_element));

			n = recvfrom(pdcp_sockfd, receive_buf, BUFSIZE, 0, (struct sockaddr *)&pdcp_sin, &serverlen);
			if (n < 0)
				error("ERROR: Failed to receive from OAI");

			memcpy((void *)sl_pc5s_msg_rcv, (void *)receive_buf, sizeof(sidelink_pc5s_element));
			printf("------------------------------------------------\n");
			printf("Received on socket from OAI, pc5-s header traffic_type: %d\n",sl_pc5s_msg_rcv->pc5s_header.traffic_type);
			printf("Received on socket from OAI, pc5-s header rb_id: %d\n",sl_pc5s_msg_rcv->pc5s_header.rb_id);
			printf("Received on socket from OAI, pc5-s header inst: %d\n",sl_pc5s_msg_rcv->pc5s_header.inst);
			printf("Received on socket from OAI, pc5-s header data_size: %d\n",sl_pc5s_msg_rcv->pc5s_header.data_size);
			printf("Received on socket from OAI, pc5-s header source L2Id 0x%08x \n", sl_pc5s_msg_rcv->pc5s_header.sourceL2Id);
			printf("Received on socket from OAI, pc5-s header destination L2Id 0x%08x \n", sl_pc5s_msg_rcv->pc5s_header.destinationL2Id);

			if (sl_pc5s_msg_rcv->pc5s_header.traffic_type == TRAFFIC_PC5S_SIGNALLING) {
				printf("Received on socket from OAI, PC5S message\n");
				printf("Message: \n");
				for (i=0; i<PC5_SIGNALLING_PAYLOAD_SIZE; i++ ){
					printf(" %d", sl_pc5s_msg_rcv->pc5sPrimitive.pc5_signalling_message.bytes[i]);
				}
				printf("\n");
			}

		}

		//PC5S signaling messages for receiver
		if (receiver_mode){
			//in order to receive the first message from any node, we need to establish a default RB to receive the PC5S message
			//for the moment, we use only one SLRB_ID for PC5S signaling (instead of using 28,29,30)

			type = 0; //rx
			status = setup_PC5s_request(type, src_id, 0x00000000);
			if (status > -1 ){
				printf("[PC5S] SRLBs have been established for PC5S\n");
			} else{
				printf("[PC5S] Failed to establish SLRBs for PC5S\n");
			}

			//Then, wait for DIRECT COMMUNICATION REQUEST from Sender
			printf("------------------------------------------------\n");
			printf("Listening to incoming message from OAI.... \n");
			printf("Waiting for Direct Communication Request.... \n");
			// get the reply from OAI
			memset(receive_buf, 0, BUFSIZE);
			serverlen = sizeof(pdcp_sin);
			sl_pc5s_msg_rcv = calloc(1, sizeof(sidelink_pc5s_element));
			n = recvfrom(pdcp_sockfd, receive_buf, BUFSIZE, 0, (struct sockaddr *)&pdcp_sin, &serverlen);
			if (n < 0)
				error("ERROR: Failed to receive from OAI");

			//print the content of the received messages
			memcpy((void *)sl_pc5s_msg_rcv, (void *)receive_buf, sizeof(sidelink_pc5s_element));
			printf("------------------------------------------------\n");
			printf("Received on socket from OAI, pc5-s header traffic_type: %d\n",sl_pc5s_msg_rcv->pc5s_header.traffic_type);
			printf("Received on socket from OAI, pc5-s header rb_id: %d\n",sl_pc5s_msg_rcv->pc5s_header.rb_id);
			printf("Received on socket from OAI, pc5-s header inst: %d\n",sl_pc5s_msg_rcv->pc5s_header.inst);
			printf("Received on socket from OAI, pc5-s header data_size: %d\n",sl_pc5s_msg_rcv->pc5s_header.data_size);
			printf("Received on socket from OAI, pc5-s header source L2Id 0x%08x \n", sl_pc5s_msg_rcv->pc5s_header.sourceL2Id);
			printf("Received on socket from OAI, pc5-s header destination L2Id 0x%08x \n", sl_pc5s_msg_rcv->pc5s_header.destinationL2Id);

			if (sl_pc5s_msg_rcv->pc5s_header.traffic_type == TRAFFIC_PC5S_SIGNALLING) {
				printf("Received on socket from OAI, PC5S message\n");
				printf("Message: \n");
				for (i=0; i<PC5_SIGNALLING_PAYLOAD_SIZE; i++ ){
					printf(" %d", sl_pc5s_msg_rcv->pc5sPrimitive.pc5_signalling_message.bytes[i]);
				}
				printf("\n");
			}

			//then establish another RB which will be used to send the reply message to the sender
			type = 1;//tx
			pc5s_slrb = setup_PC5s_request(type, src_id, dst_id);
			if (pc5s_slrb > -1 ){
				printf("[PC5S] SRLB %d have been established for PC5S\n", pc5s_slrb);
			} else{
				printf("[PC5S] Failed to establish SLRBs for PC5S\n");
			}

			//send DIRECT SECURITY MODE COMMAND message over PC5-S
			printf("------------------------------------------------\n");
			printf("Send PC5 Direct Security Mode Command\n");
			//fill PC5S header
			pc5s_header = calloc(1, sizeof(pc5s_header_t));
			pc5s_header->traffic_type = TRAFFIC_PC5S_SIGNALLING;
			pc5s_header->rb_id = pc5s_slrb; //for the moment, we use only one SLRB for all PC5S messages
			pc5s_header->data_size = sizeof(sidelink_pc5s_element);
			pc5s_header->inst = 0;
			pc5s_header->sourceL2Id = src_id;
			pc5s_header->destinationL2Id = dst_id;
			//fill the message
			pc5_signalling_message = calloc(1, sizeof(PC5SignallingMessage));
			for (i=0; i<PC5_SIGNALLING_PAYLOAD_SIZE; i++ ){
				pc5_signalling_message->bytes[i] = i+1;
			}
			sl_pc5s_msg_send = calloc(1, sizeof(sidelink_pc5s_element));
			memcpy(&sl_pc5s_msg_send->pc5s_header, pc5s_header,sizeof(pc5s_header_t));
			memcpy(&sl_pc5s_msg_send->pc5sPrimitive.pc5_signalling_message, pc5_signalling_message,sizeof(PC5SignallingMessage));

			//for debugging purpose, printout the message content
			printf("Send pc5_signalling_message\n");
			printf("Send pc5_signalling_message, pc5-s header traffic_type: %d \n", pc5s_header->traffic_type);
			printf("Send pc5_signalling_message, pc5-s header rb_id: %d \n", pc5s_header->rb_id);
			printf("Send pc5_signalling_message, pc5-s header data_size: %d \n", pc5s_header->data_size);
			printf("Send pc5_signalling_message, pc5-s header inst: %d \n", pc5s_header->inst);
			printf("Send pc5_signalling_message, pc5-s header source L2Id 0x%08x \n", pc5s_header->sourceL2Id);
			printf("Send pc5_signalling_message, pc5-s header destination L2Id 0x%08x \n", pc5s_header->destinationL2Id);
			printf("Message: \n");
			for (i=0; i<PC5_SIGNALLING_PAYLOAD_SIZE; i++ ){
				printf(" %d", pc5_signalling_message->bytes[i]);
			}
			printf("\n");
            //and send the message
			send_pc5s_message(sl_pc5s_msg_send);


			//wait for DIRECT SECURITY MODE COMPLETE
			printf("------------------------------------------------\n");
			printf("Listening to incoming message from OAI.... \n");
			printf("Waiting for Direct Security Mode Complete.... \n");
			// get the reply from OAI
			memset(receive_buf, 0, BUFSIZE);
			serverlen = sizeof(pdcp_sin);
			sl_pc5s_msg_rcv = calloc(1, sizeof(sidelink_pc5s_element));

			n = recvfrom(pdcp_sockfd, receive_buf, BUFSIZE, 0, (struct sockaddr *)&pdcp_sin, &serverlen);
			if (n < 0)
				error("ERROR: Failed to receive from OAI");

			memcpy((void *)sl_pc5s_msg_rcv, (void *)receive_buf, sizeof(sidelink_pc5s_element));
			printf("------------------------------------------------\n");
			printf("Received on socket from OAI, pc5-s header traffic_type: %d\n",sl_pc5s_msg_rcv->pc5s_header.traffic_type);
			printf("Received on socket from OAI, pc5-s header rb_id: %d\n",sl_pc5s_msg_rcv->pc5s_header.rb_id);
			printf("Received on socket from OAI, pc5-s header inst: %d\n",sl_pc5s_msg_rcv->pc5s_header.inst);
			printf("Received on socket from OAI, pc5-s header data_size: %d\n",sl_pc5s_msg_rcv->pc5s_header.data_size);
			printf("Received on socket from OAI, pc5-s header source L2Id 0x%08x \n", sl_pc5s_msg_rcv->pc5s_header.sourceL2Id);
			printf("Received on socket from OAI, pc5-s header destination L2Id 0x%08x \n", sl_pc5s_msg_rcv->pc5s_header.destinationL2Id);

			if (sl_pc5s_msg_rcv->pc5s_header.traffic_type == TRAFFIC_PC5S_SIGNALLING) {
				printf("Received on socket from OAI, PC5S message\n");
				printf("Message: \n");
				for (i=0; i<PC5_SIGNALLING_PAYLOAD_SIZE; i++ ){
					printf(" %d", sl_pc5s_msg_rcv->pc5sPrimitive.pc5_signalling_message.bytes[i]);
				}
				printf("\n");
			}


			//send DIRECT COMMUNICATION ACCEPT message over PC5-S
			printf("------------------------------------------------\n");
			printf("Send PC5 Direct Communication Accept\n");
			//fill PC5S header
			pc5s_header = calloc(1, sizeof(pc5s_header_t));
			pc5s_header->traffic_type = TRAFFIC_PC5S_SIGNALLING;
			pc5s_header->rb_id = pc5s_slrb; //for the moment, we use only one SLRB for all PC5S messages
			pc5s_header->data_size = sizeof(sidelink_pc5s_element);
			pc5s_header->inst = 0;
			pc5s_header->sourceL2Id = src_id;
			pc5s_header->destinationL2Id = dst_id;

			//fill the message
			pc5_signalling_message = calloc(1, sizeof(PC5SignallingMessage));
			for (i=0; i<PC5_SIGNALLING_PAYLOAD_SIZE; i++ ){
				pc5_signalling_message->bytes[i] = i+1;
			}

			sl_pc5s_msg_send = calloc(1, sizeof(sidelink_pc5s_element));
			memcpy(&sl_pc5s_msg_send->pc5s_header, pc5s_header,sizeof(pc5s_header_t));
			memcpy(&sl_pc5s_msg_send->pc5sPrimitive.pc5_signalling_message, pc5_signalling_message,sizeof(PC5SignallingMessage));

			printf("Send pc5_signalling_message\n");
			printf("Send pc5_signalling_message, pc5-s header traffic_type: %d \n", pc5s_header->traffic_type);
			printf("Send pc5_signalling_message, pc5-s header rb_id: %d \n", pc5s_header->rb_id);
			printf("Send pc5_signalling_message, pc5-s header data_size: %d \n", pc5s_header->data_size);
			printf("Send pc5_signalling_message, pc5-s header inst: %d \n", pc5s_header->inst);
			printf("Send pc5_signalling_message, pc5-s header source L2Id 0x%08x \n", pc5s_header->sourceL2Id);
			printf("Send pc5_signalling_message, pc5-s header destination L2Id 0x%08x \n", pc5s_header->destinationL2Id);
			printf("Message: \n");
			for (i=0; i<PC5_SIGNALLING_PAYLOAD_SIZE; i++ ){
				printf(" %d", pc5_signalling_message->bytes[i]);
			}
			printf("\n");

			send_pc5s_message(sl_pc5s_msg_send);

		}

		//After exchanging PC5-S messages (including L2 ID), the sender/receiver can establish a SLRBID for data communication (1-1 or 1-n)
		//it is noted that at this stage, Source ID + Dest ID are known from both sides.

		//we need to create a new RB for 1-1 data communication
		// Send direct establishment request to OAI (for the first unicast flow)
		direct_comm_slrb  = setup_PC5u_direct_request (src_id, dst_id, pppp);
		if (direct_comm_slrb > 0) {
			printf("PC5u has been established with SLRB_ID %i for 1-1 communication, source 0x%08x, destination 0x%08x\n",direct_comm_slrb, src_id, dst_id);
		} else {
			printf("PC5u cannot be established\n");
		}
		printf("------------------------------------------------\n");

		//For 1-n Communication
		sleep(10);
		// Send GroupCommunicationEstablisReq to OAI
		pppp = 2;

		slrb_id  = setup_PC5u_group_request (src_id, grp_id, group_ip_address, pppp);
		if (slrb_id > 0) {
			printf("PC5u has been established with SLRB_ID %i for 1-n communication, source 0x%08x, group 0x%08x\n",slrb_id, src_id, grp_id);
		} else {
			printf("PC5u cannot be established\n");
		}

		//test the traffic by using Ping from command line
		sleep(10);

		//Uncomment to test the release procedure
/*
		//DIRECT COMMUNICATION RELEASE exchanged between UEs
		if (sender_mode){
			//send DIRECT COMMUNICATION RELEASE

			printf("------------------------------------------------\n");
			printf("Send DIRECT COMMUNICATION RELEASE (UE-UE) \n");
			//fill PC5S header
			pc5s_header = calloc(1, sizeof(pc5s_header_t));
			pc5s_header->traffic_type = TRAFFIC_PC5S_SIGNALLING;
			pc5s_header->rb_id = pc5s_slrb; //for the moment, we use only one SLRB for all PC5S messages
			pc5s_header->data_size = sizeof(sidelink_pc5s_element);
			pc5s_header->inst = 0;
			pc5s_header->sourceL2Id = src_id;
			pc5s_header->destinationL2Id = dst_id;

			//fill the message
			pc5_signalling_message = calloc(1, sizeof(PC5SignallingMessage));
			for (i=0; i<PC5_SIGNALLING_PAYLOAD_SIZE; i++ ){
				pc5_signalling_message->bytes[i] = i+1;
			}

			sl_pc5s_msg_send = calloc(1, sizeof(sidelink_pc5s_element));
			memcpy(&sl_pc5s_msg_send->pc5s_header, pc5s_header,sizeof(pc5s_header_t));
			memcpy(&sl_pc5s_msg_send->pc5sPrimitive.pc5_signalling_message, pc5_signalling_message,sizeof(PC5SignallingMessage));

			printf("Send pc5_signalling_message\n");
			printf("Send pc5_signalling_message, pc5-s header traffic_type: %d \n", pc5s_header->traffic_type);
			printf("Send pc5_signalling_message, pc5-s header rb_id: %d \n", pc5s_header->rb_id);
			printf("Send pc5_signalling_message, pc5-s header data_size: %d \n", pc5s_header->data_size);
			printf("Send pc5_signalling_message, pc5-s header inst: %d \n", pc5s_header->inst);
			printf("Send pc5_signalling_message, pc5-s header source L2Id 0x%08x \n", pc5s_header->sourceL2Id);
			printf("Send pc5_signalling_message, pc5-s header destination L2Id 0x%08x \n", pc5s_header->destinationL2Id);
			printf("Message: \n");
			for (i=0; i<PC5_SIGNALLING_PAYLOAD_SIZE; i++ ){
				printf(" %d", pc5_signalling_message->bytes[i]);
			}
			printf("\n");

			send_pc5s_message(sl_pc5s_msg_send);


			//Wait for DIRECT COMMUNICATION RELEASE ACCEPT
			printf("------------------------------------------------\n");
			printf("Listening to incoming message from OTHER ue.... \n");
			printf("Waiting DIRECT COMMUNICATION RELEASE ACCEPT (UE-UE)... \n");
			// get the reply from OAI
			memset(receive_buf, 0, BUFSIZE);
			serverlen = sizeof(pdcp_sin);
			sl_pc5s_msg_rcv = calloc(1, sizeof(sidelink_pc5s_element));

			n = recvfrom(pdcp_sockfd, receive_buf, BUFSIZE, 0, (struct sockaddr *)&pdcp_sin, &serverlen);
			if (n < 0)
				error("ERROR: Failed to receive from OAI");

			memcpy((void *)sl_pc5s_msg_rcv, (void *)receive_buf, sizeof(sidelink_pc5s_element));
			printf("------------------------------------------------\n");
			printf("Received on socket from OAI, pc5-s header traffic_type: %d\n",sl_pc5s_msg_rcv->pc5s_header.traffic_type);
			printf("Received on socket from OAI, pc5-s header rb_id: %d\n",sl_pc5s_msg_rcv->pc5s_header.rb_id);
			printf("Received on socket from OAI, pc5-s header inst: %d\n",sl_pc5s_msg_rcv->pc5s_header.inst);
			printf("Received on socket from OAI, pc5-s header data_size: %d\n",sl_pc5s_msg_rcv->pc5s_header.data_size);
			printf("Received on socket from OAI, pc5-s header source L2Id 0x%08x \n", sl_pc5s_msg_rcv->pc5s_header.sourceL2Id);
			printf("Received on socket from OAI, pc5-s header destination L2Id 0x%08x \n", sl_pc5s_msg_rcv->pc5s_header.destinationL2Id);

			if (sl_pc5s_msg_rcv->pc5s_header.traffic_type == TRAFFIC_PC5S_SIGNALLING) {
				printf("Received on socket from OAI, PC5S message\n");
				printf("Message: \n");
				for (i=0; i<PC5_SIGNALLING_PAYLOAD_SIZE; i++ ){
					printf(" %d", sl_pc5s_msg_rcv->pc5sPrimitive.pc5_signalling_message.bytes[i]);
				}
				printf("\n");
			}
		} else if (receiver_mode){

			//Wait for DIRECT COMMUNICATION RELEASE ACCEPT
			printf("------------------------------------------------\n");
			printf("Listening to incoming message from OTHER ue.... \n");
			printf("Waiting DIRECT COMMUNICATION RELEASE (UE-UE)... \n");
			// get the reply from OAI
			memset(receive_buf, 0, BUFSIZE);
			serverlen = sizeof(pdcp_sin);
			sl_pc5s_msg_rcv = calloc(1, sizeof(sidelink_pc5s_element));

			n = recvfrom(pdcp_sockfd, receive_buf, BUFSIZE, 0, (struct sockaddr *)&pdcp_sin, &serverlen);
			if (n < 0)
				error("ERROR: Failed to receive from OAI");

			memcpy((void *)sl_pc5s_msg_rcv, (void *)receive_buf, sizeof(sidelink_pc5s_element));
			printf("------------------------------------------------\n");
			printf("Received on socket from OAI, pc5-s header traffic_type: %d\n",sl_pc5s_msg_rcv->pc5s_header.traffic_type);
			printf("Received on socket from OAI, pc5-s header rb_id: %d\n",sl_pc5s_msg_rcv->pc5s_header.rb_id);
			printf("Received on socket from OAI, pc5-s header inst: %d\n",sl_pc5s_msg_rcv->pc5s_header.inst);
			printf("Received on socket from OAI, pc5-s header data_size: %d\n",sl_pc5s_msg_rcv->pc5s_header.data_size);
			printf("Received on socket from OAI, pc5-s header source L2Id 0x%08x \n", sl_pc5s_msg_rcv->pc5s_header.sourceL2Id);
			printf("Received on socket from OAI, pc5-s header destination L2Id 0x%08x \n", sl_pc5s_msg_rcv->pc5s_header.destinationL2Id);

			if (sl_pc5s_msg_rcv->pc5s_header.traffic_type == TRAFFIC_PC5S_SIGNALLING) {
				printf("Received on socket from OAI, PC5S message\n");
				printf("Message: \n");
				for (i=0; i<PC5_SIGNALLING_PAYLOAD_SIZE; i++ ){
					printf(" %d", sl_pc5s_msg_rcv->pc5sPrimitive.pc5_signalling_message.bytes[i]);
				}
				printf("\n");
			}

			//send DIRECT COMMUNICATION RELEASE ACCEPT
			printf("------------------------------------------------\n");
			printf("Send DIRECT COMMUNICATION RELEASE ACCEPT(UE-UE) \n");
			//fill PC5S header
			pc5s_header = calloc(1, sizeof(pc5s_header_t));
			pc5s_header->traffic_type = TRAFFIC_PC5S_SIGNALLING;
			pc5s_header->rb_id = pc5s_slrb;
			pc5s_header->data_size = sizeof(sidelink_pc5s_element);
			pc5s_header->inst = 0;
			pc5s_header->sourceL2Id = src_id;
			pc5s_header->destinationL2Id = dst_id;

			//fill the message
			pc5_signalling_message = calloc(1, sizeof(PC5SignallingMessage));
			for (i=0; i<PC5_SIGNALLING_PAYLOAD_SIZE; i++ ){
				pc5_signalling_message->bytes[i] = i+1;
			}

			sl_pc5s_msg_send = calloc(1, sizeof(sidelink_pc5s_element));
			memcpy(&sl_pc5s_msg_send->pc5s_header, pc5s_header,sizeof(pc5s_header_t));
			memcpy(&sl_pc5s_msg_send->pc5sPrimitive.pc5_signalling_message, pc5_signalling_message,sizeof(PC5SignallingMessage));

			printf("Send pc5_signalling_message\n");
			printf("Send pc5_signalling_message, pc5-s header traffic_type: %d \n", pc5s_header->traffic_type);
			printf("Send pc5_signalling_message, pc5-s header rb_id: %d \n", pc5s_header->rb_id);
			printf("Send pc5_signalling_message, pc5-s header data_size: %d \n", pc5s_header->data_size);
			printf("Send pc5_signalling_message, pc5-s header inst: %d \n", pc5s_header->inst);
			printf("Send pc5_signalling_message, pc5-s header source L2Id 0x%08x \n", pc5s_header->sourceL2Id);
			printf("Send pc5_signalling_message, pc5-s header destination L2Id 0x%08x \n", pc5s_header->destinationL2Id);
			printf("Message: \n");
			for (i=0; i<PC5_SIGNALLING_PAYLOAD_SIZE; i++ ){
				printf(" %d", pc5_signalling_message->bytes[i]);
			}
			printf("\n");

			send_pc5s_message(sl_pc5s_msg_send);

		}

		sleep(10);

		//Send a PC5S release request to OAI to release the corresponding SLRB for PC5S communication

		status  = release_PC5s_request (pc5s_slrb);
		if (status == PC5S_RELEASE_OK) {
			printf("[PC5S Release] SLRB with ID %i has been released\n",pc5s_slrb);
		} else {
			printf("[PC5S Release] SLRD with ID %i cannot be released\n", pc5s_slrb);
		}

		sleep(10);

		//Send a direct communication release request to OAI to release the corresponding SLRB for PC5U communication
		status  = release_PC5u_direct_request (direct_comm_slrb);
		if (status == DIRECT_COMMUNICATION_RELEASE_OK) {
			printf("[Direct Communication Release] SLRB with ID %i has been released\n",direct_comm_slrb);
		} else {
			printf("[Direct Communication Release] SLRD with ID %i cannot be released\n", direct_comm_slrb);
		}

		sleep(10);


		//RE-Establish the connection following the similar process
		//For sender
		if (sender_mode) {
		    //we don't need to establish the default RB for receiving PC5S anymore!
			type = 1;//tx
			pc5s_slrb = setup_PC5s_request(type, src_id, dst_id);
			if (pc5s_slrb > -1 ){
				printf("[PC5S] SRLB %d have been established for PC5S\n", pc5s_slrb);
			} else{
				printf("[PC5S] Failed to establish SLRBs for PC5S\n");
			}


			//send DIRECT COMMUNICATION REQUEST message over PC5-S
			printf("------------------------------------------------\n");
			printf("Send PC5 Direct Communication Request\n");
			//fill PC5S header
			pc5s_header = calloc(1, sizeof(pc5s_header_t));
			pc5s_header->traffic_type = TRAFFIC_PC5S_SIGNALLING;
			pc5s_header->rb_id = pc5s_slrb;
			pc5s_header->data_size = sizeof(sidelink_pc5s_element);
			pc5s_header->inst = 0;
			pc5s_header->sourceL2Id = src_id;
			pc5s_header->destinationL2Id = dst_id;

			//fill the message
			pc5_signalling_message = calloc(1, sizeof(PC5SignallingMessage));
			for (i=0; i<PC5_SIGNALLING_PAYLOAD_SIZE; i++ ){
				pc5_signalling_message->bytes[i] = i+1;
			}

			sl_pc5s_msg_send = calloc(1, sizeof(sidelink_pc5s_element));
			memcpy(&sl_pc5s_msg_send->pc5s_header, pc5s_header,sizeof(pc5s_header_t));
			memcpy(&sl_pc5s_msg_send->pc5sPrimitive.pc5_signalling_message, pc5_signalling_message,sizeof(PC5SignallingMessage));

			printf("Send pc5_signalling_message\n");
			printf("Send pc5_signalling_message, pc5-s header traffic_type: %d \n", pc5s_header->traffic_type);
			printf("Send pc5_signalling_message, pc5-s header rb_id: %d \n", pc5s_header->rb_id);
			printf("Send pc5_signalling_message, pc5-s header data_size: %d \n", pc5s_header->data_size);
			printf("Send pc5_signalling_message, pc5-s header inst: %d \n", pc5s_header->inst);
			printf("Send pc5_signalling_message, pc5-s header source L2Id 0x%08x \n", pc5s_header->sourceL2Id);
			printf("Send pc5_signalling_message, pc5-s header destination L2Id 0x%08x \n", pc5s_header->destinationL2Id);
			printf("Message: \n");
			for (i=0; i<PC5_SIGNALLING_PAYLOAD_SIZE; i++ ){
				printf(" %d", pc5_signalling_message->bytes[i]);
			}
			printf("\n");

			send_pc5s_message(sl_pc5s_msg_send);

			//Then wait for IRECT SECURITY MODE COMMAND message
			printf("------------------------------------------------\n");
			printf("Listening to incoming message from OAI.... \n");
			printf("Waiting for Direct Security Mode Command.... \n");
			// get the reply from OAI
			memset(receive_buf, 0, BUFSIZE);
			serverlen = sizeof(pdcp_sin);
			sl_pc5s_msg_rcv = calloc(1, sizeof(sidelink_pc5s_element));

			n = recvfrom(pdcp_sockfd, receive_buf, BUFSIZE, 0, (struct sockaddr *)&pdcp_sin, &serverlen);
			if (n < 0)
				error("ERROR: Failed to receive from OAI");

			memcpy((void *)sl_pc5s_msg_rcv, (void *)receive_buf, sizeof(sidelink_pc5s_element));
			printf("------------------------------------------------\n");
			printf("Received on socket from OAI, pc5-s header traffic_type: %d\n",sl_pc5s_msg_rcv->pc5s_header.traffic_type);
			printf("Received on socket from OAI, pc5-s header rb_id: %d\n",sl_pc5s_msg_rcv->pc5s_header.rb_id);
			printf("Received on socket from OAI, pc5-s header inst: %d\n",sl_pc5s_msg_rcv->pc5s_header.inst);
			printf("Received on socket from OAI, pc5-s header data_size: %d\n",sl_pc5s_msg_rcv->pc5s_header.data_size);
			printf("Received on socket from OAI, pc5-s header source L2Id 0x%08x \n", sl_pc5s_msg_rcv->pc5s_header.sourceL2Id);
			printf("Received on socket from OAI, pc5-s header destination L2Id 0x%08x \n", sl_pc5s_msg_rcv->pc5s_header.destinationL2Id);

			if (sl_pc5s_msg_rcv->pc5s_header.traffic_type == TRAFFIC_PC5S_SIGNALLING) {
				printf("Received on socket from OAI, PC5S message\n");
				printf("Message: \n");
				for (i=0; i<PC5_SIGNALLING_PAYLOAD_SIZE; i++ ){
					printf(" %d", sl_pc5s_msg_rcv->pc5sPrimitive.pc5_signalling_message.bytes[i]);
				}
				printf("\n");
			}

			//Then send DIRECT SECURITY MODE COMPLETE message
			printf("------------------------------------------------\n");
			printf("Send PC5 Direct Security Mode Complete\n");
			send_pc5s_message(sl_pc5s_msg_send);

			//Wait for DIRECT COMMUNICATION ACCEPT message
			printf("------------------------------------------------\n");
			printf("Listening to incoming message from OAI.... \n");
			printf("Waiting for Direct Communication Accept.... \n");
			// get the reply from OAI
			memset(receive_buf, 0, BUFSIZE);
			serverlen = sizeof(pdcp_sin);
			sl_pc5s_msg_rcv = calloc(1, sizeof(sidelink_pc5s_element));

			n = recvfrom(pdcp_sockfd, receive_buf, BUFSIZE, 0, (struct sockaddr *)&pdcp_sin, &serverlen);
			if (n < 0)
				error("ERROR: Failed to receive from OAI");

			memcpy((void *)sl_pc5s_msg_rcv, (void *)receive_buf, sizeof(sidelink_pc5s_element));
			printf("------------------------------------------------\n");
			printf("Received on socket from OAI, pc5-s header traffic_type: %d\n",sl_pc5s_msg_rcv->pc5s_header.traffic_type);
			printf("Received on socket from OAI, pc5-s header rb_id: %d\n",sl_pc5s_msg_rcv->pc5s_header.rb_id);
			printf("Received on socket from OAI, pc5-s header inst: %d\n",sl_pc5s_msg_rcv->pc5s_header.inst);
			printf("Received on socket from OAI, pc5-s header data_size: %d\n",sl_pc5s_msg_rcv->pc5s_header.data_size);
			printf("Received on socket from OAI, pc5-s header source L2Id 0x%08x \n", sl_pc5s_msg_rcv->pc5s_header.sourceL2Id);
			printf("Received on socket from OAI, pc5-s header destination L2Id 0x%08x \n", sl_pc5s_msg_rcv->pc5s_header.destinationL2Id);

			if (sl_pc5s_msg_rcv->pc5s_header.traffic_type == TRAFFIC_PC5S_SIGNALLING) {
				printf("Received on socket from OAI, PC5S message\n");
				printf("Message: \n");
				for (i=0; i<PC5_SIGNALLING_PAYLOAD_SIZE; i++ ){
					printf(" %d", sl_pc5s_msg_rcv->pc5sPrimitive.pc5_signalling_message.bytes[i]);
				}
				printf("\n");
			}

		}
		//For Receiver
		if (receiver_mode){
		    //again we don't need to re-establish the default SLRB for receiving PC5S message from any UE

			//Wait for DIRECT COMMUNICATION REQUEST message
			printf("------------------------------------------------\n");
			printf("Listening to incoming message from OAI.... \n");
			printf("Waiting for Direct Communication Request.... \n");
			// get the reply from OAI
			memset(receive_buf, 0, BUFSIZE);
			serverlen = sizeof(pdcp_sin);
			sl_pc5s_msg_rcv = calloc(1, sizeof(sidelink_pc5s_element));

			n = recvfrom(pdcp_sockfd, receive_buf, BUFSIZE, 0, (struct sockaddr *)&pdcp_sin, &serverlen);
			if (n < 0)
				error("ERROR: Failed to receive from OAI");

			memcpy((void *)sl_pc5s_msg_rcv, (void *)receive_buf, sizeof(sidelink_pc5s_element));
			printf("------------------------------------------------\n");
			printf("Received on socket from OAI, pc5-s header traffic_type: %d\n",sl_pc5s_msg_rcv->pc5s_header.traffic_type);
			printf("Received on socket from OAI, pc5-s header rb_id: %d\n",sl_pc5s_msg_rcv->pc5s_header.rb_id);
			printf("Received on socket from OAI, pc5-s header inst: %d\n",sl_pc5s_msg_rcv->pc5s_header.inst);
			printf("Received on socket from OAI, pc5-s header data_size: %d\n",sl_pc5s_msg_rcv->pc5s_header.data_size);
			printf("Received on socket from OAI, pc5-s header source L2Id 0x%08x \n", sl_pc5s_msg_rcv->pc5s_header.sourceL2Id);
			printf("Received on socket from OAI, pc5-s header destination L2Id 0x%08x \n", sl_pc5s_msg_rcv->pc5s_header.destinationL2Id);

			if (sl_pc5s_msg_rcv->pc5s_header.traffic_type == TRAFFIC_PC5S_SIGNALLING) {
				printf("Received on socket from OAI, PC5S message\n");
				printf("Message: \n");
				for (i=0; i<PC5_SIGNALLING_PAYLOAD_SIZE; i++ ){
					printf(" %d", sl_pc5s_msg_rcv->pc5sPrimitive.pc5_signalling_message.bytes[i]);
				}
				printf("\n");
			}

            //establish a new SLRB to transmit PC5S messages
			type = 1;//tx
			pc5s_slrb = setup_PC5s_request(type, src_id, dst_id);
			if (pc5s_slrb > -1 ){
				printf("[PC5S] SRLB %d have been established for PC5S\n", pc5s_slrb);
			} else{
				printf("[PC5S] Failed to establish SLRBs for PC5S\n");
			}

			//and use the established SLRB to send DIRECT SECURITY MODE COMMAND message
			printf("------------------------------------------------\n");
			printf("Send PC5 Direct Security Mode Command\n");
			//fill PC5S header
			pc5s_header = calloc(1, sizeof(pc5s_header_t));
			pc5s_header->traffic_type = TRAFFIC_PC5S_SIGNALLING; //DirectCommunicationRequest
			pc5s_header->rb_id = pc5s_slrb; //for the moment, we use only one SLRB for all PC5S messages
			pc5s_header->data_size = sizeof(sidelink_pc5s_element);
			pc5s_header->inst = 0;
			pc5s_header->sourceL2Id = src_id;
			pc5s_header->destinationL2Id = dst_id;

			//fill the message
			pc5_signalling_message = calloc(1, sizeof(PC5SignallingMessage));
			for (i=0; i<PC5_SIGNALLING_PAYLOAD_SIZE; i++ ){
				pc5_signalling_message->bytes[i] = i+1;
			}

			sl_pc5s_msg_send = calloc(1, sizeof(sidelink_pc5s_element));
			memcpy(&sl_pc5s_msg_send->pc5s_header, pc5s_header,sizeof(pc5s_header_t));
			memcpy(&sl_pc5s_msg_send->pc5sPrimitive.pc5_signalling_message, pc5_signalling_message,sizeof(PC5SignallingMessage));

			printf("Send pc5_signalling_message\n");
			printf("Send pc5_signalling_message, pc5-s header traffic_type: %d \n", pc5s_header->traffic_type);
			printf("Send pc5_signalling_message, pc5-s header rb_id: %d \n", pc5s_header->rb_id);
			printf("Send pc5_signalling_message, pc5-s header data_size: %d \n", pc5s_header->data_size);
			printf("Send pc5_signalling_message, pc5-s header inst: %d \n", pc5s_header->inst);
			printf("Send pc5_signalling_message, pc5-s header source L2Id 0x%08x \n", pc5s_header->sourceL2Id);
			printf("Send pc5_signalling_message, pc5-s header destination L2Id 0x%08x \n", pc5s_header->destinationL2Id);
			printf("Message: \n");
			for (i=0; i<PC5_SIGNALLING_PAYLOAD_SIZE; i++ ){
				printf(" %d", pc5_signalling_message->bytes[i]);
			}
			printf("\n");

			send_pc5s_message(sl_pc5s_msg_send);


			//Wait for DIRECT SECURITY MODE COMPLETE message
			printf("------------------------------------------------\n");
			printf("Listening to incoming message from OAI.... \n");
			printf("Waiting for Direct Security Mode Complete.... \n");
			// get the reply from OAI
			memset(receive_buf, 0, BUFSIZE);
			serverlen = sizeof(pdcp_sin);
			sl_pc5s_msg_rcv = calloc(1, sizeof(sidelink_pc5s_element));

			n = recvfrom(pdcp_sockfd, receive_buf, BUFSIZE, 0, (struct sockaddr *)&pdcp_sin, &serverlen);
			if (n < 0)
				error("ERROR: Failed to receive from OAI");

			memcpy((void *)sl_pc5s_msg_rcv, (void *)receive_buf, sizeof(sidelink_pc5s_element));
			printf("------------------------------------------------\n");
			printf("Received on socket from OAI, pc5-s header traffic_type: %d\n",sl_pc5s_msg_rcv->pc5s_header.traffic_type);
			printf("Received on socket from OAI, pc5-s header rb_id: %d\n",sl_pc5s_msg_rcv->pc5s_header.rb_id);
			printf("Received on socket from OAI, pc5-s header inst: %d\n",sl_pc5s_msg_rcv->pc5s_header.inst);
			printf("Received on socket from OAI, pc5-s header data_size: %d\n",sl_pc5s_msg_rcv->pc5s_header.data_size);
			printf("Received on socket from OAI, pc5-s header source L2Id 0x%08x \n", sl_pc5s_msg_rcv->pc5s_header.sourceL2Id);
			printf("Received on socket from OAI, pc5-s header destination L2Id 0x%08x \n", sl_pc5s_msg_rcv->pc5s_header.destinationL2Id);

			if (sl_pc5s_msg_rcv->pc5s_header.traffic_type == TRAFFIC_PC5S_SIGNALLING) {
				printf("Received on socket from OAI, PC5S message\n");
				printf("Message: \n");
				for (i=0; i<PC5_SIGNALLING_PAYLOAD_SIZE; i++ ){
					printf(" %d", sl_pc5s_msg_rcv->pc5sPrimitive.pc5_signalling_message.bytes[i]);
				}
				printf("\n");
			}


			//send DIRECT SECURITY COMMUNICATION ACCEPT message
			printf("------------------------------------------------\n");
			printf("Send PC5 Direct Security Communication Accept\n");
			//fill PC5S header
			pc5s_header = calloc(1, sizeof(pc5s_header_t));
			pc5s_header->traffic_type = TRAFFIC_PC5S_SIGNALLING;
			pc5s_header->rb_id = pc5s_slrb; //for the moment, we use only one SLRB for all PC5S messages
			pc5s_header->data_size = sizeof(sidelink_pc5s_element);
			pc5s_header->inst = 0;
			pc5s_header->sourceL2Id = src_id;
			pc5s_header->destinationL2Id = dst_id;

			//fill the message
			pc5_signalling_message = calloc(1, sizeof(PC5SignallingMessage));
			for (i=0; i<PC5_SIGNALLING_PAYLOAD_SIZE; i++ ){
				pc5_signalling_message->bytes[i] = i+1;
			}

			sl_pc5s_msg_send = calloc(1, sizeof(sidelink_pc5s_element));
			memcpy(&sl_pc5s_msg_send->pc5s_header, pc5s_header,sizeof(pc5s_header_t));
			memcpy(&sl_pc5s_msg_send->pc5sPrimitive.pc5_signalling_message, pc5_signalling_message,sizeof(PC5SignallingMessage));

			printf("Send pc5_signalling_message\n");
			printf("Send pc5_signalling_message, pc5-s header traffic_type: %d \n", pc5s_header->traffic_type);
			printf("Send pc5_signalling_message, pc5-s header rb_id: %d \n", pc5s_header->rb_id);
			printf("Send pc5_signalling_message, pc5-s header data_size: %d \n", pc5s_header->data_size);
			printf("Send pc5_signalling_message, pc5-s header inst: %d \n", pc5s_header->inst);
			printf("Send pc5_signalling_message, pc5-s header source L2Id 0x%08x \n", pc5s_header->sourceL2Id);
			printf("Send pc5_signalling_message, pc5-s header destination L2Id 0x%08x \n", pc5s_header->destinationL2Id);
			printf("Message: \n");
			for (i=0; i<PC5_SIGNALLING_PAYLOAD_SIZE; i++ ){
				printf(" %d", pc5_signalling_message->bytes[i]);
			}
			printf("\n");

			send_pc5s_message(sl_pc5s_msg_send);

		}

        //Then establish a SLRB for data communication between two UEs
		// Send direct communication establishment request to OAI (for the first unicast flow)
		direct_comm_slrb  = setup_PC5u_direct_request (src_id, dst_id, pppp);
		if (direct_comm_slrb > 0) {
			printf("PC5u has been established with SLRB_ID %i for 1-1 communication, source 0x%08x, destination 0x%08x\n",direct_comm_slrb, src_id, dst_id);
		} else {
			printf("PC5u cannot be established\n");
		}
		printf("------------------------------------------------\n");

        //after that, the data can be exchanged between two UEs (e.g., using Ping to generate traffic)
*/

		//listening to incoming message from OAI (PC5-U)
		while (1) {
			printf("------------------------------------------------\n");
			printf("Listening to incoming message from OAI.... \n");

			memset(receive_buf, 0, BUFSIZE);
			serverlen = sizeof(ctrl_sin);
			n = recvfrom(ctrl_sockfd, receive_buf, BUFSIZE, 0, (struct sockaddr *)&ctrl_sin, &serverlen);
			if (n < 0)
				error("ERROR: Failed to receive from OAI");

			sl_ctrl_msg = (struct sidelink_ctrl_element *) receive_buf;
			if (sl_ctrl_msg->type == UE_STATUS_INFO) {
				printf("Received UEStatusInformation on socket from OAI (msg type: %d)\n",sl_ctrl_msg->type);
				status =  sl_ctrl_msg->sidelinkPrimitive.ue_state;
				if (status == UE_STATE_ON_NETWORK ) {
					printf("[UEStatusInformation] UE is on coverage\n");
				} else if (status == UE_STATE_OFF_NETWORK) {
					printf("[UEStatusInformation] UE is out of coverage\n");
				}
			}
		}

	}

	//One-to-many communication scenario
	//in this scenario, there is no PC5S signaling messages exchanged between UEs
	else if (onetomany_scenario) {

		// Send group establishment request to OAI
		group_ip_address = inet_addr("224.0.0.3");
		pppp = 2;
		printf("group_ip_address "IPV4_ADDR" \n", IPV4_ADDR_FORMAT(group_ip_address));


		slrb_id  = setup_PC5u_group_request (src_id, dst_id, group_ip_address, pppp); //dst_id -> groupd_id
		if (slrb_id > 0) {
			printf("PC5u has been established with SLRB_ID %i for 1-n communication\n",slrb_id);
		} else {
			printf("PC5u cannot be established\n");
		}

		//create thread to receive the status notification
		//  pthread_t ue_state_notification_thread;
		//  if( pthread_create( &ue_state_notification_thread , NULL ,  rcv_UE_status_notification , (void*) NULL) < 0)
		//     printf("ERROR: could not create thread");

		//create thread to generate the traffic (if necessary)
		pthread_t generate_traffic_thread;
		if( pthread_create( &generate_traffic_thread , NULL ,  generate_traffic , (void*) NULL) < 0)
			printf("ERROR: could not create thread");

		//listen to incoming messages from OAI
		int count = 0;
		while (1) {
			printf("------------------------------------------------\n");
			printf("Listening to incoming message from OAI.... \n");

			memset(receive_buf, 0, BUFSIZE);
			serverlen = sizeof(ctrl_sin);
			n = recvfrom(ctrl_sockfd, receive_buf, BUFSIZE, 0, (struct sockaddr *)&ctrl_sin, &serverlen);
			if (n < 0)
				error("ERROR: Failed to receive from OAI");

			sl_ctrl_msg = (struct sidelink_ctrl_element *) receive_buf;
			if (sl_ctrl_msg->type == UE_STATUS_INFO) {
				printf("Received UEStatusInformation on socket from OAI (msg type: %d)\n",sl_ctrl_msg->type);
				status =  sl_ctrl_msg->sidelinkPrimitive.ue_state;
				if (status == UE_STATE_ON_NETWORK ) {
					printf("[UEStatusInformation] UE is on coverage\n");
				} else if (status == UE_STATE_OFF_NETWORK) {
					printf("[UEStatusInformation] UE is out of coverage\n");
				}
			}
			/*  uncomment to test release scenarios
			count++;
			if (count == 1) {
				//Send a group communication release request to OAI
				slrb_id = SLRB_TO_BE_RELEASED;
				status  = release_PC5u_group_request (slrb_id);
				if (status == GROUP_COMMUNICATION_RELEASE_OK) {
					printf("SLRB with ID %i has been released\n",slrb_id);
				} else {
					printf("SLRD with ID %i cannot be released\n", slrb_id);
				}
				break;
			}
			*/
		}

	}

	return 0;
}


//--------------------------------------------------------
int session_init()
{
	char send_buf[BUFSIZE], receive_buf[BUFSIZE];
	struct sidelink_ctrl_element *sl_ctrl_msg = NULL;
	int n;

	printf("------------------------------------------------\n");
	printf("Send SessionInitializationRequest message to OAI (msg type: %d )\n", SESSION_INIT_REQ);
	sl_ctrl_msg = calloc(1, sizeof(struct sidelink_ctrl_element));
	sl_ctrl_msg->type = SESSION_INIT_REQ;
	memcpy((void *)send_buf, (void *)sl_ctrl_msg, sizeof(struct sidelink_ctrl_element));

	// send the initialization message to the OAI
	int serverlen = sizeof(ctrl_sin);
	n = sendto(ctrl_sockfd, (char *)send_buf, sizeof(struct sidelink_ctrl_element), 0, (struct sockaddr *)&ctrl_sin, serverlen);
	if (n < 0)
		error("ERROR: Failed to send to OAI");

	// get the reply from OAI
	memset(receive_buf, 0, BUFSIZE);
	serverlen = sizeof(ctrl_sin);
	n = recvfrom(ctrl_sockfd, receive_buf, BUFSIZE, 0, (struct sockaddr *)&ctrl_sin, &serverlen);
	if (n < 0)
		error("ERROR: Failed to receive from OAI");

	sl_ctrl_msg = (struct sidelink_ctrl_element *) receive_buf;
	if (sl_ctrl_msg->type == UE_STATUS_INFO) {
		printf("Connection with OAI is established successfully!\n");
		printf("Received UEStatusInformation on socket from OAI (msg type: %d)\n",sl_ctrl_msg->type);
		printf("UEStatusInformation, Status: %d\n",sl_ctrl_msg->sidelinkPrimitive.ue_state);
		return sl_ctrl_msg->sidelinkPrimitive.ue_state;
	}
	return 0;
}

//--------------------------------------------------------
int setup_PC5u_group_request(uint32_t src_id, uint32_t grp_id, uint32_t group_ip_address, uint8_t pppp)
{
	char send_buf[BUFSIZE], receive_buf[BUFSIZE];
	struct sidelink_ctrl_element *sl_ctrl_msg = NULL;
	struct GroupCommunicationEstablishReq *group_comm_establish_req = NULL;
	int slrb_id = -1;

	printf("------------------------------------------------\n");
	printf("Send GroupCommunicationEstablishReq message to OAI (msg type: %d )\n",GROUP_COMMUNICATION_ESTABLISH_REQ);
	printf("group_ip_address "IPV4_ADDR" \n", IPV4_ADDR_FORMAT(group_ip_address));
	memset(send_buf,0,BUFSIZE);
	//fill the message
	group_comm_establish_req = calloc(1, sizeof(struct GroupCommunicationEstablishReq));
	group_comm_establish_req->sourceL2Id = src_id;
	group_comm_establish_req->groupL2Id = grp_id;
	group_comm_establish_req->groupIpAddress = group_ip_address;
	group_comm_establish_req->pppp = pppp;

	sl_ctrl_msg = calloc(1, sizeof(struct sidelink_ctrl_element));
	sl_ctrl_msg->type = GROUP_COMMUNICATION_ESTABLISH_REQ;
	memcpy(&sl_ctrl_msg->sidelinkPrimitive.group_comm_establish_req, group_comm_establish_req,sizeof(struct GroupCommunicationEstablishReq));
	memcpy((void *)send_buf, (void *)sl_ctrl_msg, sizeof(struct sidelink_ctrl_element));

	// send the message to OAI
	int serverlen = sizeof(ctrl_sin);
	int n = sendto(ctrl_sockfd, (char *)send_buf, sizeof(struct sidelink_ctrl_element), 0, (struct sockaddr *)&ctrl_sin, serverlen);
	if (n < 0)
		error("ERROR: Failed to send to OAI");

	// get the reply from OAI
	memset(receive_buf, 0, BUFSIZE);
	serverlen = sizeof(ctrl_sin);
	n = recvfrom(ctrl_sockfd, receive_buf, BUFSIZE, 0, (struct sockaddr *)&ctrl_sin, &serverlen);
	if (n < 0)
		error("ERROR: Failed to receive from OAI");

	sl_ctrl_msg = (struct sidelink_ctrl_element *) receive_buf;
	printf("Received on socket from OAI, msg type: %d\n",sl_ctrl_msg->type);
	if (sl_ctrl_msg->type == GROUP_COMMUNICATION_ESTABLISH_RSP) {
		slrb_id = sl_ctrl_msg->sidelinkPrimitive.slrb_id;
		printf("Received GroupCommunicationEstablishResponse on socket from OAI, slrb %d\n",slrb_id);
		return slrb_id;
	} else {
		return -1;
	}
}

//--------------------------------------------------------
int release_PC5u_group_request(uint8_t slrb_id)
{
	char send_buf[BUFSIZE], receive_buf[BUFSIZE];
	int status = -1;
	struct sidelink_ctrl_element *sl_ctrl_msg = NULL;
	int n;

	printf("------------------------------------------------\n");
	printf("Send GroupCommunicationReleaseRequest message to OAI (msg type: %d )\n",GROUP_COMMUNICATION_RELEASE_REQ);
	sl_ctrl_msg = calloc(1, sizeof(struct sidelink_ctrl_element));
	sl_ctrl_msg->type = GROUP_COMMUNICATION_RELEASE_REQ;
	sl_ctrl_msg->sidelinkPrimitive.slrb_id = slrb_id;
	memcpy((void *)send_buf, (void *)sl_ctrl_msg, sizeof(struct sidelink_ctrl_element));

	// send the GroupCommunicationReleaseRequest message to the OAI
	int serverlen = sizeof(ctrl_sin);
	n = sendto(ctrl_sockfd, (char *)send_buf, sizeof(struct sidelink_ctrl_element), 0, (struct sockaddr *)&ctrl_sin, serverlen);
	if (n < 0)
		error("ERROR: Failed to send to OAI");

	// get the reply from OAI
	memset(receive_buf, 0, BUFSIZE);
	serverlen = sizeof(ctrl_sin);
	n = recvfrom(ctrl_sockfd, receive_buf, BUFSIZE, 0, (struct sockaddr *)&ctrl_sin, &serverlen);
	if (n < 0)
		error("ERROR: Failed to receive from OAI");

	sl_ctrl_msg = (struct sidelink_ctrl_element *) receive_buf;
	if (sl_ctrl_msg->type == GROUP_COMMUNICATION_RELEASE_RSP) {
		printf("Received GroupCommunicationReleaseResponse on socket from OAI (msg type: %d)\n",sl_ctrl_msg->type);
		status = sl_ctrl_msg->sidelinkPrimitive.group_comm_release_rsp;
		printf("GroupCommunicationReleaseResponse, Status: %d\n", status);
		return status;
	} else {
		return -1;
	}

	return 0;
}

//--------------------------------------------------------
void *rcv_UE_status_notification(void *sock)
{
	char receive_buf[BUFSIZE];
	struct sidelink_ctrl_element *sl_ctrl_msg = NULL;
	int serverlen, n, status;

	printf("------------------------------------------------\n");
	printf("Thread to receive UEStateInformation from OAI\n");
	printf("Listening to incoming message from OAI.... \n");


	while (1) {
		memset(receive_buf, 0, BUFSIZE);
		serverlen = sizeof(ctrl_sin);
		n = recvfrom(ctrl_sockfd, receive_buf, BUFSIZE, 0, (struct sockaddr *)&ctrl_sin, &serverlen);
		if (n < 0)
			error("ERROR: Failed to receive from OAI");

		sl_ctrl_msg = (struct sidelink_ctrl_element *) receive_buf;
		if (sl_ctrl_msg->type == UE_STATUS_INFO) {
			printf("Received UEStatusInformation on socket from OAI (msg type: %d)\n",sl_ctrl_msg->type);
			status =  sl_ctrl_msg->sidelinkPrimitive.ue_state;
			if (status == UE_STATE_ON_NETWORK ) {
				printf("[UEStatusInformation] UE is on coverage\n");
			} else if (status == UE_STATE_OFF_NETWORK) {
				printf("[UEStatusInformation] UE is out of coverage\n");
			}
		}
	}

	return 0;
}

//--------------------------------------------------------
int    pdcp_session_init()
{
	char send_buf[BUFSIZE], receive_buf[BUFSIZE];
	sidelink_pc5s_element *sl_pc5s_msg = NULL;
	pc5s_header_t *pc5s_header = NULL;
	int slrb_id;

	printf("------------------------------------------------\n");
	printf("Initiate a PDCP session \n");
	memset(send_buf,0,BUFSIZE);

	//fill PC5S header
	pc5s_header = calloc(1, sizeof(pc5s_header_t));
	pc5s_header->traffic_type = TRAFFIC_PC5S_SESSION_INIT; //init a new session
	pc5s_header->rb_id = 0;
	pc5s_header->data_size = 0;
	pc5s_header->inst = 0;

	sl_pc5s_msg = calloc(1, sizeof(sidelink_pc5s_element));
	memcpy(&sl_pc5s_msg->pc5s_header, pc5s_header,sizeof(pc5s_header_t));
	memcpy((void *)send_buf, (void *)sl_pc5s_msg, sizeof(sidelink_pc5s_element));

	// send the message to OAI
	int serverlen = sizeof(pdcp_sin);
	int n = sendto(pdcp_sockfd, (char *)send_buf, sizeof(sidelink_pc5s_element), 0, (struct sockaddr *)&pdcp_sin, serverlen);

	if (n < 0)
		error("ERROR: Failed to send to OAI");

	// get the reply from OAI
	memset(receive_buf, 0, BUFSIZE);
	serverlen = sizeof(pdcp_sin);
	n = recvfrom(pdcp_sockfd, receive_buf, BUFSIZE, 0, (struct sockaddr *)&pdcp_sin, &serverlen);
	if (n < 0)
		error("ERROR: Failed to receive from OAI");

	sl_pc5s_msg = (sidelink_pc5s_element *) receive_buf;
	if (sl_pc5s_msg->pc5s_header.traffic_type == TRAFFIC_PC5S_SESSION_INIT) {
		if (sl_pc5s_msg->pc5sPrimitive.status == 1)
			printf("A PDCP session has been established successfully! \n");
		return sl_pc5s_msg->pc5sPrimitive.status;
	}
	return 0;
}

//--------------------------------------------------------
int  send_pc5s_message(sidelink_pc5s_element *sl_pc5s_msg )
{
	char send_buf[BUFSIZE];

	memcpy((void *)send_buf, (void *)sl_pc5s_msg, sizeof(sidelink_pc5s_element));
	// send the message to PDCP
	int serverlen = sizeof(pdcp_sin);
	int n = sendto(pdcp_sockfd, (char *)send_buf, sizeof(sidelink_pc5s_element), 0, (struct sockaddr *)&pdcp_sin, serverlen);

	if (n < 0)
		error("ERROR: Failed to send to OAI/PDCP");

}


//--------------------------------------------------------
int setup_PC5s_request(uint8_t type,  uint32_t src_id, uint32_t destination_id)
{
	char send_buf[BUFSIZE], receive_buf[BUFSIZE];
	struct sidelink_ctrl_element *sl_ctrl_msg = NULL;
	struct PC5SEstablishReq *pc5s_establish_req = NULL;
	struct PC5SEstablishRsp *pc5s_establish_rsp = NULL;
	int n;

	printf("------------------------------------------------\n");
	printf("Send PC5SEstablishReq message to OAI (msg type: %d )\n",PC5S_ESTABLISH_REQ);
	memset(send_buf,0,BUFSIZE);
	//fill the message
	pc5s_establish_req = calloc(1, sizeof(struct PC5SEstablishReq));
	pc5s_establish_req->type = type;
	pc5s_establish_req->sourceL2Id = src_id;
	pc5s_establish_req->destinationL2Id = destination_id;

	sl_ctrl_msg = calloc(1, sizeof(struct sidelink_ctrl_element));
	sl_ctrl_msg->type = PC5S_ESTABLISH_REQ;
	memcpy(&sl_ctrl_msg->sidelinkPrimitive.pc5s_establish_req, pc5s_establish_req,sizeof(struct PC5SEstablishReq));
	memcpy((void *)send_buf, (void *)sl_ctrl_msg, sizeof(struct sidelink_ctrl_element));

	// send the message to OAI
	int serverlen = sizeof(ctrl_sin);
	n = sendto(ctrl_sockfd, (char *)send_buf, sizeof(struct sidelink_ctrl_element), 0, (struct sockaddr *)&ctrl_sin, serverlen);
	if (n < 0)
		error("ERROR: Failed to send to OAI");

	// get the reply from OAI
	memset(receive_buf, 0, BUFSIZE);
	serverlen = sizeof(ctrl_sin);
	n = recvfrom(ctrl_sockfd, receive_buf, BUFSIZE, 0, (struct sockaddr *)&ctrl_sin, &serverlen);
	if (n < 0)
		error("ERROR: Failed to receive from OAI");

	sl_ctrl_msg = (struct sidelink_ctrl_element *) receive_buf;
	printf("Received on socket from OAI, msg type: %d\n",sl_ctrl_msg->type);
	if (sl_ctrl_msg->type == PC5S_ESTABLISH_RSP) {
		printf("[PC5S] SRLBs %d, %d, %d have been established for PC5S\n",sl_ctrl_msg->sidelinkPrimitive.pc5s_establish_rsp.slrbid_lcid28, sl_ctrl_msg->sidelinkPrimitive.pc5s_establish_rsp.slrbid_lcid29, sl_ctrl_msg->sidelinkPrimitive.pc5s_establish_rsp.slrbid_lcid30 );
		return sl_ctrl_msg->sidelinkPrimitive.pc5s_establish_rsp.slrbid_lcid28;
	}
	else return -1;
}


//--------------------------------------------------------
int  send_PC5D_message(PC5DiscoveryMessage *pc5_discovery_message)
{
	char send_buf[BUFSIZE], receive_buf[BUFSIZE];
	struct sidelink_ctrl_element *sl_ctrl_msg = NULL;
	int n;

	printf("------------------------------------------------\n");
	printf("Send PC5D message to OAI (msg type: %d )\n",PC5_DISCOVERY_MESSAGE);
	memset(send_buf,0,BUFSIZE);
	//fill the message
	sl_ctrl_msg = calloc(1, sizeof(struct sidelink_ctrl_element));
	sl_ctrl_msg->type = PC5_DISCOVERY_MESSAGE;
	memcpy(&sl_ctrl_msg->sidelinkPrimitive.pc5_discovery_message, pc5_discovery_message,sizeof(PC5DiscoveryMessage));
	memcpy((void *)send_buf, (void *)sl_ctrl_msg, sizeof(struct sidelink_ctrl_element));

	// send the message to OAI
	int serverlen = sizeof(ctrl_sin);
	n = sendto(ctrl_sockfd, (char *)send_buf, sizeof(struct sidelink_ctrl_element), 0, (struct sockaddr *)&ctrl_sin, serverlen);
	if (n < 0)
		error("ERROR: Failed to send to OAI");

}



//--------------------------------------------------------
void *process_pc5s_signalling(void *sock)
{
	char receive_buf[BUFSIZE];
	sidelink_pc5s_element *sl_pc5s_msg_rcv = NULL;
	int serverlen, n, status;
	int i;

	printf("------------------------------------------------\n");
	printf("Thread to receive PC5-Signalling from OAI\n");
	printf("Listening to incoming message from OAI.... \n");
	// get the reply from OAI
	memset(receive_buf, 0, BUFSIZE);
	serverlen = sizeof(pdcp_sin);
	sl_pc5s_msg_rcv = calloc(1, sizeof(sidelink_pc5s_element));
	while (1){
		n = recvfrom(pdcp_sockfd, receive_buf, BUFSIZE, 0, (struct sockaddr *)&pdcp_sin, &serverlen);
		if (n < 0)
			error("ERROR: Failed to receive from OAI");

		memcpy((void *)sl_pc5s_msg_rcv, (void *)receive_buf, sizeof(sidelink_pc5s_element));
		printf("------------------------------------------------\n");
		printf("Received on socket from OAI, pc5-s header traffic_type: %d\n",sl_pc5s_msg_rcv->pc5s_header.traffic_type);
		printf("Received on socket from OAI, pc5-s header rb_id: %d\n",sl_pc5s_msg_rcv->pc5s_header.rb_id);
		printf("Received on socket from OAI, pc5-s header inst: %d\n",sl_pc5s_msg_rcv->pc5s_header.inst);
		printf("Received on socket from OAI, pc5-s header data_size: %d\n",sl_pc5s_msg_rcv->pc5s_header.data_size);
		printf("Received on socket from OAI, pc5-s header source L2Id 0x%08x \n", sl_pc5s_msg_rcv->pc5s_header.sourceL2Id);
		printf("Received on socket from OAI, pc5-s header destination L2Id 0x%08x \n", sl_pc5s_msg_rcv->pc5s_header.destinationL2Id);

		if (sl_pc5s_msg_rcv->pc5s_header.traffic_type == TRAFFIC_PC5S_SIGNALLING) {
			printf("Received on socket from OAI, PC5S message\n");
			printf("Message: \n");
			for (i=0; i<PC5_SIGNALLING_PAYLOAD_SIZE; i++ ){
				printf(" %d", sl_pc5s_msg_rcv->pc5sPrimitive.pc5_signalling_message.bytes[i]);
			}
			printf("\n");
		}
	}
	return 0;
}


//--------------------------------------------------------
int setup_PC5u_direct_request(uint32_t src_id, uint32_t dst_id, uint8_t pppp)
{
	char send_buf[BUFSIZE], receive_buf[BUFSIZE];
	struct sidelink_ctrl_element *sl_ctrl_msg = NULL;
	struct DirectCommunicationEstablishReq *direct_comm_establish_req = NULL;
	int slrb_id;

	printf("------------------------------------------------\n");
	printf("Send DirectCommunicationEstablishReq message to OAI (msg type: %d )\n",DIRECT_COMMUNICATION_ESTABLISH_REQ);
	printf("[DirectCommunicationEstablishReq], source L2Id 0x%08x \n", src_id);
	printf("[DirectCommunicationEstablishReq], destination L2Id 0x%08x \n", dst_id);
	memset(send_buf,0,BUFSIZE);
	//fill the message
	direct_comm_establish_req = calloc(1, sizeof(struct DirectCommunicationEstablishReq));
	direct_comm_establish_req->sourceL2Id = src_id;
	direct_comm_establish_req->destinationL2Id = dst_id;
	direct_comm_establish_req->pppp = pppp;

	sl_ctrl_msg = calloc(1, sizeof(struct sidelink_ctrl_element));
	sl_ctrl_msg->type = DIRECT_COMMUNICATION_ESTABLISH_REQ;
	memcpy(&sl_ctrl_msg->sidelinkPrimitive.direct_comm_establish_req, direct_comm_establish_req,sizeof(struct DirectCommunicationEstablishReq));
	memcpy((void *)send_buf, (void *)sl_ctrl_msg, sizeof(struct sidelink_ctrl_element));

	// send the message to OAI
	int serverlen = sizeof(ctrl_sin);
	int n = sendto(ctrl_sockfd, (char *)send_buf, sizeof(struct sidelink_ctrl_element), 0, (struct sockaddr *)&ctrl_sin, serverlen);
	if (n < 0)
		error("ERROR: Failed to send to OAI");

	// get the reply from OAI
	memset(receive_buf, 0, BUFSIZE);
	serverlen = sizeof(ctrl_sin);
	n = recvfrom(ctrl_sockfd, receive_buf, BUFSIZE, 0, (struct sockaddr *)&ctrl_sin, &serverlen);
	if (n < 0)
		error("ERROR: Failed to receive from OAI");

	sl_ctrl_msg = (struct sidelink_ctrl_element *) receive_buf;
	printf("Received on socket from OAI, msg type: %d\n",sl_ctrl_msg->type);
	if (sl_ctrl_msg->type == DIRECT_COMMUNICATION_ESTABLISH_RSP) {
		slrb_id = sl_ctrl_msg->sidelinkPrimitive.slrb_id;
		printf("Received DirectCommunicationEstablishResponse on socket from OAI, slrb %d\n",slrb_id);
		return slrb_id;
	} else {
		return -1;
	}
}

//--------------------------------------------------------
int release_PC5u_direct_request(uint8_t slrb_id)
{
	char send_buf[BUFSIZE], receive_buf[BUFSIZE];
	int status;
	struct sidelink_ctrl_element *sl_ctrl_msg = NULL;
	int n;

	printf("------------------------------------------------\n");
	printf("Send DirectCommunicationReleaseRequest message to OAI (msg type: %d )\n",DIRECT_COMMUNICATION_RELEASE_REQ);
	sl_ctrl_msg = calloc(1, sizeof(struct sidelink_ctrl_element));
	sl_ctrl_msg->type = DIRECT_COMMUNICATION_RELEASE_REQ;
	sl_ctrl_msg->sidelinkPrimitive.slrb_id = slrb_id;
	memcpy((void *)send_buf, (void *)sl_ctrl_msg, sizeof(struct sidelink_ctrl_element));

	// send the DirectCommunicationReleaseRequest message to the OAI
	int serverlen = sizeof(ctrl_sin);
	n = sendto(ctrl_sockfd, (char *)send_buf, sizeof(struct sidelink_ctrl_element), 0, (struct sockaddr *)&ctrl_sin, serverlen);
	if (n < 0)
		error("ERROR: Failed to send to OAI");

	// get the reply from OAI
	memset(receive_buf, 0, BUFSIZE);
	serverlen = sizeof(ctrl_sin);
	n = recvfrom(ctrl_sockfd, receive_buf, BUFSIZE, 0, (struct sockaddr *)&ctrl_sin, &serverlen);
	if (n < 0)
		error("ERROR: Failed to receive from OAI");

	sl_ctrl_msg = (struct sidelink_ctrl_element *) receive_buf;
	if (sl_ctrl_msg->type == DIRECT_COMMUNICATION_RELEASE_RSP) {
		printf("Received DirectCommunicationReleaseResponse on socket from OAI (msg type: %d)\n",sl_ctrl_msg->type);
		status = sl_ctrl_msg->sidelinkPrimitive.group_comm_release_rsp;
		printf("DirectCommunicationReleaseResponse, Status: %d\n", status);
		return status;
	} else {
		return -1;
	}

	return 0;
}


//--------------------------------------------------------
int release_PC5s_request(uint8_t slrb_id)
{
	char send_buf[BUFSIZE], receive_buf[BUFSIZE];
	int status;
	struct sidelink_ctrl_element *sl_ctrl_msg = NULL;
	int n;

	printf("------------------------------------------------\n");
	printf("Send PC5SReleaseRequest message to OAI (msg type: %d )\n",PC5S_RELEASE_REQ);
	sl_ctrl_msg = calloc(1, sizeof(struct sidelink_ctrl_element));
	sl_ctrl_msg->type = PC5S_RELEASE_REQ;
	sl_ctrl_msg->sidelinkPrimitive.slrb_id = slrb_id;
	memcpy((void *)send_buf, (void *)sl_ctrl_msg, sizeof(struct sidelink_ctrl_element));

	// send the PC5SReleaseRequest message to the OAI
	int serverlen = sizeof(ctrl_sin);
	n = sendto(ctrl_sockfd, (char *)send_buf, sizeof(struct sidelink_ctrl_element), 0, (struct sockaddr *)&ctrl_sin, serverlen);
	if (n < 0)
		error("ERROR: Failed to send to OAI");

	// get the reply from OAI
	memset(receive_buf, 0, BUFSIZE);
	serverlen = sizeof(ctrl_sin);
	n = recvfrom(ctrl_sockfd, receive_buf, BUFSIZE, 0, (struct sockaddr *)&ctrl_sin, &serverlen);
	if (n < 0)
		error("ERROR: Failed to receive from OAI");

	sl_ctrl_msg = (struct sidelink_ctrl_element *) receive_buf;
	if (sl_ctrl_msg->type == PC5S_RELEASE_RSP) {
		printf("Received PC5SReleaseResponse on socket from OAI (msg type: %d)\n",sl_ctrl_msg->type);
		status = sl_ctrl_msg->sidelinkPrimitive.pc5s_release_rsp;
		printf("PC5SReleaseResponse, Status: %d\n", status);
		return status;
	} else {
		return -1;
	}

	return 0;
}

//--------------------------------------------------------
void *generate_traffic()
{
	//generate PC5-U packet
	//system("ping 224.0.0.1 -I oip0 -c 100");
	//system("ping -b 10.0.0.255 -I oip0 -c 10"); //for broadcast
	//system("ping 10.0.0.2 -I oip0 -m 1 -c 10"); //for unicast traffic
	//system("iperf -c 224.0.0.1 -u -b 0.1M --bind 10.0.0.1 -t 100"); //iperf - multicast
	return 0;
}

//--------------------------------------------------------
// error - wrapper for perror
void error(char *msg) {
	perror(msg);
	exit(1);
}

