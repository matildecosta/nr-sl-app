/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair3/NGAP/MESSAGES/ASN1/ngap-15.8.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -no-gen-example -fno-include-deps -findirect-choice -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair3/NGAP/MESSAGES`
 */

#include "NGAP_IntegrityProtectionIndication.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_NGAP_IntegrityProtectionIndication_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_NGAP_IntegrityProtectionIndication_value2enum_1[] = {
	{ 0,	8,	"required" },
	{ 1,	9,	"preferred" },
	{ 2,	10,	"not-needed" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_NGAP_IntegrityProtectionIndication_enum2value_1[] = {
	2,	/* not-needed(2) */
	1,	/* preferred(1) */
	0	/* required(0) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_NGAP_IntegrityProtectionIndication_specs_1 = {
	asn_MAP_NGAP_IntegrityProtectionIndication_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_NGAP_IntegrityProtectionIndication_enum2value_1,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	4,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NGAP_IntegrityProtectionIndication_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_NGAP_IntegrityProtectionIndication = {
	"IntegrityProtectionIndication",
	"IntegrityProtectionIndication",
	&asn_OP_NativeEnumerated,
	asn_DEF_NGAP_IntegrityProtectionIndication_tags_1,
	sizeof(asn_DEF_NGAP_IntegrityProtectionIndication_tags_1)
		/sizeof(asn_DEF_NGAP_IntegrityProtectionIndication_tags_1[0]), /* 1 */
	asn_DEF_NGAP_IntegrityProtectionIndication_tags_1,	/* Same as above */
	sizeof(asn_DEF_NGAP_IntegrityProtectionIndication_tags_1)
		/sizeof(asn_DEF_NGAP_IntegrityProtectionIndication_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NGAP_IntegrityProtectionIndication_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NGAP_IntegrityProtectionIndication_specs_1	/* Additional specs */
};
