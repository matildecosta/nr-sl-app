/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_SRS_AllPosResourcesRRC_Inactive_r17_H_
#define	_NR_SRS_AllPosResourcesRRC_Inactive_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__maxNumberSRS_PosResourceSetPerBWP_r17 {
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__maxNumberSRS_PosResourceSetPerBWP_r17_n1	= 0,
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__maxNumberSRS_PosResourceSetPerBWP_r17_n2	= 1,
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__maxNumberSRS_PosResourceSetPerBWP_r17_n4	= 2,
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__maxNumberSRS_PosResourceSetPerBWP_r17_n8	= 3,
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__maxNumberSRS_PosResourceSetPerBWP_r17_n12	= 4,
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__maxNumberSRS_PosResourceSetPerBWP_r17_n16	= 5
} e_NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__maxNumberSRS_PosResourceSetPerBWP_r17;
typedef enum NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__maxNumberSRS_PosResourcesPerBWP_r17 {
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__maxNumberSRS_PosResourcesPerBWP_r17_n1	= 0,
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__maxNumberSRS_PosResourcesPerBWP_r17_n2	= 1,
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__maxNumberSRS_PosResourcesPerBWP_r17_n4	= 2,
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__maxNumberSRS_PosResourcesPerBWP_r17_n8	= 3,
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__maxNumberSRS_PosResourcesPerBWP_r17_n16	= 4,
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__maxNumberSRS_PosResourcesPerBWP_r17_n32	= 5,
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__maxNumberSRS_PosResourcesPerBWP_r17_n64	= 6
} e_NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__maxNumberSRS_PosResourcesPerBWP_r17;
typedef enum NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__maxNumberSRS_ResourcesPerBWP_PerSlot_r17 {
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__maxNumberSRS_ResourcesPerBWP_PerSlot_r17_n1	= 0,
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__maxNumberSRS_ResourcesPerBWP_PerSlot_r17_n2	= 1,
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__maxNumberSRS_ResourcesPerBWP_PerSlot_r17_n3	= 2,
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__maxNumberSRS_ResourcesPerBWP_PerSlot_r17_n4	= 3,
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__maxNumberSRS_ResourcesPerBWP_PerSlot_r17_n5	= 4,
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__maxNumberSRS_ResourcesPerBWP_PerSlot_r17_n6	= 5,
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__maxNumberSRS_ResourcesPerBWP_PerSlot_r17_n8	= 6,
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__maxNumberSRS_ResourcesPerBWP_PerSlot_r17_n10	= 7,
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__maxNumberSRS_ResourcesPerBWP_PerSlot_r17_n12	= 8,
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__maxNumberSRS_ResourcesPerBWP_PerSlot_r17_n14	= 9
} e_NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__maxNumberSRS_ResourcesPerBWP_PerSlot_r17;
typedef enum NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__maxNumberPeriodicSRS_PosResourcesPerBWP_r17 {
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__maxNumberPeriodicSRS_PosResourcesPerBWP_r17_n1	= 0,
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__maxNumberPeriodicSRS_PosResourcesPerBWP_r17_n2	= 1,
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__maxNumberPeriodicSRS_PosResourcesPerBWP_r17_n4	= 2,
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__maxNumberPeriodicSRS_PosResourcesPerBWP_r17_n8	= 3,
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__maxNumberPeriodicSRS_PosResourcesPerBWP_r17_n16	= 4,
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__maxNumberPeriodicSRS_PosResourcesPerBWP_r17_n32	= 5,
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__maxNumberPeriodicSRS_PosResourcesPerBWP_r17_n64	= 6
} e_NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__maxNumberPeriodicSRS_PosResourcesPerBWP_r17;
typedef enum NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r17 {
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r17_n1	= 0,
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r17_n2	= 1,
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r17_n3	= 2,
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r17_n4	= 3,
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r17_n5	= 4,
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r17_n6	= 5,
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r17_n8	= 6,
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r17_n10	= 7,
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r17_n12	= 8,
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r17_n14	= 9
} e_NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r17;
typedef enum NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__dummy1 {
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__dummy1_n1	= 0,
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__dummy1_n2	= 1,
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__dummy1_n4	= 2,
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__dummy1_n8	= 3,
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__dummy1_n16	= 4,
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__dummy1_n32	= 5,
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__dummy1_n64	= 6
} e_NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__dummy1;
typedef enum NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__dummy2 {
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__dummy2_n1	= 0,
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__dummy2_n2	= 1,
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__dummy2_n3	= 2,
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__dummy2_n4	= 3,
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__dummy2_n5	= 4,
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__dummy2_n6	= 5,
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__dummy2_n8	= 6,
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__dummy2_n10	= 7,
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__dummy2_n12	= 8,
	NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__dummy2_n14	= 9
} e_NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17__dummy2;

/* NR_SRS-AllPosResourcesRRC-Inactive-r17 */
typedef struct NR_SRS_AllPosResourcesRRC_Inactive_r17 {
	struct NR_SRS_AllPosResourcesRRC_Inactive_r17__srs_PosResourcesRRC_Inactive_r17 {
		long	 maxNumberSRS_PosResourceSetPerBWP_r17;
		long	 maxNumberSRS_PosResourcesPerBWP_r17;
		long	 maxNumberSRS_ResourcesPerBWP_PerSlot_r17;
		long	 maxNumberPeriodicSRS_PosResourcesPerBWP_r17;
		long	 maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r17;
		long	 dummy1;
		long	 dummy2;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} srs_PosResourcesRRC_Inactive_r17;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_SRS_AllPosResourcesRRC_Inactive_r17_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_maxNumberSRS_PosResourceSetPerBWP_r17_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_maxNumberSRS_PosResourcesPerBWP_r17_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_maxNumberSRS_ResourcesPerBWP_PerSlot_r17_18;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_maxNumberPeriodicSRS_PosResourcesPerBWP_r17_29;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r17_37;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_dummy1_48;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_dummy2_56;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_SRS_AllPosResourcesRRC_Inactive_r17;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_SRS_AllPosResourcesRRC_Inactive_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_SRS_AllPosResourcesRRC_Inactive_r17_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_SRS_AllPosResourcesRRC_Inactive_r17_H_ */
#include <asn_internal.h>