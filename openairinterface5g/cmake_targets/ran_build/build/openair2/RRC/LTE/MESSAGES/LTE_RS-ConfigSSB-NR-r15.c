/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_RS-ConfigSSB-NR-r15.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_LTE_ssb_PositionQCL_CellsToRemoveListNR_r16_constraint_13(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1UL && size <= 32UL)) {
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
static asn_per_constraints_t asn_PER_type_LTE_subcarrierSpacingSSB_r15_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_ssb_ToMeasure_r15_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_ssb_PositionQCL_CellsToRemoveListNR_r16_constr_16 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LTE_ssb_PositionQCL_CellsToRemoveListNR_r16_constr_16 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LTE_subcarrierSpacingSSB_r15_value2enum_3[] = {
	{ 0,	5,	"kHz15" },
	{ 1,	5,	"kHz30" },
	{ 2,	6,	"kHz120" },
	{ 3,	6,	"kHz240" }
};
static const unsigned int asn_MAP_LTE_subcarrierSpacingSSB_r15_enum2value_3[] = {
	2,	/* kHz120(2) */
	0,	/* kHz15(0) */
	3,	/* kHz240(3) */
	1	/* kHz30(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_subcarrierSpacingSSB_r15_specs_3 = {
	asn_MAP_LTE_subcarrierSpacingSSB_r15_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_subcarrierSpacingSSB_r15_enum2value_3,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_subcarrierSpacingSSB_r15_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_subcarrierSpacingSSB_r15_3 = {
	"subcarrierSpacingSSB-r15",
	"subcarrierSpacingSSB-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_subcarrierSpacingSSB_r15_tags_3,
	sizeof(asn_DEF_LTE_subcarrierSpacingSSB_r15_tags_3)
		/sizeof(asn_DEF_LTE_subcarrierSpacingSSB_r15_tags_3[0]) - 1, /* 1 */
	asn_DEF_LTE_subcarrierSpacingSSB_r15_tags_3,	/* Same as above */
	sizeof(asn_DEF_LTE_subcarrierSpacingSSB_r15_tags_3)
		/sizeof(asn_DEF_LTE_subcarrierSpacingSSB_r15_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_subcarrierSpacingSSB_r15_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_subcarrierSpacingSSB_r15_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ssb_ToMeasure_r15_10[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RS_ConfigSSB_NR_r15__ext1__ssb_ToMeasure_r15, choice.release),
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
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RS_ConfigSSB_NR_r15__ext1__ssb_ToMeasure_r15, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_SSB_ToMeasure_r15,
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
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ssb_ToMeasure_r15_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_ssb_ToMeasure_r15_specs_10 = {
	sizeof(struct LTE_RS_ConfigSSB_NR_r15__ext1__ssb_ToMeasure_r15),
	offsetof(struct LTE_RS_ConfigSSB_NR_r15__ext1__ssb_ToMeasure_r15, _asn_ctx),
	offsetof(struct LTE_RS_ConfigSSB_NR_r15__ext1__ssb_ToMeasure_r15, present),
	sizeof(((struct LTE_RS_ConfigSSB_NR_r15__ext1__ssb_ToMeasure_r15 *)0)->present),
	asn_MAP_LTE_ssb_ToMeasure_r15_tag2el_10,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ssb_ToMeasure_r15_10 = {
	"ssb-ToMeasure-r15",
	"ssb-ToMeasure-r15",
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
		&asn_PER_type_LTE_ssb_ToMeasure_r15_constr_10,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_LTE_ssb_ToMeasure_r15_10,
	2,	/* Elements count */
	&asn_SPC_LTE_ssb_ToMeasure_r15_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext1_9[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_RS_ConfigSSB_NR_r15__ext1, ssb_ToMeasure_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_ssb_ToMeasure_r15_10,
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
		"ssb-ToMeasure-r15"
		},
};
static const int asn_MAP_LTE_ext1_oms_9[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext1_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext1_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* ssb-ToMeasure-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext1_specs_9 = {
	sizeof(struct LTE_RS_ConfigSSB_NR_r15__ext1),
	offsetof(struct LTE_RS_ConfigSSB_NR_r15__ext1, _asn_ctx),
	asn_MAP_LTE_ext1_tag2el_9,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext1_oms_9,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext1_9 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext1_tags_9,
	sizeof(asn_DEF_LTE_ext1_tags_9)
		/sizeof(asn_DEF_LTE_ext1_tags_9[0]) - 1, /* 1 */
	asn_DEF_LTE_ext1_tags_9,	/* Same as above */
	sizeof(asn_DEF_LTE_ext1_tags_9)
		/sizeof(asn_DEF_LTE_ext1_tags_9[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_ext1_9,
	1,	/* Elements count */
	&asn_SPC_LTE_ext1_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ssb_PositionQCL_CellsToRemoveListNR_r16_16[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_LTE_PhysCellIdNR_r15,
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
static const ber_tlv_tag_t asn_DEF_LTE_ssb_PositionQCL_CellsToRemoveListNR_r16_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_LTE_ssb_PositionQCL_CellsToRemoveListNR_r16_specs_16 = {
	sizeof(struct LTE_RS_ConfigSSB_NR_r15__ext2__ssb_PositionQCL_CellsToRemoveListNR_r16),
	offsetof(struct LTE_RS_ConfigSSB_NR_r15__ext2__ssb_PositionQCL_CellsToRemoveListNR_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ssb_PositionQCL_CellsToRemoveListNR_r16_16 = {
	"ssb-PositionQCL-CellsToRemoveListNR-r16",
	"ssb-PositionQCL-CellsToRemoveListNR-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_LTE_ssb_PositionQCL_CellsToRemoveListNR_r16_tags_16,
	sizeof(asn_DEF_LTE_ssb_PositionQCL_CellsToRemoveListNR_r16_tags_16)
		/sizeof(asn_DEF_LTE_ssb_PositionQCL_CellsToRemoveListNR_r16_tags_16[0]) - 1, /* 1 */
	asn_DEF_LTE_ssb_PositionQCL_CellsToRemoveListNR_r16_tags_16,	/* Same as above */
	sizeof(asn_DEF_LTE_ssb_PositionQCL_CellsToRemoveListNR_r16_tags_16)
		/sizeof(asn_DEF_LTE_ssb_PositionQCL_CellsToRemoveListNR_r16_tags_16[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_ssb_PositionQCL_CellsToRemoveListNR_r16_constr_16,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_LTE_ssb_PositionQCL_CellsToRemoveListNR_r16_16,
	1,	/* Single element */
	&asn_SPC_LTE_ssb_PositionQCL_CellsToRemoveListNR_r16_specs_16	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext2_13[] = {
	{ ATF_POINTER, 3, offsetof(struct LTE_RS_ConfigSSB_NR_r15__ext2, ssb_PositionQCL_CommonNR_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SSB_PositionQCL_RelationNR_r16,
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
		"ssb-PositionQCL-CommonNR-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_RS_ConfigSSB_NR_r15__ext2, ssb_PositionQCL_CellsToAddModListNR_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SSB_PositionQCL_CellsToAddModListNR_r16,
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
		"ssb-PositionQCL-CellsToAddModListNR-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_RS_ConfigSSB_NR_r15__ext2, ssb_PositionQCL_CellsToRemoveListNR_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_LTE_ssb_PositionQCL_CellsToRemoveListNR_r16_16,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LTE_ssb_PositionQCL_CellsToRemoveListNR_r16_constr_16,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LTE_ssb_PositionQCL_CellsToRemoveListNR_r16_constraint_13
		},
		0, 0, /* No default value */
		"ssb-PositionQCL-CellsToRemoveListNR-r16"
		},
};
static const int asn_MAP_LTE_ext2_oms_13[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_LTE_ext2_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext2_tag2el_13[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ssb-PositionQCL-CommonNR-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ssb-PositionQCL-CellsToAddModListNR-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ssb-PositionQCL-CellsToRemoveListNR-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext2_specs_13 = {
	sizeof(struct LTE_RS_ConfigSSB_NR_r15__ext2),
	offsetof(struct LTE_RS_ConfigSSB_NR_r15__ext2, _asn_ctx),
	asn_MAP_LTE_ext2_tag2el_13,
	3,	/* Count of tags in the map */
	asn_MAP_LTE_ext2_oms_13,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext2_13 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext2_tags_13,
	sizeof(asn_DEF_LTE_ext2_tags_13)
		/sizeof(asn_DEF_LTE_ext2_tags_13[0]) - 1, /* 1 */
	asn_DEF_LTE_ext2_tags_13,	/* Same as above */
	sizeof(asn_DEF_LTE_ext2_tags_13)
		/sizeof(asn_DEF_LTE_ext2_tags_13[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_ext2_13,
	3,	/* Elements count */
	&asn_SPC_LTE_ext2_specs_13	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_RS_ConfigSSB_NR_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RS_ConfigSSB_NR_r15, measTimingConfig_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MTC_SSB_NR_r15,
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
		"measTimingConfig-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RS_ConfigSSB_NR_r15, subcarrierSpacingSSB_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_subcarrierSpacingSSB_r15_3,
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
		"subcarrierSpacingSSB-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_RS_ConfigSSB_NR_r15, ext1),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_LTE_ext1_9,
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
	{ ATF_POINTER, 1, offsetof(struct LTE_RS_ConfigSSB_NR_r15, ext2),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_LTE_ext2_13,
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
static const int asn_MAP_LTE_RS_ConfigSSB_NR_r15_oms_1[] = { 2, 3 };
static const ber_tlv_tag_t asn_DEF_LTE_RS_ConfigSSB_NR_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_RS_ConfigSSB_NR_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measTimingConfig-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* subcarrierSpacingSSB-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* ext2 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_RS_ConfigSSB_NR_r15_specs_1 = {
	sizeof(struct LTE_RS_ConfigSSB_NR_r15),
	offsetof(struct LTE_RS_ConfigSSB_NR_r15, _asn_ctx),
	asn_MAP_LTE_RS_ConfigSSB_NR_r15_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_LTE_RS_ConfigSSB_NR_r15_oms_1,	/* Optional members */
	0, 2,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_RS_ConfigSSB_NR_r15 = {
	"RS-ConfigSSB-NR-r15",
	"RS-ConfigSSB-NR-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_RS_ConfigSSB_NR_r15_tags_1,
	sizeof(asn_DEF_LTE_RS_ConfigSSB_NR_r15_tags_1)
		/sizeof(asn_DEF_LTE_RS_ConfigSSB_NR_r15_tags_1[0]), /* 1 */
	asn_DEF_LTE_RS_ConfigSSB_NR_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_RS_ConfigSSB_NR_r15_tags_1)
		/sizeof(asn_DEF_LTE_RS_ConfigSSB_NR_r15_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_RS_ConfigSSB_NR_r15_1,
	4,	/* Elements count */
	&asn_SPC_LTE_RS_ConfigSSB_NR_r15_specs_1	/* Additional specs */
};

