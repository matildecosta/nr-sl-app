/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_CA_BandwidthClassNR_H_
#define	_NR_CA_BandwidthClassNR_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_CA_BandwidthClassNR {
	NR_CA_BandwidthClassNR_a	= 0,
	NR_CA_BandwidthClassNR_b	= 1,
	NR_CA_BandwidthClassNR_c	= 2,
	NR_CA_BandwidthClassNR_d	= 3,
	NR_CA_BandwidthClassNR_e	= 4,
	NR_CA_BandwidthClassNR_f	= 5,
	NR_CA_BandwidthClassNR_g	= 6,
	NR_CA_BandwidthClassNR_h	= 7,
	NR_CA_BandwidthClassNR_i	= 8,
	NR_CA_BandwidthClassNR_j	= 9,
	NR_CA_BandwidthClassNR_k	= 10,
	NR_CA_BandwidthClassNR_l	= 11,
	NR_CA_BandwidthClassNR_m	= 12,
	NR_CA_BandwidthClassNR_n	= 13,
	NR_CA_BandwidthClassNR_o	= 14,
	NR_CA_BandwidthClassNR_p	= 15,
	NR_CA_BandwidthClassNR_q	= 16,
	/*
	 * Enumeration is extensible
	 */
	NR_CA_BandwidthClassNR_r2_v1730	= 17,
	NR_CA_BandwidthClassNR_r3_v1730	= 18,
	NR_CA_BandwidthClassNR_r4_v1730	= 19,
	NR_CA_BandwidthClassNR_r5_v1730	= 20,
	NR_CA_BandwidthClassNR_r6_v1730	= 21,
	NR_CA_BandwidthClassNR_r7_v1730	= 22,
	NR_CA_BandwidthClassNR_r8_v1730	= 23,
	NR_CA_BandwidthClassNR_r9_v1730	= 24,
	NR_CA_BandwidthClassNR_r10_v1730	= 25,
	NR_CA_BandwidthClassNR_r11_v1730	= 26,
	NR_CA_BandwidthClassNR_r12_v1730	= 27
} e_NR_CA_BandwidthClassNR;

/* NR_CA-BandwidthClassNR */
typedef long	 NR_CA_BandwidthClassNR_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NR_CA_BandwidthClassNR_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NR_CA_BandwidthClassNR;
extern const asn_INTEGER_specifics_t asn_SPC_NR_CA_BandwidthClassNR_specs_1;
asn_struct_free_f NR_CA_BandwidthClassNR_free;
asn_struct_print_f NR_CA_BandwidthClassNR_print;
asn_constr_check_f NR_CA_BandwidthClassNR_constraint;
xer_type_decoder_f NR_CA_BandwidthClassNR_decode_xer;
xer_type_encoder_f NR_CA_BandwidthClassNR_encode_xer;
per_type_decoder_f NR_CA_BandwidthClassNR_decode_uper;
per_type_encoder_f NR_CA_BandwidthClassNR_encode_uper;
per_type_decoder_f NR_CA_BandwidthClassNR_decode_aper;
per_type_encoder_f NR_CA_BandwidthClassNR_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NR_CA_BandwidthClassNR_H_ */
#include <asn_internal.h>