/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_PRACH_ResourceDedicatedBFR_H_
#define	_NR_PRACH_ResourceDedicatedBFR_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_PRACH_ResourceDedicatedBFR_PR {
	NR_PRACH_ResourceDedicatedBFR_PR_NOTHING,	/* No components present */
	NR_PRACH_ResourceDedicatedBFR_PR_ssb,
	NR_PRACH_ResourceDedicatedBFR_PR_csi_RS
} NR_PRACH_ResourceDedicatedBFR_PR;

/* Forward declarations */
struct NR_BFR_SSB_Resource;
struct NR_BFR_CSIRS_Resource;

/* NR_PRACH-ResourceDedicatedBFR */
typedef struct NR_PRACH_ResourceDedicatedBFR {
	NR_PRACH_ResourceDedicatedBFR_PR present;
	union NR_PRACH_ResourceDedicatedBFR_u {
		struct NR_BFR_SSB_Resource	*ssb;
		struct NR_BFR_CSIRS_Resource	*csi_RS;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_PRACH_ResourceDedicatedBFR_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_PRACH_ResourceDedicatedBFR;
extern asn_CHOICE_specifics_t asn_SPC_NR_PRACH_ResourceDedicatedBFR_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_PRACH_ResourceDedicatedBFR_1[2];
extern asn_per_constraints_t asn_PER_type_NR_PRACH_ResourceDedicatedBFR_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_BFR-SSB-Resource.h"
#include "NR_BFR-CSIRS-Resource.h"

#endif	/* _NR_PRACH_ResourceDedicatedBFR_H_ */
#include <asn_internal.h>