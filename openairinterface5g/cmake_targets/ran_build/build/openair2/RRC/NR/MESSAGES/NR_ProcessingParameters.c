/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_ProcessingParameters.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_fallback_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_NR_fallback_value2enum_2[] = {
	{ 0,	2,	"sc" },
	{ 1,	9,	"cap1-only" }
};
static const unsigned int asn_MAP_NR_fallback_enum2value_2[] = {
	1,	/* cap1-only(1) */
	0	/* sc(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_fallback_specs_2 = {
	asn_MAP_NR_fallback_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_fallback_enum2value_2,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_fallback_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_fallback_2 = {
	"fallback",
	"fallback",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_fallback_tags_2,
	sizeof(asn_DEF_NR_fallback_tags_2)
		/sizeof(asn_DEF_NR_fallback_tags_2[0]) - 1, /* 1 */
	asn_DEF_NR_fallback_tags_2,	/* Same as above */
	sizeof(asn_DEF_NR_fallback_tags_2)
		/sizeof(asn_DEF_NR_fallback_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_fallback_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_fallback_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_differentTB_PerSlot_5[] = {
	{ ATF_POINTER, 4, offsetof(struct NR_ProcessingParameters__differentTB_PerSlot, upto1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_NumberOfCarriers,
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
		"upto1"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_ProcessingParameters__differentTB_PerSlot, upto2),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_NumberOfCarriers,
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
		"upto2"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_ProcessingParameters__differentTB_PerSlot, upto4),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_NumberOfCarriers,
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
		"upto4"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_ProcessingParameters__differentTB_PerSlot, upto7),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_NumberOfCarriers,
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
		"upto7"
		},
};
static const int asn_MAP_NR_differentTB_PerSlot_oms_5[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_NR_differentTB_PerSlot_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_differentTB_PerSlot_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* upto1 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* upto2 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* upto4 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* upto7 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_differentTB_PerSlot_specs_5 = {
	sizeof(struct NR_ProcessingParameters__differentTB_PerSlot),
	offsetof(struct NR_ProcessingParameters__differentTB_PerSlot, _asn_ctx),
	asn_MAP_NR_differentTB_PerSlot_tag2el_5,
	4,	/* Count of tags in the map */
	asn_MAP_NR_differentTB_PerSlot_oms_5,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_differentTB_PerSlot_5 = {
	"differentTB-PerSlot",
	"differentTB-PerSlot",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_differentTB_PerSlot_tags_5,
	sizeof(asn_DEF_NR_differentTB_PerSlot_tags_5)
		/sizeof(asn_DEF_NR_differentTB_PerSlot_tags_5[0]) - 1, /* 1 */
	asn_DEF_NR_differentTB_PerSlot_tags_5,	/* Same as above */
	sizeof(asn_DEF_NR_differentTB_PerSlot_tags_5)
		/sizeof(asn_DEF_NR_differentTB_PerSlot_tags_5[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_differentTB_PerSlot_5,
	4,	/* Elements count */
	&asn_SPC_NR_differentTB_PerSlot_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_ProcessingParameters_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_ProcessingParameters, fallback),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_fallback_2,
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
		"fallback"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_ProcessingParameters, differentTB_PerSlot),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_NR_differentTB_PerSlot_5,
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
		"differentTB-PerSlot"
		},
};
static const int asn_MAP_NR_ProcessingParameters_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_NR_ProcessingParameters_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_ProcessingParameters_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fallback */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* differentTB-PerSlot */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_ProcessingParameters_specs_1 = {
	sizeof(struct NR_ProcessingParameters),
	offsetof(struct NR_ProcessingParameters, _asn_ctx),
	asn_MAP_NR_ProcessingParameters_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_NR_ProcessingParameters_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_ProcessingParameters = {
	"ProcessingParameters",
	"ProcessingParameters",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_ProcessingParameters_tags_1,
	sizeof(asn_DEF_NR_ProcessingParameters_tags_1)
		/sizeof(asn_DEF_NR_ProcessingParameters_tags_1[0]), /* 1 */
	asn_DEF_NR_ProcessingParameters_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_ProcessingParameters_tags_1)
		/sizeof(asn_DEF_NR_ProcessingParameters_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_ProcessingParameters_1,
	2,	/* Elements count */
	&asn_SPC_NR_ProcessingParameters_specs_1	/* Additional specs */
};

