/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_NPN-IdentityInfo-r16.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_NR_gNB_ID_Length_r17_constraint_13(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 22L && value <= 32L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_NR_npn_IdentityList_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1UL && size <= 12UL)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_npn_IdentityList_r16_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  12 }	/* (SIZE(1..12)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_cellReservedForOperatorUse_r16_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_iab_Support_r16_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_gNB_ID_Length_r17_constr_14 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  22,  32 }	/* (22..32) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_npn_IdentityList_r16_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  12 }	/* (SIZE(1..12)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_NR_npn_IdentityList_r16_2[] = {
	{ ATF_POINTER, 0, 0,
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_NR_NPN_Identity_r16,
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
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_npn_IdentityList_r16_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_npn_IdentityList_r16_specs_2 = {
	sizeof(struct NR_NPN_IdentityInfo_r16__npn_IdentityList_r16),
	offsetof(struct NR_NPN_IdentityInfo_r16__npn_IdentityList_r16, _asn_ctx),
	2,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_npn_IdentityList_r16_2 = {
	"npn-IdentityList-r16",
	"npn-IdentityList-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_npn_IdentityList_r16_tags_2,
	sizeof(asn_DEF_NR_npn_IdentityList_r16_tags_2)
		/sizeof(asn_DEF_NR_npn_IdentityList_r16_tags_2[0]) - 1, /* 1 */
	asn_DEF_NR_npn_IdentityList_r16_tags_2,	/* Same as above */
	sizeof(asn_DEF_NR_npn_IdentityList_r16_tags_2)
		/sizeof(asn_DEF_NR_npn_IdentityList_r16_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_npn_IdentityList_r16_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_NR_npn_IdentityList_r16_2,
	1,	/* Single element */
	&asn_SPC_NR_npn_IdentityList_r16_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_cellReservedForOperatorUse_r16_value2enum_7[] = {
	{ 0,	8,	"reserved" },
	{ 1,	11,	"notReserved" }
};
static const unsigned int asn_MAP_NR_cellReservedForOperatorUse_r16_enum2value_7[] = {
	1,	/* notReserved(1) */
	0	/* reserved(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_cellReservedForOperatorUse_r16_specs_7 = {
	asn_MAP_NR_cellReservedForOperatorUse_r16_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_cellReservedForOperatorUse_r16_enum2value_7,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_cellReservedForOperatorUse_r16_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_cellReservedForOperatorUse_r16_7 = {
	"cellReservedForOperatorUse-r16",
	"cellReservedForOperatorUse-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_cellReservedForOperatorUse_r16_tags_7,
	sizeof(asn_DEF_NR_cellReservedForOperatorUse_r16_tags_7)
		/sizeof(asn_DEF_NR_cellReservedForOperatorUse_r16_tags_7[0]) - 1, /* 1 */
	asn_DEF_NR_cellReservedForOperatorUse_r16_tags_7,	/* Same as above */
	sizeof(asn_DEF_NR_cellReservedForOperatorUse_r16_tags_7)
		/sizeof(asn_DEF_NR_cellReservedForOperatorUse_r16_tags_7[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_cellReservedForOperatorUse_r16_constr_7,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_cellReservedForOperatorUse_r16_specs_7	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_iab_Support_r16_value2enum_10[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_NR_iab_Support_r16_enum2value_10[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_iab_Support_r16_specs_10 = {
	asn_MAP_NR_iab_Support_r16_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_iab_Support_r16_enum2value_10,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_iab_Support_r16_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_iab_Support_r16_10 = {
	"iab-Support-r16",
	"iab-Support-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_iab_Support_r16_tags_10,
	sizeof(asn_DEF_NR_iab_Support_r16_tags_10)
		/sizeof(asn_DEF_NR_iab_Support_r16_tags_10[0]) - 1, /* 1 */
	asn_DEF_NR_iab_Support_r16_tags_10,	/* Same as above */
	sizeof(asn_DEF_NR_iab_Support_r16_tags_10)
		/sizeof(asn_DEF_NR_iab_Support_r16_tags_10[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_iab_Support_r16_constr_10,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_iab_Support_r16_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_ext1_13[] = {
	{ ATF_POINTER, 1, offsetof(struct NR_NPN_IdentityInfo_r16__ext1, gNB_ID_Length_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_gNB_ID_Length_r17_constr_14,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_gNB_ID_Length_r17_constraint_13
		},
		0, 0, /* No default value */
		"gNB-ID-Length-r17"
		},
};
static const int asn_MAP_NR_ext1_oms_13[] = { 0 };
static const ber_tlv_tag_t asn_DEF_NR_ext1_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_ext1_tag2el_13[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* gNB-ID-Length-r17 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_ext1_specs_13 = {
	sizeof(struct NR_NPN_IdentityInfo_r16__ext1),
	offsetof(struct NR_NPN_IdentityInfo_r16__ext1, _asn_ctx),
	asn_MAP_NR_ext1_tag2el_13,
	1,	/* Count of tags in the map */
	asn_MAP_NR_ext1_oms_13,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ext1_13 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_ext1_tags_13,
	sizeof(asn_DEF_NR_ext1_tags_13)
		/sizeof(asn_DEF_NR_ext1_tags_13[0]) - 1, /* 1 */
	asn_DEF_NR_ext1_tags_13,	/* Same as above */
	sizeof(asn_DEF_NR_ext1_tags_13)
		/sizeof(asn_DEF_NR_ext1_tags_13[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_ext1_13,
	1,	/* Elements count */
	&asn_SPC_NR_ext1_specs_13	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_NPN_IdentityInfo_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_NPN_IdentityInfo_r16, npn_IdentityList_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_NR_npn_IdentityList_r16_2,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_npn_IdentityList_r16_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_npn_IdentityList_r16_constraint_1
		},
		0, 0, /* No default value */
		"npn-IdentityList-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_NPN_IdentityInfo_r16, trackingAreaCode_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_TrackingAreaCode,
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
		"trackingAreaCode-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_NPN_IdentityInfo_r16, ranac_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_RAN_AreaCode,
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
		"ranac-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_NPN_IdentityInfo_r16, cellIdentity_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_CellIdentity,
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
		"cellIdentity-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_NPN_IdentityInfo_r16, cellReservedForOperatorUse_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_cellReservedForOperatorUse_r16_7,
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
		"cellReservedForOperatorUse-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_NPN_IdentityInfo_r16, iab_Support_r16),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_iab_Support_r16_10,
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
		"iab-Support-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_NPN_IdentityInfo_r16, ext1),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_NR_ext1_13,
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
static const int asn_MAP_NR_NPN_IdentityInfo_r16_oms_1[] = { 2, 5, 6 };
static const ber_tlv_tag_t asn_DEF_NR_NPN_IdentityInfo_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_NPN_IdentityInfo_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* npn-IdentityList-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* trackingAreaCode-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ranac-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* cellIdentity-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* cellReservedForOperatorUse-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* iab-Support-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_NPN_IdentityInfo_r16_specs_1 = {
	sizeof(struct NR_NPN_IdentityInfo_r16),
	offsetof(struct NR_NPN_IdentityInfo_r16, _asn_ctx),
	asn_MAP_NR_NPN_IdentityInfo_r16_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_NR_NPN_IdentityInfo_r16_oms_1,	/* Optional members */
	2, 1,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_NPN_IdentityInfo_r16 = {
	"NPN-IdentityInfo-r16",
	"NPN-IdentityInfo-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_NPN_IdentityInfo_r16_tags_1,
	sizeof(asn_DEF_NR_NPN_IdentityInfo_r16_tags_1)
		/sizeof(asn_DEF_NR_NPN_IdentityInfo_r16_tags_1[0]), /* 1 */
	asn_DEF_NR_NPN_IdentityInfo_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_NPN_IdentityInfo_r16_tags_1)
		/sizeof(asn_DEF_NR_NPN_IdentityInfo_r16_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_NPN_IdentityInfo_r16_1,
	7,	/* Elements count */
	&asn_SPC_NR_NPN_IdentityInfo_r16_specs_1	/* Additional specs */
};
