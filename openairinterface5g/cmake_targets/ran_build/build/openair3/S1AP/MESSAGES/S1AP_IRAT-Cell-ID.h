/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SonTransfer-IEs"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R15/s1ap-15.6.0.asn1"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -fno-include-deps -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair3/S1AP/MESSAGES`
 */

#ifndef	_S1AP_IRAT_Cell_ID_H_
#define	_S1AP_IRAT_Cell_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include "S1AP_EHRPD-Sector-ID.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_IRAT_Cell_ID_PR {
	S1AP_IRAT_Cell_ID_PR_NOTHING,	/* No components present */
	S1AP_IRAT_Cell_ID_PR_eUTRAN,
	S1AP_IRAT_Cell_ID_PR_uTRAN,
	S1AP_IRAT_Cell_ID_PR_gERAN,
	/* Extensions may appear below */
	S1AP_IRAT_Cell_ID_PR_eHRPD
} S1AP_IRAT_Cell_ID_PR;

/* S1AP_IRAT-Cell-ID */
typedef struct S1AP_IRAT_Cell_ID {
	S1AP_IRAT_Cell_ID_PR present;
	union S1AP_IRAT_Cell_ID_u {
		OCTET_STRING_t	 eUTRAN;
		OCTET_STRING_t	 uTRAN;
		OCTET_STRING_t	 gERAN;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		S1AP_EHRPD_Sector_ID_t	 eHRPD;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_IRAT_Cell_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_IRAT_Cell_ID;
extern asn_CHOICE_specifics_t asn_SPC_S1AP_IRAT_Cell_ID_specs_1;
extern asn_TYPE_member_t asn_MBR_S1AP_IRAT_Cell_ID_1[4];
extern asn_per_constraints_t asn_PER_type_S1AP_IRAT_Cell_ID_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_IRAT_Cell_ID_H_ */
#include <asn_internal.h>