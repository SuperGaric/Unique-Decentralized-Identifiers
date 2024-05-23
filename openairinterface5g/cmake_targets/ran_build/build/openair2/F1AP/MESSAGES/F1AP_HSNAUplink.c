/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair2/F1AP/MESSAGES/ASN1/R16.3.1/38473-g31.asn"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/F1AP/MESSAGES`
 */

#include "F1AP_HSNAUplink.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_F1AP_HSNAUplink_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_F1AP_HSNAUplink_value2enum_1[] = {
	{ 0,	4,	"hard" },
	{ 1,	4,	"soft" },
	{ 2,	12,	"notavailable" }
};
static const unsigned int asn_MAP_F1AP_HSNAUplink_enum2value_1[] = {
	0,	/* hard(0) */
	2,	/* notavailable(2) */
	1	/* soft(1) */
};
const asn_INTEGER_specifics_t asn_SPC_F1AP_HSNAUplink_specs_1 = {
	asn_MAP_F1AP_HSNAUplink_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_F1AP_HSNAUplink_enum2value_1,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_F1AP_HSNAUplink_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_F1AP_HSNAUplink = {
	"HSNAUplink",
	"HSNAUplink",
	&asn_OP_NativeEnumerated,
	asn_DEF_F1AP_HSNAUplink_tags_1,
	sizeof(asn_DEF_F1AP_HSNAUplink_tags_1)
		/sizeof(asn_DEF_F1AP_HSNAUplink_tags_1[0]), /* 1 */
	asn_DEF_F1AP_HSNAUplink_tags_1,	/* Same as above */
	sizeof(asn_DEF_F1AP_HSNAUplink_tags_1)
		/sizeof(asn_DEF_F1AP_HSNAUplink_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_F1AP_HSNAUplink_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_F1AP_HSNAUplink_specs_1	/* Additional specs */
};

