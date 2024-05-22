/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_PhyLayerParameters-v1540.h"

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
static asn_per_constraints_t asn_PER_type_LTE_slotPDSCH_TxDiv_TM8_r15_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_crs_IM_TM1_toTM9_OneRX_Port_v1540_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_cch_IM_RefRecTypeA_OneRX_Port_v1540_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LTE_slotPDSCH_TxDiv_TM8_r15_value2enum_3[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_slotPDSCH_TxDiv_TM8_r15_enum2value_3[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_slotPDSCH_TxDiv_TM8_r15_specs_3 = {
	asn_MAP_LTE_slotPDSCH_TxDiv_TM8_r15_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_slotPDSCH_TxDiv_TM8_r15_enum2value_3,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_slotPDSCH_TxDiv_TM8_r15_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_slotPDSCH_TxDiv_TM8_r15_3 = {
	"slotPDSCH-TxDiv-TM8-r15",
	"slotPDSCH-TxDiv-TM8-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_slotPDSCH_TxDiv_TM8_r15_tags_3,
	sizeof(asn_DEF_LTE_slotPDSCH_TxDiv_TM8_r15_tags_3)
		/sizeof(asn_DEF_LTE_slotPDSCH_TxDiv_TM8_r15_tags_3[0]) - 1, /* 1 */
	asn_DEF_LTE_slotPDSCH_TxDiv_TM8_r15_tags_3,	/* Same as above */
	sizeof(asn_DEF_LTE_slotPDSCH_TxDiv_TM8_r15_tags_3)
		/sizeof(asn_DEF_LTE_slotPDSCH_TxDiv_TM8_r15_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_slotPDSCH_TxDiv_TM8_r15_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_slotPDSCH_TxDiv_TM8_r15_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_stti_SPT_Capabilities_v1540_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PhyLayerParameters_v1540__stti_SPT_Capabilities_v1540, slotPDSCH_TxDiv_TM8_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_slotPDSCH_TxDiv_TM8_r15_3,
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
		"slotPDSCH-TxDiv-TM8-r15"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_stti_SPT_Capabilities_v1540_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_stti_SPT_Capabilities_v1540_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* slotPDSCH-TxDiv-TM8-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_stti_SPT_Capabilities_v1540_specs_2 = {
	sizeof(struct LTE_PhyLayerParameters_v1540__stti_SPT_Capabilities_v1540),
	offsetof(struct LTE_PhyLayerParameters_v1540__stti_SPT_Capabilities_v1540, _asn_ctx),
	asn_MAP_LTE_stti_SPT_Capabilities_v1540_tag2el_2,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_stti_SPT_Capabilities_v1540_2 = {
	"stti-SPT-Capabilities-v1540",
	"stti-SPT-Capabilities-v1540",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_stti_SPT_Capabilities_v1540_tags_2,
	sizeof(asn_DEF_LTE_stti_SPT_Capabilities_v1540_tags_2)
		/sizeof(asn_DEF_LTE_stti_SPT_Capabilities_v1540_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_stti_SPT_Capabilities_v1540_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_stti_SPT_Capabilities_v1540_tags_2)
		/sizeof(asn_DEF_LTE_stti_SPT_Capabilities_v1540_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_stti_SPT_Capabilities_v1540_2,
	1,	/* Elements count */
	&asn_SPC_LTE_stti_SPT_Capabilities_v1540_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_crs_IM_TM1_toTM9_OneRX_Port_v1540_value2enum_5[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_crs_IM_TM1_toTM9_OneRX_Port_v1540_enum2value_5[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_crs_IM_TM1_toTM9_OneRX_Port_v1540_specs_5 = {
	asn_MAP_LTE_crs_IM_TM1_toTM9_OneRX_Port_v1540_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_crs_IM_TM1_toTM9_OneRX_Port_v1540_enum2value_5,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_crs_IM_TM1_toTM9_OneRX_Port_v1540_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_crs_IM_TM1_toTM9_OneRX_Port_v1540_5 = {
	"crs-IM-TM1-toTM9-OneRX-Port-v1540",
	"crs-IM-TM1-toTM9-OneRX-Port-v1540",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_crs_IM_TM1_toTM9_OneRX_Port_v1540_tags_5,
	sizeof(asn_DEF_LTE_crs_IM_TM1_toTM9_OneRX_Port_v1540_tags_5)
		/sizeof(asn_DEF_LTE_crs_IM_TM1_toTM9_OneRX_Port_v1540_tags_5[0]) - 1, /* 1 */
	asn_DEF_LTE_crs_IM_TM1_toTM9_OneRX_Port_v1540_tags_5,	/* Same as above */
	sizeof(asn_DEF_LTE_crs_IM_TM1_toTM9_OneRX_Port_v1540_tags_5)
		/sizeof(asn_DEF_LTE_crs_IM_TM1_toTM9_OneRX_Port_v1540_tags_5[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_crs_IM_TM1_toTM9_OneRX_Port_v1540_constr_5,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_crs_IM_TM1_toTM9_OneRX_Port_v1540_specs_5	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_cch_IM_RefRecTypeA_OneRX_Port_v1540_value2enum_7[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_cch_IM_RefRecTypeA_OneRX_Port_v1540_enum2value_7[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_cch_IM_RefRecTypeA_OneRX_Port_v1540_specs_7 = {
	asn_MAP_LTE_cch_IM_RefRecTypeA_OneRX_Port_v1540_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_cch_IM_RefRecTypeA_OneRX_Port_v1540_enum2value_7,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_cch_IM_RefRecTypeA_OneRX_Port_v1540_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_cch_IM_RefRecTypeA_OneRX_Port_v1540_7 = {
	"cch-IM-RefRecTypeA-OneRX-Port-v1540",
	"cch-IM-RefRecTypeA-OneRX-Port-v1540",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_cch_IM_RefRecTypeA_OneRX_Port_v1540_tags_7,
	sizeof(asn_DEF_LTE_cch_IM_RefRecTypeA_OneRX_Port_v1540_tags_7)
		/sizeof(asn_DEF_LTE_cch_IM_RefRecTypeA_OneRX_Port_v1540_tags_7[0]) - 1, /* 1 */
	asn_DEF_LTE_cch_IM_RefRecTypeA_OneRX_Port_v1540_tags_7,	/* Same as above */
	sizeof(asn_DEF_LTE_cch_IM_RefRecTypeA_OneRX_Port_v1540_tags_7)
		/sizeof(asn_DEF_LTE_cch_IM_RefRecTypeA_OneRX_Port_v1540_tags_7[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_cch_IM_RefRecTypeA_OneRX_Port_v1540_constr_7,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_cch_IM_RefRecTypeA_OneRX_Port_v1540_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_PhyLayerParameters_v1540_1[] = {
	{ ATF_POINTER, 3, offsetof(struct LTE_PhyLayerParameters_v1540, stti_SPT_Capabilities_v1540),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_LTE_stti_SPT_Capabilities_v1540_2,
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
		"stti-SPT-Capabilities-v1540"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_PhyLayerParameters_v1540, crs_IM_TM1_toTM9_OneRX_Port_v1540),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_crs_IM_TM1_toTM9_OneRX_Port_v1540_5,
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
		"crs-IM-TM1-toTM9-OneRX-Port-v1540"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_PhyLayerParameters_v1540, cch_IM_RefRecTypeA_OneRX_Port_v1540),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_cch_IM_RefRecTypeA_OneRX_Port_v1540_7,
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
		"cch-IM-RefRecTypeA-OneRX-Port-v1540"
		},
};
static const int asn_MAP_LTE_PhyLayerParameters_v1540_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_LTE_PhyLayerParameters_v1540_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_PhyLayerParameters_v1540_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* stti-SPT-Capabilities-v1540 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* crs-IM-TM1-toTM9-OneRX-Port-v1540 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* cch-IM-RefRecTypeA-OneRX-Port-v1540 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_PhyLayerParameters_v1540_specs_1 = {
	sizeof(struct LTE_PhyLayerParameters_v1540),
	offsetof(struct LTE_PhyLayerParameters_v1540, _asn_ctx),
	asn_MAP_LTE_PhyLayerParameters_v1540_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_LTE_PhyLayerParameters_v1540_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_PhyLayerParameters_v1540 = {
	"PhyLayerParameters-v1540",
	"PhyLayerParameters-v1540",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_PhyLayerParameters_v1540_tags_1,
	sizeof(asn_DEF_LTE_PhyLayerParameters_v1540_tags_1)
		/sizeof(asn_DEF_LTE_PhyLayerParameters_v1540_tags_1[0]), /* 1 */
	asn_DEF_LTE_PhyLayerParameters_v1540_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_PhyLayerParameters_v1540_tags_1)
		/sizeof(asn_DEF_LTE_PhyLayerParameters_v1540_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_PhyLayerParameters_v1540_1,
	3,	/* Elements count */
	&asn_SPC_LTE_PhyLayerParameters_v1540_specs_1	/* Additional specs */
};

