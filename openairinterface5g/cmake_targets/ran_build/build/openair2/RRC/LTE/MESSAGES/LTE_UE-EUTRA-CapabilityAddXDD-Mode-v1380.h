/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1380_H_
#define	_LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1380_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_CE-Parameters-v1380.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_UE-EUTRA-CapabilityAddXDD-Mode-v1380 */
typedef struct LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1380 {
	LTE_CE_Parameters_v1380_t	 ce_Parameters_v1380;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1380_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1380;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1380_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1380_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1380_H_ */
#include <asn_internal.h>