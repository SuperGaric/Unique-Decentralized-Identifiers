/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_MRDC-Parameters-v1630.h"

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
static asn_per_constraints_t asn_PER_type_NR_maxUplinkDutyCycle_FDD_TDD_EN_DC1_r16_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_maxUplinkDutyCycle_FDD_TDD_EN_DC2_r16_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_interBandMRDC_WithOverlapDL_Bands_r16_constr_21 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_NR_maxUplinkDutyCycle_FDD_TDD_EN_DC1_r16_value2enum_3[] = {
	{ 0,	3,	"n30" },
	{ 1,	3,	"n40" },
	{ 2,	3,	"n50" },
	{ 3,	3,	"n60" },
	{ 4,	3,	"n70" },
	{ 5,	3,	"n80" },
	{ 6,	3,	"n90" },
	{ 7,	4,	"n100" }
};
static const unsigned int asn_MAP_NR_maxUplinkDutyCycle_FDD_TDD_EN_DC1_r16_enum2value_3[] = {
	7,	/* n100(7) */
	0,	/* n30(0) */
	1,	/* n40(1) */
	2,	/* n50(2) */
	3,	/* n60(3) */
	4,	/* n70(4) */
	5,	/* n80(5) */
	6	/* n90(6) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_maxUplinkDutyCycle_FDD_TDD_EN_DC1_r16_specs_3 = {
	asn_MAP_NR_maxUplinkDutyCycle_FDD_TDD_EN_DC1_r16_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_maxUplinkDutyCycle_FDD_TDD_EN_DC1_r16_enum2value_3,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_maxUplinkDutyCycle_FDD_TDD_EN_DC1_r16_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_maxUplinkDutyCycle_FDD_TDD_EN_DC1_r16_3 = {
	"maxUplinkDutyCycle-FDD-TDD-EN-DC1-r16",
	"maxUplinkDutyCycle-FDD-TDD-EN-DC1-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_maxUplinkDutyCycle_FDD_TDD_EN_DC1_r16_tags_3,
	sizeof(asn_DEF_NR_maxUplinkDutyCycle_FDD_TDD_EN_DC1_r16_tags_3)
		/sizeof(asn_DEF_NR_maxUplinkDutyCycle_FDD_TDD_EN_DC1_r16_tags_3[0]) - 1, /* 1 */
	asn_DEF_NR_maxUplinkDutyCycle_FDD_TDD_EN_DC1_r16_tags_3,	/* Same as above */
	sizeof(asn_DEF_NR_maxUplinkDutyCycle_FDD_TDD_EN_DC1_r16_tags_3)
		/sizeof(asn_DEF_NR_maxUplinkDutyCycle_FDD_TDD_EN_DC1_r16_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_maxUplinkDutyCycle_FDD_TDD_EN_DC1_r16_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_maxUplinkDutyCycle_FDD_TDD_EN_DC1_r16_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_maxUplinkDutyCycle_FDD_TDD_EN_DC2_r16_value2enum_12[] = {
	{ 0,	3,	"n30" },
	{ 1,	3,	"n40" },
	{ 2,	3,	"n50" },
	{ 3,	3,	"n60" },
	{ 4,	3,	"n70" },
	{ 5,	3,	"n80" },
	{ 6,	3,	"n90" },
	{ 7,	4,	"n100" }
};
static const unsigned int asn_MAP_NR_maxUplinkDutyCycle_FDD_TDD_EN_DC2_r16_enum2value_12[] = {
	7,	/* n100(7) */
	0,	/* n30(0) */
	1,	/* n40(1) */
	2,	/* n50(2) */
	3,	/* n60(3) */
	4,	/* n70(4) */
	5,	/* n80(5) */
	6	/* n90(6) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_maxUplinkDutyCycle_FDD_TDD_EN_DC2_r16_specs_12 = {
	asn_MAP_NR_maxUplinkDutyCycle_FDD_TDD_EN_DC2_r16_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_maxUplinkDutyCycle_FDD_TDD_EN_DC2_r16_enum2value_12,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_maxUplinkDutyCycle_FDD_TDD_EN_DC2_r16_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_maxUplinkDutyCycle_FDD_TDD_EN_DC2_r16_12 = {
	"maxUplinkDutyCycle-FDD-TDD-EN-DC2-r16",
	"maxUplinkDutyCycle-FDD-TDD-EN-DC2-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_maxUplinkDutyCycle_FDD_TDD_EN_DC2_r16_tags_12,
	sizeof(asn_DEF_NR_maxUplinkDutyCycle_FDD_TDD_EN_DC2_r16_tags_12)
		/sizeof(asn_DEF_NR_maxUplinkDutyCycle_FDD_TDD_EN_DC2_r16_tags_12[0]) - 1, /* 1 */
	asn_DEF_NR_maxUplinkDutyCycle_FDD_TDD_EN_DC2_r16_tags_12,	/* Same as above */
	sizeof(asn_DEF_NR_maxUplinkDutyCycle_FDD_TDD_EN_DC2_r16_tags_12)
		/sizeof(asn_DEF_NR_maxUplinkDutyCycle_FDD_TDD_EN_DC2_r16_tags_12[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_maxUplinkDutyCycle_FDD_TDD_EN_DC2_r16_constr_12,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_maxUplinkDutyCycle_FDD_TDD_EN_DC2_r16_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_maxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16_2[] = {
	{ ATF_POINTER, 2, offsetof(struct NR_MRDC_Parameters_v1630__maxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16, maxUplinkDutyCycle_FDD_TDD_EN_DC1_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_maxUplinkDutyCycle_FDD_TDD_EN_DC1_r16_3,
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
		"maxUplinkDutyCycle-FDD-TDD-EN-DC1-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_MRDC_Parameters_v1630__maxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16, maxUplinkDutyCycle_FDD_TDD_EN_DC2_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_maxUplinkDutyCycle_FDD_TDD_EN_DC2_r16_12,
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
		"maxUplinkDutyCycle-FDD-TDD-EN-DC2-r16"
		},
};
static const int asn_MAP_NR_maxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16_oms_2[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_NR_maxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_maxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* maxUplinkDutyCycle-FDD-TDD-EN-DC1-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* maxUplinkDutyCycle-FDD-TDD-EN-DC2-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_maxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16_specs_2 = {
	sizeof(struct NR_MRDC_Parameters_v1630__maxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16),
	offsetof(struct NR_MRDC_Parameters_v1630__maxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16, _asn_ctx),
	asn_MAP_NR_maxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16_tag2el_2,
	2,	/* Count of tags in the map */
	asn_MAP_NR_maxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16_oms_2,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_maxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16_2 = {
	"maxUplinkDutyCycle-interBandENDC-FDD-TDD-PC2-r16",
	"maxUplinkDutyCycle-interBandENDC-FDD-TDD-PC2-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_maxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16_tags_2,
	sizeof(asn_DEF_NR_maxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16_tags_2)
		/sizeof(asn_DEF_NR_maxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16_tags_2[0]) - 1, /* 1 */
	asn_DEF_NR_maxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16_tags_2,	/* Same as above */
	sizeof(asn_DEF_NR_maxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16_tags_2)
		/sizeof(asn_DEF_NR_maxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_maxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16_2,
	2,	/* Elements count */
	&asn_SPC_NR_maxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_interBandMRDC_WithOverlapDL_Bands_r16_value2enum_21[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_NR_interBandMRDC_WithOverlapDL_Bands_r16_enum2value_21[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_interBandMRDC_WithOverlapDL_Bands_r16_specs_21 = {
	asn_MAP_NR_interBandMRDC_WithOverlapDL_Bands_r16_value2enum_21,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_interBandMRDC_WithOverlapDL_Bands_r16_enum2value_21,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_interBandMRDC_WithOverlapDL_Bands_r16_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_interBandMRDC_WithOverlapDL_Bands_r16_21 = {
	"interBandMRDC-WithOverlapDL-Bands-r16",
	"interBandMRDC-WithOverlapDL-Bands-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_interBandMRDC_WithOverlapDL_Bands_r16_tags_21,
	sizeof(asn_DEF_NR_interBandMRDC_WithOverlapDL_Bands_r16_tags_21)
		/sizeof(asn_DEF_NR_interBandMRDC_WithOverlapDL_Bands_r16_tags_21[0]) - 1, /* 1 */
	asn_DEF_NR_interBandMRDC_WithOverlapDL_Bands_r16_tags_21,	/* Same as above */
	sizeof(asn_DEF_NR_interBandMRDC_WithOverlapDL_Bands_r16_tags_21)
		/sizeof(asn_DEF_NR_interBandMRDC_WithOverlapDL_Bands_r16_tags_21[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_interBandMRDC_WithOverlapDL_Bands_r16_constr_21,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_interBandMRDC_WithOverlapDL_Bands_r16_specs_21	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_MRDC_Parameters_v1630_1[] = {
	{ ATF_POINTER, 2, offsetof(struct NR_MRDC_Parameters_v1630, maxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_NR_maxUplinkDutyCycle_interBandENDC_FDD_TDD_PC2_r16_2,
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
		"maxUplinkDutyCycle-interBandENDC-FDD-TDD-PC2-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_MRDC_Parameters_v1630, interBandMRDC_WithOverlapDL_Bands_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_interBandMRDC_WithOverlapDL_Bands_r16_21,
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
		"interBandMRDC-WithOverlapDL-Bands-r16"
		},
};
static const int asn_MAP_NR_MRDC_Parameters_v1630_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_NR_MRDC_Parameters_v1630_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_MRDC_Parameters_v1630_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* maxUplinkDutyCycle-interBandENDC-FDD-TDD-PC2-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* interBandMRDC-WithOverlapDL-Bands-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_MRDC_Parameters_v1630_specs_1 = {
	sizeof(struct NR_MRDC_Parameters_v1630),
	offsetof(struct NR_MRDC_Parameters_v1630, _asn_ctx),
	asn_MAP_NR_MRDC_Parameters_v1630_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_NR_MRDC_Parameters_v1630_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_MRDC_Parameters_v1630 = {
	"MRDC-Parameters-v1630",
	"MRDC-Parameters-v1630",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_MRDC_Parameters_v1630_tags_1,
	sizeof(asn_DEF_NR_MRDC_Parameters_v1630_tags_1)
		/sizeof(asn_DEF_NR_MRDC_Parameters_v1630_tags_1[0]), /* 1 */
	asn_DEF_NR_MRDC_Parameters_v1630_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_MRDC_Parameters_v1630_tags_1)
		/sizeof(asn_DEF_NR_MRDC_Parameters_v1630_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_MRDC_Parameters_v1630_1,
	2,	/* Elements count */
	&asn_SPC_NR_MRDC_Parameters_v1630_specs_1	/* Additional specs */
};

