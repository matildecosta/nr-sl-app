/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_MRDC_Parameters_v1620_H_
#define	_NR_MRDC_Parameters_v1620_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config0_r16 {
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config0_r16_n20	= 0,
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config0_r16_n40	= 1,
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config0_r16_n50	= 2,
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config0_r16_n60	= 3,
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config0_r16_n70	= 4,
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config0_r16_n80	= 5,
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config0_r16_n90	= 6,
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config0_r16_n100	= 7
} e_NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config0_r16;
typedef enum NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config1_r16 {
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config1_r16_n20	= 0,
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config1_r16_n40	= 1,
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config1_r16_n50	= 2,
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config1_r16_n60	= 3,
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config1_r16_n70	= 4,
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config1_r16_n80	= 5,
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config1_r16_n90	= 6,
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config1_r16_n100	= 7
} e_NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config1_r16;
typedef enum NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config2_r16 {
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config2_r16_n20	= 0,
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config2_r16_n40	= 1,
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config2_r16_n50	= 2,
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config2_r16_n60	= 3,
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config2_r16_n70	= 4,
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config2_r16_n80	= 5,
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config2_r16_n90	= 6,
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config2_r16_n100	= 7
} e_NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config2_r16;
typedef enum NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config3_r16 {
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config3_r16_n20	= 0,
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config3_r16_n40	= 1,
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config3_r16_n50	= 2,
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config3_r16_n60	= 3,
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config3_r16_n70	= 4,
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config3_r16_n80	= 5,
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config3_r16_n90	= 6,
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config3_r16_n100	= 7
} e_NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config3_r16;
typedef enum NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config4_r16 {
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config4_r16_n20	= 0,
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config4_r16_n40	= 1,
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config4_r16_n50	= 2,
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config4_r16_n60	= 3,
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config4_r16_n70	= 4,
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config4_r16_n80	= 5,
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config4_r16_n90	= 6,
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config4_r16_n100	= 7
} e_NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config4_r16;
typedef enum NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config5_r16 {
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config5_r16_n20	= 0,
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config5_r16_n40	= 1,
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config5_r16_n50	= 2,
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config5_r16_n60	= 3,
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config5_r16_n70	= 4,
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config5_r16_n80	= 5,
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config5_r16_n90	= 6,
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config5_r16_n100	= 7
} e_NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config5_r16;
typedef enum NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config6_r16 {
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config6_r16_n20	= 0,
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config6_r16_n40	= 1,
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config6_r16_n50	= 2,
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config6_r16_n60	= 3,
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config6_r16_n70	= 4,
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config6_r16_n80	= 5,
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config6_r16_n90	= 6,
	NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config6_r16_n100	= 7
} e_NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16__eutra_TDD_Config6_r16;
typedef enum NR_MRDC_Parameters_v1620__tdm_restrictionTDD_endc_r16 {
	NR_MRDC_Parameters_v1620__tdm_restrictionTDD_endc_r16_supported	= 0
} e_NR_MRDC_Parameters_v1620__tdm_restrictionTDD_endc_r16;
typedef enum NR_MRDC_Parameters_v1620__tdm_restrictionFDD_endc_r16 {
	NR_MRDC_Parameters_v1620__tdm_restrictionFDD_endc_r16_supported	= 0
} e_NR_MRDC_Parameters_v1620__tdm_restrictionFDD_endc_r16;
typedef enum NR_MRDC_Parameters_v1620__singleUL_HARQ_offsetTDD_PCell_r16 {
	NR_MRDC_Parameters_v1620__singleUL_HARQ_offsetTDD_PCell_r16_supported	= 0
} e_NR_MRDC_Parameters_v1620__singleUL_HARQ_offsetTDD_PCell_r16;
typedef enum NR_MRDC_Parameters_v1620__tdm_restrictionDualTX_FDD_endc_r16 {
	NR_MRDC_Parameters_v1620__tdm_restrictionDualTX_FDD_endc_r16_supported	= 0
} e_NR_MRDC_Parameters_v1620__tdm_restrictionDualTX_FDD_endc_r16;

/* NR_MRDC-Parameters-v1620 */
typedef struct NR_MRDC_Parameters_v1620 {
	struct NR_MRDC_Parameters_v1620__maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16 {
		long	*eutra_TDD_Config0_r16;	/* OPTIONAL */
		long	*eutra_TDD_Config1_r16;	/* OPTIONAL */
		long	*eutra_TDD_Config2_r16;	/* OPTIONAL */
		long	*eutra_TDD_Config3_r16;	/* OPTIONAL */
		long	*eutra_TDD_Config4_r16;	/* OPTIONAL */
		long	*eutra_TDD_Config5_r16;	/* OPTIONAL */
		long	*eutra_TDD_Config6_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *maxUplinkDutyCycle_interBandENDC_TDD_PC2_r16;
	long	*tdm_restrictionTDD_endc_r16;	/* OPTIONAL */
	long	*tdm_restrictionFDD_endc_r16;	/* OPTIONAL */
	long	*singleUL_HARQ_offsetTDD_PCell_r16;	/* OPTIONAL */
	long	*tdm_restrictionDualTX_FDD_endc_r16;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_MRDC_Parameters_v1620_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_eutra_TDD_Config0_r16_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_eutra_TDD_Config1_r16_12;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_eutra_TDD_Config2_r16_21;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_eutra_TDD_Config3_r16_30;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_eutra_TDD_Config4_r16_39;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_eutra_TDD_Config5_r16_48;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_eutra_TDD_Config6_r16_57;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_tdm_restrictionTDD_endc_r16_66;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_tdm_restrictionFDD_endc_r16_68;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_singleUL_HARQ_offsetTDD_PCell_r16_70;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_tdm_restrictionDualTX_FDD_endc_r16_72;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_MRDC_Parameters_v1620;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_MRDC_Parameters_v1620_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_MRDC_Parameters_v1620_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_MRDC_Parameters_v1620_H_ */
#include <asn_internal.h>