/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_MBSBroadcastConfiguration_r17_IEs_H_
#define	_NR_MBSBroadcastConfiguration_r17_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_MBS_SessionInfoList_r17;
struct NR_MBS_NeighbourCellList_r17;
struct NR_PDSCH_ConfigBroadcast_r17;
struct NR_MTCH_SSB_MappingWindowList_r17;
struct NR_DRX_ConfigPTM_r17;

/* NR_MBSBroadcastConfiguration-r17-IEs */
typedef struct NR_MBSBroadcastConfiguration_r17_IEs {
	struct NR_MBS_SessionInfoList_r17	*mbs_SessionInfoList_r17;	/* OPTIONAL */
	struct NR_MBS_NeighbourCellList_r17	*mbs_NeighbourCellList_r17;	/* OPTIONAL */
	struct NR_MBSBroadcastConfiguration_r17_IEs__drx_ConfigPTM_List_r17 {
		A_SEQUENCE_OF(struct NR_DRX_ConfigPTM_r17) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *drx_ConfigPTM_List_r17;
	struct NR_PDSCH_ConfigBroadcast_r17	*pdsch_ConfigMTCH_r17;	/* OPTIONAL */
	struct NR_MTCH_SSB_MappingWindowList_r17	*mtch_SSB_MappingWindowList_r17;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct NR_MBSBroadcastConfiguration_r17_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_MBSBroadcastConfiguration_r17_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_MBSBroadcastConfiguration_r17_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_MBSBroadcastConfiguration_r17_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_MBSBroadcastConfiguration_r17_IEs_1[7];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_MBS-SessionInfoList-r17.h"
#include "NR_MBS-NeighbourCellList-r17.h"
#include "NR_PDSCH-ConfigBroadcast-r17.h"
#include "NR_MTCH-SSB-MappingWindowList-r17.h"
#include "NR_DRX-ConfigPTM-r17.h"

#endif	/* _NR_MBSBroadcastConfiguration_r17_IEs_H_ */
#include <asn_internal.h>