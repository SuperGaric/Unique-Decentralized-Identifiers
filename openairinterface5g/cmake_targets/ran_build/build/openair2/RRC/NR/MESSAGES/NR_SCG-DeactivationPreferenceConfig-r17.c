/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_SCG-DeactivationPreferenceConfig-r17.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_scg_DeactivationPreferenceProhibitTimer_r17_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_NR_scg_DeactivationPreferenceProhibitTimer_r17_value2enum_2[] = {
	{ 0,	2,	"s0" },
	{ 1,	2,	"s1" },
	{ 2,	2,	"s2" },
	{ 3,	2,	"s4" },
	{ 4,	2,	"s8" },
	{ 5,	3,	"s10" },
	{ 6,	3,	"s15" },
	{ 7,	3,	"s30" },
	{ 8,	3,	"s60" },
	{ 9,	4,	"s120" },
	{ 10,	4,	"s180" },
	{ 11,	4,	"s240" },
	{ 12,	4,	"s300" },
	{ 13,	4,	"s600" },
	{ 14,	4,	"s900" },
	{ 15,	5,	"s1800" }
};
static const unsigned int asn_MAP_NR_scg_DeactivationPreferenceProhibitTimer_r17_enum2value_2[] = {
	0,	/* s0(0) */
	1,	/* s1(1) */
	5,	/* s10(5) */
	9,	/* s120(9) */
	6,	/* s15(6) */
	10,	/* s180(10) */
	15,	/* s1800(15) */
	2,	/* s2(2) */
	11,	/* s240(11) */
	7,	/* s30(7) */
	12,	/* s300(12) */
	3,	/* s4(3) */
	8,	/* s60(8) */
	13,	/* s600(13) */
	4,	/* s8(4) */
	14	/* s900(14) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_scg_DeactivationPreferenceProhibitTimer_r17_specs_2 = {
	asn_MAP_NR_scg_DeactivationPreferenceProhibitTimer_r17_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_scg_DeactivationPreferenceProhibitTimer_r17_enum2value_2,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_scg_DeactivationPreferenceProhibitTimer_r17_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_scg_DeactivationPreferenceProhibitTimer_r17_2 = {
	"scg-DeactivationPreferenceProhibitTimer-r17",
	"scg-DeactivationPreferenceProhibitTimer-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_scg_DeactivationPreferenceProhibitTimer_r17_tags_2,
	sizeof(asn_DEF_NR_scg_DeactivationPreferenceProhibitTimer_r17_tags_2)
		/sizeof(asn_DEF_NR_scg_DeactivationPreferenceProhibitTimer_r17_tags_2[0]) - 1, /* 1 */
	asn_DEF_NR_scg_DeactivationPreferenceProhibitTimer_r17_tags_2,	/* Same as above */
	sizeof(asn_DEF_NR_scg_DeactivationPreferenceProhibitTimer_r17_tags_2)
		/sizeof(asn_DEF_NR_scg_DeactivationPreferenceProhibitTimer_r17_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_scg_DeactivationPreferenceProhibitTimer_r17_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_scg_DeactivationPreferenceProhibitTimer_r17_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_SCG_DeactivationPreferenceConfig_r17_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SCG_DeactivationPreferenceConfig_r17, scg_DeactivationPreferenceProhibitTimer_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_scg_DeactivationPreferenceProhibitTimer_r17_2,
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
		"scg-DeactivationPreferenceProhibitTimer-r17"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_SCG_DeactivationPreferenceConfig_r17_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_SCG_DeactivationPreferenceConfig_r17_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* scg-DeactivationPreferenceProhibitTimer-r17 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_SCG_DeactivationPreferenceConfig_r17_specs_1 = {
	sizeof(struct NR_SCG_DeactivationPreferenceConfig_r17),
	offsetof(struct NR_SCG_DeactivationPreferenceConfig_r17, _asn_ctx),
	asn_MAP_NR_SCG_DeactivationPreferenceConfig_r17_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_SCG_DeactivationPreferenceConfig_r17 = {
	"SCG-DeactivationPreferenceConfig-r17",
	"SCG-DeactivationPreferenceConfig-r17",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_SCG_DeactivationPreferenceConfig_r17_tags_1,
	sizeof(asn_DEF_NR_SCG_DeactivationPreferenceConfig_r17_tags_1)
		/sizeof(asn_DEF_NR_SCG_DeactivationPreferenceConfig_r17_tags_1[0]), /* 1 */
	asn_DEF_NR_SCG_DeactivationPreferenceConfig_r17_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_SCG_DeactivationPreferenceConfig_r17_tags_1)
		/sizeof(asn_DEF_NR_SCG_DeactivationPreferenceConfig_r17_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_SCG_DeactivationPreferenceConfig_r17_1,
	1,	/* Elements count */
	&asn_SPC_NR_SCG_DeactivationPreferenceConfig_r17_specs_1	/* Additional specs */
};

