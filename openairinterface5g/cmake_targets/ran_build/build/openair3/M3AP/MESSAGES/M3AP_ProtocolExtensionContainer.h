/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M3AP-Containers"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair3/M3AP/MESSAGES/ASN1/m3ap-14.0.0.asn"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -fno-include-deps -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair3/M3AP/MESSAGES`
 */

#ifndef	_M3AP_ProtocolExtensionContainer_H_
#define	_M3AP_ProtocolExtensionContainer_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct M3AP_AllocationAndRetentionPriority_ExtIEs;
struct M3AP_CriticalityDiagnostics_ExtIEs;
struct M3AP_CriticalityDiagnostics_IE_List_ExtIEs;
struct M3AP_ECGI_ExtIEs;
struct M3AP_GlobalMCE_ID_ExtIEs;
struct M3AP_GBR_QosInformation_ExtIEs;
struct M3AP_MBMS_E_RAB_QoS_Parameters_ExtIEs;
struct M3AP_MBMS_Service_associatedLogicalM3_ConnectionItemExtIEs;
struct M3AP_TMGI_ExtIEs;
struct M3AP_TNL_Information_ExtIEs;

/* M3AP_ProtocolExtensionContainer */
typedef struct M3AP_ProtocolExtensionContainer_1045P0 {
	A_SEQUENCE_OF(struct M3AP_AllocationAndRetentionPriority_ExtIEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M3AP_ProtocolExtensionContainer_1045P0_t;
typedef struct M3AP_ProtocolExtensionContainer_1045P1 {
	A_SEQUENCE_OF(struct M3AP_CriticalityDiagnostics_ExtIEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M3AP_ProtocolExtensionContainer_1045P1_t;
typedef struct M3AP_ProtocolExtensionContainer_1045P2 {
	A_SEQUENCE_OF(struct M3AP_CriticalityDiagnostics_IE_List_ExtIEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M3AP_ProtocolExtensionContainer_1045P2_t;
typedef struct M3AP_ProtocolExtensionContainer_1045P3 {
	A_SEQUENCE_OF(struct M3AP_ECGI_ExtIEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M3AP_ProtocolExtensionContainer_1045P3_t;
typedef struct M3AP_ProtocolExtensionContainer_1045P4 {
	A_SEQUENCE_OF(struct M3AP_GlobalMCE_ID_ExtIEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M3AP_ProtocolExtensionContainer_1045P4_t;
typedef struct M3AP_ProtocolExtensionContainer_1045P5 {
	A_SEQUENCE_OF(struct M3AP_GBR_QosInformation_ExtIEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M3AP_ProtocolExtensionContainer_1045P5_t;
typedef struct M3AP_ProtocolExtensionContainer_1045P6 {
	A_SEQUENCE_OF(struct M3AP_MBMS_E_RAB_QoS_Parameters_ExtIEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M3AP_ProtocolExtensionContainer_1045P6_t;
typedef struct M3AP_ProtocolExtensionContainer_1045P7 {
	A_SEQUENCE_OF(struct M3AP_MBMS_Service_associatedLogicalM3_ConnectionItemExtIEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M3AP_ProtocolExtensionContainer_1045P7_t;
typedef struct M3AP_ProtocolExtensionContainer_1045P8 {
	A_SEQUENCE_OF(struct M3AP_TMGI_ExtIEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M3AP_ProtocolExtensionContainer_1045P8_t;
typedef struct M3AP_ProtocolExtensionContainer_1045P9 {
	A_SEQUENCE_OF(struct M3AP_TNL_Information_ExtIEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} M3AP_ProtocolExtensionContainer_1045P9_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_M3AP_ProtocolExtensionContainer_1045P0;
extern asn_SET_OF_specifics_t asn_SPC_M3AP_ProtocolExtensionContainer_1045P0_specs_1;
extern asn_TYPE_member_t asn_MBR_M3AP_ProtocolExtensionContainer_1045P0_1[1];
extern asn_per_constraints_t asn_PER_type_M3AP_ProtocolExtensionContainer_1045P0_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_M3AP_ProtocolExtensionContainer_1045P1;
extern asn_SET_OF_specifics_t asn_SPC_M3AP_ProtocolExtensionContainer_1045P1_specs_3;
extern asn_TYPE_member_t asn_MBR_M3AP_ProtocolExtensionContainer_1045P1_3[1];
extern asn_per_constraints_t asn_PER_type_M3AP_ProtocolExtensionContainer_1045P1_constr_3;
extern asn_TYPE_descriptor_t asn_DEF_M3AP_ProtocolExtensionContainer_1045P2;
extern asn_SET_OF_specifics_t asn_SPC_M3AP_ProtocolExtensionContainer_1045P2_specs_5;
extern asn_TYPE_member_t asn_MBR_M3AP_ProtocolExtensionContainer_1045P2_5[1];
extern asn_per_constraints_t asn_PER_type_M3AP_ProtocolExtensionContainer_1045P2_constr_5;
extern asn_TYPE_descriptor_t asn_DEF_M3AP_ProtocolExtensionContainer_1045P3;
extern asn_SET_OF_specifics_t asn_SPC_M3AP_ProtocolExtensionContainer_1045P3_specs_7;
extern asn_TYPE_member_t asn_MBR_M3AP_ProtocolExtensionContainer_1045P3_7[1];
extern asn_per_constraints_t asn_PER_type_M3AP_ProtocolExtensionContainer_1045P3_constr_7;
extern asn_TYPE_descriptor_t asn_DEF_M3AP_ProtocolExtensionContainer_1045P4;
extern asn_SET_OF_specifics_t asn_SPC_M3AP_ProtocolExtensionContainer_1045P4_specs_9;
extern asn_TYPE_member_t asn_MBR_M3AP_ProtocolExtensionContainer_1045P4_9[1];
extern asn_per_constraints_t asn_PER_type_M3AP_ProtocolExtensionContainer_1045P4_constr_9;
extern asn_TYPE_descriptor_t asn_DEF_M3AP_ProtocolExtensionContainer_1045P5;
extern asn_SET_OF_specifics_t asn_SPC_M3AP_ProtocolExtensionContainer_1045P5_specs_11;
extern asn_TYPE_member_t asn_MBR_M3AP_ProtocolExtensionContainer_1045P5_11[1];
extern asn_per_constraints_t asn_PER_type_M3AP_ProtocolExtensionContainer_1045P5_constr_11;
extern asn_TYPE_descriptor_t asn_DEF_M3AP_ProtocolExtensionContainer_1045P6;
extern asn_SET_OF_specifics_t asn_SPC_M3AP_ProtocolExtensionContainer_1045P6_specs_13;
extern asn_TYPE_member_t asn_MBR_M3AP_ProtocolExtensionContainer_1045P6_13[1];
extern asn_per_constraints_t asn_PER_type_M3AP_ProtocolExtensionContainer_1045P6_constr_13;
extern asn_TYPE_descriptor_t asn_DEF_M3AP_ProtocolExtensionContainer_1045P7;
extern asn_SET_OF_specifics_t asn_SPC_M3AP_ProtocolExtensionContainer_1045P7_specs_15;
extern asn_TYPE_member_t asn_MBR_M3AP_ProtocolExtensionContainer_1045P7_15[1];
extern asn_per_constraints_t asn_PER_type_M3AP_ProtocolExtensionContainer_1045P7_constr_15;
extern asn_TYPE_descriptor_t asn_DEF_M3AP_ProtocolExtensionContainer_1045P8;
extern asn_SET_OF_specifics_t asn_SPC_M3AP_ProtocolExtensionContainer_1045P8_specs_17;
extern asn_TYPE_member_t asn_MBR_M3AP_ProtocolExtensionContainer_1045P8_17[1];
extern asn_per_constraints_t asn_PER_type_M3AP_ProtocolExtensionContainer_1045P8_constr_17;
extern asn_TYPE_descriptor_t asn_DEF_M3AP_ProtocolExtensionContainer_1045P9;
extern asn_SET_OF_specifics_t asn_SPC_M3AP_ProtocolExtensionContainer_1045P9_specs_19;
extern asn_TYPE_member_t asn_MBR_M3AP_ProtocolExtensionContainer_1045P9_19[1];
extern asn_per_constraints_t asn_PER_type_M3AP_ProtocolExtensionContainer_1045P9_constr_19;

#ifdef __cplusplus
}
#endif

#endif	/* _M3AP_ProtocolExtensionContainer_H_ */
#include <asn_internal.h>