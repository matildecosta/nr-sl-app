/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_CommonIEsRequestLocationInformation_H_
#define	_LPP_CommonIEsRequestLocationInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LPP_LocationInformationType.h"
#include "LPP_AdditionalInformation.h"
#include "LPP_Environment.h"
#include <constr_SEQUENCE.h>
#include "LPP_SegmentationInfo-r14.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LPP_TriggeredReportingCriteria;
struct LPP_PeriodicalReportingCriteria;
struct LPP_QoS;
struct LPP_LocationCoordinateTypes;
struct LPP_VelocityTypes;
struct LPP_MessageSizeLimitNB_r14;

/* LPP_CommonIEsRequestLocationInformation */
typedef struct LPP_CommonIEsRequestLocationInformation {
	LPP_LocationInformationType_t	 locationInformationType;
	struct LPP_TriggeredReportingCriteria	*triggeredReporting;	/* OPTIONAL */
	struct LPP_PeriodicalReportingCriteria	*periodicalReporting;	/* OPTIONAL */
	LPP_AdditionalInformation_t	*additionalInformation;	/* OPTIONAL */
	struct LPP_QoS	*qos;	/* OPTIONAL */
	LPP_Environment_t	*environment;	/* OPTIONAL */
	struct LPP_LocationCoordinateTypes	*locationCoordinateTypes;	/* OPTIONAL */
	struct LPP_VelocityTypes	*velocityTypes;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LPP_CommonIEsRequestLocationInformation__ext1 {
		struct LPP_MessageSizeLimitNB_r14	*messageSizeLimitNB_r14;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct LPP_CommonIEsRequestLocationInformation__ext2 {
		LPP_SegmentationInfo_r14_t	*segmentationInfo_r14;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_CommonIEsRequestLocationInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LPP_CommonIEsRequestLocationInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_LPP_CommonIEsRequestLocationInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_CommonIEsRequestLocationInformation_1[10];

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_CommonIEsRequestLocationInformation_H_ */
#include <asn_internal.h>