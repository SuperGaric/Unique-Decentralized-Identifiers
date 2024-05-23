/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_WLAN-MobilityConfig-r13.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_associationTimer_r13_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  4 }	/* (0..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_successReportRequested_r13_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LTE_associationTimer_r13_value2enum_4[] = {
	{ 0,	3,	"s10" },
	{ 1,	3,	"s30" },
	{ 2,	3,	"s60" },
	{ 3,	4,	"s120" },
	{ 4,	4,	"s240" }
};
static const unsigned int asn_MAP_LTE_associationTimer_r13_enum2value_4[] = {
	0,	/* s10(0) */
	3,	/* s120(3) */
	4,	/* s240(4) */
	1,	/* s30(1) */
	2	/* s60(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_associationTimer_r13_specs_4 = {
	asn_MAP_LTE_associationTimer_r13_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_associationTimer_r13_enum2value_4,	/* N => "tag"; sorted by N */
	5,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_associationTimer_r13_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_associationTimer_r13_4 = {
	"associationTimer-r13",
	"associationTimer-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_associationTimer_r13_tags_4,
	sizeof(asn_DEF_LTE_associationTimer_r13_tags_4)
		/sizeof(asn_DEF_LTE_associationTimer_r13_tags_4[0]) - 1, /* 1 */
	asn_DEF_LTE_associationTimer_r13_tags_4,	/* Same as above */
	sizeof(asn_DEF_LTE_associationTimer_r13_tags_4)
		/sizeof(asn_DEF_LTE_associationTimer_r13_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_associationTimer_r13_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_associationTimer_r13_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_successReportRequested_r13_value2enum_10[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_successReportRequested_r13_enum2value_10[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_successReportRequested_r13_specs_10 = {
	asn_MAP_LTE_successReportRequested_r13_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_successReportRequested_r13_enum2value_10,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_successReportRequested_r13_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_successReportRequested_r13_10 = {
	"successReportRequested-r13",
	"successReportRequested-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_successReportRequested_r13_tags_10,
	sizeof(asn_DEF_LTE_successReportRequested_r13_tags_10)
		/sizeof(asn_DEF_LTE_successReportRequested_r13_tags_10[0]) - 1, /* 1 */
	asn_DEF_LTE_successReportRequested_r13_tags_10,	/* Same as above */
	sizeof(asn_DEF_LTE_successReportRequested_r13_tags_10)
		/sizeof(asn_DEF_LTE_successReportRequested_r13_tags_10[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_successReportRequested_r13_constr_10,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_successReportRequested_r13_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext1_13[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_WLAN_MobilityConfig_r13__ext1, wlan_SuspendConfig_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_WLAN_SuspendConfig_r14,
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
		"wlan-SuspendConfig-r14"
		},
};
static const int asn_MAP_LTE_ext1_oms_13[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext1_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext1_tag2el_13[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* wlan-SuspendConfig-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext1_specs_13 = {
	sizeof(struct LTE_WLAN_MobilityConfig_r13__ext1),
	offsetof(struct LTE_WLAN_MobilityConfig_r13__ext1, _asn_ctx),
	asn_MAP_LTE_ext1_tag2el_13,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext1_oms_13,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext1_13 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext1_tags_13,
	sizeof(asn_DEF_LTE_ext1_tags_13)
		/sizeof(asn_DEF_LTE_ext1_tags_13[0]) - 1, /* 1 */
	asn_DEF_LTE_ext1_tags_13,	/* Same as above */
	sizeof(asn_DEF_LTE_ext1_tags_13)
		/sizeof(asn_DEF_LTE_ext1_tags_13[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_ext1_13,
	1,	/* Elements count */
	&asn_SPC_LTE_ext1_specs_13	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_WLAN_MobilityConfig_r13_1[] = {
	{ ATF_POINTER, 5, offsetof(struct LTE_WLAN_MobilityConfig_r13, wlan_ToReleaseList_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_WLAN_Id_List_r13,
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
		"wlan-ToReleaseList-r13"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_WLAN_MobilityConfig_r13, wlan_ToAddList_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_WLAN_Id_List_r13,
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
		"wlan-ToAddList-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_WLAN_MobilityConfig_r13, associationTimer_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_associationTimer_r13_4,
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
		"associationTimer-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_WLAN_MobilityConfig_r13, successReportRequested_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_successReportRequested_r13_10,
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
		"successReportRequested-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_WLAN_MobilityConfig_r13, ext1),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_LTE_ext1_13,
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
static const int asn_MAP_LTE_WLAN_MobilityConfig_r13_oms_1[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_LTE_WLAN_MobilityConfig_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_WLAN_MobilityConfig_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* wlan-ToReleaseList-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* wlan-ToAddList-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* associationTimer-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* successReportRequested-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_WLAN_MobilityConfig_r13_specs_1 = {
	sizeof(struct LTE_WLAN_MobilityConfig_r13),
	offsetof(struct LTE_WLAN_MobilityConfig_r13, _asn_ctx),
	asn_MAP_LTE_WLAN_MobilityConfig_r13_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_LTE_WLAN_MobilityConfig_r13_oms_1,	/* Optional members */
	4, 1,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_WLAN_MobilityConfig_r13 = {
	"WLAN-MobilityConfig-r13",
	"WLAN-MobilityConfig-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_WLAN_MobilityConfig_r13_tags_1,
	sizeof(asn_DEF_LTE_WLAN_MobilityConfig_r13_tags_1)
		/sizeof(asn_DEF_LTE_WLAN_MobilityConfig_r13_tags_1[0]), /* 1 */
	asn_DEF_LTE_WLAN_MobilityConfig_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_WLAN_MobilityConfig_r13_tags_1)
		/sizeof(asn_DEF_LTE_WLAN_MobilityConfig_r13_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_WLAN_MobilityConfig_r13_1,
	5,	/* Elements count */
	&asn_SPC_LTE_WLAN_MobilityConfig_r13_specs_1	/* Additional specs */
};

