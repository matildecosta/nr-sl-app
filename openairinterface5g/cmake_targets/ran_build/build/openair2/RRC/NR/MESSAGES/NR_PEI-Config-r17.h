/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_PEI_Config_r17_H_
#define	_NR_PEI_Config_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include "NR_SubgroupConfig-r17.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_PEI_Config_r17__po_NumPerPEI_r17 {
	NR_PEI_Config_r17__po_NumPerPEI_r17_po1	= 0,
	NR_PEI_Config_r17__po_NumPerPEI_r17_po2	= 1,
	NR_PEI_Config_r17__po_NumPerPEI_r17_po4	= 2,
	NR_PEI_Config_r17__po_NumPerPEI_r17_po8	= 3
} e_NR_PEI_Config_r17__po_NumPerPEI_r17;
typedef enum NR_PEI_Config_r17__lastUsedCellOnly_r17 {
	NR_PEI_Config_r17__lastUsedCellOnly_r17_true	= 0
} e_NR_PEI_Config_r17__lastUsedCellOnly_r17;

/* NR_PEI-Config-r17 */
typedef struct NR_PEI_Config_r17 {
	long	 po_NumPerPEI_r17;
	long	 payloadSizeDCI_2_7_r17;
	long	 pei_FrameOffset_r17;
	NR_SubgroupConfig_r17_t	 subgroupConfig_r17;
	long	*lastUsedCellOnly_r17;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_PEI_Config_r17_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_po_NumPerPEI_r17_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_lastUsedCellOnly_r17_10;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_PEI_Config_r17;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_PEI_Config_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_PEI_Config_r17_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_PEI_Config_r17_H_ */
#include <asn_internal.h>