/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_DL_PRS_ResourcesCapabilityPerBand_r16_H_
#define	_LPP_DL_PRS_ResourcesCapabilityPerBand_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LPP_FreqBandIndicatorNR-r16.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LPP_DL_PRS_ResourcesCapabilityPerBand_r16__maxNrOfDL_PRS_ResourcesPerResourceSet_r16 {
	LPP_DL_PRS_ResourcesCapabilityPerBand_r16__maxNrOfDL_PRS_ResourcesPerResourceSet_r16_n1	= 0,
	LPP_DL_PRS_ResourcesCapabilityPerBand_r16__maxNrOfDL_PRS_ResourcesPerResourceSet_r16_n2	= 1,
	LPP_DL_PRS_ResourcesCapabilityPerBand_r16__maxNrOfDL_PRS_ResourcesPerResourceSet_r16_n4	= 2,
	LPP_DL_PRS_ResourcesCapabilityPerBand_r16__maxNrOfDL_PRS_ResourcesPerResourceSet_r16_n8	= 3,
	LPP_DL_PRS_ResourcesCapabilityPerBand_r16__maxNrOfDL_PRS_ResourcesPerResourceSet_r16_n16	= 4,
	LPP_DL_PRS_ResourcesCapabilityPerBand_r16__maxNrOfDL_PRS_ResourcesPerResourceSet_r16_n32	= 5,
	LPP_DL_PRS_ResourcesCapabilityPerBand_r16__maxNrOfDL_PRS_ResourcesPerResourceSet_r16_n64	= 6
	/*
	 * Enumeration is extensible
	 */
} e_LPP_DL_PRS_ResourcesCapabilityPerBand_r16__maxNrOfDL_PRS_ResourcesPerResourceSet_r16;
typedef enum LPP_DL_PRS_ResourcesCapabilityPerBand_r16__maxNrOfDL_PRS_ResourcesPerPositioningFrequencylayer_r16 {
	LPP_DL_PRS_ResourcesCapabilityPerBand_r16__maxNrOfDL_PRS_ResourcesPerPositioningFrequencylayer_r16_n6	= 0,
	LPP_DL_PRS_ResourcesCapabilityPerBand_r16__maxNrOfDL_PRS_ResourcesPerPositioningFrequencylayer_r16_n24	= 1,
	LPP_DL_PRS_ResourcesCapabilityPerBand_r16__maxNrOfDL_PRS_ResourcesPerPositioningFrequencylayer_r16_n32	= 2,
	LPP_DL_PRS_ResourcesCapabilityPerBand_r16__maxNrOfDL_PRS_ResourcesPerPositioningFrequencylayer_r16_n64	= 3,
	LPP_DL_PRS_ResourcesCapabilityPerBand_r16__maxNrOfDL_PRS_ResourcesPerPositioningFrequencylayer_r16_n96	= 4,
	LPP_DL_PRS_ResourcesCapabilityPerBand_r16__maxNrOfDL_PRS_ResourcesPerPositioningFrequencylayer_r16_n128	= 5,
	LPP_DL_PRS_ResourcesCapabilityPerBand_r16__maxNrOfDL_PRS_ResourcesPerPositioningFrequencylayer_r16_n256	= 6,
	LPP_DL_PRS_ResourcesCapabilityPerBand_r16__maxNrOfDL_PRS_ResourcesPerPositioningFrequencylayer_r16_n512	= 7,
	LPP_DL_PRS_ResourcesCapabilityPerBand_r16__maxNrOfDL_PRS_ResourcesPerPositioningFrequencylayer_r16_n1024	= 8
	/*
	 * Enumeration is extensible
	 */
} e_LPP_DL_PRS_ResourcesCapabilityPerBand_r16__maxNrOfDL_PRS_ResourcesPerPositioningFrequencylayer_r16;

/* LPP_DL-PRS-ResourcesCapabilityPerBand-r16 */
typedef struct LPP_DL_PRS_ResourcesCapabilityPerBand_r16 {
	LPP_FreqBandIndicatorNR_r16_t	 freqBandIndicatorNR_r16;
	long	 maxNrOfDL_PRS_ResourcesPerResourceSet_r16;
	long	 maxNrOfDL_PRS_ResourcesPerPositioningFrequencylayer_r16;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_DL_PRS_ResourcesCapabilityPerBand_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LPP_maxNrOfDL_PRS_ResourcesPerResourceSet_r16_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LPP_maxNrOfDL_PRS_ResourcesPerPositioningFrequencylayer_r16_12;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LPP_DL_PRS_ResourcesCapabilityPerBand_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_LPP_DL_PRS_ResourcesCapabilityPerBand_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_DL_PRS_ResourcesCapabilityPerBand_r16_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_DL_PRS_ResourcesCapabilityPerBand_r16_H_ */
#include <asn_internal.h>