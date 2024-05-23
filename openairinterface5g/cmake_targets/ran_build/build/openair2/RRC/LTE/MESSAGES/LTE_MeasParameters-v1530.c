/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_MeasParameters-v1530.h"

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
static asn_per_constraints_t asn_PER_type_LTE_qoe_MeasReport_r15_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_qoe_MTSI_MeasReport_r15_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_ca_IdleModeMeasurements_r15_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_ca_IdleModeValidityArea_r15_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_heightMeas_r15_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_multipleCellsMeasExtension_r15_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LTE_qoe_MeasReport_r15_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_qoe_MeasReport_r15_enum2value_2[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_qoe_MeasReport_r15_specs_2 = {
	asn_MAP_LTE_qoe_MeasReport_r15_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_qoe_MeasReport_r15_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_qoe_MeasReport_r15_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_qoe_MeasReport_r15_2 = {
	"qoe-MeasReport-r15",
	"qoe-MeasReport-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_qoe_MeasReport_r15_tags_2,
	sizeof(asn_DEF_LTE_qoe_MeasReport_r15_tags_2)
		/sizeof(asn_DEF_LTE_qoe_MeasReport_r15_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_qoe_MeasReport_r15_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_qoe_MeasReport_r15_tags_2)
		/sizeof(asn_DEF_LTE_qoe_MeasReport_r15_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_qoe_MeasReport_r15_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_qoe_MeasReport_r15_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_qoe_MTSI_MeasReport_r15_value2enum_4[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_qoe_MTSI_MeasReport_r15_enum2value_4[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_qoe_MTSI_MeasReport_r15_specs_4 = {
	asn_MAP_LTE_qoe_MTSI_MeasReport_r15_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_qoe_MTSI_MeasReport_r15_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_qoe_MTSI_MeasReport_r15_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_qoe_MTSI_MeasReport_r15_4 = {
	"qoe-MTSI-MeasReport-r15",
	"qoe-MTSI-MeasReport-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_qoe_MTSI_MeasReport_r15_tags_4,
	sizeof(asn_DEF_LTE_qoe_MTSI_MeasReport_r15_tags_4)
		/sizeof(asn_DEF_LTE_qoe_MTSI_MeasReport_r15_tags_4[0]) - 1, /* 1 */
	asn_DEF_LTE_qoe_MTSI_MeasReport_r15_tags_4,	/* Same as above */
	sizeof(asn_DEF_LTE_qoe_MTSI_MeasReport_r15_tags_4)
		/sizeof(asn_DEF_LTE_qoe_MTSI_MeasReport_r15_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_qoe_MTSI_MeasReport_r15_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_qoe_MTSI_MeasReport_r15_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_ca_IdleModeMeasurements_r15_value2enum_6[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_ca_IdleModeMeasurements_r15_enum2value_6[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_ca_IdleModeMeasurements_r15_specs_6 = {
	asn_MAP_LTE_ca_IdleModeMeasurements_r15_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_ca_IdleModeMeasurements_r15_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_ca_IdleModeMeasurements_r15_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ca_IdleModeMeasurements_r15_6 = {
	"ca-IdleModeMeasurements-r15",
	"ca-IdleModeMeasurements-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_ca_IdleModeMeasurements_r15_tags_6,
	sizeof(asn_DEF_LTE_ca_IdleModeMeasurements_r15_tags_6)
		/sizeof(asn_DEF_LTE_ca_IdleModeMeasurements_r15_tags_6[0]) - 1, /* 1 */
	asn_DEF_LTE_ca_IdleModeMeasurements_r15_tags_6,	/* Same as above */
	sizeof(asn_DEF_LTE_ca_IdleModeMeasurements_r15_tags_6)
		/sizeof(asn_DEF_LTE_ca_IdleModeMeasurements_r15_tags_6[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_ca_IdleModeMeasurements_r15_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_ca_IdleModeMeasurements_r15_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_ca_IdleModeValidityArea_r15_value2enum_8[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_ca_IdleModeValidityArea_r15_enum2value_8[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_ca_IdleModeValidityArea_r15_specs_8 = {
	asn_MAP_LTE_ca_IdleModeValidityArea_r15_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_ca_IdleModeValidityArea_r15_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_ca_IdleModeValidityArea_r15_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ca_IdleModeValidityArea_r15_8 = {
	"ca-IdleModeValidityArea-r15",
	"ca-IdleModeValidityArea-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_ca_IdleModeValidityArea_r15_tags_8,
	sizeof(asn_DEF_LTE_ca_IdleModeValidityArea_r15_tags_8)
		/sizeof(asn_DEF_LTE_ca_IdleModeValidityArea_r15_tags_8[0]) - 1, /* 1 */
	asn_DEF_LTE_ca_IdleModeValidityArea_r15_tags_8,	/* Same as above */
	sizeof(asn_DEF_LTE_ca_IdleModeValidityArea_r15_tags_8)
		/sizeof(asn_DEF_LTE_ca_IdleModeValidityArea_r15_tags_8[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_ca_IdleModeValidityArea_r15_constr_8,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_ca_IdleModeValidityArea_r15_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_heightMeas_r15_value2enum_10[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_heightMeas_r15_enum2value_10[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_heightMeas_r15_specs_10 = {
	asn_MAP_LTE_heightMeas_r15_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_heightMeas_r15_enum2value_10,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_heightMeas_r15_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_heightMeas_r15_10 = {
	"heightMeas-r15",
	"heightMeas-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_heightMeas_r15_tags_10,
	sizeof(asn_DEF_LTE_heightMeas_r15_tags_10)
		/sizeof(asn_DEF_LTE_heightMeas_r15_tags_10[0]) - 1, /* 1 */
	asn_DEF_LTE_heightMeas_r15_tags_10,	/* Same as above */
	sizeof(asn_DEF_LTE_heightMeas_r15_tags_10)
		/sizeof(asn_DEF_LTE_heightMeas_r15_tags_10[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_heightMeas_r15_constr_10,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_heightMeas_r15_specs_10	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_multipleCellsMeasExtension_r15_value2enum_12[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_multipleCellsMeasExtension_r15_enum2value_12[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_multipleCellsMeasExtension_r15_specs_12 = {
	asn_MAP_LTE_multipleCellsMeasExtension_r15_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_multipleCellsMeasExtension_r15_enum2value_12,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_multipleCellsMeasExtension_r15_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_multipleCellsMeasExtension_r15_12 = {
	"multipleCellsMeasExtension-r15",
	"multipleCellsMeasExtension-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_multipleCellsMeasExtension_r15_tags_12,
	sizeof(asn_DEF_LTE_multipleCellsMeasExtension_r15_tags_12)
		/sizeof(asn_DEF_LTE_multipleCellsMeasExtension_r15_tags_12[0]) - 1, /* 1 */
	asn_DEF_LTE_multipleCellsMeasExtension_r15_tags_12,	/* Same as above */
	sizeof(asn_DEF_LTE_multipleCellsMeasExtension_r15_tags_12)
		/sizeof(asn_DEF_LTE_multipleCellsMeasExtension_r15_tags_12[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_multipleCellsMeasExtension_r15_constr_12,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_multipleCellsMeasExtension_r15_specs_12	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_MeasParameters_v1530_1[] = {
	{ ATF_POINTER, 6, offsetof(struct LTE_MeasParameters_v1530, qoe_MeasReport_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_qoe_MeasReport_r15_2,
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
		"qoe-MeasReport-r15"
		},
	{ ATF_POINTER, 5, offsetof(struct LTE_MeasParameters_v1530, qoe_MTSI_MeasReport_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_qoe_MTSI_MeasReport_r15_4,
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
		"qoe-MTSI-MeasReport-r15"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_MeasParameters_v1530, ca_IdleModeMeasurements_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ca_IdleModeMeasurements_r15_6,
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
		"ca-IdleModeMeasurements-r15"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_MeasParameters_v1530, ca_IdleModeValidityArea_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ca_IdleModeValidityArea_r15_8,
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
		"ca-IdleModeValidityArea-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_MeasParameters_v1530, heightMeas_r15),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_heightMeas_r15_10,
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
		"heightMeas-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_MeasParameters_v1530, multipleCellsMeasExtension_r15),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_multipleCellsMeasExtension_r15_12,
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
		"multipleCellsMeasExtension-r15"
		},
};
static const int asn_MAP_LTE_MeasParameters_v1530_oms_1[] = { 0, 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_LTE_MeasParameters_v1530_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_MeasParameters_v1530_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* qoe-MeasReport-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* qoe-MTSI-MeasReport-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ca-IdleModeMeasurements-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ca-IdleModeValidityArea-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* heightMeas-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* multipleCellsMeasExtension-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_MeasParameters_v1530_specs_1 = {
	sizeof(struct LTE_MeasParameters_v1530),
	offsetof(struct LTE_MeasParameters_v1530, _asn_ctx),
	asn_MAP_LTE_MeasParameters_v1530_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_LTE_MeasParameters_v1530_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_MeasParameters_v1530 = {
	"MeasParameters-v1530",
	"MeasParameters-v1530",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_MeasParameters_v1530_tags_1,
	sizeof(asn_DEF_LTE_MeasParameters_v1530_tags_1)
		/sizeof(asn_DEF_LTE_MeasParameters_v1530_tags_1[0]), /* 1 */
	asn_DEF_LTE_MeasParameters_v1530_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_MeasParameters_v1530_tags_1)
		/sizeof(asn_DEF_LTE_MeasParameters_v1530_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_MeasParameters_v1530_1,
	6,	/* Elements count */
	&asn_SPC_LTE_MeasParameters_v1530_specs_1	/* Additional specs */
};

