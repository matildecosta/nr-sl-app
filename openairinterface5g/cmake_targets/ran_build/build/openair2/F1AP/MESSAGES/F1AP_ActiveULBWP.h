/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair2/F1AP/MESSAGES/ASN1/R16.3.1/38473-g31.asn"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair2/F1AP/MESSAGES`
 */

#ifndef	_F1AP_ActiveULBWP_H_
#define	_F1AP_ActiveULBWP_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include "F1AP_SRSConfig.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum F1AP_ActiveULBWP__subcarrierSpacing {
	F1AP_ActiveULBWP__subcarrierSpacing_kHz15	= 0,
	F1AP_ActiveULBWP__subcarrierSpacing_kHz30	= 1,
	F1AP_ActiveULBWP__subcarrierSpacing_kHz60	= 2,
	F1AP_ActiveULBWP__subcarrierSpacing_kHz120	= 3
	/*
	 * Enumeration is extensible
	 */
} e_F1AP_ActiveULBWP__subcarrierSpacing;
typedef enum F1AP_ActiveULBWP__cyclicPrefix {
	F1AP_ActiveULBWP__cyclicPrefix_normal	= 0,
	F1AP_ActiveULBWP__cyclicPrefix_extended	= 1
} e_F1AP_ActiveULBWP__cyclicPrefix;
typedef enum F1AP_ActiveULBWP__shift7dot5kHz {
	F1AP_ActiveULBWP__shift7dot5kHz_true	= 0
	/*
	 * Enumeration is extensible
	 */
} e_F1AP_ActiveULBWP__shift7dot5kHz;

/* Forward declarations */
struct F1AP_ProtocolExtensionContainer;

/* F1AP_ActiveULBWP */
typedef struct F1AP_ActiveULBWP {
	long	 locationAndBandwidth;
	long	 subcarrierSpacing;
	long	 cyclicPrefix;
	long	 txDirectCurrentLocation;
	long	*shift7dot5kHz;	/* OPTIONAL */
	F1AP_SRSConfig_t	 sRSConfig;
	struct F1AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} F1AP_ActiveULBWP_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_F1AP_subcarrierSpacing_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_F1AP_cyclicPrefix_9;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_F1AP_shift7dot5kHz_13;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_F1AP_ActiveULBWP;
extern asn_SEQUENCE_specifics_t asn_SPC_F1AP_ActiveULBWP_specs_1;
extern asn_TYPE_member_t asn_MBR_F1AP_ActiveULBWP_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_ActiveULBWP_H_ */
#include <asn_internal.h>