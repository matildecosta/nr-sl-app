/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_LoggedMeasurementConfiguration_r16_IEs_H_
#define	_NR_LoggedMeasurementConfiguration_r16_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_TraceReference-r16.h"
#include <OCTET_STRING.h>
#include "NR_AbsoluteTimeInfo-r16.h"
#include "NR_LoggingDuration-r16.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_LoggedMeasurementConfiguration_r16_IEs__reportType_PR {
	NR_LoggedMeasurementConfiguration_r16_IEs__reportType_PR_NOTHING,	/* No components present */
	NR_LoggedMeasurementConfiguration_r16_IEs__reportType_PR_periodical,
	NR_LoggedMeasurementConfiguration_r16_IEs__reportType_PR_eventTriggered
	/* Extensions may appear below */
	
} NR_LoggedMeasurementConfiguration_r16_IEs__reportType_PR;

/* Forward declarations */
struct NR_AreaConfiguration_r16;
struct NR_PLMN_IdentityList2_r16;
struct NR_SetupRelease_BT_NameList_r16;
struct NR_SetupRelease_WLAN_NameList_r16;
struct NR_SetupRelease_Sensor_NameList_r16;
struct NR_LoggedMeasurementConfiguration_v1700_IEs;
struct NR_LoggedPeriodicalReportConfig_r16;
struct NR_LoggedEventTriggerConfig_r16;

/* NR_LoggedMeasurementConfiguration-r16-IEs */
typedef struct NR_LoggedMeasurementConfiguration_r16_IEs {
	NR_TraceReference_r16_t	 traceReference_r16;
	OCTET_STRING_t	 traceRecordingSessionRef_r16;
	OCTET_STRING_t	 tce_Id_r16;
	NR_AbsoluteTimeInfo_r16_t	 absoluteTimeInfo_r16;
	struct NR_AreaConfiguration_r16	*areaConfiguration_r16;	/* OPTIONAL */
	struct NR_PLMN_IdentityList2_r16	*plmn_IdentityList_r16;	/* OPTIONAL */
	struct NR_SetupRelease_BT_NameList_r16	*bt_NameList_r16;	/* OPTIONAL */
	struct NR_SetupRelease_WLAN_NameList_r16	*wlan_NameList_r16;	/* OPTIONAL */
	struct NR_SetupRelease_Sensor_NameList_r16	*sensor_NameList_r16;	/* OPTIONAL */
	NR_LoggingDuration_r16_t	 loggingDuration_r16;
	struct NR_LoggedMeasurementConfiguration_r16_IEs__reportType {
		NR_LoggedMeasurementConfiguration_r16_IEs__reportType_PR present;
		union NR_LoggedMeasurementConfiguration_r16_IEs__NR_reportType_u {
			struct NR_LoggedPeriodicalReportConfig_r16	*periodical;
			struct NR_LoggedEventTriggerConfig_r16	*eventTriggered;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} reportType;
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct NR_LoggedMeasurementConfiguration_v1700_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_LoggedMeasurementConfiguration_r16_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_LoggedMeasurementConfiguration_r16_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_LoggedMeasurementConfiguration_r16_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_LoggedMeasurementConfiguration_r16_IEs_1[13];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_AreaConfiguration-r16.h"
#include "NR_PLMN-IdentityList2-r16.h"
#include "NR_SetupRelease.h"
#include "NR_LoggedMeasurementConfiguration-v1700-IEs.h"
#include "NR_LoggedPeriodicalReportConfig-r16.h"
#include "NR_LoggedEventTriggerConfig-r16.h"

#endif	/* _NR_LoggedMeasurementConfiguration_r16_IEs_H_ */
#include <asn_internal.h>