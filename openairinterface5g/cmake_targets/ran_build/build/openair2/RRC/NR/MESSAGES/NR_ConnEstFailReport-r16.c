/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_ConnEstFailReport-r16.h"

static int
memb_NR_numberOfConnFail_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1L && value <= 8L)) {
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
static asn_per_constraints_t asn_PER_memb_NR_numberOfConnFail_r16_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_NR_measResultNeighCells_r16_4[] = {
	{ ATF_POINTER, 2, offsetof(struct NR_ConnEstFailReport_r16__measResultNeighCells_r16, measResultNeighCellListNR),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_MeasResultList2NR_r16,
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
		"measResultNeighCellListNR"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_ConnEstFailReport_r16__measResultNeighCells_r16, measResultNeighCellListEUTRA),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_MeasResultList2EUTRA_r16,
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
		"measResultNeighCellListEUTRA"
		},
};
static const int asn_MAP_NR_measResultNeighCells_r16_oms_4[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_NR_measResultNeighCells_r16_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_measResultNeighCells_r16_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measResultNeighCellListNR */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* measResultNeighCellListEUTRA */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_measResultNeighCells_r16_specs_4 = {
	sizeof(struct NR_ConnEstFailReport_r16__measResultNeighCells_r16),
	offsetof(struct NR_ConnEstFailReport_r16__measResultNeighCells_r16, _asn_ctx),
	asn_MAP_NR_measResultNeighCells_r16_tag2el_4,
	2,	/* Count of tags in the map */
	asn_MAP_NR_measResultNeighCells_r16_oms_4,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_measResultNeighCells_r16_4 = {
	"measResultNeighCells-r16",
	"measResultNeighCells-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_measResultNeighCells_r16_tags_4,
	sizeof(asn_DEF_NR_measResultNeighCells_r16_tags_4)
		/sizeof(asn_DEF_NR_measResultNeighCells_r16_tags_4[0]) - 1, /* 1 */
	asn_DEF_NR_measResultNeighCells_r16_tags_4,	/* Same as above */
	sizeof(asn_DEF_NR_measResultNeighCells_r16_tags_4)
		/sizeof(asn_DEF_NR_measResultNeighCells_r16_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_measResultNeighCells_r16_4,
	2,	/* Elements count */
	&asn_SPC_NR_measResultNeighCells_r16_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_ConnEstFailReport_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_ConnEstFailReport_r16, measResultFailedCell_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_MeasResultFailedCell_r16,
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
		"measResultFailedCell-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_ConnEstFailReport_r16, locationInfo_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_LocationInfo_r16,
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
		"locationInfo-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_ConnEstFailReport_r16, measResultNeighCells_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_NR_measResultNeighCells_r16_4,
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
		"measResultNeighCells-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_ConnEstFailReport_r16, numberOfConnFail_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_numberOfConnFail_r16_constr_7,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_numberOfConnFail_r16_constraint_1
		},
		0, 0, /* No default value */
		"numberOfConnFail-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_ConnEstFailReport_r16, perRAInfoList_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_PerRAInfoList_r16,
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
		"perRAInfoList-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_ConnEstFailReport_r16, timeSinceFailure_r16),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_TimeSinceFailure_r16,
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
		"timeSinceFailure-r16"
		},
};
static const int asn_MAP_NR_ConnEstFailReport_r16_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_NR_ConnEstFailReport_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_ConnEstFailReport_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measResultFailedCell-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* locationInfo-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* measResultNeighCells-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* numberOfConnFail-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* perRAInfoList-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* timeSinceFailure-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_ConnEstFailReport_r16_specs_1 = {
	sizeof(struct NR_ConnEstFailReport_r16),
	offsetof(struct NR_ConnEstFailReport_r16, _asn_ctx),
	asn_MAP_NR_ConnEstFailReport_r16_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_NR_ConnEstFailReport_r16_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_ConnEstFailReport_r16 = {
	"ConnEstFailReport-r16",
	"ConnEstFailReport-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_ConnEstFailReport_r16_tags_1,
	sizeof(asn_DEF_NR_ConnEstFailReport_r16_tags_1)
		/sizeof(asn_DEF_NR_ConnEstFailReport_r16_tags_1[0]), /* 1 */
	asn_DEF_NR_ConnEstFailReport_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_ConnEstFailReport_r16_tags_1)
		/sizeof(asn_DEF_NR_ConnEstFailReport_r16_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_ConnEstFailReport_r16_1,
	6,	/* Elements count */
	&asn_SPC_NR_ConnEstFailReport_r16_specs_1	/* Additional specs */
};
