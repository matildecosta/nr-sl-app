/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_LogMeasResultWLAN_r16_H_
#define	_NR_LogMeasResultWLAN_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_WLAN-Identifiers-r16.h"
#include "NR_WLAN-RSSI-Range-r16.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_WLAN_RTT_r16;

/* NR_LogMeasResultWLAN-r16 */
typedef struct NR_LogMeasResultWLAN_r16 {
	NR_WLAN_Identifiers_r16_t	 wlan_Identifiers_r16;
	NR_WLAN_RSSI_Range_r16_t	*rssiWLAN_r16;	/* OPTIONAL */
	struct NR_WLAN_RTT_r16	*rtt_WLAN_r16;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_LogMeasResultWLAN_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_LogMeasResultWLAN_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_LogMeasResultWLAN_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_LogMeasResultWLAN_r16_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_WLAN-RTT-r16.h"

#endif	/* _NR_LogMeasResultWLAN_r16_H_ */
#include <asn_internal.h>