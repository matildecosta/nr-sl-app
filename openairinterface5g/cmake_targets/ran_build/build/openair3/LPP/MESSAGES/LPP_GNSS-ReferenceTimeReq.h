/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_GNSS_ReferenceTimeReq_H_
#define	_LPP_GNSS_ReferenceTimeReq_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LPP_GNSS_ID;

/* LPP_GNSS-ReferenceTimeReq */
typedef struct LPP_GNSS_ReferenceTimeReq {
	struct LPP_GNSS_ReferenceTimeReq__gnss_TimeReqPrefList {
		A_SEQUENCE_OF(struct LPP_GNSS_ID) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} gnss_TimeReqPrefList;
	BOOLEAN_t	*gps_TOW_assistReq;	/* OPTIONAL */
	BOOLEAN_t	*notOfLeapSecReq;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_GNSS_ReferenceTimeReq_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LPP_GNSS_ReferenceTimeReq;
extern asn_SEQUENCE_specifics_t asn_SPC_LPP_GNSS_ReferenceTimeReq_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_GNSS_ReferenceTimeReq_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_GNSS_ReferenceTimeReq_H_ */
#include <asn_internal.h>