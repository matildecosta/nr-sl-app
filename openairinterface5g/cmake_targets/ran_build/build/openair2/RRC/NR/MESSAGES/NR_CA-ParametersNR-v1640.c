/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_CA-ParametersNR-v1640.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_NR_pdcch_BlindDetectionCA1_r16_constraint_15(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1L && value <= 15L)) {
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
memb_NR_pdcch_BlindDetectionCA2_r16_constraint_15(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1L && value <= 15L)) {
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
memb_NR_twoPUCCH_Grp_ConfigurationsList_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1UL && size <= 32UL)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_NR_pdcch_MonitoringCA_NonAlignedSpan_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 2L && value <= 16L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_uplinkTxDC_TwoCarrierReport_r16_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_twoPUCCH_Grp_ConfigurationsList_r16_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_diffNumerologyAcrossPUCCH_Group_CarrierTypes_r16_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_diffNumerologyWithinPUCCH_GroupSmallerSCS_CarrierTypes_r16_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_diffNumerologyWithinPUCCH_GroupLargerSCS_CarrierTypes_r16_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_pdcch_BlindDetectionCA1_r16_constr_16 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  1,  15 }	/* (1..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_pdcch_BlindDetectionCA2_r16_constr_17 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  1,  15 }	/* (1..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_twoPUCCH_Grp_ConfigurationsList_r16_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_pdcch_MonitoringCA_NonAlignedSpan_r16_constr_14 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  2,  16 }	/* (2..16) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_NR_uplinkTxDC_TwoCarrierReport_r16_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_NR_uplinkTxDC_TwoCarrierReport_r16_enum2value_2[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_uplinkTxDC_TwoCarrierReport_r16_specs_2 = {
	asn_MAP_NR_uplinkTxDC_TwoCarrierReport_r16_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_uplinkTxDC_TwoCarrierReport_r16_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_uplinkTxDC_TwoCarrierReport_r16_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_uplinkTxDC_TwoCarrierReport_r16_2 = {
	"uplinkTxDC-TwoCarrierReport-r16",
	"uplinkTxDC-TwoCarrierReport-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_uplinkTxDC_TwoCarrierReport_r16_tags_2,
	sizeof(asn_DEF_NR_uplinkTxDC_TwoCarrierReport_r16_tags_2)
		/sizeof(asn_DEF_NR_uplinkTxDC_TwoCarrierReport_r16_tags_2[0]) - 1, /* 1 */
	asn_DEF_NR_uplinkTxDC_TwoCarrierReport_r16_tags_2,	/* Same as above */
	sizeof(asn_DEF_NR_uplinkTxDC_TwoCarrierReport_r16_tags_2)
		/sizeof(asn_DEF_NR_uplinkTxDC_TwoCarrierReport_r16_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_uplinkTxDC_TwoCarrierReport_r16_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_uplinkTxDC_TwoCarrierReport_r16_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_twoPUCCH_Grp_ConfigurationsList_r16_6[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NR_TwoPUCCH_Grp_Configurations_r16,
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
static const ber_tlv_tag_t asn_DEF_NR_twoPUCCH_Grp_ConfigurationsList_r16_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_twoPUCCH_Grp_ConfigurationsList_r16_specs_6 = {
	sizeof(struct NR_CA_ParametersNR_v1640__twoPUCCH_Grp_ConfigurationsList_r16),
	offsetof(struct NR_CA_ParametersNR_v1640__twoPUCCH_Grp_ConfigurationsList_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_twoPUCCH_Grp_ConfigurationsList_r16_6 = {
	"twoPUCCH-Grp-ConfigurationsList-r16",
	"twoPUCCH-Grp-ConfigurationsList-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_twoPUCCH_Grp_ConfigurationsList_r16_tags_6,
	sizeof(asn_DEF_NR_twoPUCCH_Grp_ConfigurationsList_r16_tags_6)
		/sizeof(asn_DEF_NR_twoPUCCH_Grp_ConfigurationsList_r16_tags_6[0]) - 1, /* 1 */
	asn_DEF_NR_twoPUCCH_Grp_ConfigurationsList_r16_tags_6,	/* Same as above */
	sizeof(asn_DEF_NR_twoPUCCH_Grp_ConfigurationsList_r16_tags_6)
		/sizeof(asn_DEF_NR_twoPUCCH_Grp_ConfigurationsList_r16_tags_6[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_twoPUCCH_Grp_ConfigurationsList_r16_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_NR_twoPUCCH_Grp_ConfigurationsList_r16_6,
	1,	/* Single element */
	&asn_SPC_NR_twoPUCCH_Grp_ConfigurationsList_r16_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_diffNumerologyAcrossPUCCH_Group_CarrierTypes_r16_value2enum_8[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_NR_diffNumerologyAcrossPUCCH_Group_CarrierTypes_r16_enum2value_8[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_diffNumerologyAcrossPUCCH_Group_CarrierTypes_r16_specs_8 = {
	asn_MAP_NR_diffNumerologyAcrossPUCCH_Group_CarrierTypes_r16_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_diffNumerologyAcrossPUCCH_Group_CarrierTypes_r16_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_diffNumerologyAcrossPUCCH_Group_CarrierTypes_r16_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_diffNumerologyAcrossPUCCH_Group_CarrierTypes_r16_8 = {
	"diffNumerologyAcrossPUCCH-Group-CarrierTypes-r16",
	"diffNumerologyAcrossPUCCH-Group-CarrierTypes-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_diffNumerologyAcrossPUCCH_Group_CarrierTypes_r16_tags_8,
	sizeof(asn_DEF_NR_diffNumerologyAcrossPUCCH_Group_CarrierTypes_r16_tags_8)
		/sizeof(asn_DEF_NR_diffNumerologyAcrossPUCCH_Group_CarrierTypes_r16_tags_8[0]) - 1, /* 1 */
	asn_DEF_NR_diffNumerologyAcrossPUCCH_Group_CarrierTypes_r16_tags_8,	/* Same as above */
	sizeof(asn_DEF_NR_diffNumerologyAcrossPUCCH_Group_CarrierTypes_r16_tags_8)
		/sizeof(asn_DEF_NR_diffNumerologyAcrossPUCCH_Group_CarrierTypes_r16_tags_8[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_diffNumerologyAcrossPUCCH_Group_CarrierTypes_r16_constr_8,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_diffNumerologyAcrossPUCCH_Group_CarrierTypes_r16_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_diffNumerologyWithinPUCCH_GroupSmallerSCS_CarrierTypes_r16_value2enum_10[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_NR_diffNumerologyWithinPUCCH_GroupSmallerSCS_CarrierTypes_r16_enum2value_10[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_diffNumerologyWithinPUCCH_GroupSmallerSCS_CarrierTypes_r16_specs_10 = {
	asn_MAP_NR_diffNumerologyWithinPUCCH_GroupSmallerSCS_CarrierTypes_r16_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_diffNumerologyWithinPUCCH_GroupSmallerSCS_CarrierTypes_r16_enum2value_10,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_diffNumerologyWithinPUCCH_GroupSmallerSCS_CarrierTypes_r16_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_diffNumerologyWithinPUCCH_GroupSmallerSCS_CarrierTypes_r16_10 = {
	"diffNumerologyWithinPUCCH-GroupSmallerSCS-CarrierTypes-r16",
	"diffNumerologyWithinPUCCH-GroupSmallerSCS-CarrierTypes-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_diffNumerologyWithinPUCCH_GroupSmallerSCS_CarrierTypes_r16_tags_10,
	sizeof(asn_DEF_NR_diffNumerologyWithinPUCCH_GroupSmallerSCS_CarrierTypes_r16_tags_10)
		/sizeof(asn_DEF_NR_diffNumerologyWithinPUCCH_GroupSmallerSCS_CarrierTypes_r16_tags_10[0]) - 1, /* 1 */
	asn_DEF_NR_diffNumerologyWithinPUCCH_GroupSmallerSCS_CarrierTypes_r16_tags_10,	/* Same as above */
	sizeof(asn_DEF_NR_diffNumerologyWithinPUCCH_GroupSmallerSCS_CarrierTypes_r16_tags_10)
		/sizeof(asn_DEF_NR_diffNumerologyWithinPUCCH_GroupSmallerSCS_CarrierTypes_r16_tags_10[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_diffNumerologyWithinPUCCH_GroupSmallerSCS_CarrierTypes_r16_constr_10,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_diffNumerologyWithinPUCCH_GroupSmallerSCS_CarrierTypes_r16_specs_10	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_diffNumerologyWithinPUCCH_GroupLargerSCS_CarrierTypes_r16_value2enum_12[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_NR_diffNumerologyWithinPUCCH_GroupLargerSCS_CarrierTypes_r16_enum2value_12[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_diffNumerologyWithinPUCCH_GroupLargerSCS_CarrierTypes_r16_specs_12 = {
	asn_MAP_NR_diffNumerologyWithinPUCCH_GroupLargerSCS_CarrierTypes_r16_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_diffNumerologyWithinPUCCH_GroupLargerSCS_CarrierTypes_r16_enum2value_12,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_diffNumerologyWithinPUCCH_GroupLargerSCS_CarrierTypes_r16_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_diffNumerologyWithinPUCCH_GroupLargerSCS_CarrierTypes_r16_12 = {
	"diffNumerologyWithinPUCCH-GroupLargerSCS-CarrierTypes-r16",
	"diffNumerologyWithinPUCCH-GroupLargerSCS-CarrierTypes-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_diffNumerologyWithinPUCCH_GroupLargerSCS_CarrierTypes_r16_tags_12,
	sizeof(asn_DEF_NR_diffNumerologyWithinPUCCH_GroupLargerSCS_CarrierTypes_r16_tags_12)
		/sizeof(asn_DEF_NR_diffNumerologyWithinPUCCH_GroupLargerSCS_CarrierTypes_r16_tags_12[0]) - 1, /* 1 */
	asn_DEF_NR_diffNumerologyWithinPUCCH_GroupLargerSCS_CarrierTypes_r16_tags_12,	/* Same as above */
	sizeof(asn_DEF_NR_diffNumerologyWithinPUCCH_GroupLargerSCS_CarrierTypes_r16_tags_12)
		/sizeof(asn_DEF_NR_diffNumerologyWithinPUCCH_GroupLargerSCS_CarrierTypes_r16_tags_12[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_diffNumerologyWithinPUCCH_GroupLargerSCS_CarrierTypes_r16_constr_12,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_diffNumerologyWithinPUCCH_GroupLargerSCS_CarrierTypes_r16_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r16_15[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CA_ParametersNR_v1640__pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r16, pdcch_BlindDetectionCA1_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_pdcch_BlindDetectionCA1_r16_constr_16,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_pdcch_BlindDetectionCA1_r16_constraint_15
		},
		0, 0, /* No default value */
		"pdcch-BlindDetectionCA1-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CA_ParametersNR_v1640__pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r16, pdcch_BlindDetectionCA2_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_pdcch_BlindDetectionCA2_r16_constr_17,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_pdcch_BlindDetectionCA2_r16_constraint_15
		},
		0, 0, /* No default value */
		"pdcch-BlindDetectionCA2-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r16_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r16_tag2el_15[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pdcch-BlindDetectionCA1-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* pdcch-BlindDetectionCA2-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r16_specs_15 = {
	sizeof(struct NR_CA_ParametersNR_v1640__pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r16),
	offsetof(struct NR_CA_ParametersNR_v1640__pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r16, _asn_ctx),
	asn_MAP_NR_pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r16_tag2el_15,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r16_15 = {
	"pdcch-BlindDetectionCA-Mixed-NonAlignedSpan-r16",
	"pdcch-BlindDetectionCA-Mixed-NonAlignedSpan-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r16_tags_15,
	sizeof(asn_DEF_NR_pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r16_tags_15)
		/sizeof(asn_DEF_NR_pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r16_tags_15[0]) - 1, /* 1 */
	asn_DEF_NR_pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r16_tags_15,	/* Same as above */
	sizeof(asn_DEF_NR_pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r16_tags_15)
		/sizeof(asn_DEF_NR_pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r16_tags_15[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r16_15,
	2,	/* Elements count */
	&asn_SPC_NR_pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r16_specs_15	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_CA_ParametersNR_v1640_1[] = {
	{ ATF_POINTER, 9, offsetof(struct NR_CA_ParametersNR_v1640, uplinkTxDC_TwoCarrierReport_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_uplinkTxDC_TwoCarrierReport_r16_2,
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
		"uplinkTxDC-TwoCarrierReport-r16"
		},
	{ ATF_POINTER, 8, offsetof(struct NR_CA_ParametersNR_v1640, maxUpTo3Diff_NumerologiesConfigSinglePUCCH_grp_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_PUCCH_Grp_CarrierTypes_r16,
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
		"maxUpTo3Diff-NumerologiesConfigSinglePUCCH-grp-r16"
		},
	{ ATF_POINTER, 7, offsetof(struct NR_CA_ParametersNR_v1640, maxUpTo4Diff_NumerologiesConfigSinglePUCCH_grp_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_PUCCH_Grp_CarrierTypes_r16,
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
		"maxUpTo4Diff-NumerologiesConfigSinglePUCCH-grp-r16"
		},
	{ ATF_POINTER, 6, offsetof(struct NR_CA_ParametersNR_v1640, twoPUCCH_Grp_ConfigurationsList_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_NR_twoPUCCH_Grp_ConfigurationsList_r16_6,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_twoPUCCH_Grp_ConfigurationsList_r16_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_twoPUCCH_Grp_ConfigurationsList_r16_constraint_1
		},
		0, 0, /* No default value */
		"twoPUCCH-Grp-ConfigurationsList-r16"
		},
	{ ATF_POINTER, 5, offsetof(struct NR_CA_ParametersNR_v1640, diffNumerologyAcrossPUCCH_Group_CarrierTypes_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_diffNumerologyAcrossPUCCH_Group_CarrierTypes_r16_8,
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
		"diffNumerologyAcrossPUCCH-Group-CarrierTypes-r16"
		},
	{ ATF_POINTER, 4, offsetof(struct NR_CA_ParametersNR_v1640, diffNumerologyWithinPUCCH_GroupSmallerSCS_CarrierTypes_r16),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_diffNumerologyWithinPUCCH_GroupSmallerSCS_CarrierTypes_r16_10,
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
		"diffNumerologyWithinPUCCH-GroupSmallerSCS-CarrierTypes-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_CA_ParametersNR_v1640, diffNumerologyWithinPUCCH_GroupLargerSCS_CarrierTypes_r16),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_diffNumerologyWithinPUCCH_GroupLargerSCS_CarrierTypes_r16_12,
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
		"diffNumerologyWithinPUCCH-GroupLargerSCS-CarrierTypes-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_CA_ParametersNR_v1640, pdcch_MonitoringCA_NonAlignedSpan_r16),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_pdcch_MonitoringCA_NonAlignedSpan_r16_constr_14,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_pdcch_MonitoringCA_NonAlignedSpan_r16_constraint_1
		},
		0, 0, /* No default value */
		"pdcch-MonitoringCA-NonAlignedSpan-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_CA_ParametersNR_v1640, pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r16),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		0,
		&asn_DEF_NR_pdcch_BlindDetectionCA_Mixed_NonAlignedSpan_r16_15,
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
		"pdcch-BlindDetectionCA-Mixed-NonAlignedSpan-r16"
		},
};
static const int asn_MAP_NR_CA_ParametersNR_v1640_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8 };
static const ber_tlv_tag_t asn_DEF_NR_CA_ParametersNR_v1640_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_CA_ParametersNR_v1640_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* uplinkTxDC-TwoCarrierReport-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* maxUpTo3Diff-NumerologiesConfigSinglePUCCH-grp-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* maxUpTo4Diff-NumerologiesConfigSinglePUCCH-grp-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* twoPUCCH-Grp-ConfigurationsList-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* diffNumerologyAcrossPUCCH-Group-CarrierTypes-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* diffNumerologyWithinPUCCH-GroupSmallerSCS-CarrierTypes-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* diffNumerologyWithinPUCCH-GroupLargerSCS-CarrierTypes-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* pdcch-MonitoringCA-NonAlignedSpan-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* pdcch-BlindDetectionCA-Mixed-NonAlignedSpan-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_CA_ParametersNR_v1640_specs_1 = {
	sizeof(struct NR_CA_ParametersNR_v1640),
	offsetof(struct NR_CA_ParametersNR_v1640, _asn_ctx),
	asn_MAP_NR_CA_ParametersNR_v1640_tag2el_1,
	9,	/* Count of tags in the map */
	asn_MAP_NR_CA_ParametersNR_v1640_oms_1,	/* Optional members */
	9, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_CA_ParametersNR_v1640 = {
	"CA-ParametersNR-v1640",
	"CA-ParametersNR-v1640",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_CA_ParametersNR_v1640_tags_1,
	sizeof(asn_DEF_NR_CA_ParametersNR_v1640_tags_1)
		/sizeof(asn_DEF_NR_CA_ParametersNR_v1640_tags_1[0]), /* 1 */
	asn_DEF_NR_CA_ParametersNR_v1640_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_CA_ParametersNR_v1640_tags_1)
		/sizeof(asn_DEF_NR_CA_ParametersNR_v1640_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_CA_ParametersNR_v1640_1,
	9,	/* Elements count */
	&asn_SPC_NR_CA_ParametersNR_v1640_specs_1	/* Additional specs */
};
