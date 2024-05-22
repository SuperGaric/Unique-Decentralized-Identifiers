/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair2/F1AP/MESSAGES/ASN1/R16.3.1/38473-g31.asn"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/F1AP/MESSAGES`
 */

#include "F1AP_IntendedTDD-DL-ULConfig.h"

#include "F1AP_ProtocolExtensionContainer.h"
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
static asn_per_constraints_t asn_PER_type_F1AP_nRSCS_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  3 }	/* (0..3,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_F1AP_nRCP_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_F1AP_nRDLULTxPeriodicity_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  5,  5,  0,  17 }	/* (0..17,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_F1AP_nRSCS_value2enum_2[] = {
	{ 0,	5,	"scs15" },
	{ 1,	5,	"scs30" },
	{ 2,	5,	"scs60" },
	{ 3,	6,	"scs120" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_F1AP_nRSCS_enum2value_2[] = {
	3,	/* scs120(3) */
	0,	/* scs15(0) */
	1,	/* scs30(1) */
	2	/* scs60(2) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_F1AP_nRSCS_specs_2 = {
	asn_MAP_F1AP_nRSCS_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_F1AP_nRSCS_enum2value_2,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	5,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_F1AP_nRSCS_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_F1AP_nRSCS_2 = {
	"nRSCS",
	"nRSCS",
	&asn_OP_NativeEnumerated,
	asn_DEF_F1AP_nRSCS_tags_2,
	sizeof(asn_DEF_F1AP_nRSCS_tags_2)
		/sizeof(asn_DEF_F1AP_nRSCS_tags_2[0]) - 1, /* 1 */
	asn_DEF_F1AP_nRSCS_tags_2,	/* Same as above */
	sizeof(asn_DEF_F1AP_nRSCS_tags_2)
		/sizeof(asn_DEF_F1AP_nRSCS_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_F1AP_nRSCS_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_F1AP_nRSCS_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_F1AP_nRCP_value2enum_8[] = {
	{ 0,	6,	"normal" },
	{ 1,	8,	"extended" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_F1AP_nRCP_enum2value_8[] = {
	1,	/* extended(1) */
	0	/* normal(0) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_F1AP_nRCP_specs_8 = {
	asn_MAP_F1AP_nRCP_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_F1AP_nRCP_enum2value_8,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	3,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_F1AP_nRCP_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_F1AP_nRCP_8 = {
	"nRCP",
	"nRCP",
	&asn_OP_NativeEnumerated,
	asn_DEF_F1AP_nRCP_tags_8,
	sizeof(asn_DEF_F1AP_nRCP_tags_8)
		/sizeof(asn_DEF_F1AP_nRCP_tags_8[0]) - 1, /* 1 */
	asn_DEF_F1AP_nRCP_tags_8,	/* Same as above */
	sizeof(asn_DEF_F1AP_nRCP_tags_8)
		/sizeof(asn_DEF_F1AP_nRCP_tags_8[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_F1AP_nRCP_constr_8,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_F1AP_nRCP_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_F1AP_nRDLULTxPeriodicity_value2enum_12[] = {
	{ 0,	5,	"ms0p5" },
	{ 1,	7,	"ms0p625" },
	{ 2,	3,	"ms1" },
	{ 3,	6,	"ms1p25" },
	{ 4,	3,	"ms2" },
	{ 5,	5,	"ms2p5" },
	{ 6,	3,	"ms3" },
	{ 7,	3,	"ms4" },
	{ 8,	3,	"ms5" },
	{ 9,	4,	"ms10" },
	{ 10,	4,	"ms20" },
	{ 11,	4,	"ms40" },
	{ 12,	4,	"ms60" },
	{ 13,	4,	"ms80" },
	{ 14,	5,	"ms100" },
	{ 15,	5,	"ms120" },
	{ 16,	5,	"ms140" },
	{ 17,	5,	"ms160" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_F1AP_nRDLULTxPeriodicity_enum2value_12[] = {
	0,	/* ms0p5(0) */
	1,	/* ms0p625(1) */
	2,	/* ms1(2) */
	9,	/* ms10(9) */
	14,	/* ms100(14) */
	15,	/* ms120(15) */
	16,	/* ms140(16) */
	17,	/* ms160(17) */
	3,	/* ms1p25(3) */
	4,	/* ms2(4) */
	10,	/* ms20(10) */
	5,	/* ms2p5(5) */
	6,	/* ms3(6) */
	7,	/* ms4(7) */
	11,	/* ms40(11) */
	8,	/* ms5(8) */
	12,	/* ms60(12) */
	13	/* ms80(13) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_F1AP_nRDLULTxPeriodicity_specs_12 = {
	asn_MAP_F1AP_nRDLULTxPeriodicity_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_F1AP_nRDLULTxPeriodicity_enum2value_12,	/* N => "tag"; sorted by N */
	18,	/* Number of elements in the maps */
	19,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_F1AP_nRDLULTxPeriodicity_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_F1AP_nRDLULTxPeriodicity_12 = {
	"nRDLULTxPeriodicity",
	"nRDLULTxPeriodicity",
	&asn_OP_NativeEnumerated,
	asn_DEF_F1AP_nRDLULTxPeriodicity_tags_12,
	sizeof(asn_DEF_F1AP_nRDLULTxPeriodicity_tags_12)
		/sizeof(asn_DEF_F1AP_nRDLULTxPeriodicity_tags_12[0]) - 1, /* 1 */
	asn_DEF_F1AP_nRDLULTxPeriodicity_tags_12,	/* Same as above */
	sizeof(asn_DEF_F1AP_nRDLULTxPeriodicity_tags_12)
		/sizeof(asn_DEF_F1AP_nRDLULTxPeriodicity_tags_12[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_F1AP_nRDLULTxPeriodicity_constr_12,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_F1AP_nRDLULTxPeriodicity_specs_12	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_F1AP_IntendedTDD_DL_ULConfig_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct F1AP_IntendedTDD_DL_ULConfig, nRSCS),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_F1AP_nRSCS_2,
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
		"nRSCS"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct F1AP_IntendedTDD_DL_ULConfig, nRCP),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_F1AP_nRCP_8,
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
		"nRCP"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct F1AP_IntendedTDD_DL_ULConfig, nRDLULTxPeriodicity),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_F1AP_nRDLULTxPeriodicity_12,
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
		"nRDLULTxPeriodicity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct F1AP_IntendedTDD_DL_ULConfig, slot_Configuration_List),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_F1AP_Slot_Configuration_List,
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
		"slot-Configuration-List"
		},
	{ ATF_POINTER, 1, offsetof(struct F1AP_IntendedTDD_DL_ULConfig, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_F1AP_ProtocolExtensionContainer_10696P141,
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
		"iE-Extensions"
		},
};
static const int asn_MAP_F1AP_IntendedTDD_DL_ULConfig_oms_1[] = { 4 };
static const ber_tlv_tag_t asn_DEF_F1AP_IntendedTDD_DL_ULConfig_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_F1AP_IntendedTDD_DL_ULConfig_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nRSCS */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nRCP */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* nRDLULTxPeriodicity */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* slot-Configuration-List */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_F1AP_IntendedTDD_DL_ULConfig_specs_1 = {
	sizeof(struct F1AP_IntendedTDD_DL_ULConfig),
	offsetof(struct F1AP_IntendedTDD_DL_ULConfig, _asn_ctx),
	asn_MAP_F1AP_IntendedTDD_DL_ULConfig_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_F1AP_IntendedTDD_DL_ULConfig_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_F1AP_IntendedTDD_DL_ULConfig = {
	"IntendedTDD-DL-ULConfig",
	"IntendedTDD-DL-ULConfig",
	&asn_OP_SEQUENCE,
	asn_DEF_F1AP_IntendedTDD_DL_ULConfig_tags_1,
	sizeof(asn_DEF_F1AP_IntendedTDD_DL_ULConfig_tags_1)
		/sizeof(asn_DEF_F1AP_IntendedTDD_DL_ULConfig_tags_1[0]), /* 1 */
	asn_DEF_F1AP_IntendedTDD_DL_ULConfig_tags_1,	/* Same as above */
	sizeof(asn_DEF_F1AP_IntendedTDD_DL_ULConfig_tags_1)
		/sizeof(asn_DEF_F1AP_IntendedTDD_DL_ULConfig_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_F1AP_IntendedTDD_DL_ULConfig_1,
	5,	/* Elements count */
	&asn_SPC_F1AP_IntendedTDD_DL_ULConfig_specs_1	/* Additional specs */
};

