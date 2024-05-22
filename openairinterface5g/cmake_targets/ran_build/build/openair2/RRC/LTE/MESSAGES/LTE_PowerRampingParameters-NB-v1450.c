/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_PowerRampingParameters-NB-v1450.h"

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
static asn_per_constraints_t asn_PER_type_LTE_preambleInitialReceivedTargetPower_v1450_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  9 }	/* (0..9) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_powerRampingStepCE1_r14_constr_14 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_preambleInitialReceivedTargetPowerCE1_r14_constr_19 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  25 }	/* (0..25) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LTE_preambleInitialReceivedTargetPower_v1450_value2enum_2[] = {
	{ 0,	7,	"dBm-130" },
	{ 1,	7,	"dBm-128" },
	{ 2,	7,	"dBm-126" },
	{ 3,	7,	"dBm-124" },
	{ 4,	7,	"dBm-122" },
	{ 5,	6,	"dBm-88" },
	{ 6,	6,	"dBm-86" },
	{ 7,	6,	"dBm-84" },
	{ 8,	6,	"dBm-82" },
	{ 9,	6,	"dBm-80" }
};
static const unsigned int asn_MAP_LTE_preambleInitialReceivedTargetPower_v1450_enum2value_2[] = {
	4,	/* dBm-122(4) */
	3,	/* dBm-124(3) */
	2,	/* dBm-126(2) */
	1,	/* dBm-128(1) */
	0,	/* dBm-130(0) */
	9,	/* dBm-80(9) */
	8,	/* dBm-82(8) */
	7,	/* dBm-84(7) */
	6,	/* dBm-86(6) */
	5	/* dBm-88(5) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_preambleInitialReceivedTargetPower_v1450_specs_2 = {
	asn_MAP_LTE_preambleInitialReceivedTargetPower_v1450_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_preambleInitialReceivedTargetPower_v1450_enum2value_2,	/* N => "tag"; sorted by N */
	10,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_preambleInitialReceivedTargetPower_v1450_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_preambleInitialReceivedTargetPower_v1450_2 = {
	"preambleInitialReceivedTargetPower-v1450",
	"preambleInitialReceivedTargetPower-v1450",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_preambleInitialReceivedTargetPower_v1450_tags_2,
	sizeof(asn_DEF_LTE_preambleInitialReceivedTargetPower_v1450_tags_2)
		/sizeof(asn_DEF_LTE_preambleInitialReceivedTargetPower_v1450_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_preambleInitialReceivedTargetPower_v1450_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_preambleInitialReceivedTargetPower_v1450_tags_2)
		/sizeof(asn_DEF_LTE_preambleInitialReceivedTargetPower_v1450_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_preambleInitialReceivedTargetPower_v1450_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_preambleInitialReceivedTargetPower_v1450_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_powerRampingStepCE1_r14_value2enum_14[] = {
	{ 0,	3,	"dB0" },
	{ 1,	3,	"dB2" },
	{ 2,	3,	"dB4" },
	{ 3,	3,	"dB6" }
};
static const unsigned int asn_MAP_LTE_powerRampingStepCE1_r14_enum2value_14[] = {
	0,	/* dB0(0) */
	1,	/* dB2(1) */
	2,	/* dB4(2) */
	3	/* dB6(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_powerRampingStepCE1_r14_specs_14 = {
	asn_MAP_LTE_powerRampingStepCE1_r14_value2enum_14,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_powerRampingStepCE1_r14_enum2value_14,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_powerRampingStepCE1_r14_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_powerRampingStepCE1_r14_14 = {
	"powerRampingStepCE1-r14",
	"powerRampingStepCE1-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_powerRampingStepCE1_r14_tags_14,
	sizeof(asn_DEF_LTE_powerRampingStepCE1_r14_tags_14)
		/sizeof(asn_DEF_LTE_powerRampingStepCE1_r14_tags_14[0]) - 1, /* 1 */
	asn_DEF_LTE_powerRampingStepCE1_r14_tags_14,	/* Same as above */
	sizeof(asn_DEF_LTE_powerRampingStepCE1_r14_tags_14)
		/sizeof(asn_DEF_LTE_powerRampingStepCE1_r14_tags_14[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_powerRampingStepCE1_r14_constr_14,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_powerRampingStepCE1_r14_specs_14	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_preambleInitialReceivedTargetPowerCE1_r14_value2enum_19[] = {
	{ 0,	7,	"dBm-130" },
	{ 1,	7,	"dBm-128" },
	{ 2,	7,	"dBm-126" },
	{ 3,	7,	"dBm-124" },
	{ 4,	7,	"dBm-122" },
	{ 5,	7,	"dBm-120" },
	{ 6,	7,	"dBm-118" },
	{ 7,	7,	"dBm-116" },
	{ 8,	7,	"dBm-114" },
	{ 9,	7,	"dBm-112" },
	{ 10,	7,	"dBm-110" },
	{ 11,	7,	"dBm-108" },
	{ 12,	7,	"dBm-106" },
	{ 13,	7,	"dBm-104" },
	{ 14,	7,	"dBm-102" },
	{ 15,	7,	"dBm-100" },
	{ 16,	6,	"dBm-98" },
	{ 17,	6,	"dBm-96" },
	{ 18,	6,	"dBm-94" },
	{ 19,	6,	"dBm-92" },
	{ 20,	6,	"dBm-90" },
	{ 21,	6,	"dBm-88" },
	{ 22,	6,	"dBm-86" },
	{ 23,	6,	"dBm-84" },
	{ 24,	6,	"dBm-82" },
	{ 25,	6,	"dBm-80" }
};
static const unsigned int asn_MAP_LTE_preambleInitialReceivedTargetPowerCE1_r14_enum2value_19[] = {
	15,	/* dBm-100(15) */
	14,	/* dBm-102(14) */
	13,	/* dBm-104(13) */
	12,	/* dBm-106(12) */
	11,	/* dBm-108(11) */
	10,	/* dBm-110(10) */
	9,	/* dBm-112(9) */
	8,	/* dBm-114(8) */
	7,	/* dBm-116(7) */
	6,	/* dBm-118(6) */
	5,	/* dBm-120(5) */
	4,	/* dBm-122(4) */
	3,	/* dBm-124(3) */
	2,	/* dBm-126(2) */
	1,	/* dBm-128(1) */
	0,	/* dBm-130(0) */
	25,	/* dBm-80(25) */
	24,	/* dBm-82(24) */
	23,	/* dBm-84(23) */
	22,	/* dBm-86(22) */
	21,	/* dBm-88(21) */
	20,	/* dBm-90(20) */
	19,	/* dBm-92(19) */
	18,	/* dBm-94(18) */
	17,	/* dBm-96(17) */
	16	/* dBm-98(16) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_preambleInitialReceivedTargetPowerCE1_r14_specs_19 = {
	asn_MAP_LTE_preambleInitialReceivedTargetPowerCE1_r14_value2enum_19,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_preambleInitialReceivedTargetPowerCE1_r14_enum2value_19,	/* N => "tag"; sorted by N */
	26,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_preambleInitialReceivedTargetPowerCE1_r14_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_preambleInitialReceivedTargetPowerCE1_r14_19 = {
	"preambleInitialReceivedTargetPowerCE1-r14",
	"preambleInitialReceivedTargetPowerCE1-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_preambleInitialReceivedTargetPowerCE1_r14_tags_19,
	sizeof(asn_DEF_LTE_preambleInitialReceivedTargetPowerCE1_r14_tags_19)
		/sizeof(asn_DEF_LTE_preambleInitialReceivedTargetPowerCE1_r14_tags_19[0]) - 1, /* 1 */
	asn_DEF_LTE_preambleInitialReceivedTargetPowerCE1_r14_tags_19,	/* Same as above */
	sizeof(asn_DEF_LTE_preambleInitialReceivedTargetPowerCE1_r14_tags_19)
		/sizeof(asn_DEF_LTE_preambleInitialReceivedTargetPowerCE1_r14_tags_19[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_preambleInitialReceivedTargetPowerCE1_r14_constr_19,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_preambleInitialReceivedTargetPowerCE1_r14_specs_19	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_powerRampingParametersCE1_r14_13[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14, powerRampingStepCE1_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_powerRampingStepCE1_r14_14,
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
		"powerRampingStepCE1-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14, preambleInitialReceivedTargetPowerCE1_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_preambleInitialReceivedTargetPowerCE1_r14_19,
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
		"preambleInitialReceivedTargetPowerCE1-r14"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_powerRampingParametersCE1_r14_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_powerRampingParametersCE1_r14_tag2el_13[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* powerRampingStepCE1-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* preambleInitialReceivedTargetPowerCE1-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_powerRampingParametersCE1_r14_specs_13 = {
	sizeof(struct LTE_PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14),
	offsetof(struct LTE_PowerRampingParameters_NB_v1450__powerRampingParametersCE1_r14, _asn_ctx),
	asn_MAP_LTE_powerRampingParametersCE1_r14_tag2el_13,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_powerRampingParametersCE1_r14_13 = {
	"powerRampingParametersCE1-r14",
	"powerRampingParametersCE1-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_powerRampingParametersCE1_r14_tags_13,
	sizeof(asn_DEF_LTE_powerRampingParametersCE1_r14_tags_13)
		/sizeof(asn_DEF_LTE_powerRampingParametersCE1_r14_tags_13[0]) - 1, /* 1 */
	asn_DEF_LTE_powerRampingParametersCE1_r14_tags_13,	/* Same as above */
	sizeof(asn_DEF_LTE_powerRampingParametersCE1_r14_tags_13)
		/sizeof(asn_DEF_LTE_powerRampingParametersCE1_r14_tags_13[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_powerRampingParametersCE1_r14_13,
	2,	/* Elements count */
	&asn_SPC_LTE_powerRampingParametersCE1_r14_specs_13	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_PowerRampingParameters_NB_v1450_1[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_PowerRampingParameters_NB_v1450, preambleInitialReceivedTargetPower_v1450),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_preambleInitialReceivedTargetPower_v1450_2,
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
		"preambleInitialReceivedTargetPower-v1450"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_PowerRampingParameters_NB_v1450, powerRampingParametersCE1_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_powerRampingParametersCE1_r14_13,
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
		"powerRampingParametersCE1-r14"
		},
};
static const int asn_MAP_LTE_PowerRampingParameters_NB_v1450_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_PowerRampingParameters_NB_v1450_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_PowerRampingParameters_NB_v1450_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* preambleInitialReceivedTargetPower-v1450 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* powerRampingParametersCE1-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_PowerRampingParameters_NB_v1450_specs_1 = {
	sizeof(struct LTE_PowerRampingParameters_NB_v1450),
	offsetof(struct LTE_PowerRampingParameters_NB_v1450, _asn_ctx),
	asn_MAP_LTE_PowerRampingParameters_NB_v1450_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_PowerRampingParameters_NB_v1450_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_PowerRampingParameters_NB_v1450 = {
	"PowerRampingParameters-NB-v1450",
	"PowerRampingParameters-NB-v1450",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_PowerRampingParameters_NB_v1450_tags_1,
	sizeof(asn_DEF_LTE_PowerRampingParameters_NB_v1450_tags_1)
		/sizeof(asn_DEF_LTE_PowerRampingParameters_NB_v1450_tags_1[0]), /* 1 */
	asn_DEF_LTE_PowerRampingParameters_NB_v1450_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_PowerRampingParameters_NB_v1450_tags_1)
		/sizeof(asn_DEF_LTE_PowerRampingParameters_NB_v1450_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_PowerRampingParameters_NB_v1450_1,
	2,	/* Elements count */
	&asn_SPC_LTE_PowerRampingParameters_NB_v1450_specs_1	/* Additional specs */
};

