/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_MeasResultRLFNR_r16_H_
#define	_NR_MeasResultRLFNR_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_MeasQuantityResults;
struct NR_ResultsPerSSB_IndexList;
struct NR_ResultsPerCSI_RS_IndexList;

/* NR_MeasResultRLFNR-r16 */
typedef struct NR_MeasResultRLFNR_r16 {
	struct NR_MeasResultRLFNR_r16__measResult_r16 {
		struct NR_MeasResultRLFNR_r16__measResult_r16__cellResults_r16 {
			struct NR_MeasQuantityResults	*resultsSSB_Cell_r16;	/* OPTIONAL */
			struct NR_MeasQuantityResults	*resultsCSI_RS_Cell_r16;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} cellResults_r16;
		struct NR_MeasResultRLFNR_r16__measResult_r16__rsIndexResults_r16 {
			struct NR_ResultsPerSSB_IndexList	*resultsSSB_Indexes_r16;	/* OPTIONAL */
			BIT_STRING_t	*ssbRLMConfigBitmap_r16;	/* OPTIONAL */
			struct NR_ResultsPerCSI_RS_IndexList	*resultsCSI_RS_Indexes_r16;	/* OPTIONAL */
			BIT_STRING_t	*csi_rsRLMConfigBitmap_r16;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *rsIndexResults_r16;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} measResult_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_MeasResultRLFNR_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_MeasResultRLFNR_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_MeasResultRLFNR_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_MeasResultRLFNR_r16_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_MeasQuantityResults.h"
#include "NR_ResultsPerSSB-IndexList.h"
#include "NR_ResultsPerCSI-RS-IndexList.h"

#endif	/* _NR_MeasResultRLFNR_r16_H_ */
#include <asn_internal.h>