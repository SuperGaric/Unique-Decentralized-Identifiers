/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#include "LPP_RelativeLocation-r16.h"

#include "LPP_LocationUncertainty-r16.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LPP_milli_arc_second_units_r16_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  3 }	/* (0..3,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LPP_height_units_r16_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LPP_milli_arc_second_units_r16_value2enum_2[] = {
	{ 0,	7,	"mas0-03" },
	{ 1,	6,	"mas0-3" },
	{ 2,	4,	"mas3" },
	{ 3,	5,	"mas30" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_LPP_milli_arc_second_units_r16_enum2value_2[] = {
	0,	/* mas0-03(0) */
	1,	/* mas0-3(1) */
	2,	/* mas3(2) */
	3	/* mas30(3) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_LPP_milli_arc_second_units_r16_specs_2 = {
	asn_MAP_LPP_milli_arc_second_units_r16_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LPP_milli_arc_second_units_r16_enum2value_2,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	5,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LPP_milli_arc_second_units_r16_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LPP_milli_arc_second_units_r16_2 = {
	"milli-arc-second-units-r16",
	"milli-arc-second-units-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_LPP_milli_arc_second_units_r16_tags_2,
	sizeof(asn_DEF_LPP_milli_arc_second_units_r16_tags_2)
		/sizeof(asn_DEF_LPP_milli_arc_second_units_r16_tags_2[0]) - 1, /* 1 */
	asn_DEF_LPP_milli_arc_second_units_r16_tags_2,	/* Same as above */
	sizeof(asn_DEF_LPP_milli_arc_second_units_r16_tags_2)
		/sizeof(asn_DEF_LPP_milli_arc_second_units_r16_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LPP_milli_arc_second_units_r16_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LPP_milli_arc_second_units_r16_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LPP_height_units_r16_value2enum_8[] = {
	{ 0,	2,	"mm" },
	{ 1,	2,	"cm" },
	{ 2,	1,	"m" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_LPP_height_units_r16_enum2value_8[] = {
	1,	/* cm(1) */
	2,	/* m(2) */
	0	/* mm(0) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_LPP_height_units_r16_specs_8 = {
	asn_MAP_LPP_height_units_r16_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_LPP_height_units_r16_enum2value_8,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	4,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LPP_height_units_r16_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LPP_height_units_r16_8 = {
	"height-units-r16",
	"height-units-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_LPP_height_units_r16_tags_8,
	sizeof(asn_DEF_LPP_height_units_r16_tags_8)
		/sizeof(asn_DEF_LPP_height_units_r16_tags_8[0]) - 1, /* 1 */
	asn_DEF_LPP_height_units_r16_tags_8,	/* Same as above */
	sizeof(asn_DEF_LPP_height_units_r16_tags_8)
		/sizeof(asn_DEF_LPP_height_units_r16_tags_8[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LPP_height_units_r16_constr_8,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LPP_height_units_r16_specs_8	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LPP_RelativeLocation_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_RelativeLocation_r16, milli_arc_second_units_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_milli_arc_second_units_r16_2,
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
		"milli-arc-second-units-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_RelativeLocation_r16, height_units_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_height_units_r16_8,
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
		"height-units-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_RelativeLocation_r16, delta_latitude_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_Delta_Latitude_r16,
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
		"delta-latitude-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_RelativeLocation_r16, delta_longitude_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_Delta_Longitude_r16,
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
		"delta-longitude-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_RelativeLocation_r16, delta_height_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_Delta_Height_r16,
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
		"delta-height-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct LPP_RelativeLocation_r16, locationUNC_r16),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_LocationUncertainty_r16,
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
		"locationUNC-r16"
		},
};
static const int asn_MAP_LPP_RelativeLocation_r16_oms_1[] = { 5 };
static const ber_tlv_tag_t asn_DEF_LPP_RelativeLocation_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LPP_RelativeLocation_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* milli-arc-second-units-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* height-units-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* delta-latitude-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* delta-longitude-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* delta-height-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* locationUNC-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_LPP_RelativeLocation_r16_specs_1 = {
	sizeof(struct LPP_RelativeLocation_r16),
	offsetof(struct LPP_RelativeLocation_r16, _asn_ctx),
	asn_MAP_LPP_RelativeLocation_r16_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_LPP_RelativeLocation_r16_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LPP_RelativeLocation_r16 = {
	"RelativeLocation-r16",
	"RelativeLocation-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_LPP_RelativeLocation_r16_tags_1,
	sizeof(asn_DEF_LPP_RelativeLocation_r16_tags_1)
		/sizeof(asn_DEF_LPP_RelativeLocation_r16_tags_1[0]), /* 1 */
	asn_DEF_LPP_RelativeLocation_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_LPP_RelativeLocation_r16_tags_1)
		/sizeof(asn_DEF_LPP_RelativeLocation_r16_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LPP_RelativeLocation_r16_1,
	6,	/* Elements count */
	&asn_SPC_LPP_RelativeLocation_r16_specs_1	/* Additional specs */
};

