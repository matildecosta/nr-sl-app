/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair2/F1AP/MESSAGES/ASN1/R16.3.1/38473-g31.asn"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair2/F1AP/MESSAGES`
 */

#include "F1AP_PRSResource-QCLInfo.h"

#include "F1AP_PRSResource-QCLSourcePRSInfo.h"
#include "F1AP_ProtocolExtensionContainer.h"
static int
memb_F1AP_qCLSourceSSBIndex_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_F1AP_qCLSourceSSBIndex_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  63 }	/* (0..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_F1AP_PRSResource_QCLInfo_1[] = {
	{ ATF_POINTER, 3, offsetof(struct F1AP_PRSResource_QCLInfo, qCLSourceSSBIndex),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_F1AP_qCLSourceSSBIndex_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_F1AP_qCLSourceSSBIndex_constraint_1
		},
		0, 0, /* No default value */
		"qCLSourceSSBIndex"
		},
	{ ATF_POINTER, 2, offsetof(struct F1AP_PRSResource_QCLInfo, qCLSourcePRSInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_F1AP_PRSResource_QCLSourcePRSInfo,
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
		"qCLSourcePRSInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct F1AP_PRSResource_QCLInfo, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_F1AP_ProtocolExtensionContainer_10696P198,
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
		"iE-Extensions"
		},
};
static const int asn_MAP_F1AP_PRSResource_QCLInfo_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_F1AP_PRSResource_QCLInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_F1AP_PRSResource_QCLInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* qCLSourceSSBIndex */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* qCLSourcePRSInfo */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_F1AP_PRSResource_QCLInfo_specs_1 = {
	sizeof(struct F1AP_PRSResource_QCLInfo),
	offsetof(struct F1AP_PRSResource_QCLInfo, _asn_ctx),
	asn_MAP_F1AP_PRSResource_QCLInfo_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_F1AP_PRSResource_QCLInfo_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_F1AP_PRSResource_QCLInfo = {
	"PRSResource-QCLInfo",
	"PRSResource-QCLInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_F1AP_PRSResource_QCLInfo_tags_1,
	sizeof(asn_DEF_F1AP_PRSResource_QCLInfo_tags_1)
		/sizeof(asn_DEF_F1AP_PRSResource_QCLInfo_tags_1[0]), /* 1 */
	asn_DEF_F1AP_PRSResource_QCLInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_F1AP_PRSResource_QCLInfo_tags_1)
		/sizeof(asn_DEF_F1AP_PRSResource_QCLInfo_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_F1AP_PRSResource_QCLInfo_1,
	3,	/* Elements count */
	&asn_SPC_F1AP_PRSResource_QCLInfo_specs_1	/* Additional specs */
};
