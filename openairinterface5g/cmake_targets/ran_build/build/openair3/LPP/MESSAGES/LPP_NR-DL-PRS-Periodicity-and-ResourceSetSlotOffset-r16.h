/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16_H_
#define	_LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16_PR {
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16_PR_NOTHING,	/* No components present */
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16_PR_scs15_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16_PR_scs30_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16_PR_scs60_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16_PR_scs120_r16
	/* Extensions may appear below */
	
} LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16_PR;
typedef enum LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs15_r16_PR {
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs15_r16_PR_NOTHING,	/* No components present */
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs15_r16_PR_n4_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs15_r16_PR_n5_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs15_r16_PR_n8_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs15_r16_PR_n10_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs15_r16_PR_n16_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs15_r16_PR_n20_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs15_r16_PR_n32_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs15_r16_PR_n40_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs15_r16_PR_n64_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs15_r16_PR_n80_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs15_r16_PR_n160_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs15_r16_PR_n320_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs15_r16_PR_n640_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs15_r16_PR_n1280_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs15_r16_PR_n2560_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs15_r16_PR_n5120_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs15_r16_PR_n10240_r16
	/* Extensions may appear below */
	
} LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs15_r16_PR;
typedef enum LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs30_r16_PR {
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs30_r16_PR_NOTHING,	/* No components present */
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs30_r16_PR_n8_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs30_r16_PR_n10_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs30_r16_PR_n16_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs30_r16_PR_n20_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs30_r16_PR_n32_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs30_r16_PR_n40_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs30_r16_PR_n64_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs30_r16_PR_n80_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs30_r16_PR_n128_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs30_r16_PR_n160_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs30_r16_PR_n320_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs30_r16_PR_n640_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs30_r16_PR_n1280_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs30_r16_PR_n2560_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs30_r16_PR_n5120_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs30_r16_PR_n10240_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs30_r16_PR_n20480_r16
	/* Extensions may appear below */
	
} LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs30_r16_PR;
typedef enum LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs60_r16_PR {
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs60_r16_PR_NOTHING,	/* No components present */
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs60_r16_PR_n16_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs60_r16_PR_n20_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs60_r16_PR_n32_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs60_r16_PR_n40_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs60_r16_PR_n64_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs60_r16_PR_n80_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs60_r16_PR_n128_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs60_r16_PR_n160_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs60_r16_PR_n256_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs60_r16_PR_n320_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs60_r16_PR_n640_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs60_r16_PR_n1280_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs60_r16_PR_n2560_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs60_r16_PR_n5120_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs60_r16_PR_n10240_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs60_r16_PR_n20480_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs60_r16_PR_n40960_r16
	/* Extensions may appear below */
	
} LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs60_r16_PR;
typedef enum LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs120_r16_PR {
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs120_r16_PR_NOTHING,	/* No components present */
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs120_r16_PR_n32_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs120_r16_PR_n40_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs120_r16_PR_n64_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs120_r16_PR_n80_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs120_r16_PR_n128_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs120_r16_PR_n160_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs120_r16_PR_n256_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs120_r16_PR_n320_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs120_r16_PR_n512_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs120_r16_PR_n640_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs120_r16_PR_n1280_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs120_r16_PR_n2560_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs120_r16_PR_n5120_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs120_r16_PR_n10240_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs120_r16_PR_n20480_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs120_r16_PR_n40960_r16,
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs120_r16_PR_n81920_r16
	/* Extensions may appear below */
	
} LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs120_r16_PR;

/* LPP_NR-DL-PRS-Periodicity-and-ResourceSetSlotOffset-r16 */
typedef struct LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16 {
	LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16_PR present;
	union LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16_u {
		struct LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs15_r16 {
			LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs15_r16_PR present;
			union LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__LPP_scs15_r16_u {
				long	 n4_r16;
				long	 n5_r16;
				long	 n8_r16;
				long	 n10_r16;
				long	 n16_r16;
				long	 n20_r16;
				long	 n32_r16;
				long	 n40_r16;
				long	 n64_r16;
				long	 n80_r16;
				long	 n160_r16;
				long	 n320_r16;
				long	 n640_r16;
				long	 n1280_r16;
				long	 n2560_r16;
				long	 n5120_r16;
				long	 n10240_r16;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *scs15_r16;
		struct LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs30_r16 {
			LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs30_r16_PR present;
			union LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__LPP_scs30_r16_u {
				long	 n8_r16;
				long	 n10_r16;
				long	 n16_r16;
				long	 n20_r16;
				long	 n32_r16;
				long	 n40_r16;
				long	 n64_r16;
				long	 n80_r16;
				long	 n128_r16;
				long	 n160_r16;
				long	 n320_r16;
				long	 n640_r16;
				long	 n1280_r16;
				long	 n2560_r16;
				long	 n5120_r16;
				long	 n10240_r16;
				long	 n20480_r16;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *scs30_r16;
		struct LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs60_r16 {
			LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs60_r16_PR present;
			union LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__LPP_scs60_r16_u {
				long	 n16_r16;
				long	 n20_r16;
				long	 n32_r16;
				long	 n40_r16;
				long	 n64_r16;
				long	 n80_r16;
				long	 n128_r16;
				long	 n160_r16;
				long	 n256_r16;
				long	 n320_r16;
				long	 n640_r16;
				long	 n1280_r16;
				long	 n2560_r16;
				long	 n5120_r16;
				long	 n10240_r16;
				long	 n20480_r16;
				long	 n40960_r16;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *scs60_r16;
		struct LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs120_r16 {
			LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__scs120_r16_PR present;
			union LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16__LPP_scs120_r16_u {
				long	 n32_r16;
				long	 n40_r16;
				long	 n64_r16;
				long	 n80_r16;
				long	 n128_r16;
				long	 n160_r16;
				long	 n256_r16;
				long	 n320_r16;
				long	 n512_r16;
				long	 n640_r16;
				long	 n1280_r16;
				long	 n2560_r16;
				long	 n5120_r16;
				long	 n10240_r16;
				long	 n20480_r16;
				long	 n40960_r16;
				long	 n81920_r16;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *scs120_r16;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16;
extern asn_CHOICE_specifics_t asn_SPC_LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16_1[4];
extern asn_per_constraints_t asn_PER_type_LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16_H_ */
#include <asn_internal.h>