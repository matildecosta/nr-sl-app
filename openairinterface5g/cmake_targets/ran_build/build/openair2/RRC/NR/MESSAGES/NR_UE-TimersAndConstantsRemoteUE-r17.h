/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_UE_TimersAndConstantsRemoteUE_r17_H_
#define	_NR_UE_TimersAndConstantsRemoteUE_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_UE_TimersAndConstantsRemoteUE_r17__t300_RemoteUE_r17 {
	NR_UE_TimersAndConstantsRemoteUE_r17__t300_RemoteUE_r17_ms100	= 0,
	NR_UE_TimersAndConstantsRemoteUE_r17__t300_RemoteUE_r17_ms200	= 1,
	NR_UE_TimersAndConstantsRemoteUE_r17__t300_RemoteUE_r17_ms300	= 2,
	NR_UE_TimersAndConstantsRemoteUE_r17__t300_RemoteUE_r17_ms400	= 3,
	NR_UE_TimersAndConstantsRemoteUE_r17__t300_RemoteUE_r17_ms600	= 4,
	NR_UE_TimersAndConstantsRemoteUE_r17__t300_RemoteUE_r17_ms1000	= 5,
	NR_UE_TimersAndConstantsRemoteUE_r17__t300_RemoteUE_r17_ms1500	= 6,
	NR_UE_TimersAndConstantsRemoteUE_r17__t300_RemoteUE_r17_ms2000	= 7
} e_NR_UE_TimersAndConstantsRemoteUE_r17__t300_RemoteUE_r17;
typedef enum NR_UE_TimersAndConstantsRemoteUE_r17__t301_RemoteUE_r17 {
	NR_UE_TimersAndConstantsRemoteUE_r17__t301_RemoteUE_r17_ms100	= 0,
	NR_UE_TimersAndConstantsRemoteUE_r17__t301_RemoteUE_r17_ms200	= 1,
	NR_UE_TimersAndConstantsRemoteUE_r17__t301_RemoteUE_r17_ms300	= 2,
	NR_UE_TimersAndConstantsRemoteUE_r17__t301_RemoteUE_r17_ms400	= 3,
	NR_UE_TimersAndConstantsRemoteUE_r17__t301_RemoteUE_r17_ms600	= 4,
	NR_UE_TimersAndConstantsRemoteUE_r17__t301_RemoteUE_r17_ms1000	= 5,
	NR_UE_TimersAndConstantsRemoteUE_r17__t301_RemoteUE_r17_ms1500	= 6,
	NR_UE_TimersAndConstantsRemoteUE_r17__t301_RemoteUE_r17_ms2000	= 7
} e_NR_UE_TimersAndConstantsRemoteUE_r17__t301_RemoteUE_r17;
typedef enum NR_UE_TimersAndConstantsRemoteUE_r17__t319_RemoteUE_r17 {
	NR_UE_TimersAndConstantsRemoteUE_r17__t319_RemoteUE_r17_ms100	= 0,
	NR_UE_TimersAndConstantsRemoteUE_r17__t319_RemoteUE_r17_ms200	= 1,
	NR_UE_TimersAndConstantsRemoteUE_r17__t319_RemoteUE_r17_ms300	= 2,
	NR_UE_TimersAndConstantsRemoteUE_r17__t319_RemoteUE_r17_ms400	= 3,
	NR_UE_TimersAndConstantsRemoteUE_r17__t319_RemoteUE_r17_ms600	= 4,
	NR_UE_TimersAndConstantsRemoteUE_r17__t319_RemoteUE_r17_ms1000	= 5,
	NR_UE_TimersAndConstantsRemoteUE_r17__t319_RemoteUE_r17_ms1500	= 6,
	NR_UE_TimersAndConstantsRemoteUE_r17__t319_RemoteUE_r17_ms2000	= 7
} e_NR_UE_TimersAndConstantsRemoteUE_r17__t319_RemoteUE_r17;

/* NR_UE-TimersAndConstantsRemoteUE-r17 */
typedef struct NR_UE_TimersAndConstantsRemoteUE_r17 {
	long	*t300_RemoteUE_r17;	/* OPTIONAL */
	long	*t301_RemoteUE_r17;	/* OPTIONAL */
	long	*t319_RemoteUE_r17;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_UE_TimersAndConstantsRemoteUE_r17_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_t300_RemoteUE_r17_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_t301_RemoteUE_r17_11;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_t319_RemoteUE_r17_20;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_UE_TimersAndConstantsRemoteUE_r17;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_UE_TimersAndConstantsRemoteUE_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_UE_TimersAndConstantsRemoteUE_r17_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_UE_TimersAndConstantsRemoteUE_r17_H_ */
#include <asn_internal.h>