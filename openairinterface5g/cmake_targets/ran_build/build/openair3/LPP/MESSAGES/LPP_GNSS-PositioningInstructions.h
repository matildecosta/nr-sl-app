/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_GNSS_PositioningInstructions_H_
#define	_LPP_GNSS_PositioningInstructions_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LPP_GNSS-ID-Bitmap.h"
#include <BOOLEAN.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LPP_GNSS_PositioningInstructions__ext1__ha_GNSS_Req_r15 {
	LPP_GNSS_PositioningInstructions__ext1__ha_GNSS_Req_r15_true	= 0
} e_LPP_GNSS_PositioningInstructions__ext1__ha_GNSS_Req_r15;

/* LPP_GNSS-PositioningInstructions */
typedef struct LPP_GNSS_PositioningInstructions {
	LPP_GNSS_ID_Bitmap_t	 gnss_Methods;
	BOOLEAN_t	 fineTimeAssistanceMeasReq;
	BOOLEAN_t	 adrMeasReq;
	BOOLEAN_t	 multiFreqMeasReq;
	BOOLEAN_t	 assistanceAvailability;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LPP_GNSS_PositioningInstructions__ext1 {
		long	*ha_GNSS_Req_r15;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_GNSS_PositioningInstructions_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LPP_ha_GNSS_Req_r15_9;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LPP_GNSS_PositioningInstructions;
extern asn_SEQUENCE_specifics_t asn_SPC_LPP_GNSS_PositioningInstructions_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_GNSS_PositioningInstructions_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_GNSS_PositioningInstructions_H_ */
#include <asn_internal.h>