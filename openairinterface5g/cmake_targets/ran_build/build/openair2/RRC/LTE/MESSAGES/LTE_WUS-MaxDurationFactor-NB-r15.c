/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/matilde/nr-sl-app/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_WUS-MaxDurationFactor-NB-r15.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_LTE_WUS_MaxDurationFactor_NB_r15_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LTE_WUS_MaxDurationFactor_NB_r15_value2enum_1[] = {
	{ 0,	8,	"one128th" },
	{ 1,	7,	"one64th" },
	{ 2,	7,	"one32th" },
	{ 3,	7,	"one16th" },
	{ 4,	9,	"oneEighth" },
	{ 5,	10,	"oneQuarter" },
	{ 6,	7,	"oneHalf" }
};
static const unsigned int asn_MAP_LTE_WUS_MaxDurationFactor_NB_r15_enum2value_1[] = {
	0,	/* one128th(0) */
	3,	/* one16th(3) */
	2,	/* one32th(2) */
	1,	/* one64th(1) */
	4,	/* oneEighth(4) */
	6,	/* oneHalf(6) */
	5	/* oneQuarter(5) */
};
const asn_INTEGER_specifics_t asn_SPC_LTE_WUS_MaxDurationFactor_NB_r15_specs_1 = {
	asn_MAP_LTE_WUS_MaxDurationFactor_NB_r15_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_WUS_MaxDurationFactor_NB_r15_enum2value_1,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_WUS_MaxDurationFactor_NB_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_LTE_WUS_MaxDurationFactor_NB_r15 = {
	"WUS-MaxDurationFactor-NB-r15",
	"WUS-MaxDurationFactor-NB-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_WUS_MaxDurationFactor_NB_r15_tags_1,
	sizeof(asn_DEF_LTE_WUS_MaxDurationFactor_NB_r15_tags_1)
		/sizeof(asn_DEF_LTE_WUS_MaxDurationFactor_NB_r15_tags_1[0]), /* 1 */
	asn_DEF_LTE_WUS_MaxDurationFactor_NB_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_WUS_MaxDurationFactor_NB_r15_tags_1)
		/sizeof(asn_DEF_LTE_WUS_MaxDurationFactor_NB_r15_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_WUS_MaxDurationFactor_NB_r15_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_WUS_MaxDurationFactor_NB_r15_specs_1	/* Additional specs */
};
