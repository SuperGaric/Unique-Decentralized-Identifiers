/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_SL-EventTriggerConfig-r16.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_sl_EventId_r16_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_sl_ReportAmount_r16_constr_17 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_NR_eventS1_r16_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SL_EventTriggerConfig_r16__sl_EventId_r16__eventS1_r16, s1_Threshold_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_SL_MeasTriggerQuantity_r16,
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
		"s1-Threshold-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SL_EventTriggerConfig_r16__sl_EventId_r16__eventS1_r16, sl_ReportOnLeave_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
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
		"sl-ReportOnLeave-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SL_EventTriggerConfig_r16__sl_EventId_r16__eventS1_r16, sl_Hysteresis_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_Hysteresis,
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
		"sl-Hysteresis-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SL_EventTriggerConfig_r16__sl_EventId_r16__eventS1_r16, sl_TimeToTrigger_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_TimeToTrigger,
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
		"sl-TimeToTrigger-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_eventS1_r16_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_eventS1_r16_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* s1-Threshold-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sl-ReportOnLeave-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sl-Hysteresis-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* sl-TimeToTrigger-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_eventS1_r16_specs_3 = {
	sizeof(struct NR_SL_EventTriggerConfig_r16__sl_EventId_r16__eventS1_r16),
	offsetof(struct NR_SL_EventTriggerConfig_r16__sl_EventId_r16__eventS1_r16, _asn_ctx),
	asn_MAP_NR_eventS1_r16_tag2el_3,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	4,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_eventS1_r16_3 = {
	"eventS1-r16",
	"eventS1-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_eventS1_r16_tags_3,
	sizeof(asn_DEF_NR_eventS1_r16_tags_3)
		/sizeof(asn_DEF_NR_eventS1_r16_tags_3[0]) - 1, /* 1 */
	asn_DEF_NR_eventS1_r16_tags_3,	/* Same as above */
	sizeof(asn_DEF_NR_eventS1_r16_tags_3)
		/sizeof(asn_DEF_NR_eventS1_r16_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_eventS1_r16_3,
	4,	/* Elements count */
	&asn_SPC_NR_eventS1_r16_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_eventS2_r16_9[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SL_EventTriggerConfig_r16__sl_EventId_r16__eventS2_r16, s2_Threshold_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_SL_MeasTriggerQuantity_r16,
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
		"s2-Threshold-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SL_EventTriggerConfig_r16__sl_EventId_r16__eventS2_r16, sl_ReportOnLeave_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
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
		"sl-ReportOnLeave-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SL_EventTriggerConfig_r16__sl_EventId_r16__eventS2_r16, sl_Hysteresis_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_Hysteresis,
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
		"sl-Hysteresis-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SL_EventTriggerConfig_r16__sl_EventId_r16__eventS2_r16, sl_TimeToTrigger_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_TimeToTrigger,
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
		"sl-TimeToTrigger-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_eventS2_r16_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_eventS2_r16_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* s2-Threshold-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sl-ReportOnLeave-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sl-Hysteresis-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* sl-TimeToTrigger-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_eventS2_r16_specs_9 = {
	sizeof(struct NR_SL_EventTriggerConfig_r16__sl_EventId_r16__eventS2_r16),
	offsetof(struct NR_SL_EventTriggerConfig_r16__sl_EventId_r16__eventS2_r16, _asn_ctx),
	asn_MAP_NR_eventS2_r16_tag2el_9,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	4,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_eventS2_r16_9 = {
	"eventS2-r16",
	"eventS2-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_eventS2_r16_tags_9,
	sizeof(asn_DEF_NR_eventS2_r16_tags_9)
		/sizeof(asn_DEF_NR_eventS2_r16_tags_9[0]) - 1, /* 1 */
	asn_DEF_NR_eventS2_r16_tags_9,	/* Same as above */
	sizeof(asn_DEF_NR_eventS2_r16_tags_9)
		/sizeof(asn_DEF_NR_eventS2_r16_tags_9[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_eventS2_r16_9,
	4,	/* Elements count */
	&asn_SPC_NR_eventS2_r16_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_sl_EventId_r16_2[] = {
	{ ATF_POINTER, 0, offsetof(struct NR_SL_EventTriggerConfig_r16__sl_EventId_r16, choice.eventS1_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_NR_eventS1_r16_3,
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
		"eventS1-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_SL_EventTriggerConfig_r16__sl_EventId_r16, choice.eventS2_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_NR_eventS2_r16_9,
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
		"eventS2-r16"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NR_sl_EventId_r16_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eventS1-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* eventS2-r16 */
};
static asn_CHOICE_specifics_t asn_SPC_NR_sl_EventId_r16_specs_2 = {
	sizeof(struct NR_SL_EventTriggerConfig_r16__sl_EventId_r16),
	offsetof(struct NR_SL_EventTriggerConfig_r16__sl_EventId_r16, _asn_ctx),
	offsetof(struct NR_SL_EventTriggerConfig_r16__sl_EventId_r16, present),
	sizeof(((struct NR_SL_EventTriggerConfig_r16__sl_EventId_r16 *)0)->present),
	asn_MAP_NR_sl_EventId_r16_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_sl_EventId_r16_2 = {
	"sl-EventId-r16",
	"sl-EventId-r16",
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
		&asn_PER_type_NR_sl_EventId_r16_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_NR_sl_EventId_r16_2,
	2,	/* Elements count */
	&asn_SPC_NR_sl_EventId_r16_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_sl_ReportAmount_r16_value2enum_17[] = {
	{ 0,	2,	"r1" },
	{ 1,	2,	"r2" },
	{ 2,	2,	"r4" },
	{ 3,	2,	"r8" },
	{ 4,	3,	"r16" },
	{ 5,	3,	"r32" },
	{ 6,	3,	"r64" },
	{ 7,	8,	"infinity" }
};
static const unsigned int asn_MAP_NR_sl_ReportAmount_r16_enum2value_17[] = {
	7,	/* infinity(7) */
	0,	/* r1(0) */
	4,	/* r16(4) */
	1,	/* r2(1) */
	5,	/* r32(5) */
	2,	/* r4(2) */
	6,	/* r64(6) */
	3	/* r8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_sl_ReportAmount_r16_specs_17 = {
	asn_MAP_NR_sl_ReportAmount_r16_value2enum_17,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_sl_ReportAmount_r16_enum2value_17,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_sl_ReportAmount_r16_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_sl_ReportAmount_r16_17 = {
	"sl-ReportAmount-r16",
	"sl-ReportAmount-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_sl_ReportAmount_r16_tags_17,
	sizeof(asn_DEF_NR_sl_ReportAmount_r16_tags_17)
		/sizeof(asn_DEF_NR_sl_ReportAmount_r16_tags_17[0]) - 1, /* 1 */
	asn_DEF_NR_sl_ReportAmount_r16_tags_17,	/* Same as above */
	sizeof(asn_DEF_NR_sl_ReportAmount_r16_tags_17)
		/sizeof(asn_DEF_NR_sl_ReportAmount_r16_tags_17[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_sl_ReportAmount_r16_constr_17,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_sl_ReportAmount_r16_specs_17	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_SL_EventTriggerConfig_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SL_EventTriggerConfig_r16, sl_EventId_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_sl_EventId_r16_2,
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
		"sl-EventId-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SL_EventTriggerConfig_r16, sl_ReportInterval_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_ReportInterval,
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
		"sl-ReportInterval-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SL_EventTriggerConfig_r16, sl_ReportAmount_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_sl_ReportAmount_r16_17,
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
		"sl-ReportAmount-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SL_EventTriggerConfig_r16, sl_ReportQuantity_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_SL_MeasReportQuantity_r16,
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
		"sl-ReportQuantity-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SL_EventTriggerConfig_r16, sl_RS_Type_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SL_RS_Type_r16,
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
		"sl-RS-Type-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_SL_EventTriggerConfig_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_SL_EventTriggerConfig_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sl-EventId-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sl-ReportInterval-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sl-ReportAmount-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sl-ReportQuantity-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* sl-RS-Type-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_SL_EventTriggerConfig_r16_specs_1 = {
	sizeof(struct NR_SL_EventTriggerConfig_r16),
	offsetof(struct NR_SL_EventTriggerConfig_r16, _asn_ctx),
	asn_MAP_NR_SL_EventTriggerConfig_r16_tag2el_1,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_SL_EventTriggerConfig_r16 = {
	"SL-EventTriggerConfig-r16",
	"SL-EventTriggerConfig-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_SL_EventTriggerConfig_r16_tags_1,
	sizeof(asn_DEF_NR_SL_EventTriggerConfig_r16_tags_1)
		/sizeof(asn_DEF_NR_SL_EventTriggerConfig_r16_tags_1[0]), /* 1 */
	asn_DEF_NR_SL_EventTriggerConfig_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_SL_EventTriggerConfig_r16_tags_1)
		/sizeof(asn_DEF_NR_SL_EventTriggerConfig_r16_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_SL_EventTriggerConfig_r16_1,
	5,	/* Elements count */
	&asn_SPC_NR_SL_EventTriggerConfig_r16_specs_1	/* Additional specs */
};

