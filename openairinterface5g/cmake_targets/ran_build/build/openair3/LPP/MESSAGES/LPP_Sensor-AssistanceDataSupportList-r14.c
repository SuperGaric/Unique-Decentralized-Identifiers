/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#include "LPP_Sensor-AssistanceDataSupportList-r14.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LPP_validityPeriodSupported_v1520_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LPP_validityAreaSupported_v1520_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LPP_validityPeriodSupported_v1520_value2enum_4[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LPP_validityPeriodSupported_v1520_enum2value_4[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LPP_validityPeriodSupported_v1520_specs_4 = {
	asn_MAP_LPP_validityPeriodSupported_v1520_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_LPP_validityPeriodSupported_v1520_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LPP_validityPeriodSupported_v1520_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LPP_validityPeriodSupported_v1520_4 = {
	"validityPeriodSupported-v1520",
	"validityPeriodSupported-v1520",
	&asn_OP_NativeEnumerated,
	asn_DEF_LPP_validityPeriodSupported_v1520_tags_4,
	sizeof(asn_DEF_LPP_validityPeriodSupported_v1520_tags_4)
		/sizeof(asn_DEF_LPP_validityPeriodSupported_v1520_tags_4[0]) - 1, /* 1 */
	asn_DEF_LPP_validityPeriodSupported_v1520_tags_4,	/* Same as above */
	sizeof(asn_DEF_LPP_validityPeriodSupported_v1520_tags_4)
		/sizeof(asn_DEF_LPP_validityPeriodSupported_v1520_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LPP_validityPeriodSupported_v1520_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LPP_validityPeriodSupported_v1520_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LPP_validityAreaSupported_v1520_value2enum_6[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LPP_validityAreaSupported_v1520_enum2value_6[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LPP_validityAreaSupported_v1520_specs_6 = {
	asn_MAP_LPP_validityAreaSupported_v1520_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_LPP_validityAreaSupported_v1520_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LPP_validityAreaSupported_v1520_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LPP_validityAreaSupported_v1520_6 = {
	"validityAreaSupported-v1520",
	"validityAreaSupported-v1520",
	&asn_OP_NativeEnumerated,
	asn_DEF_LPP_validityAreaSupported_v1520_tags_6,
	sizeof(asn_DEF_LPP_validityAreaSupported_v1520_tags_6)
		/sizeof(asn_DEF_LPP_validityAreaSupported_v1520_tags_6[0]) - 1, /* 1 */
	asn_DEF_LPP_validityAreaSupported_v1520_tags_6,	/* Same as above */
	sizeof(asn_DEF_LPP_validityAreaSupported_v1520_tags_6)
		/sizeof(asn_DEF_LPP_validityAreaSupported_v1520_tags_6[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LPP_validityAreaSupported_v1520_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LPP_validityAreaSupported_v1520_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LPP_ext1_3[] = {
	{ ATF_POINTER, 2, offsetof(struct LPP_Sensor_AssistanceDataSupportList_r14__ext1, validityPeriodSupported_v1520),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_validityPeriodSupported_v1520_4,
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
		"validityPeriodSupported-v1520"
		},
	{ ATF_POINTER, 1, offsetof(struct LPP_Sensor_AssistanceDataSupportList_r14__ext1, validityAreaSupported_v1520),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_validityAreaSupported_v1520_6,
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
		"validityAreaSupported-v1520"
		},
};
static const int asn_MAP_LPP_ext1_oms_3[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LPP_ext1_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LPP_ext1_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* validityPeriodSupported-v1520 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* validityAreaSupported-v1520 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LPP_ext1_specs_3 = {
	sizeof(struct LPP_Sensor_AssistanceDataSupportList_r14__ext1),
	offsetof(struct LPP_Sensor_AssistanceDataSupportList_r14__ext1, _asn_ctx),
	asn_MAP_LPP_ext1_tag2el_3,
	2,	/* Count of tags in the map */
	asn_MAP_LPP_ext1_oms_3,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LPP_ext1_3 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_LPP_ext1_tags_3,
	sizeof(asn_DEF_LPP_ext1_tags_3)
		/sizeof(asn_DEF_LPP_ext1_tags_3[0]) - 1, /* 1 */
	asn_DEF_LPP_ext1_tags_3,	/* Same as above */
	sizeof(asn_DEF_LPP_ext1_tags_3)
		/sizeof(asn_DEF_LPP_ext1_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LPP_ext1_3,
	2,	/* Elements count */
	&asn_SPC_LPP_ext1_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LPP_Sensor_AssistanceDataSupportList_r14_1[] = {
	{ ATF_POINTER, 1, offsetof(struct LPP_Sensor_AssistanceDataSupportList_r14, ext1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_LPP_ext1_3,
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
static const int asn_MAP_LPP_Sensor_AssistanceDataSupportList_r14_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LPP_Sensor_AssistanceDataSupportList_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LPP_Sensor_AssistanceDataSupportList_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_LPP_Sensor_AssistanceDataSupportList_r14_specs_1 = {
	sizeof(struct LPP_Sensor_AssistanceDataSupportList_r14),
	offsetof(struct LPP_Sensor_AssistanceDataSupportList_r14, _asn_ctx),
	asn_MAP_LPP_Sensor_AssistanceDataSupportList_r14_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_LPP_Sensor_AssistanceDataSupportList_r14_oms_1,	/* Optional members */
	0, 1,	/* Root/Additions */
	0,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LPP_Sensor_AssistanceDataSupportList_r14 = {
	"Sensor-AssistanceDataSupportList-r14",
	"Sensor-AssistanceDataSupportList-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_LPP_Sensor_AssistanceDataSupportList_r14_tags_1,
	sizeof(asn_DEF_LPP_Sensor_AssistanceDataSupportList_r14_tags_1)
		/sizeof(asn_DEF_LPP_Sensor_AssistanceDataSupportList_r14_tags_1[0]), /* 1 */
	asn_DEF_LPP_Sensor_AssistanceDataSupportList_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_LPP_Sensor_AssistanceDataSupportList_r14_tags_1)
		/sizeof(asn_DEF_LPP_Sensor_AssistanceDataSupportList_r14_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LPP_Sensor_AssistanceDataSupportList_r14_1,
	1,	/* Elements count */
	&asn_SPC_LPP_Sensor_AssistanceDataSupportList_r14_specs_1	/* Additional specs */
};
