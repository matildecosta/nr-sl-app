/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_SL_ConfigCommonNR_r16_H_
#define	_NR_SL_ConfigCommonNR_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_SL_ConfigCommonNR_r16__sl_CSI_Acquisition_r16 {
	NR_SL_ConfigCommonNR_r16__sl_CSI_Acquisition_r16_enabled	= 0
} e_NR_SL_ConfigCommonNR_r16__sl_CSI_Acquisition_r16;
typedef enum NR_SL_ConfigCommonNR_r16__t400_r16 {
	NR_SL_ConfigCommonNR_r16__t400_r16_ms100	= 0,
	NR_SL_ConfigCommonNR_r16__t400_r16_ms200	= 1,
	NR_SL_ConfigCommonNR_r16__t400_r16_ms300	= 2,
	NR_SL_ConfigCommonNR_r16__t400_r16_ms400	= 3,
	NR_SL_ConfigCommonNR_r16__t400_r16_ms600	= 4,
	NR_SL_ConfigCommonNR_r16__t400_r16_ms1000	= 5,
	NR_SL_ConfigCommonNR_r16__t400_r16_ms1500	= 6,
	NR_SL_ConfigCommonNR_r16__t400_r16_ms2000	= 7
} e_NR_SL_ConfigCommonNR_r16__t400_r16;
typedef enum NR_SL_ConfigCommonNR_r16__sl_MaxNumConsecutiveDTX_r16 {
	NR_SL_ConfigCommonNR_r16__sl_MaxNumConsecutiveDTX_r16_n1	= 0,
	NR_SL_ConfigCommonNR_r16__sl_MaxNumConsecutiveDTX_r16_n2	= 1,
	NR_SL_ConfigCommonNR_r16__sl_MaxNumConsecutiveDTX_r16_n3	= 2,
	NR_SL_ConfigCommonNR_r16__sl_MaxNumConsecutiveDTX_r16_n4	= 3,
	NR_SL_ConfigCommonNR_r16__sl_MaxNumConsecutiveDTX_r16_n6	= 4,
	NR_SL_ConfigCommonNR_r16__sl_MaxNumConsecutiveDTX_r16_n8	= 5,
	NR_SL_ConfigCommonNR_r16__sl_MaxNumConsecutiveDTX_r16_n16	= 6,
	NR_SL_ConfigCommonNR_r16__sl_MaxNumConsecutiveDTX_r16_n32	= 7
} e_NR_SL_ConfigCommonNR_r16__sl_MaxNumConsecutiveDTX_r16;

/* Forward declarations */
struct NR_SL_UE_SelectedConfig_r16;
struct NR_SL_NR_AnchorCarrierFreqList_r16;
struct NR_SL_EUTRA_AnchorCarrierFreqList_r16;
struct NR_SL_MeasConfigCommon_r16;
struct NR_SL_FreqConfigCommon_r16;
struct NR_SL_RadioBearerConfig_r16;
struct NR_SL_RLC_BearerConfig_r16;

/* NR_SL-ConfigCommonNR-r16 */
typedef struct NR_SL_ConfigCommonNR_r16 {
	struct NR_SL_ConfigCommonNR_r16__sl_FreqInfoList_r16 {
		A_SEQUENCE_OF(struct NR_SL_FreqConfigCommon_r16) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *sl_FreqInfoList_r16;
	struct NR_SL_UE_SelectedConfig_r16	*sl_UE_SelectedConfig_r16;	/* OPTIONAL */
	struct NR_SL_NR_AnchorCarrierFreqList_r16	*sl_NR_AnchorCarrierFreqList_r16;	/* OPTIONAL */
	struct NR_SL_EUTRA_AnchorCarrierFreqList_r16	*sl_EUTRA_AnchorCarrierFreqList_r16;	/* OPTIONAL */
	struct NR_SL_ConfigCommonNR_r16__sl_RadioBearerConfigList_r16 {
		A_SEQUENCE_OF(struct NR_SL_RadioBearerConfig_r16) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *sl_RadioBearerConfigList_r16;
	struct NR_SL_ConfigCommonNR_r16__sl_RLC_BearerConfigList_r16 {
		A_SEQUENCE_OF(struct NR_SL_RLC_BearerConfig_r16) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *sl_RLC_BearerConfigList_r16;
	struct NR_SL_MeasConfigCommon_r16	*sl_MeasConfigCommon_r16;	/* OPTIONAL */
	long	*sl_CSI_Acquisition_r16;	/* OPTIONAL */
	long	*sl_OffsetDFN_r16;	/* OPTIONAL */
	long	*t400_r16;	/* OPTIONAL */
	long	*sl_MaxNumConsecutiveDTX_r16;	/* OPTIONAL */
	long	*sl_SSB_PriorityNR_r16;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_SL_ConfigCommonNR_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_sl_CSI_Acquisition_r16_12;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_t400_r16_15;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_sl_MaxNumConsecutiveDTX_r16_24;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_SL_ConfigCommonNR_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_SL_ConfigCommonNR_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_SL_ConfigCommonNR_r16_1[12];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_SL-UE-SelectedConfig-r16.h"
#include "NR_SL-NR-AnchorCarrierFreqList-r16.h"
#include "NR_SL-EUTRA-AnchorCarrierFreqList-r16.h"
#include "NR_SL-MeasConfigCommon-r16.h"
#include "NR_SL-FreqConfigCommon-r16.h"
#include "NR_SL-RadioBearerConfig-r16.h"
#include "NR_SL-RLC-BearerConfig-r16.h"

#endif	/* _NR_SL_ConfigCommonNR_r16_H_ */
#include <asn_internal.h>