/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_EllipsoidArc_H_
#define	_LPP_EllipsoidArc_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LPP_EllipsoidArc__latitudeSign {
	LPP_EllipsoidArc__latitudeSign_north	= 0,
	LPP_EllipsoidArc__latitudeSign_south	= 1
} e_LPP_EllipsoidArc__latitudeSign;

/* LPP_EllipsoidArc */
typedef struct LPP_EllipsoidArc {
	long	 latitudeSign;
	long	 degreesLatitude;
	long	 degreesLongitude;
	long	 innerRadius;
	long	 uncertaintyRadius;
	long	 offsetAngle;
	long	 includedAngle;
	long	 confidence;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_EllipsoidArc_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LPP_latitudeSign_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LPP_EllipsoidArc;
extern asn_SEQUENCE_specifics_t asn_SPC_LPP_EllipsoidArc_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_EllipsoidArc_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_EllipsoidArc_H_ */
#include <asn_internal.h>