/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_CG-Config-v1700-IEs.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_twoPHRModeSCG_r17_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_NR_twoPHRModeSCG_r17_value2enum_3[] = {
	{ 0,	7,	"enabled" }
};
static const unsigned int asn_MAP_NR_twoPHRModeSCG_r17_enum2value_3[] = {
	0	/* enabled(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_twoPHRModeSCG_r17_specs_3 = {
	asn_MAP_NR_twoPHRModeSCG_r17_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_twoPHRModeSCG_r17_enum2value_3,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_twoPHRModeSCG_r17_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_twoPHRModeSCG_r17_3 = {
	"twoPHRModeSCG-r17",
	"twoPHRModeSCG-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_twoPHRModeSCG_r17_tags_3,
	sizeof(asn_DEF_NR_twoPHRModeSCG_r17_tags_3)
		/sizeof(asn_DEF_NR_twoPHRModeSCG_r17_tags_3[0]) - 1, /* 1 */
	asn_DEF_NR_twoPHRModeSCG_r17_tags_3,	/* Same as above */
	sizeof(asn_DEF_NR_twoPHRModeSCG_r17_tags_3)
		/sizeof(asn_DEF_NR_twoPHRModeSCG_r17_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_twoPHRModeSCG_r17_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_twoPHRModeSCG_r17_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_CG_Config_v1700_IEs_1[] = {
	{ ATF_POINTER, 3, offsetof(struct NR_CG_Config_v1700_IEs, candidateCellInfoListCPC_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_CandidateCellInfoListCPC_r17,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"candidateCellInfoListCPC-r17"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_CG_Config_v1700_IEs, twoPHRModeSCG_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_twoPHRModeSCG_r17_3,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"twoPHRModeSCG-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_CG_Config_v1700_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_CG_Config_v1730_IEs,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_NR_CG_Config_v1700_IEs_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_NR_CG_Config_v1700_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_CG_Config_v1700_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* candidateCellInfoListCPC-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* twoPHRModeSCG-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_CG_Config_v1700_IEs_specs_1 = {
	sizeof(struct NR_CG_Config_v1700_IEs),
	offsetof(struct NR_CG_Config_v1700_IEs, _asn_ctx),
	asn_MAP_NR_CG_Config_v1700_IEs_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_NR_CG_Config_v1700_IEs_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_CG_Config_v1700_IEs = {
	"CG-Config-v1700-IEs",
	"CG-Config-v1700-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_CG_Config_v1700_IEs_tags_1,
	sizeof(asn_DEF_NR_CG_Config_v1700_IEs_tags_1)
		/sizeof(asn_DEF_NR_CG_Config_v1700_IEs_tags_1[0]), /* 1 */
	asn_DEF_NR_CG_Config_v1700_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_CG_Config_v1700_IEs_tags_1)
		/sizeof(asn_DEF_NR_CG_Config_v1700_IEs_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_CG_Config_v1700_IEs_1,
	3,	/* Elements count */
	&asn_SPC_NR_CG_Config_v1700_IEs_specs_1	/* Additional specs */
};
