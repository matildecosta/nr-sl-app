/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_SL_PHY_MAC_RLC_Config_v1700_H_
#define	_NR_SL_PHY_MAC_RLC_Config_v1700_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_SL-RLC-ChannelID-r17.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_SL_DRX_Config_r17;
struct NR_SL_RLC_ChannelConfig_r17;

/* NR_SL-PHY-MAC-RLC-Config-v1700 */
typedef struct NR_SL_PHY_MAC_RLC_Config_v1700 {
	struct NR_SL_DRX_Config_r17	*sl_DRX_Config_r17;	/* OPTIONAL */
	struct NR_SL_PHY_MAC_RLC_Config_v1700__sl_RLC_ChannelToReleaseList_r17 {
		A_SEQUENCE_OF(NR_SL_RLC_ChannelID_r17_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *sl_RLC_ChannelToReleaseList_r17;
	struct NR_SL_PHY_MAC_RLC_Config_v1700__sl_RLC_ChannelToAddModList_r17 {
		A_SEQUENCE_OF(struct NR_SL_RLC_ChannelConfig_r17) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *sl_RLC_ChannelToAddModList_r17;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_SL_PHY_MAC_RLC_Config_v1700_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_SL_PHY_MAC_RLC_Config_v1700;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_SL_PHY_MAC_RLC_Config_v1700_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_SL_PHY_MAC_RLC_Config_v1700_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_SL-DRX-Config-r17.h"
#include "NR_SL-RLC-ChannelConfig-r17.h"

#endif	/* _NR_SL_PHY_MAC_RLC_Config_v1700_H_ */
#include <asn_internal.h>