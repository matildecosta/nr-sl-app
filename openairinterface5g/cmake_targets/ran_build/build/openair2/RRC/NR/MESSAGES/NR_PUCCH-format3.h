/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_PUCCH_format3_H_
#define	_NR_PUCCH_format3_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NR_PUCCH-format3 */
typedef struct NR_PUCCH_format3 {
	long	 nrofPRBs;
	long	 nrofSymbols;
	long	 startingSymbolIndex;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_PUCCH_format3_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_PUCCH_format3;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_PUCCH_format3_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_PUCCH_format3_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_PUCCH_format3_H_ */
#include <asn_internal.h>