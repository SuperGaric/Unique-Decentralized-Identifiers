/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_MinTimeGapFR2-2-r17.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_scs_120kHz_r17_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_scs_480kHz_r17_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_scs_960kHz_r17_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_NR_scs_120kHz_r17_value2enum_2[] = {
	{ 0,	3,	"sl2" },
	{ 1,	4,	"sl24" }
};
static const unsigned int asn_MAP_NR_scs_120kHz_r17_enum2value_2[] = {
	0,	/* sl2(0) */
	1	/* sl24(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_scs_120kHz_r17_specs_2 = {
	asn_MAP_NR_scs_120kHz_r17_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_scs_120kHz_r17_enum2value_2,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_scs_120kHz_r17_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_scs_120kHz_r17_2 = {
	"scs-120kHz-r17",
	"scs-120kHz-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_scs_120kHz_r17_tags_2,
	sizeof(asn_DEF_NR_scs_120kHz_r17_tags_2)
		/sizeof(asn_DEF_NR_scs_120kHz_r17_tags_2[0]) - 1, /* 1 */
	asn_DEF_NR_scs_120kHz_r17_tags_2,	/* Same as above */
	sizeof(asn_DEF_NR_scs_120kHz_r17_tags_2)
		/sizeof(asn_DEF_NR_scs_120kHz_r17_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_scs_120kHz_r17_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_scs_120kHz_r17_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_scs_480kHz_r17_value2enum_5[] = {
	{ 0,	3,	"sl8" },
	{ 1,	4,	"sl96" }
};
static const unsigned int asn_MAP_NR_scs_480kHz_r17_enum2value_5[] = {
	0,	/* sl8(0) */
	1	/* sl96(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_scs_480kHz_r17_specs_5 = {
	asn_MAP_NR_scs_480kHz_r17_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_scs_480kHz_r17_enum2value_5,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_scs_480kHz_r17_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_scs_480kHz_r17_5 = {
	"scs-480kHz-r17",
	"scs-480kHz-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_scs_480kHz_r17_tags_5,
	sizeof(asn_DEF_NR_scs_480kHz_r17_tags_5)
		/sizeof(asn_DEF_NR_scs_480kHz_r17_tags_5[0]) - 1, /* 1 */
	asn_DEF_NR_scs_480kHz_r17_tags_5,	/* Same as above */
	sizeof(asn_DEF_NR_scs_480kHz_r17_tags_5)
		/sizeof(asn_DEF_NR_scs_480kHz_r17_tags_5[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_scs_480kHz_r17_constr_5,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_scs_480kHz_r17_specs_5	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_scs_960kHz_r17_value2enum_8[] = {
	{ 0,	4,	"sl16" },
	{ 1,	5,	"sl192" }
};
static const unsigned int asn_MAP_NR_scs_960kHz_r17_enum2value_8[] = {
	0,	/* sl16(0) */
	1	/* sl192(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_scs_960kHz_r17_specs_8 = {
	asn_MAP_NR_scs_960kHz_r17_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_scs_960kHz_r17_enum2value_8,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_scs_960kHz_r17_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_scs_960kHz_r17_8 = {
	"scs-960kHz-r17",
	"scs-960kHz-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_scs_960kHz_r17_tags_8,
	sizeof(asn_DEF_NR_scs_960kHz_r17_tags_8)
		/sizeof(asn_DEF_NR_scs_960kHz_r17_tags_8[0]) - 1, /* 1 */
	asn_DEF_NR_scs_960kHz_r17_tags_8,	/* Same as above */
	sizeof(asn_DEF_NR_scs_960kHz_r17_tags_8)
		/sizeof(asn_DEF_NR_scs_960kHz_r17_tags_8[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_scs_960kHz_r17_constr_8,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_scs_960kHz_r17_specs_8	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_MinTimeGapFR2_2_r17_1[] = {
	{ ATF_POINTER, 3, offsetof(struct NR_MinTimeGapFR2_2_r17, scs_120kHz_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_scs_120kHz_r17_2,
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
		"scs-120kHz-r17"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_MinTimeGapFR2_2_r17, scs_480kHz_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_scs_480kHz_r17_5,
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
		"scs-480kHz-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_MinTimeGapFR2_2_r17, scs_960kHz_r17),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_scs_960kHz_r17_8,
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
		"scs-960kHz-r17"
		},
};
static const int asn_MAP_NR_MinTimeGapFR2_2_r17_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_NR_MinTimeGapFR2_2_r17_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_MinTimeGapFR2_2_r17_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* scs-120kHz-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* scs-480kHz-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* scs-960kHz-r17 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_MinTimeGapFR2_2_r17_specs_1 = {
	sizeof(struct NR_MinTimeGapFR2_2_r17),
	offsetof(struct NR_MinTimeGapFR2_2_r17, _asn_ctx),
	asn_MAP_NR_MinTimeGapFR2_2_r17_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_NR_MinTimeGapFR2_2_r17_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_MinTimeGapFR2_2_r17 = {
	"MinTimeGapFR2-2-r17",
	"MinTimeGapFR2-2-r17",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_MinTimeGapFR2_2_r17_tags_1,
	sizeof(asn_DEF_NR_MinTimeGapFR2_2_r17_tags_1)
		/sizeof(asn_DEF_NR_MinTimeGapFR2_2_r17_tags_1[0]), /* 1 */
	asn_DEF_NR_MinTimeGapFR2_2_r17_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_MinTimeGapFR2_2_r17_tags_1)
		/sizeof(asn_DEF_NR_MinTimeGapFR2_2_r17_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_MinTimeGapFR2_2_r17_1,
	3,	/* Elements count */
	&asn_SPC_NR_MinTimeGapFR2_2_r17_specs_1	/* Additional specs */
};

