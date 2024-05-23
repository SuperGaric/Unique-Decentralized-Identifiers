/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#include "LPP_EarlyFixReport-r12.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_LPP_EarlyFixReport_r12_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LPP_EarlyFixReport_r12_value2enum_1[] = {
	{ 0,	14,	"noMoreMessages" },
	{ 1,	20,	"moreMessagesOnTheWay" }
};
static const unsigned int asn_MAP_LPP_EarlyFixReport_r12_enum2value_1[] = {
	1,	/* moreMessagesOnTheWay(1) */
	0	/* noMoreMessages(0) */
};
const asn_INTEGER_specifics_t asn_SPC_LPP_EarlyFixReport_r12_specs_1 = {
	asn_MAP_LPP_EarlyFixReport_r12_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_LPP_EarlyFixReport_r12_enum2value_1,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LPP_EarlyFixReport_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_LPP_EarlyFixReport_r12 = {
	"EarlyFixReport-r12",
	"EarlyFixReport-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_LPP_EarlyFixReport_r12_tags_1,
	sizeof(asn_DEF_LPP_EarlyFixReport_r12_tags_1)
		/sizeof(asn_DEF_LPP_EarlyFixReport_r12_tags_1[0]), /* 1 */
	asn_DEF_LPP_EarlyFixReport_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_LPP_EarlyFixReport_r12_tags_1)
		/sizeof(asn_DEF_LPP_EarlyFixReport_r12_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LPP_EarlyFixReport_r12_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LPP_EarlyFixReport_r12_specs_1	/* Additional specs */
};

