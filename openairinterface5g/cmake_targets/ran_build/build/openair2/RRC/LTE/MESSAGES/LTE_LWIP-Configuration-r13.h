/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_LWIP_Configuration_r13_H_
#define	_LTE_LWIP_Configuration_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "LTE_LWIP-Config-r13.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_LWIP_Configuration_r13_PR {
	LTE_LWIP_Configuration_r13_PR_NOTHING,	/* No components present */
	LTE_LWIP_Configuration_r13_PR_release,
	LTE_LWIP_Configuration_r13_PR_setup
} LTE_LWIP_Configuration_r13_PR;

/* LTE_LWIP-Configuration-r13 */
typedef struct LTE_LWIP_Configuration_r13 {
	LTE_LWIP_Configuration_r13_PR present;
	union LTE_LWIP_Configuration_r13_u {
		NULL_t	 release;
		struct LTE_LWIP_Configuration_r13__setup {
			LTE_LWIP_Config_r13_t	 lwip_Config_r13;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_LWIP_Configuration_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_LWIP_Configuration_r13;
extern asn_CHOICE_specifics_t asn_SPC_LTE_LWIP_Configuration_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_LWIP_Configuration_r13_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_LWIP_Configuration_r13_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_LWIP_Configuration_r13_H_ */
#include <asn_internal.h>