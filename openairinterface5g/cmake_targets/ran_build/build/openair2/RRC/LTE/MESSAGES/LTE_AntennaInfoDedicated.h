/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_AntennaInfoDedicated_H_
#define	_LTE_AntennaInfoDedicated_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <BIT_STRING.h>
#include <constr_CHOICE.h>
#include <NULL.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_AntennaInfoDedicated__transmissionMode {
	LTE_AntennaInfoDedicated__transmissionMode_tm1	= 0,
	LTE_AntennaInfoDedicated__transmissionMode_tm2	= 1,
	LTE_AntennaInfoDedicated__transmissionMode_tm3	= 2,
	LTE_AntennaInfoDedicated__transmissionMode_tm4	= 3,
	LTE_AntennaInfoDedicated__transmissionMode_tm5	= 4,
	LTE_AntennaInfoDedicated__transmissionMode_tm6	= 5,
	LTE_AntennaInfoDedicated__transmissionMode_tm7	= 6,
	LTE_AntennaInfoDedicated__transmissionMode_tm8_v920	= 7
} e_LTE_AntennaInfoDedicated__transmissionMode;
typedef enum LTE_AntennaInfoDedicated__codebookSubsetRestriction_PR {
	LTE_AntennaInfoDedicated__codebookSubsetRestriction_PR_NOTHING,	/* No components present */
	LTE_AntennaInfoDedicated__codebookSubsetRestriction_PR_n2TxAntenna_tm3,
	LTE_AntennaInfoDedicated__codebookSubsetRestriction_PR_n4TxAntenna_tm3,
	LTE_AntennaInfoDedicated__codebookSubsetRestriction_PR_n2TxAntenna_tm4,
	LTE_AntennaInfoDedicated__codebookSubsetRestriction_PR_n4TxAntenna_tm4,
	LTE_AntennaInfoDedicated__codebookSubsetRestriction_PR_n2TxAntenna_tm5,
	LTE_AntennaInfoDedicated__codebookSubsetRestriction_PR_n4TxAntenna_tm5,
	LTE_AntennaInfoDedicated__codebookSubsetRestriction_PR_n2TxAntenna_tm6,
	LTE_AntennaInfoDedicated__codebookSubsetRestriction_PR_n4TxAntenna_tm6
} LTE_AntennaInfoDedicated__codebookSubsetRestriction_PR;
typedef enum LTE_AntennaInfoDedicated__ue_TransmitAntennaSelection_PR {
	LTE_AntennaInfoDedicated__ue_TransmitAntennaSelection_PR_NOTHING,	/* No components present */
	LTE_AntennaInfoDedicated__ue_TransmitAntennaSelection_PR_release,
	LTE_AntennaInfoDedicated__ue_TransmitAntennaSelection_PR_setup
} LTE_AntennaInfoDedicated__ue_TransmitAntennaSelection_PR;
typedef enum LTE_AntennaInfoDedicated__ue_TransmitAntennaSelection__setup {
	LTE_AntennaInfoDedicated__ue_TransmitAntennaSelection__setup_closedLoop	= 0,
	LTE_AntennaInfoDedicated__ue_TransmitAntennaSelection__setup_openLoop	= 1
} e_LTE_AntennaInfoDedicated__ue_TransmitAntennaSelection__setup;

/* LTE_AntennaInfoDedicated */
typedef struct LTE_AntennaInfoDedicated {
	long	 transmissionMode;
	struct LTE_AntennaInfoDedicated__codebookSubsetRestriction {
		LTE_AntennaInfoDedicated__codebookSubsetRestriction_PR present;
		union LTE_AntennaInfoDedicated__LTE_codebookSubsetRestriction_u {
			BIT_STRING_t	 n2TxAntenna_tm3;
			BIT_STRING_t	 n4TxAntenna_tm3;
			BIT_STRING_t	 n2TxAntenna_tm4;
			BIT_STRING_t	 n4TxAntenna_tm4;
			BIT_STRING_t	 n2TxAntenna_tm5;
			BIT_STRING_t	 n4TxAntenna_tm5;
			BIT_STRING_t	 n2TxAntenna_tm6;
			BIT_STRING_t	 n4TxAntenna_tm6;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *codebookSubsetRestriction;
	struct LTE_AntennaInfoDedicated__ue_TransmitAntennaSelection {
		LTE_AntennaInfoDedicated__ue_TransmitAntennaSelection_PR present;
		union LTE_AntennaInfoDedicated__LTE_ue_TransmitAntennaSelection_u {
			NULL_t	 release;
			long	 setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} ue_TransmitAntennaSelection;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_AntennaInfoDedicated_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_transmissionMode_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_setup_22;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_AntennaInfoDedicated;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_AntennaInfoDedicated_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_AntennaInfoDedicated_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_AntennaInfoDedicated_H_ */
#include <asn_internal.h>