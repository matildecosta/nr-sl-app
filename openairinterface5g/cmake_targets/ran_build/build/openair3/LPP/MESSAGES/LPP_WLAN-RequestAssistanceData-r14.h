/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_WLAN_RequestAssistanceData_r14_H_
#define	_LPP_WLAN_RequestAssistanceData_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LPP_WLAN_RequestAssistanceData_r14__requestedAD_r14 {
	LPP_WLAN_RequestAssistanceData_r14__requestedAD_r14_ap_identifier	= 0,
	LPP_WLAN_RequestAssistanceData_r14__requestedAD_r14_ap_location	= 1
} e_LPP_WLAN_RequestAssistanceData_r14__requestedAD_r14;

/* Forward declarations */
struct LPP_WLAN_AP_Identifier_r13;

/* LPP_WLAN-RequestAssistanceData-r14 */
typedef struct LPP_WLAN_RequestAssistanceData_r14 {
	BIT_STRING_t	 requestedAD_r14;
	struct LPP_WLAN_RequestAssistanceData_r14__visibleAPs_r14 {
		A_SEQUENCE_OF(struct LPP_WLAN_AP_Identifier_r13) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *visibleAPs_r14;
	struct LPP_WLAN_RequestAssistanceData_r14__wlan_AP_StoredData_r14 {
		A_SEQUENCE_OF(struct LPP_WLAN_AP_Identifier_r13) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *wlan_AP_StoredData_r14;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_WLAN_RequestAssistanceData_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LPP_WLAN_RequestAssistanceData_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_LPP_WLAN_RequestAssistanceData_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_WLAN_RequestAssistanceData_r14_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_WLAN_RequestAssistanceData_r14_H_ */
#include <asn_internal.h>