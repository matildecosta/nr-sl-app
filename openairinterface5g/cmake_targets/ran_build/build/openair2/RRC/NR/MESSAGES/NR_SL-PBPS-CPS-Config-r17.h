/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_SL_PBPS_CPS_Config_r17_H_
#define	_NR_SL_PBPS_CPS_Config_r17_H_


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
typedef enum NR_SL_PBPS_CPS_Config_r17__sl_AllowedResourceSelectionConfig_r17 {
	NR_SL_PBPS_CPS_Config_r17__sl_AllowedResourceSelectionConfig_r17_c1	= 0,
	NR_SL_PBPS_CPS_Config_r17__sl_AllowedResourceSelectionConfig_r17_c2	= 1,
	NR_SL_PBPS_CPS_Config_r17__sl_AllowedResourceSelectionConfig_r17_c3	= 2,
	NR_SL_PBPS_CPS_Config_r17__sl_AllowedResourceSelectionConfig_r17_c4	= 3,
	NR_SL_PBPS_CPS_Config_r17__sl_AllowedResourceSelectionConfig_r17_c5	= 4,
	NR_SL_PBPS_CPS_Config_r17__sl_AllowedResourceSelectionConfig_r17_c6	= 5,
	NR_SL_PBPS_CPS_Config_r17__sl_AllowedResourceSelectionConfig_r17_c7	= 6
} e_NR_SL_PBPS_CPS_Config_r17__sl_AllowedResourceSelectionConfig_r17;
typedef enum NR_SL_PBPS_CPS_Config_r17__sl_Additional_PBPS_Occasion_r17 {
	NR_SL_PBPS_CPS_Config_r17__sl_Additional_PBPS_Occasion_r17_monitored	= 0
} e_NR_SL_PBPS_CPS_Config_r17__sl_Additional_PBPS_Occasion_r17;
typedef enum NR_SL_PBPS_CPS_Config_r17__sl_PartialSensingInactiveTime_r17 {
	NR_SL_PBPS_CPS_Config_r17__sl_PartialSensingInactiveTime_r17_enabled	= 0,
	NR_SL_PBPS_CPS_Config_r17__sl_PartialSensingInactiveTime_r17_disabled	= 1
} e_NR_SL_PBPS_CPS_Config_r17__sl_PartialSensingInactiveTime_r17;

/* NR_SL-PBPS-CPS-Config-r17 */
typedef struct NR_SL_PBPS_CPS_Config_r17 {
	long	*sl_AllowedResourceSelectionConfig_r17;	/* OPTIONAL */
	long	*sl_MinNumCandidateSlotsPeriodic_r17;	/* OPTIONAL */
	struct NR_SL_PBPS_CPS_Config_r17__sl_PBPS_OccasionReservePeriodList_r17 {
		A_SEQUENCE_OF(long) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *sl_PBPS_OccasionReservePeriodList_r17;
	long	*sl_Additional_PBPS_Occasion_r17;	/* OPTIONAL */
	long	*sl_CPS_WindowPeriodic_r17;	/* OPTIONAL */
	long	*sl_MinNumCandidateSlotsAperiodic_r17;	/* OPTIONAL */
	long	*sl_MinNumRssiMeasurementSlots_r17;	/* OPTIONAL */
	long	*sl_DefaultCBR_RandomSelection_r17;	/* OPTIONAL */
	long	*sl_DefaultCBR_PartialSensing_r17;	/* OPTIONAL */
	long	*sl_CPS_WindowAperiodic_r17;	/* OPTIONAL */
	long	*sl_PartialSensingInactiveTime_r17;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_SL_PBPS_CPS_Config_r17_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_sl_AllowedResourceSelectionConfig_r17_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_sl_Additional_PBPS_Occasion_r17_13;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_sl_PartialSensingInactiveTime_r17_21;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_SL_PBPS_CPS_Config_r17;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_SL_PBPS_CPS_Config_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_SL_PBPS_CPS_Config_r17_1[11];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_SL_PBPS_CPS_Config_r17_H_ */
#include <asn_internal.h>