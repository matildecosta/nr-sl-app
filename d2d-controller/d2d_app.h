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

/*! \file d2d_app.h
 * \brief An example of how to exchange messages between OAI and D2D App via a control socket
 * \author Tien-Thinh NGUYEN
 * \date 20/11/2017
 * \version 0.1
 * \email:tien-thinh.nguyen@eurecom.fr
 * \company Eurecom
 */

#ifndef _D2D_APP_H
#define _D2D_APP_H


#define IPV4_ADDR    "%u.%u.%u.%u"
#define IPV4_ADDR_FORMAT(aDDRESS)                 \
		(uint8_t)((aDDRESS)  & 0x000000ff),         \
		(uint8_t)(((aDDRESS) & 0x0000ff00) >> 8 ),  \
		(uint8_t)(((aDDRESS) & 0x00ff0000) >> 16),  \
		(uint8_t)(((aDDRESS) & 0xff000000) >> 24)

#define DEBUG
#define BUFSIZE 1024
#define CONTROL_SOCKET_PORT_NO 8888
#define PDCP_SOCKET_PORT_NO 9999
#define MAC_SOCKET_PORT_NO 9998
#define SLRB_TO_BE_RELEASED 3
//#define PC5S_SLRB  10

//Primitives
#define SESSION_INIT_REQ                    1
#define UE_STATUS_INFO                      2
#define GROUP_COMMUNICATION_ESTABLISH_REQ   3
#define GROUP_COMMUNICATION_ESTABLISH_RSP   4
#define DIRECT_COMMUNICATION_ESTABLISH_REQ  5
#define DIRECT_COMMUNICATION_ESTABLISH_RSP  6
#define GROUP_COMMUNICATION_RELEASE_REQ     7
#define GROUP_COMMUNICATION_RELEASE_RSP     8
#define DIRECT_COMMUNICATION_RELEASE_REQ    9
#define DIRECT_COMMUNICATION_RELEASE_RSP    10
#define PC5S_ESTABLISH_REQ                  11
#define PC5S_ESTABLISH_RSP                  12
#define PC5_DISCOVERY_MESSAGE               13
#define PC5S_RELEASE_REQ                    14
#define PC5S_RELEASE_RSP                    15


#define PC5_DISCOVERY_PAYLOAD_SIZE          29
#define PC5_SIGNALLING_PAYLOAD_SIZE         100 //should be updated with a correct value

typedef int32_t               sdu_size_t;
typedef uint16_t              rb_id_t;

typedef enum {
	UE_STATE_OFF_NETWORK,
	UE_STATE_ON_NETWORK
} UE_STATE_t;

typedef enum {
	GROUP_COMMUNICATION_RELEASE_OK = 0,
	GROUP_COMMUNICATION_RELEASE_FAILURE
} Group_Communication_Status_t;

struct GroupCommunicationEstablishReq {
	uint32_t sourceL2Id;
	uint32_t groupL2Id;
	uint32_t groupIpAddress;
	uint8_t pppp;
};

typedef enum {
	DIRECT_COMMUNICATION_RELEASE_OK = 0,
	DIRECT_COMMUNICATION_RELEASE_FAILURE
} Direct_Communication_Status_t;


struct DirectCommunicationEstablishReq {
	uint32_t sourceL2Id;
	uint32_t destinationL2Id;
	uint8_t pppp;
};

struct PC5SEstablishReq {
	uint8_t  type; //0-rx, 1-tx
	uint32_t sourceL2Id;
	uint32_t destinationL2Id;
};


struct PC5SEstablishRsp {
	uint32_t slrbid_lcid28;
	uint32_t slrbid_lcid29;
	uint32_t slrbid_lcid30;
};

typedef enum {
	PC5S_RELEASE_OK = 0,
	PC5S_RELEASE_FAILURE
} PC5S_Release_Status_t;


//PC5_DISCOVERY MESSAGE
typedef struct  {
	unsigned char bytes[PC5_DISCOVERY_PAYLOAD_SIZE];
	uint32_t measuredPower;
}  __attribute__((__packed__)) PC5DiscoveryMessage ;



struct sidelink_ctrl_element {
	unsigned short type;
	union {
		struct GroupCommunicationEstablishReq group_comm_establish_req;
		struct DirectCommunicationEstablishReq direct_comm_establish_req;
		Group_Communication_Status_t group_comm_release_rsp;
		Direct_Communication_Status_t direct_comm_release_rsp;
		PC5S_Release_Status_t pc5s_release_rsp;
		UE_STATE_t ue_state;
		int slrb_id;
		struct PC5SEstablishReq pc5s_establish_req;
		struct PC5SEstablishRsp pc5s_establish_rsp;
		PC5DiscoveryMessage pc5_discovery_message;
	} sidelinkPrimitive;
};


