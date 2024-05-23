/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-Sidelink-Preconf"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_SL-V2X-Preconfiguration-r14.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_slss_TxMultiFreq_r15_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LTE_slss_TxMultiFreq_r15_value2enum_9[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_slss_TxMultiFreq_r15_enum2value_9[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_slss_TxMultiFreq_r15_specs_9 = {
	asn_MAP_LTE_slss_TxMultiFreq_r15_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_slss_TxMultiFreq_r15_enum2value_9,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_slss_TxMultiFreq_r15_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_slss_TxMultiFreq_r15_9 = {
	"slss-TxMultiFreq-r15",
	"slss-TxMultiFreq-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_slss_TxMultiFreq_r15_tags_9,
	sizeof(asn_DEF_LTE_slss_TxMultiFreq_r15_tags_9)
		/sizeof(asn_DEF_LTE_slss_TxMultiFreq_r15_tags_9[0]) - 1, /* 1 */
	asn_DEF_LTE_slss_TxMultiFreq_r15_tags_9,	/* Same as above */
	sizeof(asn_DEF_LTE_slss_TxMultiFreq_r15_tags_9)
		/sizeof(asn_DEF_LTE_slss_TxMultiFreq_r15_tags_9[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_slss_TxMultiFreq_r15_constr_9,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_slss_TxMultiFreq_r15_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext1_6[] = {
	{ ATF_POINTER, 4, offsetof(struct LTE_SL_V2X_Preconfiguration_r14__ext1, v2x_PacketDuplicationConfig_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_V2X_PacketDuplicationConfig_r15,
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
		"v2x-PacketDuplicationConfig-r15"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_SL_V2X_Preconfiguration_r14__ext1, syncFreqList_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_V2X_SyncFreqList_r15,
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
		"syncFreqList-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_SL_V2X_Preconfiguration_r14__ext1, slss_TxMultiFreq_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_slss_TxMultiFreq_r15_9,
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
		"slss-TxMultiFreq-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SL_V2X_Preconfiguration_r14__ext1, v2x_TxProfileList_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_V2X_TxProfileList_r15,
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
		"v2x-TxProfileList-r15"
		},
};
static const int asn_MAP_LTE_ext1_oms_6[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_LTE_ext1_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext1_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* v2x-PacketDuplicationConfig-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* syncFreqList-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* slss-TxMultiFreq-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* v2x-TxProfileList-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext1_specs_6 = {
	sizeof(struct LTE_SL_V2X_Preconfiguration_r14__ext1),
	offsetof(struct LTE_SL_V2X_Preconfiguration_r14__ext1, _asn_ctx),
	asn_MAP_LTE_ext1_tag2el_6,
	4,	/* Count of tags in the map */
	asn_MAP_LTE_ext1_oms_6,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext1_6 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext1_tags_6,
	sizeof(asn_DEF_LTE_ext1_tags_6)
		/sizeof(asn_DEF_LTE_ext1_tags_6[0]) - 1, /* 1 */
	asn_DEF_LTE_ext1_tags_6,	/* Same as above */
	sizeof(asn_DEF_LTE_ext1_tags_6)
		/sizeof(asn_DEF_LTE_ext1_tags_6[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_ext1_6,
	4,	/* Elements count */
	&asn_SPC_LTE_ext1_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext2_12[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_SL_V2X_Preconfiguration_r14__ext2, anchorCarrierFreqListNR_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_NR_AnchorCarrierFreqList_r16,
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
		"anchorCarrierFreqListNR-r16"
		},
};
static const int asn_MAP_LTE_ext2_oms_12[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext2_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext2_tag2el_12[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* anchorCarrierFreqListNR-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext2_specs_12 = {
	sizeof(struct LTE_SL_V2X_Preconfiguration_r14__ext2),
	offsetof(struct LTE_SL_V2X_Preconfiguration_r14__ext2, _asn_ctx),
	asn_MAP_LTE_ext2_tag2el_12,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext2_oms_12,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext2_12 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext2_tags_12,
	sizeof(asn_DEF_LTE_ext2_tags_12)
		/sizeof(asn_DEF_LTE_ext2_tags_12[0]) - 1, /* 1 */
	asn_DEF_LTE_ext2_tags_12,	/* Same as above */
	sizeof(asn_DEF_LTE_ext2_tags_12)
		/sizeof(asn_DEF_LTE_ext2_tags_12[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_ext2_12,
	1,	/* Elements count */
	&asn_SPC_LTE_ext2_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_SL_V2X_Preconfiguration_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_V2X_Preconfiguration_r14, v2x_PreconfigFreqList_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_V2X_PreconfigFreqList_r14,
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
		"v2x-PreconfigFreqList-r14"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_SL_V2X_Preconfiguration_r14, anchorCarrierFreqList_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_AnchorCarrierFreqList_V2X_r14,
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
		"anchorCarrierFreqList-r14"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_SL_V2X_Preconfiguration_r14, cbr_PreconfigList_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_CBR_PreconfigTxConfigList_r14,
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
		"cbr-PreconfigList-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_SL_V2X_Preconfiguration_r14, ext1),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_LTE_ext1_6,
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
	{ ATF_POINTER, 1, offsetof(struct LTE_SL_V2X_Preconfiguration_r14, ext2),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_LTE_ext2_12,
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
		"ext2"
		},
};
static const int asn_MAP_LTE_SL_V2X_Preconfiguration_r14_oms_1[] = { 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_LTE_SL_V2X_Preconfiguration_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SL_V2X_Preconfiguration_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* v2x-PreconfigFreqList-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* anchorCarrierFreqList-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* cbr-PreconfigList-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* ext2 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_SL_V2X_Preconfiguration_r14_specs_1 = {
	sizeof(struct LTE_SL_V2X_Preconfiguration_r14),
	offsetof(struct LTE_SL_V2X_Preconfiguration_r14, _asn_ctx),
	asn_MAP_LTE_SL_V2X_Preconfiguration_r14_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_LTE_SL_V2X_Preconfiguration_r14_oms_1,	/* Optional members */
	2, 2,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SL_V2X_Preconfiguration_r14 = {
	"SL-V2X-Preconfiguration-r14",
	"SL-V2X-Preconfiguration-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_SL_V2X_Preconfiguration_r14_tags_1,
	sizeof(asn_DEF_LTE_SL_V2X_Preconfiguration_r14_tags_1)
		/sizeof(asn_DEF_LTE_SL_V2X_Preconfiguration_r14_tags_1[0]), /* 1 */
	asn_DEF_LTE_SL_V2X_Preconfiguration_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SL_V2X_Preconfiguration_r14_tags_1)
		/sizeof(asn_DEF_LTE_SL_V2X_Preconfiguration_r14_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_SL_V2X_Preconfiguration_r14_1,
	5,	/* Elements count */
	&asn_SPC_LTE_SL_V2X_Preconfiguration_r14_specs_1	/* Additional specs */
};

