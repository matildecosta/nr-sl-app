/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_BandParameters_v1470_H_
#define	_LTE_BandParameters_v1470_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_MIMO_CA_ParametersPerBoBC_v1470;

/* LTE_BandParameters-v1470 */
typedef struct LTE_BandParameters_v1470 {
	struct LTE_MIMO_CA_ParametersPerBoBC_v1470	*bandParametersDL_v1470;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_BandParameters_v1470_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_BandParameters_v1470;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_BandParameters_v1470_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_BandParameters_v1470_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_MIMO-CA-ParametersPerBoBC-v1470.h"

#endif	/* _LTE_BandParameters_v1470_H_ */
#include <asn_internal.h>