typedef enum  ip_traffic_type_e {
	TRAFFIC_IPVX_TYPE_UNKNOWN    =  0,
	TRAFFIC_IPV6_TYPE_UNICAST    =  1,
	TRAFFIC_IPV6_TYPE_MULTICAST  =  2,
	TRAFFIC_IPV6_TYPE_UNKNOWN    =  3,
	TRAFFIC_IPV4_TYPE_UNICAST    =  5,
	TRAFFIC_IPV4_TYPE_MULTICAST  =  6,
	TRAFFIC_IPV4_TYPE_BROADCAST  =  7,
	TRAFFIC_IPV4_TYPE_UNKNOWN    =  8,
	TRAFFIC_PC5S_SIGNALLING      =  9,
	TRAFFIC_PC5S_SESSION_INIT    =  10,
		// MC ADDED: New types for non-IP packets, for each type cast
	TRAFFIC_NONIP_TYPE_UNKOWN	 = 11,
	TRAFFIC_NONIP_TYPE_UNICAST	 = 12,
	TRAFFIC_NONIP_TYPE_MULTICAST = 13,
	TRAFFIC_NONIP_TYPE_BROADCAST = 14,
} ip_traffic_type_t;


typedef struct {
	rb_id_t             rb_id;
	sdu_size_t          data_size;
	signed int          inst;
	ip_traffic_type_t   traffic_type;
	uint32_t sourceL2Id;
	uint32_t destinationL2Id;
} __attribute__((__packed__)) pc5s_header_t;

//new PC5S-message
typedef struct {
	unsigned char bytes[PC5_SIGNALLING_PAYLOAD_SIZE];
}  __attribute__((__packed__)) PC5SignallingMessage ;

//example of PC5-S messages
typedef struct {
	pc5s_header_t pc5s_header;
	union {
		uint8_t status;
		PC5SignallingMessage pc5_signalling_message;
	} pc5sPrimitive;
} __attribute__((__packed__)) sidelink_pc5s_element;


//global variables
//Control socket
extern int ctrl_sockfd;
extern struct sockaddr_in ctrl_sin;
//PDCP socket
extern int pdcp_sockfd;
extern struct sockaddr_in pdcp_sin;
//MAC socket
extern int mac_sockfd;
extern struct sockaddr_in mac_sin;

//global variables
int ctrl_sockfd;
struct sockaddr_in ctrl_sin;
int pdcp_sockfd;
struct sockaddr_in pdcp_sin;
int mac_sockfd;
struct sockaddr_in mac_sin;


///////////////////////
//For PC5S

/**
\brief Send a request to establish a SLRB for PC5S communication
@param type 0 - for RX, 1 for TX
@param  Layer2 ID of the source
@param destination_id Destination layer2 ID
@return SLRB ID Established for this PC5S*/
int setup_PC5s_request(uint8_t type, uint32_t src_id, uint32_t destination_id);

/**
\brief Send a request to release a SLRB for a PC5S communication
@param slrb_id SLRB ID need to be released
@return 0 if this slrbid has been successfully released, if not return -1*/
int release_PC5s_request(uint8_t slrb_id);


/**
\brief Send a PC5S message
@param sl_pc5s_msg Pointer to the message to be sent
@return Number of bytes sent*/
int  send_pc5s_message(sidelink_pc5s_element *sl_pc5s_msg );

/**
\brief Process the received PC5S message
@param sock Pointer to the communication socket */
void *process_pc5s_signalling(void *sock);

///////////////////////
//For PS5U

/**
\brief Send a request to establish a SLRB for a direct communication
@param src_id Layer2 ID of the source
@param dst_id Layer2 ID of the destination
@param pppp Represent packet-per-priority
@return SLRB ID Established for this communication*/
int setup_PC5u_direct_request(uint32_t src_id, uint32_t dst_id, uint8_t pppp);

/**
\brief Send a request to release a SLRB for a direct communication
@param slrb_id SLRB ID need to be released
@return 0 if this slrbid has been successfully released, if not return -1*/
int release_PC5u_direct_request(uint8_t slrb_id);

/**
\brief Send a request to establish a SLRB for a group communication
@param type 0 - for RX, 1 for TX
@param src_id Layer2 ID of the source
@param grp_id Group layer2 ID
@param pppp Represent packet-per-priority
@return SLRB ID Established for this communication*/
int setup_PC5u_group_request(uint32_t src_id, uint32_t grp_id, uint32_t group_ip_address, uint8_t pppp);

/**
\brief Send a request to release a SLRB for a group communication
@param SLRB ID Used for this communication
@returns 0 on success, -1 on failure*/
int release_PC5u_group_request(uint8_t slrb_id);


///////////////////////
//For PC5D
/**
\brief Send a PC5D message
@param pc5_discovery_message Pointer to the discovery message to be sent
@return Number of bytes sent*/
int  send_PC5D_message(PC5DiscoveryMessage *pc5_discovery_message);

////////////////////////
//Other functions

/**
\brief Establish a connection with OAI Control socket
@return status of the UE*/
int session_init();

/**
\brief Establish a connection with OAI Control socket
@return status of the UE*/
int pdcp_session_init();

/**
\brief A thread function to receive UE status notification */
void *rcv_UE_status_notification(void *);


void *generate_traffic();
void error(char *msg);


#endif

