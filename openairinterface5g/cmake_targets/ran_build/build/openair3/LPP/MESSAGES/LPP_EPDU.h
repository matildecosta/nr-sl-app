/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_EPDU_H_
#define	_LPP_EPDU_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LPP_EPDU-Identifier.h"
#include "LPP_EPDU-Body.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LPP_EPDU */
typedef struct LPP_EPDU {
	LPP_EPDU_Identifier_t	 ePDU_Identifier;
	LPP_EPDU_Body_t	 ePDU_Body;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_EPDU_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LPP_EPDU;
extern asn_SEQUENCE_specifics_t asn_SPC_LPP_EPDU_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_EPDU_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_EPDU_H_ */
#include <asn_internal.h>