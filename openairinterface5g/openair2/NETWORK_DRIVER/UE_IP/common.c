/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.1  (the "License"); you may not use this file
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

/*! \file common.c
* \brief
* \author Navid Nikaein and Raymond Knopp, Lionel GAUTHIER
* \date 2013
* \version 1.0
* \company Eurecom
* \email: navid.nikaein@eurecom.fr, lionel.gauthier@eurecom.fr
*/

#include "local.h"
#include "proto_extern.h"
#ifndef OAI_NW_DRIVER_USE_NETLINK
#include "rtai_fifos.h"
#endif


#include <linux/inetdevice.h>

#include <net/tcp.h>
#include <net/udp.h>

#define NIPADDR(addr) \
        (uint8_t)(addr & 0x000000FF), \
        (uint8_t)((addr & 0x0000FF00) >> 8), \
        (uint8_t)((addr & 0x00FF0000) >> 16), \
        (uint8_t)((addr & 0xFF000000) >> 24)

#define NIP6ADDR(addr) \
        ntohs((addr)->s6_addr16[0]), \
        ntohs((addr)->s6_addr16[1]), \
        ntohs((addr)->s6_addr16[2]), \
        ntohs((addr)->s6_addr16[3]), \
        ntohs((addr)->s6_addr16[4]), \
        ntohs((addr)->s6_addr16[5]), \
        ntohs((addr)->s6_addr16[6]), \
        ntohs((addr)->s6_addr16[7])


#define OAI_DRV_DEBUG_SEND
#define OAI_DRV_DEBUG_RECEIVE
#define OAI_DRV_V2X

