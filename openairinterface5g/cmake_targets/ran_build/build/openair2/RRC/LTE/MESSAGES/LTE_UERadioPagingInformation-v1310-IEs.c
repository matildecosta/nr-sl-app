/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_UERadioPagingInformation-v1310-IEs.h"

static int
memb_LTE_supportedBandListEUTRAForPaging_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1UL && size <= 64UL)) {
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
static asn_per_constraints_t asn_PER_type_LTE_supportedBandListEUTRAForPaging_r13_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LTE_supportedBandListEUTRAForPaging_r13_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_LTE_supportedBandListEUTRAForPaging_r13_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_LTE_FreqBandIndicator_r11,
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
static const ber_tlv_tag_t asn_DEF_LTE_supportedBandListEUTRAForPaging_r13_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_LTE_supportedBandListEUTRAForPaging_r13_specs_2 = {
	sizeof(struct LTE_UERadioPagingInformation_v1310_IEs__supportedBandListEUTRAForPaging_r13),
	offsetof(struct LTE_UERadioPagingInformation_v1310_IEs__supportedBandListEUTRAForPaging_r13, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_supportedBandListEUTRAForPaging_r13_2 = {
	"supportedBandListEUTRAForPaging-r13",
	"supportedBandListEUTRAForPaging-r13",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_LTE_supportedBandListEUTRAForPaging_r13_tags_2,
	sizeof(asn_DEF_LTE_supportedBandListEUTRAForPaging_r13_tags_2)
		/sizeof(asn_DEF_LTE_supportedBandListEUTRAForPaging_r13_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_supportedBandListEUTRAForPaging_r13_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_supportedBandListEUTRAForPaging_r13_tags_2)
		/sizeof(asn_DEF_LTE_supportedBandListEUTRAForPaging_r13_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_supportedBandListEUTRAForPaging_r13_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_LTE_supportedBandListEUTRAForPaging_r13_2,
	1,	/* Single element */
	&asn_SPC_LTE_supportedBandListEUTRAForPaging_r13_specs_2	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_LTE_nonCriticalExtension_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_nonCriticalExtension_specs_4 = {
	sizeof(struct LTE_UERadioPagingInformation_v1310_IEs__nonCriticalExtension),
	offsetof(struct LTE_UERadioPagingInformation_v1310_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_nonCriticalExtension_4 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_nonCriticalExtension_tags_4,
	sizeof(asn_DEF_LTE_nonCriticalExtension_tags_4)
		/sizeof(asn_DEF_LTE_nonCriticalExtension_tags_4[0]) - 1, /* 1 */
	asn_DEF_LTE_nonCriticalExtension_tags_4,	/* Same as above */
	sizeof(asn_DEF_LTE_nonCriticalExtension_tags_4)
		/sizeof(asn_DEF_LTE_nonCriticalExtension_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	0, 0,	/* No members */
	&asn_SPC_LTE_nonCriticalExtension_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_UERadioPagingInformation_v1310_IEs_1[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_UERadioPagingInformation_v1310_IEs, supportedBandListEUTRAForPaging_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_LTE_supportedBandListEUTRAForPaging_r13_2,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LTE_supportedBandListEUTRAForPaging_r13_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LTE_supportedBandListEUTRAForPaging_r13_constraint_1
		},
		0, 0, /* No default value */
		"supportedBandListEUTRAForPaging-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_UERadioPagingInformation_v1310_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_nonCriticalExtension_4,
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
static const int asn_MAP_LTE_UERadioPagingInformation_v1310_IEs_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_UERadioPagingInformation_v1310_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_UERadioPagingInformation_v1310_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* supportedBandListEUTRAForPaging-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_UERadioPagingInformation_v1310_IEs_specs_1 = {
	sizeof(struct LTE_UERadioPagingInformation_v1310_IEs),
	offsetof(struct LTE_UERadioPagingInformation_v1310_IEs, _asn_ctx),
	asn_MAP_LTE_UERadioPagingInformation_v1310_IEs_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_UERadioPagingInformation_v1310_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_UERadioPagingInformation_v1310_IEs = {
	"UERadioPagingInformation-v1310-IEs",
	"UERadioPagingInformation-v1310-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_UERadioPagingInformation_v1310_IEs_tags_1,
	sizeof(asn_DEF_LTE_UERadioPagingInformation_v1310_IEs_tags_1)
		/sizeof(asn_DEF_LTE_UERadioPagingInformation_v1310_IEs_tags_1[0]), /* 1 */
	asn_DEF_LTE_UERadioPagingInformation_v1310_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_UERadioPagingInformation_v1310_IEs_tags_1)
		/sizeof(asn_DEF_LTE_UERadioPagingInformation_v1310_IEs_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_UERadioPagingInformation_v1310_IEs_1,
	2,	/* Elements count */
	&asn_SPC_LTE_UERadioPagingInformation_v1310_IEs_specs_1	/* Additional specs */
};
