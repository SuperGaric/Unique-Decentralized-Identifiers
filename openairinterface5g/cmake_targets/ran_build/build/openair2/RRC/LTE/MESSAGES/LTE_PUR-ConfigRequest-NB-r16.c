/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_PUR-ConfigRequest-NB-r16.h"

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
static asn_per_constraints_t asn_PER_type_LTE_requestedNumOccasions_r16_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_requestedTBS_r16_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_rrc_ACK_r16_constr_41 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_LTE_PUR_ConfigRequest_NB_r16_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LTE_requestedNumOccasions_r16_value2enum_4[] = {
	{ 0,	3,	"one" },
	{ 1,	8,	"infinite" }
};
static const unsigned int asn_MAP_LTE_requestedNumOccasions_r16_enum2value_4[] = {
	1,	/* infinite(1) */
	0	/* one(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_requestedNumOccasions_r16_specs_4 = {
	asn_MAP_LTE_requestedNumOccasions_r16_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_requestedNumOccasions_r16_enum2value_4,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_requestedNumOccasions_r16_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_requestedNumOccasions_r16_4 = {
	"requestedNumOccasions-r16",
	"requestedNumOccasions-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_requestedNumOccasions_r16_tags_4,
	sizeof(asn_DEF_LTE_requestedNumOccasions_r16_tags_4)
		/sizeof(asn_DEF_LTE_requestedNumOccasions_r16_tags_4[0]) - 1, /* 1 */
	asn_DEF_LTE_requestedNumOccasions_r16_tags_4,	/* Same as above */
	sizeof(asn_DEF_LTE_requestedNumOccasions_r16_tags_4)
		/sizeof(asn_DEF_LTE_requestedNumOccasions_r16_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_requestedNumOccasions_r16_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_requestedNumOccasions_r16_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_requestedTBS_r16_value2enum_8[] = {
	{ 0,	4,	"b328" },
	{ 1,	4,	"b376" },
	{ 2,	4,	"b424" },
	{ 3,	4,	"b472" },
	{ 4,	4,	"b504" },
	{ 5,	4,	"b552" },
	{ 6,	4,	"b584" },
	{ 7,	4,	"b616" },
	{ 8,	4,	"b680" },
	{ 9,	4,	"b744" },
	{ 10,	4,	"b776" },
	{ 11,	4,	"b808" },
	{ 12,	4,	"b872" },
	{ 13,	4,	"b904" },
	{ 14,	4,	"b936" },
	{ 15,	4,	"b968" },
	{ 16,	5,	"b1000" },
	{ 17,	5,	"b1032" },
	{ 18,	5,	"b1096" },
	{ 19,	5,	"b1128" },
	{ 20,	5,	"b1192" },
	{ 21,	5,	"b1224" },
	{ 22,	5,	"b1256" },
	{ 23,	5,	"b1352" },
	{ 24,	5,	"b1384" },
	{ 25,	5,	"b1544" },
	{ 26,	5,	"b1608" },
	{ 27,	5,	"b1736" },
	{ 28,	5,	"b1800" },
	{ 29,	5,	"b2024" },
	{ 30,	5,	"b2280" },
	{ 31,	5,	"b2536" }
};
static const unsigned int asn_MAP_LTE_requestedTBS_r16_enum2value_8[] = {
	16,	/* b1000(16) */
	17,	/* b1032(17) */
	18,	/* b1096(18) */
	19,	/* b1128(19) */
	20,	/* b1192(20) */
	21,	/* b1224(21) */
	22,	/* b1256(22) */
	23,	/* b1352(23) */
	24,	/* b1384(24) */
	25,	/* b1544(25) */
	26,	/* b1608(26) */
	27,	/* b1736(27) */
	28,	/* b1800(28) */
	29,	/* b2024(29) */
	30,	/* b2280(30) */
	31,	/* b2536(31) */
	0,	/* b328(0) */
	1,	/* b376(1) */
	2,	/* b424(2) */
	3,	/* b472(3) */
	4,	/* b504(4) */
	5,	/* b552(5) */
	6,	/* b584(6) */
	7,	/* b616(7) */
	8,	/* b680(8) */
	9,	/* b744(9) */
	10,	/* b776(10) */
	11,	/* b808(11) */
	12,	/* b872(12) */
	13,	/* b904(13) */
	14,	/* b936(14) */
	15	/* b968(15) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_requestedTBS_r16_specs_8 = {
	asn_MAP_LTE_requestedTBS_r16_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_requestedTBS_r16_enum2value_8,	/* N => "tag"; sorted by N */
	32,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_requestedTBS_r16_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_requestedTBS_r16_8 = {
	"requestedTBS-r16",
	"requestedTBS-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_requestedTBS_r16_tags_8,
	sizeof(asn_DEF_LTE_requestedTBS_r16_tags_8)
		/sizeof(asn_DEF_LTE_requestedTBS_r16_tags_8[0]) - 1, /* 1 */
	asn_DEF_LTE_requestedTBS_r16_tags_8,	/* Same as above */
	sizeof(asn_DEF_LTE_requestedTBS_r16_tags_8)
		/sizeof(asn_DEF_LTE_requestedTBS_r16_tags_8[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_requestedTBS_r16_constr_8,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_requestedTBS_r16_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_rrc_ACK_r16_value2enum_41[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_rrc_ACK_r16_enum2value_41[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_rrc_ACK_r16_specs_41 = {
	asn_MAP_LTE_rrc_ACK_r16_value2enum_41,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_rrc_ACK_r16_enum2value_41,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_rrc_ACK_r16_tags_41[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_rrc_ACK_r16_41 = {
	"rrc-ACK-r16",
	"rrc-ACK-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_rrc_ACK_r16_tags_41,
	sizeof(asn_DEF_LTE_rrc_ACK_r16_tags_41)
		/sizeof(asn_DEF_LTE_rrc_ACK_r16_tags_41[0]) - 1, /* 1 */
	asn_DEF_LTE_rrc_ACK_r16_tags_41,	/* Same as above */
	sizeof(asn_DEF_LTE_rrc_ACK_r16_tags_41)
		/sizeof(asn_DEF_LTE_rrc_ACK_r16_tags_41[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_rrc_ACK_r16_constr_41,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_rrc_ACK_r16_specs_41	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_pur_SetupRequest_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PUR_ConfigRequest_NB_r16__pur_SetupRequest, requestedNumOccasions_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_requestedNumOccasions_r16_4,
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
		"requestedNumOccasions-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PUR_ConfigRequest_NB_r16__pur_SetupRequest, requestedPeriodicityAndOffset_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_PUR_PeriodicityAndOffset_NB_r16,
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
		"requestedPeriodicityAndOffset-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PUR_ConfigRequest_NB_r16__pur_SetupRequest, requestedTBS_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_requestedTBS_r16_8,
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
		"requestedTBS-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_PUR_ConfigRequest_NB_r16__pur_SetupRequest, rrc_ACK_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_rrc_ACK_r16_41,
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
		"rrc-ACK-r16"
		},
};
static const int asn_MAP_LTE_pur_SetupRequest_oms_3[] = { 3 };
static const ber_tlv_tag_t asn_DEF_LTE_pur_SetupRequest_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_pur_SetupRequest_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* requestedNumOccasions-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* requestedPeriodicityAndOffset-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* requestedTBS-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* rrc-ACK-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_pur_SetupRequest_specs_3 = {
	sizeof(struct LTE_PUR_ConfigRequest_NB_r16__pur_SetupRequest),
	offsetof(struct LTE_PUR_ConfigRequest_NB_r16__pur_SetupRequest, _asn_ctx),
	asn_MAP_LTE_pur_SetupRequest_tag2el_3,
	4,	/* Count of tags in the map */
	asn_MAP_LTE_pur_SetupRequest_oms_3,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_pur_SetupRequest_3 = {
	"pur-SetupRequest",
	"pur-SetupRequest",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_pur_SetupRequest_tags_3,
	sizeof(asn_DEF_LTE_pur_SetupRequest_tags_3)
		/sizeof(asn_DEF_LTE_pur_SetupRequest_tags_3[0]) - 1, /* 1 */
	asn_DEF_LTE_pur_SetupRequest_tags_3,	/* Same as above */
	sizeof(asn_DEF_LTE_pur_SetupRequest_tags_3)
		/sizeof(asn_DEF_LTE_pur_SetupRequest_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_pur_SetupRequest_3,
	4,	/* Elements count */
	&asn_SPC_LTE_pur_SetupRequest_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_PUR_ConfigRequest_NB_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PUR_ConfigRequest_NB_r16, choice.pur_ReleaseRequest),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
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
		"pur-ReleaseRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PUR_ConfigRequest_NB_r16, choice.pur_SetupRequest),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_pur_SetupRequest_3,
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
		"pur-SetupRequest"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_PUR_ConfigRequest_NB_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pur-ReleaseRequest */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* pur-SetupRequest */
};
asn_CHOICE_specifics_t asn_SPC_LTE_PUR_ConfigRequest_NB_r16_specs_1 = {
	sizeof(struct LTE_PUR_ConfigRequest_NB_r16),
	offsetof(struct LTE_PUR_ConfigRequest_NB_r16, _asn_ctx),
	offsetof(struct LTE_PUR_ConfigRequest_NB_r16, present),
	sizeof(((struct LTE_PUR_ConfigRequest_NB_r16 *)0)->present),
	asn_MAP_LTE_PUR_ConfigRequest_NB_r16_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_LTE_PUR_ConfigRequest_NB_r16 = {
	"PUR-ConfigRequest-NB-r16",
	"PUR-ConfigRequest-NB-r16",
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
		&asn_PER_type_LTE_PUR_ConfigRequest_NB_r16_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_LTE_PUR_ConfigRequest_NB_r16_1,
	2,	/* Elements count */
	&asn_SPC_LTE_PUR_ConfigRequest_NB_r16_specs_1	/* Additional specs */
};
