/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_SecurityModeFailure_H_
#define	_NR_SecurityModeFailure_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_RRC-TransactionIdentifier.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_SecurityModeFailure__criticalExtensions_PR {
	NR_SecurityModeFailure__criticalExtensions_PR_NOTHING,	/* No components present */
	NR_SecurityModeFailure__criticalExtensions_PR_securityModeFailure,
	NR_SecurityModeFailure__criticalExtensions_PR_criticalExtensionsFuture
} NR_SecurityModeFailure__criticalExtensions_PR;

/* Forward declarations */
struct NR_SecurityModeFailure_IEs;

/* NR_SecurityModeFailure */
typedef struct NR_SecurityModeFailure {
	NR_RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct NR_SecurityModeFailure__criticalExtensions {
		NR_SecurityModeFailure__criticalExtensions_PR present;
		union NR_SecurityModeFailure__NR_criticalExtensions_u {
			struct NR_SecurityModeFailure_IEs	*securityModeFailure;
			struct NR_SecurityModeFailure__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_SecurityModeFailure_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_SecurityModeFailure;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_SecurityModeFailure_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_SecurityModeFailure_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_SecurityModeFailure-IEs.h"

#endif	/* _NR_SecurityModeFailure_H_ */
#include <asn_internal.h>