void
ue_ip_common_class_wireless2ip(
  sdu_size_t data_lenP,
  void      *pdcp_sdu_pP,
  int        instP,
  rb_id_t    rb_idP)
{

  //---------------------------------------------------------------------------
  struct sk_buff      *skb_p           = NULL;
  ipversion_t         *ipv_p           = NULL;
  ue_ip_priv_t        *gpriv_p         = netdev_priv(ue_ip_dev[instP]);
  unsigned int         hard_header_len = 0;
#ifdef OAI_DRV_DEBUG_RECEIVE
  int                  i;
  unsigned char       *addr_p          = 0;
#endif
  unsigned char        protocol;
  struct iphdr        *network_header_p  = NULL;

#ifdef OAI_DRV_DEBUG_RECEIVE
  printk("[UE_IP_DRV][%s] begin RB %d Inst %d Length %d bytes\n",__FUNCTION__, rb_idP,instP,data_lenP);
#endif

  skb_p = dev_alloc_skb( data_lenP + 2 );

  if(!skb_p) {
    printk("[UE_IP_DRV][%s] low on memory\n",__FUNCTION__);
    ++gpriv_p->stats.rx_dropped;
    return;
  }

  skb_reserve(skb_p,2);
  memcpy(skb_put(skb_p, data_lenP), pdcp_sdu_pP,data_lenP);

  skb_p->dev = ue_ip_dev[instP];
  hard_header_len = ue_ip_dev[instP]->hard_header_len;

  skb_set_mac_header(skb_p, 0);
// JHNOTE: as we are not sure at this stage we have a network header, we should not configure the skb for it at this stage 
// skb_set_network_header(skb_p, hard_header_len);
  skb_p->mark = rb_idP;
#ifdef OAI_DRV_DEBUG_RECEIVE
  printk("[NAC_COMMIN_RECEIVE]: Packet Type %d (%d,%d)",skb_p->pkt_type,PACKET_HOST,PACKET_BROADCAST);
#endif
  skb_p->pkt_type = PACKET_HOST;


#ifdef OAI_DRV_DEBUG_RECEIVE
  printk("[UE_IP_DRV][%s] Receiving packet of size %d from PDCP \n",__FUNCTION__, skb_p->len);

  for (i=0; i<skb_p->len; i++) {
    printk("%2x ",((unsigned char *)(skb_p->data))[i]);
  }

  printk("\n");
#endif
#ifdef OAI_DRV_DEBUG_RECEIVE
  printk("[UE_IP_DRV][%s] skb_p->data           @ %p\n",__FUNCTION__,  skb_p->data);
  printk("[UE_IP_DRV][%s] skb_p->mac_header     @ %p\n",__FUNCTION__,  skb_p->mac_header);
#endif



  // LG TEST skb_p->ip_summed = CHECKSUM_NONE;
  skb_p->ip_summed = CHECKSUM_UNNECESSARY;

#ifdef OAI_DRV_V2X
  // add the ether type to the skb_p as it can be used to filter packets at upper layers based on this field.
    skb_p->protocol = eth_type_trans(skb_p, ue_ip_dev[instP]);

    switch (skb_p->protocol) {
    case htons(0x0800):  // IPv4

  #ifdef OAI_DRV_DEBUG_RECEIVE
      //printk("NAS_TOOL_RECEIVE: receive IPv4 message\n");
      addr_p = (unsigned char *)&((struct iphdr *)&skb_p->data[hard_header_len])->saddr;

      if (addr_p) {
        printk("[UE_IP_DRV][%s] Source %d.%d.%d.%d\n",__FUNCTION__, addr_p[0],addr_p[1],addr_p[2],addr_p[3]);
      }

      addr_p = (unsigned char *)&((struct iphdr *)&skb_p->data[hard_header_len])->daddr;

      if (addr_p) {
        printk("[UE_IP_DRV][%s] Dest %d.%d.%d.%d\n",__FUNCTION__, addr_p[0],addr_p[1],addr_p[2],addr_p[3]);
      }

      printk("[UE_IP_DRV][%s] protocol  %d\n",__FUNCTION__, ((struct iphdr *)&skb_p->data[hard_header_len])->protocol);
  #endif

      // now we know that what comes is an IP packet, so we can set the network header
      skb_set_network_header(skb_p, hard_header_len);
      network_header_p = (struct iphdr *)skb_network_header(skb_p);
      protocol = network_header_p->protocol;

  #ifdef OAI_DRV_DEBUG_RECEIVE
      switch (protocol) {
      case IPPROTO_IP:
        printk("[UE_IP_DRV][%s] Received Raw IPv4 packet\n",__FUNCTION__);
        break;

      case IPPROTO_IPV6:
        printk("[UE_IP_DRV][%s] Received Raw IPv6 packet\n",__FUNCTION__);
        break;

      case IPPROTO_ICMP:
        printk("[UE_IP_DRV][%s] Received Raw ICMP packet\n",__FUNCTION__);
        break;

      case IPPROTO_TCP:
        printk("[UE_IP_DRV][%s] Received TCP packet\n",__FUNCTION__);
        break;

      case IPPROTO_UDP:
        printk("[UE_IP_DRV][%s] Received UDP packet\n",__FUNCTION__);
        break;

      default:
        break;
      }

  #endif

      if (hard_header_len == 0) {
        skb_p->protocol = htons(ETH_P_IP);
      }

      //printk("[UE_IP_DRV][COMMON] Writing packet with protocol %x\n",ntohs(skb_p->protocol));
      break;
      case htons(0x86DD):     //IPv6
  #ifdef OAI_DRV_DEBUG_RECEIVE
      printk("[UE_IP_DRV][%s] receive IPv6 message\n",__FUNCTION__);
  #endif
      // now we know that what comes is an IPv6 packet, so we can set the network header
      skb_set_network_header(skb_p, hard_header_len);
      //skb_p->network_header_p = &skb_p->data[hard_header_len];

      if (hard_header_len == 0) {
        skb_p->protocol = htons(ETH_P_IPV6);
      }
      //printk("Writing packet with protocol %x\n",ntohs(skb_p->protocol));
      break;
      case htons(0x894C):     //ETBN according to IEC 61375-2-5
  	printk("[UE_IP_DRV][%s] begin RB %d Inst %d Length %d bytes\n",__FUNCTION__,rb_idP,instP,data_lenP);
        printk("[UE_IP_DRV][%s] receive L2 message with ethertype %x\n",__FUNCTION__,ntohs(skb_p->protocol));

        // now we know that what comes does not have any network header, we do not set the network header
	//skb_set_network_header(skb_p, hard_header_len);
  	struct ethhdr *mh_recv = eth_hdr(skb_p);
  	printk("[UE_IP_DRV] source MAC %x.%x.%x.%x.%x.%x\n", mh_recv->h_source[0],mh_recv->h_source[1],mh_recv->h_source[2],mh_recv->h_source[3],mh_recv->h_source[4],mh_recv->h_source[5]);
  	printk("[UE_IP_DRV] dest MAC %x.%x.%x.%x.%x.%x\n", mh_recv->h_dest[0],mh_recv->h_dest[1],mh_recv->h_dest[2],mh_recv->h_dest[3],mh_recv->h_dest[4],mh_recv->h_dest[5]);

	printk("[UE_IP_DRV][%s] non-IP packet with ethertype  %x\n",__FUNCTION__, ntohs(skb_p->protocol));
	break;
      case htons(0x0003):     //ETBN according to IEC 61375-2-5 but not recognized by the linux kernel
	printk("[UE_IP_DRV][%s] begin RB %d Inst %d Length %d bytes\n",__FUNCTION__,rb_idP,instP,data_lenP);
      	printk("[UE_IP_DRV][%s] receive L2 message with ethertype %x\n",__FUNCTION__,ntohs(skb_p->protocol));


        // now we know that what comes does not have any network header, we do not set the network header
	//skb_set_network_header(skb_p, hard_header_len);

	struct ethhdr *mh_recv = eth_hdr(skb_p);
	printk("[UE_IP_DRV] source MAC %x.%x.%x.%x.%x.%x\n", mh_recv->h_source[0],mh_recv->h_source[1],mh_recv->h_source[2],mh_recv->h_source[3],mh_recv->h_source[4],mh_recv->h_source[5]);
	printk("[UE_IP_DRV] dest MAC %x.%x.%x.%x.%x.%x\n", mh_recv->h_dest[0],mh_recv->h_dest[1],mh_recv->h_dest[2],mh_recv->h_dest[3],mh_recv->h_dest[4],mh_recv->h_dest[5]);

	printk("[UE_IP_DRV][%s] non-IP packet with ethertype  %x\n",__FUNCTION__, ntohs(skb_p->protocol));
      case htons(0x8947):     // Geonet according to ETSI ITS
      	//TBC
      	break;
      case htons(0x88DC): 	// WSMP according to IEEE 1609.x
      	// TBC
  		break;
      default:
          printk("[UE_IP_DRV][%s] begin RB %d Inst %d Length %d bytes\n",__FUNCTION__,rb_idP,instP,data_lenP);
          printk("[UE_IP_DRV][%s] Inst %d: receive unknown message (ethertype=%x)\n",__FUNCTION__,instP, ntohs(skb_p->protocol));
    }

#else
  ipv_p = (ipversion_t *)((void *)&(skb_p->data[hard_header_len]));

  switch (ipv_p->version) {

  case 6:
#ifdef OAI_DRV_DEBUG_RECEIVE
    printk("[UE_IP_DRV][%s] receive IPv6 message\n",__FUNCTION__);
#endif
    skb_set_network_header(skb_p, hard_header_len);
    //skb_p->network_header_p = &skb_p->data[hard_header_len];

    if (hard_header_len == 0) {
      skb_p->protocol = htons(ETH_P_IPV6);
    } else {
#ifdef OAI_NW_DRIVER_TYPE_ETHERNET
      skb_p->protocol = eth_type_trans(skb_p, ue_ip_dev[instP]);
#else
#endif
    }

    //printk("Writing packet with protocol %x\n",ntohs(skb_p->protocol));
    break;

  case 4:

#ifdef OAI_DRV_DEBUG_RECEIVE
    //printk("NAS_TOOL_RECEIVE: receive IPv4 message\n");
    addr_p = (unsigned char *)&((struct iphdr *)&skb_p->data[hard_header_len])->saddr;

    if (addr_p) {
      printk("[UE_IP_DRV][%s] Source %d.%d.%d.%d\n",__FUNCTION__, addr_p[0],addr_p[1],addr_p[2],addr_p[3]);
    }

    addr_p = (unsigned char *)&((struct iphdr *)&skb_p->data[hard_header_len])->daddr;

    if (addr_p) {
      printk("[UE_IP_DRV][%s] Dest %d.%d.%d.%d\n",__FUNCTION__, addr_p[0],addr_p[1],addr_p[2],addr_p[3]);
    }

    printk("[UE_IP_DRV][%s] protocol  %d\n",__FUNCTION__, ((struct iphdr *)&skb_p->data[hard_header_len])->protocol);
#endif

    skb_set_network_header(skb_p, hard_header_len);
    //network_header_p = (struct iphdr *)skb_network_header(skb_p);
    network_header_p = (struct iphdr *)skb_network_header(skb_p);
    protocol = network_header_p->protocol;

#ifdef OAI_DRV_DEBUG_RECEIVE

    switch (protocol) {
    case IPPROTO_IP:
      printk("[UE_IP_DRV][%s] Received Raw IPv4 packet\n",__FUNCTION__);
      break;

    case IPPROTO_IPV6:
      printk("[UE_IP_DRV][%s] Received Raw IPv6 packet\n",__FUNCTION__);
      break;

    case IPPROTO_ICMP:
      printk("[UE_IP_DRV][%s] Received Raw ICMP packet\n",__FUNCTION__);
      break;

    case IPPROTO_TCP:
      printk("[UE_IP_DRV][%s] Received TCP packet\n",__FUNCTION__);
      break;

    case IPPROTO_UDP:
      printk("[UE_IP_DRV][%s] Received UDP packet\n",__FUNCTION__);
      break;

    default:
      break;
    }

#endif

    if (hard_header_len == 0) {
      skb_p->protocol = htons(ETH_P_IP);
    }

    //printk("[UE_IP_DRV][COMMON] Writing packet with protocol %x\n",ntohs(skb_p->protocol));
    break;

  default:
    printk("[UE_IP_DRV][%s] begin RB %d Inst %d Length %d bytes\n",__FUNCTION__,rb_idP,instP,data_lenP);
    printk("[UE_IP_DRV][%s] Inst %d: receive unknown message (version=%d)\n",__FUNCTION__,instP,ipv_p->version);
  }
#endif

  ++gpriv_p->stats.rx_packets;
  gpriv_p->stats.rx_bytes += data_lenP;
#ifdef OAI_DRV_DEBUG_RECEIVE
  printk("[UE_IP_DRV][%s] sending packet of size %d to kernel\n",__FUNCTION__,skb_p->len);

  for (i=0; i<skb_p->len; i++) {
    printk("%2x ",((unsigned char *)(skb_p->data))[i]);
  }

  printk("\n");
#endif //OAI_DRV_DEBUG_RECEIVE
  netif_rx(skb_p);
#ifdef OAI_DRV_DEBUG_RECEIVE
  printk("[UE_IP_DRV][%s] end\n",__FUNCTION__);
#endif
}

