/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_SRB-ToAddMod-NB-r13.h"

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_rlc_Config_r13_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_logicalChannelConfig_r13_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_LTE_rlc_Config_r13_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SRB_ToAddMod_NB_r13__rlc_Config_r13, choice.explicitValue),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_RLC_Config_NB_r13,
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
		"explicitValue"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SRB_ToAddMod_NB_r13__rlc_Config_r13, choice.defaultValue),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
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
		"defaultValue"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_rlc_Config_r13_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* explicitValue */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* defaultValue */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_rlc_Config_r13_specs_2 = {
	sizeof(struct LTE_SRB_ToAddMod_NB_r13__rlc_Config_r13),
	offsetof(struct LTE_SRB_ToAddMod_NB_r13__rlc_Config_r13, _asn_ctx),
	offsetof(struct LTE_SRB_ToAddMod_NB_r13__rlc_Config_r13, present),
	sizeof(((struct LTE_SRB_ToAddMod_NB_r13__rlc_Config_r13 *)0)->present),
	asn_MAP_LTE_rlc_Config_r13_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_rlc_Config_r13_2 = {
	"rlc-Config-r13",
	"rlc-Config-r13",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_rlc_Config_r13_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_LTE_rlc_Config_r13_2,
	2,	/* Elements count */
	&asn_SPC_LTE_rlc_Config_r13_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_logicalChannelConfig_r13_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SRB_ToAddMod_NB_r13__logicalChannelConfig_r13, choice.explicitValue),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_LogicalChannelConfig_NB_r13,
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
		"explicitValue"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SRB_ToAddMod_NB_r13__logicalChannelConfig_r13, choice.defaultValue),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
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
		"defaultValue"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_logicalChannelConfig_r13_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* explicitValue */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* defaultValue */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_logicalChannelConfig_r13_specs_5 = {
	sizeof(struct LTE_SRB_ToAddMod_NB_r13__logicalChannelConfig_r13),
	offsetof(struct LTE_SRB_ToAddMod_NB_r13__logicalChannelConfig_r13, _asn_ctx),
	offsetof(struct LTE_SRB_ToAddMod_NB_r13__logicalChannelConfig_r13, present),
	sizeof(((struct LTE_SRB_ToAddMod_NB_r13__logicalChannelConfig_r13 *)0)->present),
	asn_MAP_LTE_logicalChannelConfig_r13_tag2el_5,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_logicalChannelConfig_r13_5 = {
	"logicalChannelConfig-r13",
	"logicalChannelConfig-r13",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_logicalChannelConfig_r13_constr_5,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_LTE_logicalChannelConfig_r13_5,
	2,	/* Elements count */
	&asn_SPC_LTE_logicalChannelConfig_r13_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext1_9[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_SRB_ToAddMod_NB_r13__ext1, rlc_Config_v1430),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RLC_Config_NB_v1430,
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
		"rlc-Config-v1430"
		},
};
static const int asn_MAP_LTE_ext1_oms_9[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext1_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext1_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* rlc-Config-v1430 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext1_specs_9 = {
	sizeof(struct LTE_SRB_ToAddMod_NB_r13__ext1),
	offsetof(struct LTE_SRB_ToAddMod_NB_r13__ext1, _asn_ctx),
	asn_MAP_LTE_ext1_tag2el_9,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext1_oms_9,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext1_9 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext1_tags_9,
	sizeof(asn_DEF_LTE_ext1_tags_9)
		/sizeof(asn_DEF_LTE_ext1_tags_9[0]) - 1, /* 1 */
	asn_DEF_LTE_ext1_tags_9,	/* Same as above */
	sizeof(asn_DEF_LTE_ext1_tags_9)
		/sizeof(asn_DEF_LTE_ext1_tags_9[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_ext1_9,
	1,	/* Elements count */
	&asn_SPC_LTE_ext1_specs_9	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_SRB_ToAddMod_NB_r13_1[] = {
	{ ATF_POINTER, 3, offsetof(struct LTE_SRB_ToAddMod_NB_r13, rlc_Config_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_rlc_Config_r13_2,
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
		"rlc-Config-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_SRB_ToAddMod_NB_r13, logicalChannelConfig_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_logicalChannelConfig_r13_5,
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
		"logicalChannelConfig-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SRB_ToAddMod_NB_r13, ext1),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_LTE_ext1_9,
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
		"ext1"
		},
};
static const int asn_MAP_LTE_SRB_ToAddMod_NB_r13_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_LTE_SRB_ToAddMod_NB_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SRB_ToAddMod_NB_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rlc-Config-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* logicalChannelConfig-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_SRB_ToAddMod_NB_r13_specs_1 = {
	sizeof(struct LTE_SRB_ToAddMod_NB_r13),
	offsetof(struct LTE_SRB_ToAddMod_NB_r13, _asn_ctx),
	asn_MAP_LTE_SRB_ToAddMod_NB_r13_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_LTE_SRB_ToAddMod_NB_r13_oms_1,	/* Optional members */
	2, 1,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SRB_ToAddMod_NB_r13 = {
	"SRB-ToAddMod-NB-r13",
	"SRB-ToAddMod-NB-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_SRB_ToAddMod_NB_r13_tags_1,
	sizeof(asn_DEF_LTE_SRB_ToAddMod_NB_r13_tags_1)
		/sizeof(asn_DEF_LTE_SRB_ToAddMod_NB_r13_tags_1[0]), /* 1 */
	asn_DEF_LTE_SRB_ToAddMod_NB_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SRB_ToAddMod_NB_r13_tags_1)
		/sizeof(asn_DEF_LTE_SRB_ToAddMod_NB_r13_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_SRB_ToAddMod_NB_r13_1,
	3,	/* Elements count */
	&asn_SPC_LTE_SRB_ToAddMod_NB_r13_specs_1	/* Additional specs */
};
