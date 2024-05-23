/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_LocationInfo-r10.h"

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_locationCoordinates_r10_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_verticalVelocityInfo_r15_constr_15 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_LTE_locationCoordinates_r10_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_LocationInfo_r10__locationCoordinates_r10, choice.ellipsoid_Point_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
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
		"ellipsoid-Point-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_LocationInfo_r10__locationCoordinates_r10, choice.ellipsoidPointWithAltitude_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
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
		"ellipsoidPointWithAltitude-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_LocationInfo_r10__locationCoordinates_r10, choice.ellipsoidPointWithUncertaintyCircle_r11),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
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
		"ellipsoidPointWithUncertaintyCircle-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_LocationInfo_r10__locationCoordinates_r10, choice.ellipsoidPointWithUncertaintyEllipse_r11),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
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
		"ellipsoidPointWithUncertaintyEllipse-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_LocationInfo_r10__locationCoordinates_r10, choice.ellipsoidPointWithAltitudeAndUncertaintyEllipsoid_r11),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
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
		"ellipsoidPointWithAltitudeAndUncertaintyEllipsoid-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_LocationInfo_r10__locationCoordinates_r10, choice.ellipsoidArc_r11),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
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
		"ellipsoidArc-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_LocationInfo_r10__locationCoordinates_r10, choice.polygon_r11),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
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
		"polygon-r11"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_locationCoordinates_r10_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ellipsoid-Point-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ellipsoidPointWithAltitude-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ellipsoidPointWithUncertaintyCircle-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ellipsoidPointWithUncertaintyEllipse-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* ellipsoidPointWithAltitudeAndUncertaintyEllipsoid-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* ellipsoidArc-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* polygon-r11 */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_locationCoordinates_r10_specs_2 = {
	sizeof(struct LTE_LocationInfo_r10__locationCoordinates_r10),
	offsetof(struct LTE_LocationInfo_r10__locationCoordinates_r10, _asn_ctx),
	offsetof(struct LTE_LocationInfo_r10__locationCoordinates_r10, present),
	sizeof(((struct LTE_LocationInfo_r10__locationCoordinates_r10 *)0)->present),
	asn_MAP_LTE_locationCoordinates_r10_tag2el_2,
	7,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_locationCoordinates_r10_2 = {
	"locationCoordinates-r10",
	"locationCoordinates-r10",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_locationCoordinates_r10_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_LTE_locationCoordinates_r10_2,
	7,	/* Elements count */
	&asn_SPC_LTE_locationCoordinates_r10_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_verticalVelocityInfo_r15_15[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_LocationInfo_r10__ext1__verticalVelocityInfo_r15, choice.verticalVelocity_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
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
		"verticalVelocity-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_LocationInfo_r10__ext1__verticalVelocityInfo_r15, choice.verticalVelocityAndUncertainty_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
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
		"verticalVelocityAndUncertainty-r15"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_verticalVelocityInfo_r15_tag2el_15[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* verticalVelocity-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* verticalVelocityAndUncertainty-r15 */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_verticalVelocityInfo_r15_specs_15 = {
	sizeof(struct LTE_LocationInfo_r10__ext1__verticalVelocityInfo_r15),
	offsetof(struct LTE_LocationInfo_r10__ext1__verticalVelocityInfo_r15, _asn_ctx),
	offsetof(struct LTE_LocationInfo_r10__ext1__verticalVelocityInfo_r15, present),
	sizeof(((struct LTE_LocationInfo_r10__ext1__verticalVelocityInfo_r15 *)0)->present),
	asn_MAP_LTE_verticalVelocityInfo_r15_tag2el_15,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_verticalVelocityInfo_r15_15 = {
	"verticalVelocityInfo-r15",
	"verticalVelocityInfo-r15",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_verticalVelocityInfo_r15_constr_15,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_LTE_verticalVelocityInfo_r15_15,
	2,	/* Elements count */
	&asn_SPC_LTE_verticalVelocityInfo_r15_specs_15	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext1_14[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_LocationInfo_r10__ext1, verticalVelocityInfo_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_verticalVelocityInfo_r15_15,
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
		"verticalVelocityInfo-r15"
		},
};
static const int asn_MAP_LTE_ext1_oms_14[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext1_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext1_tag2el_14[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* verticalVelocityInfo-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext1_specs_14 = {
	sizeof(struct LTE_LocationInfo_r10__ext1),
	offsetof(struct LTE_LocationInfo_r10__ext1, _asn_ctx),
	asn_MAP_LTE_ext1_tag2el_14,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext1_oms_14,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext1_14 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext1_tags_14,
	sizeof(asn_DEF_LTE_ext1_tags_14)
		/sizeof(asn_DEF_LTE_ext1_tags_14[0]) - 1, /* 1 */
	asn_DEF_LTE_ext1_tags_14,	/* Same as above */
	sizeof(asn_DEF_LTE_ext1_tags_14)
		/sizeof(asn_DEF_LTE_ext1_tags_14[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_ext1_14,
	1,	/* Elements count */
	&asn_SPC_LTE_ext1_specs_14	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_LocationInfo_r10_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_LocationInfo_r10, locationCoordinates_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_locationCoordinates_r10_2,
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
		"locationCoordinates-r10"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_LocationInfo_r10, horizontalVelocity_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
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
		"horizontalVelocity-r10"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_LocationInfo_r10, gnss_TOD_msec_r10),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
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
		"gnss-TOD-msec-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_LocationInfo_r10, ext1),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_LTE_ext1_14,
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
		"ext1"
		},
};
static const int asn_MAP_LTE_LocationInfo_r10_oms_1[] = { 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_LTE_LocationInfo_r10_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_LocationInfo_r10_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* locationCoordinates-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* horizontalVelocity-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* gnss-TOD-msec-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_LocationInfo_r10_specs_1 = {
	sizeof(struct LTE_LocationInfo_r10),
	offsetof(struct LTE_LocationInfo_r10, _asn_ctx),
	asn_MAP_LTE_LocationInfo_r10_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_LTE_LocationInfo_r10_oms_1,	/* Optional members */
	2, 1,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_LocationInfo_r10 = {
	"LocationInfo-r10",
	"LocationInfo-r10",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_LocationInfo_r10_tags_1,
	sizeof(asn_DEF_LTE_LocationInfo_r10_tags_1)
		/sizeof(asn_DEF_LTE_LocationInfo_r10_tags_1[0]), /* 1 */
	asn_DEF_LTE_LocationInfo_r10_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_LocationInfo_r10_tags_1)
		/sizeof(asn_DEF_LTE_LocationInfo_r10_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_LocationInfo_r10_1,
	4,	/* Elements count */
	&asn_SPC_LTE_LocationInfo_r10_specs_1	/* Additional specs */
};

