/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_RACH_ConfigDedicated_H_
#define	_NR_RACH_ConfigDedicated_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_CFRA;
struct NR_RA_Prioritization;
struct NR_CFRA_TwoStep_r16;

/* NR_RACH-ConfigDedicated */
typedef struct NR_RACH_ConfigDedicated {
	struct NR_CFRA	*cfra;	/* OPTIONAL */
	struct NR_RA_Prioritization	*ra_Prioritization;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_RACH_ConfigDedicated__ext1 {
		struct NR_RA_Prioritization	*ra_PrioritizationTwoStep_r16;	/* OPTIONAL */
		struct NR_CFRA_TwoStep_r16	*cfra_TwoStep_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_RACH_ConfigDedicated_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_RACH_ConfigDedicated;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_RACH_ConfigDedicated_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_RACH_ConfigDedicated_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_CFRA.h"
#include "NR_RA-Prioritization.h"
#include "NR_CFRA-TwoStep-r16.h"

#endif	/* _NR_RACH_ConfigDedicated_H_ */
#include <asn_internal.h>