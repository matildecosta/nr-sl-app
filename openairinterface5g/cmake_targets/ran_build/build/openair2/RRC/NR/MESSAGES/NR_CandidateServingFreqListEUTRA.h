/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_CandidateServingFreqListEUTRA_H_
#define	_NR_CandidateServingFreqListEUTRA_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_ARFCN-ValueEUTRA.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NR_CandidateServingFreqListEUTRA */
typedef struct NR_CandidateServingFreqListEUTRA {
	A_SEQUENCE_OF(NR_ARFCN_ValueEUTRA_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_CandidateServingFreqListEUTRA_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_CandidateServingFreqListEUTRA;
extern asn_SET_OF_specifics_t asn_SPC_NR_CandidateServingFreqListEUTRA_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_CandidateServingFreqListEUTRA_1[1];
extern asn_per_constraints_t asn_PER_type_NR_CandidateServingFreqListEUTRA_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _NR_CandidateServingFreqListEUTRA_H_ */
#include <asn_internal.h>