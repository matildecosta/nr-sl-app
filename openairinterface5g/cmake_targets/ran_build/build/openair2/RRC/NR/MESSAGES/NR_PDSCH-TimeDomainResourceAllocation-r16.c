/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_PDSCH-TimeDomainResourceAllocation-r16.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_NR_k0_v1710_constraint_17(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 33L && value <= 128L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_NR_k0_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 32L)) {
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
memb_NR_startSymbolAndLength_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 127L)) {
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
static asn_per_constraints_t asn_PER_type_NR_mappingType_r16_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_repetitionNumber_r16_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_k0_v1710_constr_18 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  33,  128 }	/* (33..128) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_repetitionNumber_v1730_constr_20 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_k0_r16_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  32 }	/* (0..32) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_startSymbolAndLength_r16_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  127 }	/* (0..127) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_NR_mappingType_r16_value2enum_3[] = {
	{ 0,	5,	"typeA" },
	{ 1,	5,	"typeB" }
};
static const unsigned int asn_MAP_NR_mappingType_r16_enum2value_3[] = {
	0,	/* typeA(0) */
	1	/* typeB(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_mappingType_r16_specs_3 = {
	asn_MAP_NR_mappingType_r16_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_mappingType_r16_enum2value_3,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_mappingType_r16_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_mappingType_r16_3 = {
	"mappingType-r16",
	"mappingType-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_mappingType_r16_tags_3,
	sizeof(asn_DEF_NR_mappingType_r16_tags_3)
		/sizeof(asn_DEF_NR_mappingType_r16_tags_3[0]) - 1, /* 1 */
	asn_DEF_NR_mappingType_r16_tags_3,	/* Same as above */
	sizeof(asn_DEF_NR_mappingType_r16_tags_3)
		/sizeof(asn_DEF_NR_mappingType_r16_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_mappingType_r16_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_mappingType_r16_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_repetitionNumber_r16_value2enum_7[] = {
	{ 0,	2,	"n2" },
	{ 1,	2,	"n3" },
	{ 2,	2,	"n4" },
	{ 3,	2,	"n5" },
	{ 4,	2,	"n6" },
	{ 5,	2,	"n7" },
	{ 6,	2,	"n8" },
	{ 7,	3,	"n16" }
};
static const unsigned int asn_MAP_NR_repetitionNumber_r16_enum2value_7[] = {
	7,	/* n16(7) */
	0,	/* n2(0) */
	1,	/* n3(1) */
	2,	/* n4(2) */
	3,	/* n5(3) */
	4,	/* n6(4) */
	5,	/* n7(5) */
	6	/* n8(6) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_repetitionNumber_r16_specs_7 = {
	asn_MAP_NR_repetitionNumber_r16_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_repetitionNumber_r16_enum2value_7,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_repetitionNumber_r16_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_repetitionNumber_r16_7 = {
	"repetitionNumber-r16",
	"repetitionNumber-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_repetitionNumber_r16_tags_7,
	sizeof(asn_DEF_NR_repetitionNumber_r16_tags_7)
		/sizeof(asn_DEF_NR_repetitionNumber_r16_tags_7[0]) - 1, /* 1 */
	asn_DEF_NR_repetitionNumber_r16_tags_7,	/* Same as above */
	sizeof(asn_DEF_NR_repetitionNumber_r16_tags_7)
		/sizeof(asn_DEF_NR_repetitionNumber_r16_tags_7[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_repetitionNumber_r16_constr_7,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_repetitionNumber_r16_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_ext1_17[] = {
	{ ATF_POINTER, 1, offsetof(struct NR_PDSCH_TimeDomainResourceAllocation_r16__ext1, k0_v1710),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_k0_v1710_constr_18,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_k0_v1710_constraint_17
		},
		0, 0, /* No default value */
		"k0-v1710"
		},
};
static const int asn_MAP_NR_ext1_oms_17[] = { 0 };
static const ber_tlv_tag_t asn_DEF_NR_ext1_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_ext1_tag2el_17[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* k0-v1710 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_ext1_specs_17 = {
	sizeof(struct NR_PDSCH_TimeDomainResourceAllocation_r16__ext1),
	offsetof(struct NR_PDSCH_TimeDomainResourceAllocation_r16__ext1, _asn_ctx),
	asn_MAP_NR_ext1_tag2el_17,
	1,	/* Count of tags in the map */
	asn_MAP_NR_ext1_oms_17,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ext1_17 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_ext1_tags_17,
	sizeof(asn_DEF_NR_ext1_tags_17)
		/sizeof(asn_DEF_NR_ext1_tags_17[0]) - 1, /* 1 */
	asn_DEF_NR_ext1_tags_17,	/* Same as above */
	sizeof(asn_DEF_NR_ext1_tags_17)
		/sizeof(asn_DEF_NR_ext1_tags_17[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_ext1_17,
	1,	/* Elements count */
	&asn_SPC_NR_ext1_specs_17	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_repetitionNumber_v1730_value2enum_20[] = {
	{ 0,	2,	"n2" },
	{ 1,	2,	"n3" },
	{ 2,	2,	"n4" },
	{ 3,	2,	"n5" },
	{ 4,	2,	"n6" },
	{ 5,	2,	"n7" },
	{ 6,	2,	"n8" },
	{ 7,	3,	"n16" }
};
static const unsigned int asn_MAP_NR_repetitionNumber_v1730_enum2value_20[] = {
	7,	/* n16(7) */
	0,	/* n2(0) */
	1,	/* n3(1) */
	2,	/* n4(2) */
	3,	/* n5(3) */
	4,	/* n6(4) */
	5,	/* n7(5) */
	6	/* n8(6) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_repetitionNumber_v1730_specs_20 = {
	asn_MAP_NR_repetitionNumber_v1730_value2enum_20,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_repetitionNumber_v1730_enum2value_20,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_repetitionNumber_v1730_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_repetitionNumber_v1730_20 = {
	"repetitionNumber-v1730",
	"repetitionNumber-v1730",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_repetitionNumber_v1730_tags_20,
	sizeof(asn_DEF_NR_repetitionNumber_v1730_tags_20)
		/sizeof(asn_DEF_NR_repetitionNumber_v1730_tags_20[0]) - 1, /* 1 */
	asn_DEF_NR_repetitionNumber_v1730_tags_20,	/* Same as above */
	sizeof(asn_DEF_NR_repetitionNumber_v1730_tags_20)
		/sizeof(asn_DEF_NR_repetitionNumber_v1730_tags_20[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_repetitionNumber_v1730_constr_20,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_repetitionNumber_v1730_specs_20	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_ext2_19[] = {
	{ ATF_POINTER, 1, offsetof(struct NR_PDSCH_TimeDomainResourceAllocation_r16__ext2, repetitionNumber_v1730),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_repetitionNumber_v1730_20,
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
		"repetitionNumber-v1730"
		},
};
static const int asn_MAP_NR_ext2_oms_19[] = { 0 };
static const ber_tlv_tag_t asn_DEF_NR_ext2_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_ext2_tag2el_19[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* repetitionNumber-v1730 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_ext2_specs_19 = {
	sizeof(struct NR_PDSCH_TimeDomainResourceAllocation_r16__ext2),
	offsetof(struct NR_PDSCH_TimeDomainResourceAllocation_r16__ext2, _asn_ctx),
	asn_MAP_NR_ext2_tag2el_19,
	1,	/* Count of tags in the map */
	asn_MAP_NR_ext2_oms_19,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ext2_19 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_ext2_tags_19,
	sizeof(asn_DEF_NR_ext2_tags_19)
		/sizeof(asn_DEF_NR_ext2_tags_19[0]) - 1, /* 1 */
	asn_DEF_NR_ext2_tags_19,	/* Same as above */
	sizeof(asn_DEF_NR_ext2_tags_19)
		/sizeof(asn_DEF_NR_ext2_tags_19[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_ext2_19,
	1,	/* Elements count */
	&asn_SPC_NR_ext2_specs_19	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_PDSCH_TimeDomainResourceAllocation_r16_1[] = {
	{ ATF_POINTER, 1, offsetof(struct NR_PDSCH_TimeDomainResourceAllocation_r16, k0_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_k0_r16_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_k0_r16_constraint_1
		},
		0, 0, /* No default value */
		"k0-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_PDSCH_TimeDomainResourceAllocation_r16, mappingType_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_mappingType_r16_3,
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
		"mappingType-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_PDSCH_TimeDomainResourceAllocation_r16, startSymbolAndLength_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_startSymbolAndLength_r16_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_startSymbolAndLength_r16_constraint_1
		},
		0, 0, /* No default value */
		"startSymbolAndLength-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_PDSCH_TimeDomainResourceAllocation_r16, repetitionNumber_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_repetitionNumber_r16_7,
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
		"repetitionNumber-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_PDSCH_TimeDomainResourceAllocation_r16, ext1),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_NR_ext1_17,
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
	{ ATF_POINTER, 1, offsetof(struct NR_PDSCH_TimeDomainResourceAllocation_r16, ext2),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_NR_ext2_19,
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
static const int asn_MAP_NR_PDSCH_TimeDomainResourceAllocation_r16_oms_1[] = { 0, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_NR_PDSCH_TimeDomainResourceAllocation_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_PDSCH_TimeDomainResourceAllocation_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* k0-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mappingType-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* startSymbolAndLength-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* repetitionNumber-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* ext2 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_PDSCH_TimeDomainResourceAllocation_r16_specs_1 = {
	sizeof(struct NR_PDSCH_TimeDomainResourceAllocation_r16),
	offsetof(struct NR_PDSCH_TimeDomainResourceAllocation_r16, _asn_ctx),
	asn_MAP_NR_PDSCH_TimeDomainResourceAllocation_r16_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_NR_PDSCH_TimeDomainResourceAllocation_r16_oms_1,	/* Optional members */
	2, 2,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_PDSCH_TimeDomainResourceAllocation_r16 = {
	"PDSCH-TimeDomainResourceAllocation-r16",
	"PDSCH-TimeDomainResourceAllocation-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_PDSCH_TimeDomainResourceAllocation_r16_tags_1,
	sizeof(asn_DEF_NR_PDSCH_TimeDomainResourceAllocation_r16_tags_1)
		/sizeof(asn_DEF_NR_PDSCH_TimeDomainResourceAllocation_r16_tags_1[0]), /* 1 */
	asn_DEF_NR_PDSCH_TimeDomainResourceAllocation_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_PDSCH_TimeDomainResourceAllocation_r16_tags_1)
		/sizeof(asn_DEF_NR_PDSCH_TimeDomainResourceAllocation_r16_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_PDSCH_TimeDomainResourceAllocation_r16_1,
	6,	/* Elements count */
	&asn_SPC_NR_PDSCH_TimeDomainResourceAllocation_r16_specs_1	/* Additional specs */
};