//---------------------------------------------------------------------------
// Delete the data
void ue_ip_common_ip2wireless_drop(struct sk_buff *skb_pP,  int instP)
{
  //---------------------------------------------------------------------------
  ue_ip_priv_t *priv_p=netdev_priv(ue_ip_dev[instP]);
  ++priv_p->stats.tx_dropped;
}

//---------------------------------------------------------------------------
// Request the transfer of data (QoS SAP)
void
ue_ip_common_ip2wireless(
  struct sk_buff *skb_pP,
  int instP
)
{
  //---------------------------------------------------------------------------
  struct pdcp_data_req_header_s     pdcph;
  ue_ip_priv_t                     *priv_p=netdev_priv(ue_ip_dev[instP]);
//#if (LTE_RRC_VERSION >= MAKE_VERSION(14, 0, 0))
  ipversion_t         *ipv_p             = NULL;
  unsigned int         hard_header_len   = 0;
  unsigned char       *src_addr          = 0;
  unsigned char       *dst_addr          = 0;
//#endif

#ifdef LOOPBACK_TEST
  int i;
#endif
#ifdef OAI_DRV_DEBUG_SEND
  int j;
#endif
  unsigned int bytes_wrote;
  // Start debug information
#ifdef OAI_DRV_DEBUG_SEND
  printk("[UE_IP_DRV][%s] inst %d begin \n",__FUNCTION__,instP);
#endif

  if (skb_pP==NULL) {
#ifdef OAI_DRV_DEBUG_SEND
    printk("[UE_IP_DRV][%s] input parameter skb is NULL \n",__FUNCTION__);
#endif
    return;
  }

  if (skb_pP->mark) {
    pdcph.rb_id      = skb_pP->mark;
  } else {
    pdcph.rb_id      = UE_IP_DEFAULT_RAB_ID;
  }

  printk("[UE_IP_DRV][%s] pdcph RB MARK %d \n",__FUNCTION__, pdcph.rb_id);

  pdcph.inst       = instP;
  pdcph.data_size  = skb_pP->len;

#ifdef OAI_DRV_V2X
  hard_header_len = ue_ip_dev[instP]->hard_header_len;

  struct ethhdr *mh = eth_hdr(skb_pP);

  switch (skb_pP->protocol) {
    case htons(0x0800):  // IPv4
		  src_addr = (unsigned char *)&((struct iphdr *)&skb_pP->data[hard_header_len])->saddr;
		  dst_addr = (unsigned char *)&((struct iphdr *)&skb_pP->data[hard_header_len])->daddr;
#ifdef OAI_DRV_DEBUG_SEND
		  if (src_addr) {
		      printk("[UE_IP_DRV][%s] Source %d.%d.%d.%d\n",__FUNCTION__, src_addr[0],src_addr[1],src_addr[2],src_addr[3]);
		  }
		  if (dst_addr) {
		      printk("[UE_IP_DRV][%s] Dest %d.%d.%d.%d\n",__FUNCTION__, dst_addr[0],dst_addr[1],dst_addr[2],dst_addr[3]);
		  }
		  printk("[UE_IP_DRV][%s] slrb_id %d\n",__FUNCTION__, pdcph.rb_id);
#endif
		// modify inst by IP address for the U-Plane of multiple UEs while L2 fapi simulator start
		#ifdef UESIM_EXPANSION
			if ((src_addr[3] - 2)> instP) {
				pdcph.inst = src_addr[3] - 2;
				printk("[UE_IP_DRV] change INST from %d to %d\n",instP, pdcph.inst);
				instP = src_addr[3] - 2;
				priv_p=netdev_priv(ue_ip_dev[instP]);
			}
		#endif

		//get source/destination MAC addresses
		// struct ethhdr *mh = eth_hdr(skb_pP);
#ifdef OAI_DRV_DEBUG_SEND
		printk("[UE_IP_DRV] source MAC %x.%x.%x.%x.%x.%x\n", mh->h_source[0],mh->h_source[1],mh->h_source[2],mh->h_source[3],mh->h_source[4],mh->h_source[5]);
		printk("[UE_IP_DRV] dest MAC %x.%x.%x.%x.%x.%x\n", mh->h_dest[0],mh->h_dest[1],mh->h_dest[2],mh->h_dest[3],mh->h_dest[4],mh->h_dest[5]);
#endif
		//assign source/destL2Id from the last 24 bits of MAC addresses
		pdcph.sourceL2Id = ((uint8_t)mh->h_source[5] & 0x000000FF) | (((uint8_t)mh->h_source[4] << 8) & 0x0000FF00) | (((uint8_t)mh->h_source[3] << 16) & 0x00FF0000) ;
		pdcph.destinationL2Id = ((uint8_t)mh->h_dest[5] & 0x000000FF) | (((uint8_t)mh->h_dest[4] << 8) & 0x0000FF00) | (((uint8_t)mh->h_dest[3] << 16) & 0x00FF0000);


		//get Ipv4 address and pass to PCDP header
		//pdcph.sourceL2Id = ntohl( ((struct iphdr *)&skb_pP->data[hard_header_len])->saddr) & 0x00FFFFFF;
		//pdcph.destinationL2Id = ntohl( ((struct iphdr *)&skb_pP->data[hard_header_len])->daddr) & 0x00FFFFFF;
#ifdef OAI_DRV_DEBUG_SEND
		printk("[UE_IP_DRV] source Id: 0x%08x\n",pdcph.sourceL2Id );
		printk("[UE_IP_DRV] destinationL2Id Id: 0x%08x\n",pdcph.destinationL2Id );
#endif
		break;

    case htons(0x86DD):     //IPv6
#ifdef OAI_DRV_DEBUG_SEND
    	printk("[UE_IP_DRV][%s] receive IPv6 message\n",__FUNCTION__);
#endif
    	//TODO
    	break;

    case htons(0x894C):     //ETBN according to IEC 61375-2-5
#ifdef OAI_DRV_DEBUG_SEND
		printk("[UE_IP_DRV] source MAC %2x.%2x.%2x.%2x.%2x.%2x\n", mh->h_source[0],mh->h_source[1],mh->h_source[2],mh->h_source[3],mh->h_source[4],mh->h_source[5]);
		printk("[UE_IP_DRV] dest MAC %2x.%2x.%2x.%2x.%2x.%2x\n", mh->h_dest[0],mh->h_dest[1],mh->h_dest[2],mh->h_dest[3],mh->h_dest[4],mh->h_dest[5]);

		int k;
		printk("[UE_IP_DRV][%s] size %d \n",__FUNCTION__, skb_pP->len);
		for (k=0; k<skb_pP->len; k++){
		 printk("[UE_IP_DRV][%s] raw data at %d is %02x  \n",__FUNCTION__,k,*(skb_pP->data+k));
		}
#endif

		pdcph.rb_id = 4; // default..to see the difference once we get one from the PAS

		// JHNOTE: rbID retrieved from PAS...TBC
		/*
		uint16_t proto_correct = ntohs(skb_pP->protocol);
		unsigned char data[2];
		memcpy( data, proto_correct, 2 );

		pas_lock(); //to define it and lock it once
		bytes_wrote = ue_ip_pas_netlink_send(data, strlen(data)); // connects to the ProSe Application Server and retrieve data to configure PDCP
		// TODO: add a wait_conditional() to a blockign semaphore (waiting for the PAS to reply).
		pas_lock(); // blocked as already defined; need to wait for the feedback from PAS over handle_message_receive();
		pdcph.rb_id = g_slrbID;
		pas_unlock(); // to avoid leaving it locked at the end of this function; TODO: check for potential concurent calls of this function
		 */
		// TODO check if the sourceID and destinationL2Id are actually taken from the ethheader or taken as hardware ID and groupIP
		// JHNOTE:  to me, this does not look correct, as the destinationL2Id must be the L2groupID, which cannot come from the eth header of an ETBN packet.

		pdcph.sourceL2Id = ((uint8_t)mh->h_source[5] & 0x000000FF) | ( ((uint8_t)mh->h_source[4] << 8) & 0x0000FF00 );
		pdcph.destinationL2Id =  ((uint8_t)mh->h_dest[5] & 0x000000FF) | ( ((uint8_t)mh->h_dest[4] << 8) & 0x0000FF00 );

		// JHNOTE:  hard coded for now, we need to find a mechanism to tunnel ETBN traffic within the WLTB RD
	    	pdcph.sourceL2Id=1;
	    	pdcph.destinationL2Id=2;


		printk("[UE_IP_DRV] source Id: 0x%08x\n",pdcph.sourceL2Id );
		printk("[UE_IP_DRV] destinationL2Id Id: 0x%08x\n",pdcph.destinationL2Id );
		printk("[UE_IP_DRV] slrbid Id: %i\n",pdcph.rb_id);
		break;
	case htons(0x0003):     //ETBN according to IEC 61375-2-5 but unrecognized by the kernel, so ETH_P_ALL
#ifdef OAI_DRV_DEBUG_SEND
		printk("[UE_IP_DRV] source MAC %2x.%2x.%2x.%2x.%2x.%2x\n", mh->h_source[0],mh->h_source[1],mh->h_source[2],mh->h_source[3],mh->h_source[4],mh->h_source[5]);
		printk("[UE_IP_DRV] dest MAC %2x.%2x.%2x.%2x.%2x.%2x\n", mh->h_dest[0],mh->h_dest[1],mh->h_dest[2],mh->h_dest[3],mh->h_dest[4],mh->h_dest[5]);

		int k;
		printk("[UE_IP_DRV][%s] size %d \n",__FUNCTION__, skb_pP->len);
		for (k=0; k<skb_pP->len; k++){
		 printk("[UE_IP_DRV][%s] raw data at %d is %02x  \n",__FUNCTION__,k,*(skb_pP->data+k));
		}
#endif

		pdcph.rb_id = 4; // default..to see the difference once we get one from the PAS

		pdcph.sourceL2Id = ((uint8_t)mh->h_source[5] & 0x000000FF) | ( ((uint8_t)mh->h_source[4] << 8) & 0x0000FF00 );
		pdcph.destinationL2Id =  ((uint8_t)mh->h_dest[5] & 0x000000FF) | ( ((uint8_t)mh->h_dest[4] << 8) & 0x0000FF00 );


		printk("[UE_IP_DRV] source Id: 0x%08x\n",pdcph.sourceL2Id );
		printk("[UE_IP_DRV] destinationL2Id Id: 0x%08x\n",pdcph.destinationL2Id );
		printk("[UE_IP_DRV] slrbid Id: %i\n",pdcph.rb_id);
		break;
    default:
    	printk("[UE_IP_DRV][%s] receive packet of unsupported ethertype %x \n",__FUNCTION__,ntohs(skb_pP->protocol));
    	break;
  }
#else
  //pass source/destination IP addresses to PDCP header
  hard_header_len = ue_ip_dev[instP]->hard_header_len;
  ipv_p = (ipversion_t *)((void *)&(skb_pP->data[hard_header_len]));

  switch (ipv_p->version) {
  case 6:
    printk("[UE_IP_DRV][%s] receive IPv6 message\n",__FUNCTION__);
    //TODO
    break;

  case 4:
     src_addr = (unsigned char *)&((struct iphdr *)&skb_pP->data[hard_header_len])->saddr;
    if (src_addr) {
      printk("[UE_IP_DRV][%s] Source %d.%d.%d.%d\n",__FUNCTION__, src_addr[0],src_addr[1],src_addr[2],src_addr[3]);
    }
    dst_addr = (unsigned char *)&((struct iphdr *)&skb_pP->data[hard_header_len])->daddr;
    if (dst_addr) {
      printk("[UE_IP_DRV][%s] Dest %d.%d.%d.%d\n",__FUNCTION__, dst_addr[0],dst_addr[1],dst_addr[2],dst_addr[3]);
    }

    //get Ipv4 address and pass to PCDP header
    printk("[UE_IP_DRV] source Id: 0x%08x\n",pdcph.sourceL2Id );
    printk("[UE_IP_DRV] destinationL2Id Id: 0x%08x\n",pdcph.destinationL2Id );
    pdcph.sourceL2Id = ntohl( ((struct iphdr *)&skb_pP->data[hard_header_len])->saddr) & 0x00FFFFFF;
    pdcph.destinationL2Id = ntohl( ((struct iphdr *)&skb_pP->data[hard_header_len])->daddr) & 0x00FFFFFF;
    break;

  default:
     break;
  }
#endif


  bytes_wrote = ue_ip_netlink_send((char *)&pdcph,UE_IP_PDCPH_SIZE);
#ifdef OAI_DRV_DEBUG_SEND
  printk("[UE_IP_DRV][%s] Wrote %d bytes (header for %d byte skb) to PDCP via netlink\n",__FUNCTION__,
         bytes_wrote,skb_pP->len);
#endif

  if (bytes_wrote != UE_IP_PDCPH_SIZE) {
    printk("[UE_IP_DRV][%s] problem while writing PDCP's header (bytes wrote = %d)\n",__FUNCTION__,bytes_wrote);
    printk("rb_id %d, Wrote %d, Header Size %d \n", pdcph.rb_id , bytes_wrote, UE_IP_PDCPH_SIZE);
    priv_p->stats.tx_dropped ++;
    return;
  }

  bytes_wrote += ue_ip_netlink_send((char *)skb_pP->data,skb_pP->len);


  if (bytes_wrote != skb_pP->len+UE_IP_PDCPH_SIZE) {
    printk("[UE_IP_DRV][%s] Inst %d, RB_ID %d: problem while writing PDCP's data, bytes_wrote = %d, Data_len %d, PDCPH_SIZE %d\n",
           __FUNCTION__,
           instP,
           pdcph.rb_id,
           bytes_wrote,
           skb_pP->len,
           UE_IP_PDCPH_SIZE); // congestion

    priv_p->stats.tx_dropped ++;
    return;
  }

#ifdef OAI_DRV_DEBUG_SEND
  printk("[UE_IP_DRV][%s] Sending packet of size %d to PDCP \n",__FUNCTION__,skb_pP->len);

  for (j=0; j<skb_pP->len; j++) {
    printk("%2x ",((unsigned char *)(skb_pP->data))[j]);
  }

  printk("\n");
#endif

  priv_p->stats.tx_bytes   += skb_pP->len;
  priv_p->stats.tx_packets ++;
#ifdef OAI_DRV_DEBUG_SEND
  printk("[UE_IP_DRV][%s] end \n",__FUNCTION__);
#endif
}

//---------------------------------------------------------------------------
void ue_ip_common_wireless2ip(struct nlmsghdr *nlh_pP)
{
  //---------------------------------------------------------------------------

  struct pdcp_data_ind_header_s     *pdcph_p = (struct pdcp_data_ind_header_s *)NLMSG_DATA(nlh_pP);
  ue_ip_priv_t                      *priv_p;

  priv_p = netdev_priv(ue_ip_dev[pdcph_p->inst]);


#ifdef OAI_DRV_DEBUG_RECEIVE
  printk("[UE_IP_DRV][%s] QOS receive from PDCP, size %d, rab %d, inst %d\n",__FUNCTION__,
         pdcph_p->data_size,pdcph_p->rb_id,pdcph_p->inst);
#endif

  ue_ip_common_class_wireless2ip(pdcph_p->data_size,
                                 (unsigned char *)NLMSG_DATA(nlh_pP) + UE_IP_PDCPH_SIZE,
                                 pdcph_p->inst,
                                 pdcph_p->rb_id);

}

