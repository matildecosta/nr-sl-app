/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_CG_Config_v1630_IEs_H_
#define	_NR_CG_Config_v1630_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_T-Offset-r16.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_CG_Config_v1640_IEs;

/* NR_CG-Config-v1630-IEs */
typedef struct NR_CG_Config_v1630_IEs {
	NR_T_Offset_r16_t	*selectedToffset_r16;	/* OPTIONAL */
	struct NR_CG_Config_v1640_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_CG_Config_v1630_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_CG_Config_v1630_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_CG_Config_v1630_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_CG_Config_v1630_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_CG-Config-v1640-IEs.h"

#endif	/* _NR_CG_Config_v1630_IEs_H_ */
#include <asn_internal.h>