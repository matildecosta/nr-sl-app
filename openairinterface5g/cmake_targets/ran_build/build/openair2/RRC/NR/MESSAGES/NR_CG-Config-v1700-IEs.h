/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_CG_Config_v1700_IEs_H_
#define	_NR_CG_Config_v1700_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_CG_Config_v1700_IEs__twoPHRModeSCG_r17 {
	NR_CG_Config_v1700_IEs__twoPHRModeSCG_r17_enabled	= 0
} e_NR_CG_Config_v1700_IEs__twoPHRModeSCG_r17;

/* Forward declarations */
struct NR_CandidateCellInfoListCPC_r17;
struct NR_CG_Config_v1730_IEs;

/* NR_CG-Config-v1700-IEs */
typedef struct NR_CG_Config_v1700_IEs {
	struct NR_CandidateCellInfoListCPC_r17	*candidateCellInfoListCPC_r17;	/* OPTIONAL */
	long	*twoPHRModeSCG_r17;	/* OPTIONAL */
	struct NR_CG_Config_v1730_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_CG_Config_v1700_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_twoPHRModeSCG_r17_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_CG_Config_v1700_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_CG_Config_v1700_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_CG_Config_v1700_IEs_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_CandidateCellInfoListCPC-r17.h"
#include "NR_CG-Config-v1730-IEs.h"

#endif	/* _NR_CG_Config_v1700_IEs_H_ */
#include <asn_internal.h>