/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#include "LPP_OTDOA-NeighbourCellInfoNB-r14.h"

#include "LPP_ECGI.h"
#include "LPP_CarrierFreq-NB-r14.h"
#include "LPP_PRS-Info-NB-r14.h"
#include "LPP_TDD-Config-v1520.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_LPP_physCellIdNB_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 503L)) {
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
memb_LPP_nprs_slotNumberOffset_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 19L)) {
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
memb_LPP_nprs_SFN_Offset_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 63L)) {
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
memb_LPP_nprs_SubframeOffset_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 1279L)) {
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
memb_LPP_expectedRSTD_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 16383L)) {
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
memb_LPP_expectedRSTD_Uncertainty_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 1023L)) {
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
memb_LPP_prsNeighbourCellIndex_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1L && value <= 72L)) {
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
static asn_per_constraints_t asn_PER_type_LPP_eutra_NumCRS_Ports_r14_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LPP_otdoa_SIB1_NB_repetitions_r14_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LPP_physCellIdNB_r14_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  0,  503 }	/* (0..503) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LPP_nprs_slotNumberOffset_r14_constr_15 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  19 }	/* (0..19) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LPP_nprs_SFN_Offset_r14_constr_16 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  63 }	/* (0..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LPP_nprs_SubframeOffset_r14_constr_17 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 11,  11,  0,  1279 }	/* (0..1279) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LPP_expectedRSTD_r14_constr_18 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 14,  14,  0,  16383 }	/* (0..16383) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LPP_expectedRSTD_Uncertainty_r14_constr_19 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  1023 }	/* (0..1023) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LPP_prsNeighbourCellIndex_r14_constr_20 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  1,  72 }	/* (1..72) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LPP_eutra_NumCRS_Ports_r14_value2enum_6[] = {
	{ 0,	12,	"ports-1-or-2" },
	{ 1,	7,	"ports-4" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_LPP_eutra_NumCRS_Ports_r14_enum2value_6[] = {
	0,	/* ports-1-or-2(0) */
	1	/* ports-4(1) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_LPP_eutra_NumCRS_Ports_r14_specs_6 = {
	asn_MAP_LPP_eutra_NumCRS_Ports_r14_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_LPP_eutra_NumCRS_Ports_r14_enum2value_6,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	3,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LPP_eutra_NumCRS_Ports_r14_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LPP_eutra_NumCRS_Ports_r14_6 = {
	"eutra-NumCRS-Ports-r14",
	"eutra-NumCRS-Ports-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LPP_eutra_NumCRS_Ports_r14_tags_6,
	sizeof(asn_DEF_LPP_eutra_NumCRS_Ports_r14_tags_6)
		/sizeof(asn_DEF_LPP_eutra_NumCRS_Ports_r14_tags_6[0]) - 1, /* 1 */
	asn_DEF_LPP_eutra_NumCRS_Ports_r14_tags_6,	/* Same as above */
	sizeof(asn_DEF_LPP_eutra_NumCRS_Ports_r14_tags_6)
		/sizeof(asn_DEF_LPP_eutra_NumCRS_Ports_r14_tags_6[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LPP_eutra_NumCRS_Ports_r14_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LPP_eutra_NumCRS_Ports_r14_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LPP_otdoa_SIB1_NB_repetitions_r14_value2enum_10[] = {
	{ 0,	2,	"r4" },
	{ 1,	2,	"r8" },
	{ 2,	3,	"r16" }
};
static const unsigned int asn_MAP_LPP_otdoa_SIB1_NB_repetitions_r14_enum2value_10[] = {
	2,	/* r16(2) */
	0,	/* r4(0) */
	1	/* r8(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_LPP_otdoa_SIB1_NB_repetitions_r14_specs_10 = {
	asn_MAP_LPP_otdoa_SIB1_NB_repetitions_r14_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_LPP_otdoa_SIB1_NB_repetitions_r14_enum2value_10,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LPP_otdoa_SIB1_NB_repetitions_r14_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LPP_otdoa_SIB1_NB_repetitions_r14_10 = {
	"otdoa-SIB1-NB-repetitions-r14",
	"otdoa-SIB1-NB-repetitions-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LPP_otdoa_SIB1_NB_repetitions_r14_tags_10,
	sizeof(asn_DEF_LPP_otdoa_SIB1_NB_repetitions_r14_tags_10)
		/sizeof(asn_DEF_LPP_otdoa_SIB1_NB_repetitions_r14_tags_10[0]) - 1, /* 1 */
	asn_DEF_LPP_otdoa_SIB1_NB_repetitions_r14_tags_10,	/* Same as above */
	sizeof(asn_DEF_LPP_otdoa_SIB1_NB_repetitions_r14_tags_10)
		/sizeof(asn_DEF_LPP_otdoa_SIB1_NB_repetitions_r14_tags_10[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LPP_otdoa_SIB1_NB_repetitions_r14_constr_10,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LPP_otdoa_SIB1_NB_repetitions_r14_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LPP_ext1_22[] = {
	{ ATF_POINTER, 1, offsetof(struct LPP_OTDOA_NeighbourCellInfoNB_r14__ext1, nprsInfo_Type2_v1470),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_PRS_Info_NB_r14,
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
		"nprsInfo-Type2-v1470"
		},
};
static const int asn_MAP_LPP_ext1_oms_22[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LPP_ext1_tags_22[] = {
	(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LPP_ext1_tag2el_22[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* nprsInfo-Type2-v1470 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LPP_ext1_specs_22 = {
	sizeof(struct LPP_OTDOA_NeighbourCellInfoNB_r14__ext1),
	offsetof(struct LPP_OTDOA_NeighbourCellInfoNB_r14__ext1, _asn_ctx),
	asn_MAP_LPP_ext1_tag2el_22,
	1,	/* Count of tags in the map */
	asn_MAP_LPP_ext1_oms_22,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LPP_ext1_22 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_LPP_ext1_tags_22,
	sizeof(asn_DEF_LPP_ext1_tags_22)
		/sizeof(asn_DEF_LPP_ext1_tags_22[0]) - 1, /* 1 */
	asn_DEF_LPP_ext1_tags_22,	/* Same as above */
	sizeof(asn_DEF_LPP_ext1_tags_22)
		/sizeof(asn_DEF_LPP_ext1_tags_22[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LPP_ext1_22,
	1,	/* Elements count */
	&asn_SPC_LPP_ext1_specs_22	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LPP_ext2_24[] = {
	{ ATF_POINTER, 1, offsetof(struct LPP_OTDOA_NeighbourCellInfoNB_r14__ext2, tdd_config_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_TDD_Config_v1520,
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
		"tdd-config-r15"
		},
};
static const int asn_MAP_LPP_ext2_oms_24[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LPP_ext2_tags_24[] = {
	(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LPP_ext2_tag2el_24[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* tdd-config-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LPP_ext2_specs_24 = {
	sizeof(struct LPP_OTDOA_NeighbourCellInfoNB_r14__ext2),
	offsetof(struct LPP_OTDOA_NeighbourCellInfoNB_r14__ext2, _asn_ctx),
	asn_MAP_LPP_ext2_tag2el_24,
	1,	/* Count of tags in the map */
	asn_MAP_LPP_ext2_oms_24,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LPP_ext2_24 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_LPP_ext2_tags_24,
	sizeof(asn_DEF_LPP_ext2_tags_24)
		/sizeof(asn_DEF_LPP_ext2_tags_24[0]) - 1, /* 1 */
	asn_DEF_LPP_ext2_tags_24,	/* Same as above */
	sizeof(asn_DEF_LPP_ext2_tags_24)
		/sizeof(asn_DEF_LPP_ext2_tags_24[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LPP_ext2_24,
	1,	/* Elements count */
	&asn_SPC_LPP_ext2_specs_24	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LPP_OTDOA_NeighbourCellInfoNB_r14_1[] = {
	{ ATF_POINTER, 15, offsetof(struct LPP_OTDOA_NeighbourCellInfoNB_r14, physCellIdNB_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LPP_physCellIdNB_r14_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LPP_physCellIdNB_r14_constraint_1
		},
		0, 0, /* No default value */
		"physCellIdNB-r14"
		},
	{ ATF_POINTER, 14, offsetof(struct LPP_OTDOA_NeighbourCellInfoNB_r14, cellGlobalIdNB_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_ECGI,
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
		"cellGlobalIdNB-r14"
		},
	{ ATF_POINTER, 13, offsetof(struct LPP_OTDOA_NeighbourCellInfoNB_r14, carrierFreq_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_CarrierFreq_NB_r14,
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
		"carrierFreq-r14"
		},
	{ ATF_POINTER, 12, offsetof(struct LPP_OTDOA_NeighbourCellInfoNB_r14, earfcn_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_ARFCN_ValueEUTRA_r14,
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
		"earfcn-r14"
		},
	{ ATF_POINTER, 11, offsetof(struct LPP_OTDOA_NeighbourCellInfoNB_r14, eutra_NumCRS_Ports_r14),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_eutra_NumCRS_Ports_r14_6,
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
		"eutra-NumCRS-Ports-r14"
		},
	{ ATF_POINTER, 10, offsetof(struct LPP_OTDOA_NeighbourCellInfoNB_r14, otdoa_SIB1_NB_repetitions_r14),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_otdoa_SIB1_NB_repetitions_r14_10,
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
		"otdoa-SIB1-NB-repetitions-r14"
		},
	{ ATF_POINTER, 9, offsetof(struct LPP_OTDOA_NeighbourCellInfoNB_r14, nprsInfo_r14),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_PRS_Info_NB_r14,
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
		"nprsInfo-r14"
		},
	{ ATF_POINTER, 8, offsetof(struct LPP_OTDOA_NeighbourCellInfoNB_r14, nprs_slotNumberOffset_r14),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LPP_nprs_slotNumberOffset_r14_constr_15,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LPP_nprs_slotNumberOffset_r14_constraint_1
		},
		0, 0, /* No default value */
		"nprs-slotNumberOffset-r14"
		},
	{ ATF_POINTER, 7, offsetof(struct LPP_OTDOA_NeighbourCellInfoNB_r14, nprs_SFN_Offset_r14),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LPP_nprs_SFN_Offset_r14_constr_16,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LPP_nprs_SFN_Offset_r14_constraint_1
		},
		0, 0, /* No default value */
		"nprs-SFN-Offset-r14"
		},
	{ ATF_POINTER, 6, offsetof(struct LPP_OTDOA_NeighbourCellInfoNB_r14, nprs_SubframeOffset_r14),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LPP_nprs_SubframeOffset_r14_constr_17,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LPP_nprs_SubframeOffset_r14_constraint_1
		},
		0, 0, /* No default value */
		"nprs-SubframeOffset-r14"
		},
	{ ATF_POINTER, 5, offsetof(struct LPP_OTDOA_NeighbourCellInfoNB_r14, expectedRSTD_r14),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LPP_expectedRSTD_r14_constr_18,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LPP_expectedRSTD_r14_constraint_1
		},
		0, 0, /* No default value */
		"expectedRSTD-r14"
		},
	{ ATF_POINTER, 4, offsetof(struct LPP_OTDOA_NeighbourCellInfoNB_r14, expectedRSTD_Uncertainty_r14),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LPP_expectedRSTD_Uncertainty_r14_constr_19,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LPP_expectedRSTD_Uncertainty_r14_constraint_1
		},
		0, 0, /* No default value */
		"expectedRSTD-Uncertainty-r14"
		},
	{ ATF_POINTER, 3, offsetof(struct LPP_OTDOA_NeighbourCellInfoNB_r14, prsNeighbourCellIndex_r14),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LPP_prsNeighbourCellIndex_r14_constr_20,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LPP_prsNeighbourCellIndex_r14_constraint_1
		},
		0, 0, /* No default value */
		"prsNeighbourCellIndex-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct LPP_OTDOA_NeighbourCellInfoNB_r14, ext1),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		0,
		&asn_DEF_LPP_ext1_22,
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
	{ ATF_POINTER, 1, offsetof(struct LPP_OTDOA_NeighbourCellInfoNB_r14, ext2),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		0,
		&asn_DEF_LPP_ext2_24,
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
		"ext2"
		},
};
static const int asn_MAP_LPP_OTDOA_NeighbourCellInfoNB_r14_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 };
static const ber_tlv_tag_t asn_DEF_LPP_OTDOA_NeighbourCellInfoNB_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LPP_OTDOA_NeighbourCellInfoNB_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* physCellIdNB-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cellGlobalIdNB-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* carrierFreq-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* earfcn-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* eutra-NumCRS-Ports-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* otdoa-SIB1-NB-repetitions-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* nprsInfo-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* nprs-slotNumberOffset-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* nprs-SFN-Offset-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* nprs-SubframeOffset-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* expectedRSTD-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* expectedRSTD-Uncertainty-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* prsNeighbourCellIndex-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 } /* ext2 */
};
asn_SEQUENCE_specifics_t asn_SPC_LPP_OTDOA_NeighbourCellInfoNB_r14_specs_1 = {
	sizeof(struct LPP_OTDOA_NeighbourCellInfoNB_r14),
	offsetof(struct LPP_OTDOA_NeighbourCellInfoNB_r14, _asn_ctx),
	asn_MAP_LPP_OTDOA_NeighbourCellInfoNB_r14_tag2el_1,
	15,	/* Count of tags in the map */
	asn_MAP_LPP_OTDOA_NeighbourCellInfoNB_r14_oms_1,	/* Optional members */
	13, 2,	/* Root/Additions */
	13,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LPP_OTDOA_NeighbourCellInfoNB_r14 = {
	"OTDOA-NeighbourCellInfoNB-r14",
	"OTDOA-NeighbourCellInfoNB-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_LPP_OTDOA_NeighbourCellInfoNB_r14_tags_1,
	sizeof(asn_DEF_LPP_OTDOA_NeighbourCellInfoNB_r14_tags_1)
		/sizeof(asn_DEF_LPP_OTDOA_NeighbourCellInfoNB_r14_tags_1[0]), /* 1 */
	asn_DEF_LPP_OTDOA_NeighbourCellInfoNB_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_LPP_OTDOA_NeighbourCellInfoNB_r14_tags_1)
		/sizeof(asn_DEF_LPP_OTDOA_NeighbourCellInfoNB_r14_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LPP_OTDOA_NeighbourCellInfoNB_r14_1,
	15,	/* Elements count */
	&asn_SPC_LPP_OTDOA_NeighbourCellInfoNB_r14_specs_1	/* Additional specs */
};
