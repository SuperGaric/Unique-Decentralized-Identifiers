/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_CA-ParametersNR-v1630.h"

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
static asn_per_constraints_t asn_PER_type_NR_beamManagementType_r16_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_intraBandFreqSeparationUL_AggBW_GapBW_r16_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_interCA_NonAlignedFrame_B_r16_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_NR_beamManagementType_r16_value2enum_3[] = {
	{ 0,	3,	"ibm" },
	{ 1,	5,	"dummy" }
};
static const unsigned int asn_MAP_NR_beamManagementType_r16_enum2value_3[] = {
	1,	/* dummy(1) */
	0	/* ibm(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_beamManagementType_r16_specs_3 = {
	asn_MAP_NR_beamManagementType_r16_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_beamManagementType_r16_enum2value_3,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_beamManagementType_r16_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_beamManagementType_r16_3 = {
	"beamManagementType-r16",
	"beamManagementType-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_beamManagementType_r16_tags_3,
	sizeof(asn_DEF_NR_beamManagementType_r16_tags_3)
		/sizeof(asn_DEF_NR_beamManagementType_r16_tags_3[0]) - 1, /* 1 */
	asn_DEF_NR_beamManagementType_r16_tags_3,	/* Same as above */
	sizeof(asn_DEF_NR_beamManagementType_r16_tags_3)
		/sizeof(asn_DEF_NR_beamManagementType_r16_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_beamManagementType_r16_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_beamManagementType_r16_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_intraBandFreqSeparationUL_AggBW_GapBW_r16_value2enum_6[] = {
	{ 0,	6,	"classI" },
	{ 1,	7,	"classII" },
	{ 2,	8,	"classIII" }
};
static const unsigned int asn_MAP_NR_intraBandFreqSeparationUL_AggBW_GapBW_r16_enum2value_6[] = {
	0,	/* classI(0) */
	1,	/* classII(1) */
	2	/* classIII(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_intraBandFreqSeparationUL_AggBW_GapBW_r16_specs_6 = {
	asn_MAP_NR_intraBandFreqSeparationUL_AggBW_GapBW_r16_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_intraBandFreqSeparationUL_AggBW_GapBW_r16_enum2value_6,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_intraBandFreqSeparationUL_AggBW_GapBW_r16_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_intraBandFreqSeparationUL_AggBW_GapBW_r16_6 = {
	"intraBandFreqSeparationUL-AggBW-GapBW-r16",
	"intraBandFreqSeparationUL-AggBW-GapBW-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_intraBandFreqSeparationUL_AggBW_GapBW_r16_tags_6,
	sizeof(asn_DEF_NR_intraBandFreqSeparationUL_AggBW_GapBW_r16_tags_6)
		/sizeof(asn_DEF_NR_intraBandFreqSeparationUL_AggBW_GapBW_r16_tags_6[0]) - 1, /* 1 */
	asn_DEF_NR_intraBandFreqSeparationUL_AggBW_GapBW_r16_tags_6,	/* Same as above */
	sizeof(asn_DEF_NR_intraBandFreqSeparationUL_AggBW_GapBW_r16_tags_6)
		/sizeof(asn_DEF_NR_intraBandFreqSeparationUL_AggBW_GapBW_r16_tags_6[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_intraBandFreqSeparationUL_AggBW_GapBW_r16_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_intraBandFreqSeparationUL_AggBW_GapBW_r16_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_interCA_NonAlignedFrame_B_r16_value2enum_10[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_NR_interCA_NonAlignedFrame_B_r16_enum2value_10[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_interCA_NonAlignedFrame_B_r16_specs_10 = {
	asn_MAP_NR_interCA_NonAlignedFrame_B_r16_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_interCA_NonAlignedFrame_B_r16_enum2value_10,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_interCA_NonAlignedFrame_B_r16_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_interCA_NonAlignedFrame_B_r16_10 = {
	"interCA-NonAlignedFrame-B-r16",
	"interCA-NonAlignedFrame-B-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_interCA_NonAlignedFrame_B_r16_tags_10,
	sizeof(asn_DEF_NR_interCA_NonAlignedFrame_B_r16_tags_10)
		/sizeof(asn_DEF_NR_interCA_NonAlignedFrame_B_r16_tags_10[0]) - 1, /* 1 */
	asn_DEF_NR_interCA_NonAlignedFrame_B_r16_tags_10,	/* Same as above */
	sizeof(asn_DEF_NR_interCA_NonAlignedFrame_B_r16_tags_10)
		/sizeof(asn_DEF_NR_interCA_NonAlignedFrame_B_r16_tags_10[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_interCA_NonAlignedFrame_B_r16_constr_10,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_interCA_NonAlignedFrame_B_r16_specs_10	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_CA_ParametersNR_v1630_1[] = {
	{ ATF_POINTER, 4, offsetof(struct NR_CA_ParametersNR_v1630, simulTX_SRS_AntSwitchingInterBandUL_CA_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SimulSRS_ForAntennaSwitching_r16,
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
		"simulTX-SRS-AntSwitchingInterBandUL-CA-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_CA_ParametersNR_v1630, beamManagementType_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_beamManagementType_r16_3,
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
		"beamManagementType-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_CA_ParametersNR_v1630, intraBandFreqSeparationUL_AggBW_GapBW_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_intraBandFreqSeparationUL_AggBW_GapBW_r16_6,
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
		"intraBandFreqSeparationUL-AggBW-GapBW-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_CA_ParametersNR_v1630, interCA_NonAlignedFrame_B_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_interCA_NonAlignedFrame_B_r16_10,
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
		"interCA-NonAlignedFrame-B-r16"
		},
};
static const int asn_MAP_NR_CA_ParametersNR_v1630_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_NR_CA_ParametersNR_v1630_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_CA_ParametersNR_v1630_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* simulTX-SRS-AntSwitchingInterBandUL-CA-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* beamManagementType-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* intraBandFreqSeparationUL-AggBW-GapBW-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* interCA-NonAlignedFrame-B-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_CA_ParametersNR_v1630_specs_1 = {
	sizeof(struct NR_CA_ParametersNR_v1630),
	offsetof(struct NR_CA_ParametersNR_v1630, _asn_ctx),
	asn_MAP_NR_CA_ParametersNR_v1630_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_NR_CA_ParametersNR_v1630_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_CA_ParametersNR_v1630 = {
	"CA-ParametersNR-v1630",
	"CA-ParametersNR-v1630",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_CA_ParametersNR_v1630_tags_1,
	sizeof(asn_DEF_NR_CA_ParametersNR_v1630_tags_1)
		/sizeof(asn_DEF_NR_CA_ParametersNR_v1630_tags_1[0]), /* 1 */
	asn_DEF_NR_CA_ParametersNR_v1630_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_CA_ParametersNR_v1630_tags_1)
		/sizeof(asn_DEF_NR_CA_ParametersNR_v1630_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_CA_ParametersNR_v1630_1,
	4,	/* Elements count */
	&asn_SPC_NR_CA_ParametersNR_v1630_specs_1	/* Additional specs */
};

