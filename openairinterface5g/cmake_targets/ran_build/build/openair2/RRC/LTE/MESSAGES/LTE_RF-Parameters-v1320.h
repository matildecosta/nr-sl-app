/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_RF_Parameters_v1320_H_
#define	_LTE_RF_Parameters_v1320_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_SupportedBandListEUTRA_v1320;
struct LTE_SupportedBandCombination_v1320;
struct LTE_SupportedBandCombinationAdd_v1320;
struct LTE_SupportedBandCombinationReduced_v1320;

/* LTE_RF-Parameters-v1320 */
typedef struct LTE_RF_Parameters_v1320 {
	struct LTE_SupportedBandListEUTRA_v1320	*supportedBandListEUTRA_v1320;	/* OPTIONAL */
	struct LTE_SupportedBandCombination_v1320	*supportedBandCombination_v1320;	/* OPTIONAL */
	struct LTE_SupportedBandCombinationAdd_v1320	*supportedBandCombinationAdd_v1320;	/* OPTIONAL */
	struct LTE_SupportedBandCombinationReduced_v1320	*supportedBandCombinationReduced_v1320;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RF_Parameters_v1320_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RF_Parameters_v1320;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_RF_Parameters_v1320_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RF_Parameters_v1320_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_SupportedBandListEUTRA-v1320.h"
#include "LTE_SupportedBandCombination-v1320.h"
#include "LTE_SupportedBandCombinationAdd-v1320.h"
#include "LTE_SupportedBandCombinationReduced-v1320.h"

#endif	/* _LTE_RF_Parameters_v1320_H_ */
#include <asn_internal.h>