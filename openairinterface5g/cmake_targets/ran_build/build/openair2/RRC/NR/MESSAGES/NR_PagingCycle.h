/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_PagingCycle_H_
#define	_NR_PagingCycle_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_PagingCycle {
	NR_PagingCycle_rf32	= 0,
	NR_PagingCycle_rf64	= 1,
	NR_PagingCycle_rf128	= 2,
	NR_PagingCycle_rf256	= 3
} e_NR_PagingCycle;

/* NR_PagingCycle */
typedef long	 NR_PagingCycle_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NR_PagingCycle_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NR_PagingCycle;
extern const asn_INTEGER_specifics_t asn_SPC_NR_PagingCycle_specs_1;
asn_struct_free_f NR_PagingCycle_free;
asn_struct_print_f NR_PagingCycle_print;
asn_constr_check_f NR_PagingCycle_constraint;
xer_type_decoder_f NR_PagingCycle_decode_xer;
xer_type_encoder_f NR_PagingCycle_encode_xer;
per_type_decoder_f NR_PagingCycle_decode_uper;
per_type_encoder_f NR_PagingCycle_encode_uper;
per_type_decoder_f NR_PagingCycle_decode_aper;
per_type_encoder_f NR_PagingCycle_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NR_PagingCycle_H_ */
#include <asn_internal.h>