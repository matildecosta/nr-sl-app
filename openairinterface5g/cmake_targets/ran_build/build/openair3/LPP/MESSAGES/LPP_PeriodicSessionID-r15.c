/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#include "LPP_PeriodicSessionID-r15.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_LPP_periodicSessionNumber_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 255L)) {
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
static asn_per_constraints_t asn_PER_type_LPP_periodicSessionInitiator_r15_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LPP_periodicSessionNumber_r15_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LPP_periodicSessionInitiator_r15_value2enum_2[] = {
	{ 0,	14,	"locationServer" },
	{ 1,	12,	"targetDevice" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_LPP_periodicSessionInitiator_r15_enum2value_2[] = {
	0,	/* locationServer(0) */
	1	/* targetDevice(1) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_LPP_periodicSessionInitiator_r15_specs_2 = {
	asn_MAP_LPP_periodicSessionInitiator_r15_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LPP_periodicSessionInitiator_r15_enum2value_2,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	3,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LPP_periodicSessionInitiator_r15_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LPP_periodicSessionInitiator_r15_2 = {
	"periodicSessionInitiator-r15",
	"periodicSessionInitiator-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_LPP_periodicSessionInitiator_r15_tags_2,
	sizeof(asn_DEF_LPP_periodicSessionInitiator_r15_tags_2)
		/sizeof(asn_DEF_LPP_periodicSessionInitiator_r15_tags_2[0]) - 1, /* 1 */
	asn_DEF_LPP_periodicSessionInitiator_r15_tags_2,	/* Same as above */
	sizeof(asn_DEF_LPP_periodicSessionInitiator_r15_tags_2)
		/sizeof(asn_DEF_LPP_periodicSessionInitiator_r15_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LPP_periodicSessionInitiator_r15_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LPP_periodicSessionInitiator_r15_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LPP_PeriodicSessionID_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_PeriodicSessionID_r15, periodicSessionInitiator_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_periodicSessionInitiator_r15_2,
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
		"periodicSessionInitiator-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_PeriodicSessionID_r15, periodicSessionNumber_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LPP_periodicSessionNumber_r15_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LPP_periodicSessionNumber_r15_constraint_1
		},
		0, 0, /* No default value */
		"periodicSessionNumber-r15"
		},
};
static const ber_tlv_tag_t asn_DEF_LPP_PeriodicSessionID_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LPP_PeriodicSessionID_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* periodicSessionInitiator-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* periodicSessionNumber-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_LPP_PeriodicSessionID_r15_specs_1 = {
	sizeof(struct LPP_PeriodicSessionID_r15),
	offsetof(struct LPP_PeriodicSessionID_r15, _asn_ctx),
	asn_MAP_LPP_PeriodicSessionID_r15_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LPP_PeriodicSessionID_r15 = {
	"PeriodicSessionID-r15",
	"PeriodicSessionID-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_LPP_PeriodicSessionID_r15_tags_1,
	sizeof(asn_DEF_LPP_PeriodicSessionID_r15_tags_1)
		/sizeof(asn_DEF_LPP_PeriodicSessionID_r15_tags_1[0]), /* 1 */
	asn_DEF_LPP_PeriodicSessionID_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_LPP_PeriodicSessionID_r15_tags_1)
		/sizeof(asn_DEF_LPP_PeriodicSessionID_r15_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LPP_PeriodicSessionID_r15_1,
	2,	/* Elements count */
	&asn_SPC_LPP_PeriodicSessionID_r15_specs_1	/* Additional specs */
};
