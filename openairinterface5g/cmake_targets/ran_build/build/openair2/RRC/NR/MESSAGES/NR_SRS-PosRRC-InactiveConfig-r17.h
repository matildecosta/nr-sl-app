/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_SRS_PosRRC_InactiveConfig_r17_H_
#define	_NR_SRS_PosRRC_InactiveConfig_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_TimeAlignmentTimer.h"
#include "NR_RSRP-ChangeThreshold-r17.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_SRS_PosConfig_r17;
struct NR_BWP;

/* NR_SRS-PosRRC-InactiveConfig-r17 */
typedef struct NR_SRS_PosRRC_InactiveConfig_r17 {
	struct NR_SRS_PosConfig_r17	*srs_PosConfigNUL_r17;	/* OPTIONAL */
	struct NR_SRS_PosConfig_r17	*srs_PosConfigSUL_r17;	/* OPTIONAL */
	struct NR_BWP	*bwp_NUL_r17;	/* OPTIONAL */
	struct NR_BWP	*bwp_SUL_r17;	/* OPTIONAL */
	NR_TimeAlignmentTimer_t	*inactivePosSRS_TimeAlignmentTimer_r17;	/* OPTIONAL */
	NR_RSRP_ChangeThreshold_r17_t	*inactivePosSRS_RSRP_ChangeThreshold_r17;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_SRS_PosRRC_InactiveConfig_r17_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_SRS_PosRRC_InactiveConfig_r17;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_SRS-PosConfig-r17.h"
#include "NR_BWP.h"

#endif	/* _NR_SRS_PosRRC_InactiveConfig_r17_H_ */
#include <asn_internal.h>