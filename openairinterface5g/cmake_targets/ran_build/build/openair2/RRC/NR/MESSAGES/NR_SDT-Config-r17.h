/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_SDT_Config_r17_H_
#define	_NR_SDT_Config_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "NR_DRB-Identity.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_SDT_Config_r17__sdt_SRB2_Indication_r17 {
	NR_SDT_Config_r17__sdt_SRB2_Indication_r17_allowed	= 0
} e_NR_SDT_Config_r17__sdt_SRB2_Indication_r17;
typedef enum NR_SDT_Config_r17__sdt_DRB_ContinueROHC_r17 {
	NR_SDT_Config_r17__sdt_DRB_ContinueROHC_r17_cell	= 0,
	NR_SDT_Config_r17__sdt_DRB_ContinueROHC_r17_rna	= 1
} e_NR_SDT_Config_r17__sdt_DRB_ContinueROHC_r17;

/* Forward declarations */
struct NR_SetupRelease_SDT_CG_Config_r17;

/* NR_SDT-Config-r17 */
typedef struct NR_SDT_Config_r17 {
	struct NR_SDT_Config_r17__sdt_DRB_List_r17 {
		A_SEQUENCE_OF(NR_DRB_Identity_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *sdt_DRB_List_r17;
	long	*sdt_SRB2_Indication_r17;	/* OPTIONAL */
	struct NR_SetupRelease_SDT_CG_Config_r17	*sdt_MAC_PHY_CG_Config_r17;	/* OPTIONAL */
	long	*sdt_DRB_ContinueROHC_r17;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_SDT_Config_r17_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_sdt_SRB2_Indication_r17_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_sdt_DRB_ContinueROHC_r17_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_SDT_Config_r17;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_SDT_Config_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_SDT_Config_r17_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_SetupRelease.h"

#endif	/* _NR_SDT_Config_r17_H_ */
#include <asn_internal.h>