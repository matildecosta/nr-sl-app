/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_BandCombinationParameters_v1390_H_
#define	_LTE_BandCombinationParameters_v1390_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_BandCombinationParameters_v1390__ue_CA_PowerClass_N_r13 {
	LTE_BandCombinationParameters_v1390__ue_CA_PowerClass_N_r13_class2	= 0
} e_LTE_BandCombinationParameters_v1390__ue_CA_PowerClass_N_r13;

/* LTE_BandCombinationParameters-v1390 */
typedef struct LTE_BandCombinationParameters_v1390 {
	long	*ue_CA_PowerClass_N_r13;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_BandCombinationParameters_v1390_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_ue_CA_PowerClass_N_r13_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_BandCombinationParameters_v1390;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_BandCombinationParameters_v1390_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_BandCombinationParameters_v1390_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_BandCombinationParameters_v1390_H_ */
#include <asn_internal.h>