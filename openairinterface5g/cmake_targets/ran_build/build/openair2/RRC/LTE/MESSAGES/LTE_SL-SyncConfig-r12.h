/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_SL_SyncConfig_r12_H_
#define	_LTE_SL_SyncConfig_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_SL-CP-Len-r12.h"
#include "LTE_SL-OffsetIndicatorSync-r12.h"
#include "LTE_SLSSID-r12.h"
#include "LTE_SL-TxParameters-r12.h"
#include "LTE_RSRP-RangeSL-r12.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>
#include "LTE_PhysCellId.h"
#include <NativeEnumerated.h>
#include "LTE_SL-OffsetIndicatorSync-v1430.h"
#include "LTE_SL-OffsetIndicatorSync-r14.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SL_SyncConfig_r12__rxParamsNCell_r12__discSyncWindow_r12 {
	LTE_SL_SyncConfig_r12__rxParamsNCell_r12__discSyncWindow_r12_w1	= 0,
	LTE_SL_SyncConfig_r12__rxParamsNCell_r12__discSyncWindow_r12_w2	= 1
} e_LTE_SL_SyncConfig_r12__rxParamsNCell_r12__discSyncWindow_r12;
typedef enum LTE_SL_SyncConfig_r12__ext1__syncTxPeriodic_r13 {
	LTE_SL_SyncConfig_r12__ext1__syncTxPeriodic_r13_true	= 0
} e_LTE_SL_SyncConfig_r12__ext1__syncTxPeriodic_r13;
typedef enum LTE_SL_SyncConfig_r12__ext2__gnss_Sync_r14 {
	LTE_SL_SyncConfig_r12__ext2__gnss_Sync_r14_true	= 0
} e_LTE_SL_SyncConfig_r12__ext2__gnss_Sync_r14;
typedef enum LTE_SL_SyncConfig_r12__ext4__slss_TxDisabled_r15 {
	LTE_SL_SyncConfig_r12__ext4__slss_TxDisabled_r15_true	= 0
} e_LTE_SL_SyncConfig_r12__ext4__slss_TxDisabled_r15;

/* LTE_SL-SyncConfig-r12 */
typedef struct LTE_SL_SyncConfig_r12 {
	LTE_SL_CP_Len_r12_t	 syncCP_Len_r12;
	LTE_SL_OffsetIndicatorSync_r12_t	 syncOffsetIndicator_r12;
	LTE_SLSSID_r12_t	 slssid_r12;
	struct LTE_SL_SyncConfig_r12__txParameters_r12 {
		LTE_SL_TxParameters_r12_t	 syncTxParameters_r12;
		LTE_RSRP_RangeSL_r12_t	 syncTxThreshIC_r12;
		BIT_STRING_t	*syncInfoReserved_r12;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *txParameters_r12;
	struct LTE_SL_SyncConfig_r12__rxParamsNCell_r12 {
		LTE_PhysCellId_t	 physCellId_r12;
		long	 discSyncWindow_r12;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *rxParamsNCell_r12;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_SL_SyncConfig_r12__ext1 {
		long	*syncTxPeriodic_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct LTE_SL_SyncConfig_r12__ext2 {
		LTE_SL_OffsetIndicatorSync_v1430_t	*syncOffsetIndicator_v1430;	/* OPTIONAL */
		long	*gnss_Sync_r14;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct LTE_SL_SyncConfig_r12__ext3 {
		LTE_SL_OffsetIndicatorSync_r14_t	*syncOffsetIndicator2_r14;	/* OPTIONAL */
		LTE_SL_OffsetIndicatorSync_r14_t	*syncOffsetIndicator3_r14;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	struct LTE_SL_SyncConfig_r12__ext4 {
		long	*slss_TxDisabled_r15;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext4;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SL_SyncConfig_r12_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_discSyncWindow_r12_11;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_syncTxPeriodic_r13_16;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_gnss_Sync_r14_20;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_slss_TxDisabled_r15_26;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SL_SyncConfig_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SL_SyncConfig_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SL_SyncConfig_r12_1[9];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_SL_SyncConfig_r12_H_ */
#include <asn_internal.h>