/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_GNSS_Almanac_H_
#define	_LPP_GNSS_Almanac_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <BOOLEAN.h>
#include "LPP_GNSS-AlmanacList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LPP_GNSS-Almanac */
typedef struct LPP_GNSS_Almanac {
	long	*weekNumber;	/* OPTIONAL */
	long	*toa;	/* OPTIONAL */
	long	*ioda;	/* OPTIONAL */
	BOOLEAN_t	 completeAlmanacProvided;
	LPP_GNSS_AlmanacList_t	 gnss_AlmanacList;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LPP_GNSS_Almanac__ext1 {
		long	*toa_ext_v1240;	/* OPTIONAL */
		long	*ioda_ext_v1240;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct LPP_GNSS_Almanac__ext2 {
		long	*weekNumber_ext_r16;	/* OPTIONAL */
		long	*toa_ext2_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_GNSS_Almanac_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LPP_GNSS_Almanac;
extern asn_SEQUENCE_specifics_t asn_SPC_LPP_GNSS_Almanac_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_GNSS_Almanac_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_GNSS_Almanac_H_ */
#include <asn_internal.h>