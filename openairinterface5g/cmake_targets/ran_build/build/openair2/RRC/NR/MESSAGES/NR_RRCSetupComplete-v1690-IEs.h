/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_RRCSetupComplete_v1690_IEs_H_
#define	_NR_RRCSetupComplete_v1690_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_RRCSetupComplete_v1690_IEs__ul_RRC_Segmentation_r16 {
	NR_RRCSetupComplete_v1690_IEs__ul_RRC_Segmentation_r16_true	= 0
} e_NR_RRCSetupComplete_v1690_IEs__ul_RRC_Segmentation_r16;

/* Forward declarations */
struct NR_RRCSetupComplete_v1700_IEs;

/* NR_RRCSetupComplete-v1690-IEs */
typedef struct NR_RRCSetupComplete_v1690_IEs {
	long	*ul_RRC_Segmentation_r16;	/* OPTIONAL */
	struct NR_RRCSetupComplete_v1700_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_RRCSetupComplete_v1690_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_ul_RRC_Segmentation_r16_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_RRCSetupComplete_v1690_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_RRCSetupComplete_v1690_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_RRCSetupComplete_v1690_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_RRCSetupComplete-v1700-IEs.h"

#endif	/* _NR_RRCSetupComplete_v1690_IEs_H_ */
#include <asn_internal.h>