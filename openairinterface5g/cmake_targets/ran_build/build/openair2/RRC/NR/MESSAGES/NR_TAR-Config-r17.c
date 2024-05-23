/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_TAR-Config-r17.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_offsetThresholdTA_r17_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  28 }	/* (0..28) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_timingAdvanceSR_r17_constr_32 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_NR_offsetThresholdTA_r17_value2enum_2[] = {
	{ 0,	7,	"ms0dot5" },
	{ 1,	3,	"ms1" },
	{ 2,	3,	"ms2" },
	{ 3,	3,	"ms3" },
	{ 4,	3,	"ms4" },
	{ 5,	3,	"ms5" },
	{ 6,	3,	"ms6" },
	{ 7,	3,	"ms7" },
	{ 8,	3,	"ms8" },
	{ 9,	3,	"ms9" },
	{ 10,	4,	"ms10" },
	{ 11,	4,	"ms11" },
	{ 12,	4,	"ms12" },
	{ 13,	4,	"ms13" },
	{ 14,	4,	"ms14" },
	{ 15,	4,	"ms15" },
	{ 16,	7,	"spare13" },
	{ 17,	7,	"spare12" },
	{ 18,	7,	"spare11" },
	{ 19,	7,	"spare10" },
	{ 20,	6,	"spare9" },
	{ 21,	6,	"spare8" },
	{ 22,	6,	"spare7" },
	{ 23,	6,	"spare6" },
	{ 24,	6,	"spare5" },
	{ 25,	6,	"spare4" },
	{ 26,	6,	"spare3" },
	{ 27,	6,	"spare2" },
	{ 28,	6,	"spare1" }
};
static const unsigned int asn_MAP_NR_offsetThresholdTA_r17_enum2value_2[] = {
	0,	/* ms0dot5(0) */
	1,	/* ms1(1) */
	10,	/* ms10(10) */
	11,	/* ms11(11) */
	12,	/* ms12(12) */
	13,	/* ms13(13) */
	14,	/* ms14(14) */
	15,	/* ms15(15) */
	2,	/* ms2(2) */
	3,	/* ms3(3) */
	4,	/* ms4(4) */
	5,	/* ms5(5) */
	6,	/* ms6(6) */
	7,	/* ms7(7) */
	8,	/* ms8(8) */
	9,	/* ms9(9) */
	28,	/* spare1(28) */
	19,	/* spare10(19) */
	18,	/* spare11(18) */
	17,	/* spare12(17) */
	16,	/* spare13(16) */
	27,	/* spare2(27) */
	26,	/* spare3(26) */
	25,	/* spare4(25) */
	24,	/* spare5(24) */
	23,	/* spare6(23) */
	22,	/* spare7(22) */
	21,	/* spare8(21) */
	20	/* spare9(20) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_offsetThresholdTA_r17_specs_2 = {
	asn_MAP_NR_offsetThresholdTA_r17_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_offsetThresholdTA_r17_enum2value_2,	/* N => "tag"; sorted by N */
	29,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_offsetThresholdTA_r17_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_offsetThresholdTA_r17_2 = {
	"offsetThresholdTA-r17",
	"offsetThresholdTA-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_offsetThresholdTA_r17_tags_2,
	sizeof(asn_DEF_NR_offsetThresholdTA_r17_tags_2)
		/sizeof(asn_DEF_NR_offsetThresholdTA_r17_tags_2[0]) - 1, /* 1 */
	asn_DEF_NR_offsetThresholdTA_r17_tags_2,	/* Same as above */
	sizeof(asn_DEF_NR_offsetThresholdTA_r17_tags_2)
		/sizeof(asn_DEF_NR_offsetThresholdTA_r17_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_offsetThresholdTA_r17_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_offsetThresholdTA_r17_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_timingAdvanceSR_r17_value2enum_32[] = {
	{ 0,	7,	"enabled" }
};
static const unsigned int asn_MAP_NR_timingAdvanceSR_r17_enum2value_32[] = {
	0	/* enabled(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_timingAdvanceSR_r17_specs_32 = {
	asn_MAP_NR_timingAdvanceSR_r17_value2enum_32,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_timingAdvanceSR_r17_enum2value_32,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_timingAdvanceSR_r17_tags_32[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_timingAdvanceSR_r17_32 = {
	"timingAdvanceSR-r17",
	"timingAdvanceSR-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_timingAdvanceSR_r17_tags_32,
	sizeof(asn_DEF_NR_timingAdvanceSR_r17_tags_32)
		/sizeof(asn_DEF_NR_timingAdvanceSR_r17_tags_32[0]) - 1, /* 1 */
	asn_DEF_NR_timingAdvanceSR_r17_tags_32,	/* Same as above */
	sizeof(asn_DEF_NR_timingAdvanceSR_r17_tags_32)
		/sizeof(asn_DEF_NR_timingAdvanceSR_r17_tags_32[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_timingAdvanceSR_r17_constr_32,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_timingAdvanceSR_r17_specs_32	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_TAR_Config_r17_1[] = {
	{ ATF_POINTER, 2, offsetof(struct NR_TAR_Config_r17, offsetThresholdTA_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_offsetThresholdTA_r17_2,
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
		"offsetThresholdTA-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_TAR_Config_r17, timingAdvanceSR_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_timingAdvanceSR_r17_32,
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
		"timingAdvanceSR-r17"
		},
};
static const int asn_MAP_NR_TAR_Config_r17_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_NR_TAR_Config_r17_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_TAR_Config_r17_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* offsetThresholdTA-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* timingAdvanceSR-r17 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_TAR_Config_r17_specs_1 = {
	sizeof(struct NR_TAR_Config_r17),
	offsetof(struct NR_TAR_Config_r17, _asn_ctx),
	asn_MAP_NR_TAR_Config_r17_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_NR_TAR_Config_r17_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_TAR_Config_r17 = {
	"TAR-Config-r17",
	"TAR-Config-r17",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_TAR_Config_r17_tags_1,
	sizeof(asn_DEF_NR_TAR_Config_r17_tags_1)
		/sizeof(asn_DEF_NR_TAR_Config_r17_tags_1[0]), /* 1 */
	asn_DEF_NR_TAR_Config_r17_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_TAR_Config_r17_tags_1)
		/sizeof(asn_DEF_NR_TAR_Config_r17_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_TAR_Config_r17_1,
	2,	/* Elements count */
	&asn_SPC_NR_TAR_Config_r17_specs_1	/* Additional specs */
};

