/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_DL_PPW_PeriodicityAndStartSlot_r17_H_
#define	_NR_DL_PPW_PeriodicityAndStartSlot_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_DL_PPW_PeriodicityAndStartSlot_r17_PR {
	NR_DL_PPW_PeriodicityAndStartSlot_r17_PR_NOTHING,	/* No components present */
	NR_DL_PPW_PeriodicityAndStartSlot_r17_PR_scs15,
	NR_DL_PPW_PeriodicityAndStartSlot_r17_PR_scs30,
	NR_DL_PPW_PeriodicityAndStartSlot_r17_PR_scs60,
	NR_DL_PPW_PeriodicityAndStartSlot_r17_PR_scs120
	/* Extensions may appear below */
	
} NR_DL_PPW_PeriodicityAndStartSlot_r17_PR;
typedef enum NR_DL_PPW_PeriodicityAndStartSlot_r17__scs15_PR {
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs15_PR_NOTHING,	/* No components present */
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs15_PR_n4,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs15_PR_n5,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs15_PR_n8,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs15_PR_n10,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs15_PR_n16,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs15_PR_n20,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs15_PR_n32,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs15_PR_n40,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs15_PR_n64,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs15_PR_n80,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs15_PR_n160,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs15_PR_n320,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs15_PR_n640,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs15_PR_n1280,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs15_PR_n2560,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs15_PR_n5120,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs15_PR_n10240
	/* Extensions may appear below */
	
} NR_DL_PPW_PeriodicityAndStartSlot_r17__scs15_PR;
typedef enum NR_DL_PPW_PeriodicityAndStartSlot_r17__scs30_PR {
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs30_PR_NOTHING,	/* No components present */
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs30_PR_n8,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs30_PR_n10,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs30_PR_n16,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs30_PR_n20,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs30_PR_n32,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs30_PR_n40,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs30_PR_n64,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs30_PR_n80,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs30_PR_n128,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs30_PR_n160,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs30_PR_n320,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs30_PR_n640,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs30_PR_n1280,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs30_PR_n2560,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs30_PR_n5120,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs30_PR_n10240,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs30_PR_n20480
	/* Extensions may appear below */
	
} NR_DL_PPW_PeriodicityAndStartSlot_r17__scs30_PR;
typedef enum NR_DL_PPW_PeriodicityAndStartSlot_r17__scs60_PR {
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs60_PR_NOTHING,	/* No components present */
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs60_PR_n16,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs60_PR_n20,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs60_PR_n32,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs60_PR_n40,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs60_PR_n64,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs60_PR_n80,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs60_PR_n128,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs60_PR_n160,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs60_PR_n256,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs60_PR_n320,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs60_PR_n640,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs60_PR_n1280,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs60_PR_n2560,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs60_PR_n5120,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs60_PR_n10240,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs60_PR_n20480,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs60_PR_n40960
	/* Extensions may appear below */
	
} NR_DL_PPW_PeriodicityAndStartSlot_r17__scs60_PR;
typedef enum NR_DL_PPW_PeriodicityAndStartSlot_r17__scs120_PR {
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs120_PR_NOTHING,	/* No components present */
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs120_PR_n32,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs120_PR_n40,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs120_PR_n64,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs120_PR_n80,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs120_PR_n128,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs120_PR_n160,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs120_PR_n256,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs120_PR_n320,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs120_PR_n512,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs120_PR_n640,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs120_PR_n1280,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs120_PR_n2560,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs120_PR_n5120,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs120_PR_n10240,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs120_PR_n20480,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs120_PR_n40960,
	NR_DL_PPW_PeriodicityAndStartSlot_r17__scs120_PR_n81920
	/* Extensions may appear below */
	
} NR_DL_PPW_PeriodicityAndStartSlot_r17__scs120_PR;

/* NR_DL-PPW-PeriodicityAndStartSlot-r17 */
typedef struct NR_DL_PPW_PeriodicityAndStartSlot_r17 {
	NR_DL_PPW_PeriodicityAndStartSlot_r17_PR present;
	union NR_DL_PPW_PeriodicityAndStartSlot_r17_u {
		struct NR_DL_PPW_PeriodicityAndStartSlot_r17__scs15 {
			NR_DL_PPW_PeriodicityAndStartSlot_r17__scs15_PR present;
			union NR_DL_PPW_PeriodicityAndStartSlot_r17__NR_scs15_u {
				long	 n4;
				long	 n5;
				long	 n8;
				long	 n10;
				long	 n16;
				long	 n20;
				long	 n32;
				long	 n40;
				long	 n64;
				long	 n80;
				long	 n160;
				long	 n320;
				long	 n640;
				long	 n1280;
				long	 n2560;
				long	 n5120;
				long	 n10240;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *scs15;
		struct NR_DL_PPW_PeriodicityAndStartSlot_r17__scs30 {
			NR_DL_PPW_PeriodicityAndStartSlot_r17__scs30_PR present;
			union NR_DL_PPW_PeriodicityAndStartSlot_r17__NR_scs30_u {
				long	 n8;
				long	 n10;
				long	 n16;
				long	 n20;
				long	 n32;
				long	 n40;
				long	 n64;
				long	 n80;
				long	 n128;
				long	 n160;
				long	 n320;
				long	 n640;
				long	 n1280;
				long	 n2560;
				long	 n5120;
				long	 n10240;
				long	 n20480;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *scs30;
		struct NR_DL_PPW_PeriodicityAndStartSlot_r17__scs60 {
			NR_DL_PPW_PeriodicityAndStartSlot_r17__scs60_PR present;
			union NR_DL_PPW_PeriodicityAndStartSlot_r17__NR_scs60_u {
				long	 n16;
				long	 n20;
				long	 n32;
				long	 n40;
				long	 n64;
				long	 n80;
				long	 n128;
				long	 n160;
				long	 n256;
				long	 n320;
				long	 n640;
				long	 n1280;
				long	 n2560;
				long	 n5120;
				long	 n10240;
				long	 n20480;
				long	 n40960;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *scs60;
		struct NR_DL_PPW_PeriodicityAndStartSlot_r17__scs120 {
			NR_DL_PPW_PeriodicityAndStartSlot_r17__scs120_PR present;
			union NR_DL_PPW_PeriodicityAndStartSlot_r17__NR_scs120_u {
				long	 n32;
				long	 n40;
				long	 n64;
				long	 n80;
				long	 n128;
				long	 n160;
				long	 n256;
				long	 n320;
				long	 n512;
				long	 n640;
				long	 n1280;
				long	 n2560;
				long	 n5120;
				long	 n10240;
				long	 n20480;
				long	 n40960;
				long	 n81920;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *scs120;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_DL_PPW_PeriodicityAndStartSlot_r17_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_DL_PPW_PeriodicityAndStartSlot_r17;
extern asn_CHOICE_specifics_t asn_SPC_NR_DL_PPW_PeriodicityAndStartSlot_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_DL_PPW_PeriodicityAndStartSlot_r17_1[4];
extern asn_per_constraints_t asn_PER_type_NR_DL_PPW_PeriodicityAndStartSlot_r17_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _NR_DL_PPW_PeriodicityAndStartSlot_r17_H_ */
#include <asn_internal.h>