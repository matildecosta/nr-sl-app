/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#include "LPP_GNSS-SSR-OrbitCorrections-r15.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_LPP_ssrUpdateInterval_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 15L)) {
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
memb_LPP_iod_ssr_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 15L)) {
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
static asn_per_constraints_t asn_PER_type_LPP_satelliteReferenceDatum_r15_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LPP_ssrUpdateInterval_r15_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LPP_iod_ssr_r15_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LPP_satelliteReferenceDatum_r15_value2enum_4[] = {
	{ 0,	4,	"itrf" },
	{ 1,	8,	"regional" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_LPP_satelliteReferenceDatum_r15_enum2value_4[] = {
	0,	/* itrf(0) */
	1	/* regional(1) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_LPP_satelliteReferenceDatum_r15_specs_4 = {
	asn_MAP_LPP_satelliteReferenceDatum_r15_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_LPP_satelliteReferenceDatum_r15_enum2value_4,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	3,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LPP_satelliteReferenceDatum_r15_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LPP_satelliteReferenceDatum_r15_4 = {
	"satelliteReferenceDatum-r15",
	"satelliteReferenceDatum-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_LPP_satelliteReferenceDatum_r15_tags_4,
	sizeof(asn_DEF_LPP_satelliteReferenceDatum_r15_tags_4)
		/sizeof(asn_DEF_LPP_satelliteReferenceDatum_r15_tags_4[0]) - 1, /* 1 */
	asn_DEF_LPP_satelliteReferenceDatum_r15_tags_4,	/* Same as above */
	sizeof(asn_DEF_LPP_satelliteReferenceDatum_r15_tags_4)
		/sizeof(asn_DEF_LPP_satelliteReferenceDatum_r15_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LPP_satelliteReferenceDatum_r15_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LPP_satelliteReferenceDatum_r15_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LPP_GNSS_SSR_OrbitCorrections_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_GNSS_SSR_OrbitCorrections_r15, epochTime_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_GNSS_SystemTime,
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
		"epochTime-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_GNSS_SSR_OrbitCorrections_r15, ssrUpdateInterval_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LPP_ssrUpdateInterval_r15_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LPP_ssrUpdateInterval_r15_constraint_1
		},
		0, 0, /* No default value */
		"ssrUpdateInterval-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_GNSS_SSR_OrbitCorrections_r15, satelliteReferenceDatum_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_satelliteReferenceDatum_r15_4,
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
		"satelliteReferenceDatum-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_GNSS_SSR_OrbitCorrections_r15, iod_ssr_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LPP_iod_ssr_r15_constr_8,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LPP_iod_ssr_r15_constraint_1
		},
		0, 0, /* No default value */
		"iod-ssr-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_GNSS_SSR_OrbitCorrections_r15, ssr_OrbitCorrectionList_r15),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_SSR_OrbitCorrectionList_r15,
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
		"ssr-OrbitCorrectionList-r15"
		},
};
static const ber_tlv_tag_t asn_DEF_LPP_GNSS_SSR_OrbitCorrections_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LPP_GNSS_SSR_OrbitCorrections_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* epochTime-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ssrUpdateInterval-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* satelliteReferenceDatum-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* iod-ssr-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* ssr-OrbitCorrectionList-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_LPP_GNSS_SSR_OrbitCorrections_r15_specs_1 = {
	sizeof(struct LPP_GNSS_SSR_OrbitCorrections_r15),
	offsetof(struct LPP_GNSS_SSR_OrbitCorrections_r15, _asn_ctx),
	asn_MAP_LPP_GNSS_SSR_OrbitCorrections_r15_tag2el_1,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LPP_GNSS_SSR_OrbitCorrections_r15 = {
	"GNSS-SSR-OrbitCorrections-r15",
	"GNSS-SSR-OrbitCorrections-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_LPP_GNSS_SSR_OrbitCorrections_r15_tags_1,
	sizeof(asn_DEF_LPP_GNSS_SSR_OrbitCorrections_r15_tags_1)
		/sizeof(asn_DEF_LPP_GNSS_SSR_OrbitCorrections_r15_tags_1[0]), /* 1 */
	asn_DEF_LPP_GNSS_SSR_OrbitCorrections_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_LPP_GNSS_SSR_OrbitCorrections_r15_tags_1)
		/sizeof(asn_DEF_LPP_GNSS_SSR_OrbitCorrections_r15_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LPP_GNSS_SSR_OrbitCorrections_r15_1,
	5,	/* Elements count */
	&asn_SPC_LPP_GNSS_SSR_OrbitCorrections_r15_specs_1	/* Additional specs */
};
