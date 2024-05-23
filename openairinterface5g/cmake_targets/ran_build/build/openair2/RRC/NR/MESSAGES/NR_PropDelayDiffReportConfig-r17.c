/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_PropDelayDiffReportConfig-r17.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_NR_neighCellInfoList_r17_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1UL && size <= 4UL)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_threshPropDelayDiff_r17_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_neighCellInfoList_r17_constr_19 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_neighCellInfoList_r17_constr_19 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_NR_threshPropDelayDiff_r17_value2enum_2[] = {
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
	{ 11,	6,	"spare5" },
	{ 12,	6,	"spare4" },
	{ 13,	6,	"spare3" },
	{ 14,	6,	"spare2" },
	{ 15,	6,	"spare1" }
};
static const unsigned int asn_MAP_NR_threshPropDelayDiff_r17_enum2value_2[] = {
	0,	/* ms0dot5(0) */
	1,	/* ms1(1) */
	10,	/* ms10(10) */
	2,	/* ms2(2) */
	3,	/* ms3(3) */
	4,	/* ms4(4) */
	5,	/* ms5(5) */
	6,	/* ms6(6) */
	7,	/* ms7(7) */
	8,	/* ms8(8) */
	9,	/* ms9(9) */
	15,	/* spare1(15) */
	14,	/* spare2(14) */
	13,	/* spare3(13) */
	12,	/* spare4(12) */
	11	/* spare5(11) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_threshPropDelayDiff_r17_specs_2 = {
	asn_MAP_NR_threshPropDelayDiff_r17_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_threshPropDelayDiff_r17_enum2value_2,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_threshPropDelayDiff_r17_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_threshPropDelayDiff_r17_2 = {
	"threshPropDelayDiff-r17",
	"threshPropDelayDiff-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_threshPropDelayDiff_r17_tags_2,
	sizeof(asn_DEF_NR_threshPropDelayDiff_r17_tags_2)
		/sizeof(asn_DEF_NR_threshPropDelayDiff_r17_tags_2[0]) - 1, /* 1 */
	asn_DEF_NR_threshPropDelayDiff_r17_tags_2,	/* Same as above */
	sizeof(asn_DEF_NR_threshPropDelayDiff_r17_tags_2)
		/sizeof(asn_DEF_NR_threshPropDelayDiff_r17_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_threshPropDelayDiff_r17_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_threshPropDelayDiff_r17_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_neighCellInfoList_r17_19[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NR_NeighbourCellInfo_r17,
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
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_neighCellInfoList_r17_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_neighCellInfoList_r17_specs_19 = {
	sizeof(struct NR_PropDelayDiffReportConfig_r17__neighCellInfoList_r17),
	offsetof(struct NR_PropDelayDiffReportConfig_r17__neighCellInfoList_r17, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_neighCellInfoList_r17_19 = {
	"neighCellInfoList-r17",
	"neighCellInfoList-r17",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_neighCellInfoList_r17_tags_19,
	sizeof(asn_DEF_NR_neighCellInfoList_r17_tags_19)
		/sizeof(asn_DEF_NR_neighCellInfoList_r17_tags_19[0]) - 1, /* 1 */
	asn_DEF_NR_neighCellInfoList_r17_tags_19,	/* Same as above */
	sizeof(asn_DEF_NR_neighCellInfoList_r17_tags_19)
		/sizeof(asn_DEF_NR_neighCellInfoList_r17_tags_19[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_neighCellInfoList_r17_constr_19,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_NR_neighCellInfoList_r17_19,
	1,	/* Single element */
	&asn_SPC_NR_neighCellInfoList_r17_specs_19	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_PropDelayDiffReportConfig_r17_1[] = {
	{ ATF_POINTER, 2, offsetof(struct NR_PropDelayDiffReportConfig_r17, threshPropDelayDiff_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_threshPropDelayDiff_r17_2,
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
		"threshPropDelayDiff-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_PropDelayDiffReportConfig_r17, neighCellInfoList_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_NR_neighCellInfoList_r17_19,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_neighCellInfoList_r17_constr_19,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_neighCellInfoList_r17_constraint_1
		},
		0, 0, /* No default value */
		"neighCellInfoList-r17"
		},
};
static const int asn_MAP_NR_PropDelayDiffReportConfig_r17_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_NR_PropDelayDiffReportConfig_r17_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_PropDelayDiffReportConfig_r17_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* threshPropDelayDiff-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* neighCellInfoList-r17 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_PropDelayDiffReportConfig_r17_specs_1 = {
	sizeof(struct NR_PropDelayDiffReportConfig_r17),
	offsetof(struct NR_PropDelayDiffReportConfig_r17, _asn_ctx),
	asn_MAP_NR_PropDelayDiffReportConfig_r17_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_NR_PropDelayDiffReportConfig_r17_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_PropDelayDiffReportConfig_r17 = {
	"PropDelayDiffReportConfig-r17",
	"PropDelayDiffReportConfig-r17",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_PropDelayDiffReportConfig_r17_tags_1,
	sizeof(asn_DEF_NR_PropDelayDiffReportConfig_r17_tags_1)
		/sizeof(asn_DEF_NR_PropDelayDiffReportConfig_r17_tags_1[0]), /* 1 */
	asn_DEF_NR_PropDelayDiffReportConfig_r17_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_PropDelayDiffReportConfig_r17_tags_1)
		/sizeof(asn_DEF_NR_PropDelayDiffReportConfig_r17_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_PropDelayDiffReportConfig_r17_1,
	2,	/* Elements count */
	&asn_SPC_NR_PropDelayDiffReportConfig_r17_specs_1	/* Additional specs */
};

