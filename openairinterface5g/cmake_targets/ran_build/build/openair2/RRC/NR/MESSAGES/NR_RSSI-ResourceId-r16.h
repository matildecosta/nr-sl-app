/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_RSSI_ResourceId_r16_H_
#define	_NR_RSSI_ResourceId_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NR_RSSI-ResourceId-r16 */
typedef long	 NR_RSSI_ResourceId_r16_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NR_RSSI_ResourceId_r16_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NR_RSSI_ResourceId_r16;
asn_struct_free_f NR_RSSI_ResourceId_r16_free;
asn_struct_print_f NR_RSSI_ResourceId_r16_print;
asn_constr_check_f NR_RSSI_ResourceId_r16_constraint;
xer_type_decoder_f NR_RSSI_ResourceId_r16_decode_xer;
xer_type_encoder_f NR_RSSI_ResourceId_r16_encode_xer;
per_type_decoder_f NR_RSSI_ResourceId_r16_decode_uper;
per_type_encoder_f NR_RSSI_ResourceId_r16_encode_uper;
per_type_decoder_f NR_RSSI_ResourceId_r16_decode_aper;
per_type_encoder_f NR_RSSI_ResourceId_r16_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NR_RSSI_ResourceId_r16_H_ */
#include <asn_internal.h>