/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_A_GNSS_RequestAssistanceData_H_
#define	_LPP_A_GNSS_RequestAssistanceData_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LPP_GNSS_CommonAssistDataReq;
struct LPP_GNSS_GenericAssistDataReq;
struct LPP_GNSS_PeriodicAssistDataReq_r15;

/* LPP_A-GNSS-RequestAssistanceData */
typedef struct LPP_A_GNSS_RequestAssistanceData {
	struct LPP_GNSS_CommonAssistDataReq	*gnss_CommonAssistDataReq;	/* OPTIONAL */
	struct LPP_GNSS_GenericAssistDataReq	*gnss_GenericAssistDataReq;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LPP_A_GNSS_RequestAssistanceData__ext1 {
		struct LPP_GNSS_PeriodicAssistDataReq_r15	*gnss_PeriodicAssistDataReq_r15;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_A_GNSS_RequestAssistanceData_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LPP_A_GNSS_RequestAssistanceData;
extern asn_SEQUENCE_specifics_t asn_SPC_LPP_A_GNSS_RequestAssistanceData_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_A_GNSS_RequestAssistanceData_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_A_GNSS_RequestAssistanceData_H_ */
#include <asn_internal.h>