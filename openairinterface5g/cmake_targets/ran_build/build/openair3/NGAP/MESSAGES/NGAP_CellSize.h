/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair3/NGAP/MESSAGES/ASN1/ngap-15.8.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -no-gen-example -fno-include-deps -findirect-choice -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair3/NGAP/MESSAGES`
 */

#ifndef	_NGAP_CellSize_H_
#define	_NGAP_CellSize_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_CellSize {
	NGAP_CellSize_verysmall	= 0,
	NGAP_CellSize_small	= 1,
	NGAP_CellSize_medium	= 2,
	NGAP_CellSize_large	= 3
	/*
	 * Enumeration is extensible
	 */
} e_NGAP_CellSize;

/* NGAP_CellSize */
typedef long	 NGAP_CellSize_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NGAP_CellSize_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NGAP_CellSize;
extern const asn_INTEGER_specifics_t asn_SPC_NGAP_CellSize_specs_1;
asn_struct_free_f NGAP_CellSize_free;
asn_struct_print_f NGAP_CellSize_print;
asn_constr_check_f NGAP_CellSize_constraint;
xer_type_decoder_f NGAP_CellSize_decode_xer;
xer_type_encoder_f NGAP_CellSize_encode_xer;
per_type_decoder_f NGAP_CellSize_decode_uper;
per_type_encoder_f NGAP_CellSize_encode_uper;
per_type_decoder_f NGAP_CellSize_decode_aper;
per_type_encoder_f NGAP_CellSize_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_CellSize_H_ */
#include <asn_internal.h>