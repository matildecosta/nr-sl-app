/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_Handover_H_
#define	_LTE_Handover_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_Handover__targetRAT_Type {
	LTE_Handover__targetRAT_Type_utra	= 0,
	LTE_Handover__targetRAT_Type_geran	= 1,
	LTE_Handover__targetRAT_Type_cdma2000_1XRTT	= 2,
	LTE_Handover__targetRAT_Type_cdma2000_HRPD	= 3,
	LTE_Handover__targetRAT_Type_nr	= 4,
	LTE_Handover__targetRAT_Type_eutra	= 5,
	LTE_Handover__targetRAT_Type_spare2	= 6,
	LTE_Handover__targetRAT_Type_spare1	= 7
	/*
	 * Enumeration is extensible
	 */
} e_LTE_Handover__targetRAT_Type;

/* Forward declarations */
struct LTE_SI_OrPSI_GERAN;

/* LTE_Handover */
typedef struct LTE_Handover {
	long	 targetRAT_Type;
	OCTET_STRING_t	 targetRAT_MessageContainer;
	OCTET_STRING_t	*nas_SecurityParamFromEUTRA;	/* OPTIONAL */
	struct LTE_SI_OrPSI_GERAN	*systemInformation;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_Handover_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_targetRAT_Type_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_Handover;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_Handover_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_Handover_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_SI-OrPSI-GERAN.h"

#endif	/* _LTE_Handover_H_ */
#include <asn_internal.h>