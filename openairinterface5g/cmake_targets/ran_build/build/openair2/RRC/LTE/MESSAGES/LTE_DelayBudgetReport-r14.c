/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_DelayBudgetReport-r14.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_type1_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  16 }	/* (0..16) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_type2_constr_20 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  16 }	/* (0..16) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_LTE_DelayBudgetReport_r14_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LTE_type1_value2enum_2[] = {
	{ 0,	11,	"msMinus1280" },
	{ 1,	10,	"msMinus640" },
	{ 2,	10,	"msMinus320" },
	{ 3,	10,	"msMinus160" },
	{ 4,	9,	"msMinus80" },
	{ 5,	9,	"msMinus60" },
	{ 6,	9,	"msMinus40" },
	{ 7,	9,	"msMinus20" },
	{ 8,	3,	"ms0" },
	{ 9,	4,	"ms20" },
	{ 10,	4,	"ms40" },
	{ 11,	4,	"ms60" },
	{ 12,	4,	"ms80" },
	{ 13,	5,	"ms160" },
	{ 14,	5,	"ms320" },
	{ 15,	5,	"ms640" },
	{ 16,	6,	"ms1280" }
};
static const unsigned int asn_MAP_LTE_type1_enum2value_2[] = {
	8,	/* ms0(8) */
	16,	/* ms1280(16) */
	13,	/* ms160(13) */
	9,	/* ms20(9) */
	14,	/* ms320(14) */
	10,	/* ms40(10) */
	11,	/* ms60(11) */
	15,	/* ms640(15) */
	12,	/* ms80(12) */
	0,	/* msMinus1280(0) */
	3,	/* msMinus160(3) */
	7,	/* msMinus20(7) */
	2,	/* msMinus320(2) */
	6,	/* msMinus40(6) */
	5,	/* msMinus60(5) */
	1,	/* msMinus640(1) */
	4	/* msMinus80(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_type1_specs_2 = {
	asn_MAP_LTE_type1_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_type1_enum2value_2,	/* N => "tag"; sorted by N */
	17,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_type1_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_type1_2 = {
	"type1",
	"type1",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_type1_tags_2,
	sizeof(asn_DEF_LTE_type1_tags_2)
		/sizeof(asn_DEF_LTE_type1_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_type1_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_type1_tags_2)
		/sizeof(asn_DEF_LTE_type1_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_type1_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_type1_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_type2_value2enum_20[] = {
	{ 0,	10,	"msMinus192" },
	{ 1,	10,	"msMinus168" },
	{ 2,	10,	"msMinus144" },
	{ 3,	10,	"msMinus120" },
	{ 4,	9,	"msMinus96" },
	{ 5,	9,	"msMinus72" },
	{ 6,	9,	"msMinus48" },
	{ 7,	9,	"msMinus24" },
	{ 8,	3,	"ms0" },
	{ 9,	4,	"ms24" },
	{ 10,	4,	"ms48" },
	{ 11,	4,	"ms72" },
	{ 12,	4,	"ms96" },
	{ 13,	5,	"ms120" },
	{ 14,	5,	"ms144" },
	{ 15,	5,	"ms168" },
	{ 16,	5,	"ms192" }
};
static const unsigned int asn_MAP_LTE_type2_enum2value_20[] = {
	8,	/* ms0(8) */
	13,	/* ms120(13) */
	14,	/* ms144(14) */
	15,	/* ms168(15) */
	16,	/* ms192(16) */
	9,	/* ms24(9) */
	10,	/* ms48(10) */
	11,	/* ms72(11) */
	12,	/* ms96(12) */
	3,	/* msMinus120(3) */
	2,	/* msMinus144(2) */
	1,	/* msMinus168(1) */
	0,	/* msMinus192(0) */
	7,	/* msMinus24(7) */
	6,	/* msMinus48(6) */
	5,	/* msMinus72(5) */
	4	/* msMinus96(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_type2_specs_20 = {
	asn_MAP_LTE_type2_value2enum_20,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_type2_enum2value_20,	/* N => "tag"; sorted by N */
	17,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_type2_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_type2_20 = {
	"type2",
	"type2",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_type2_tags_20,
	sizeof(asn_DEF_LTE_type2_tags_20)
		/sizeof(asn_DEF_LTE_type2_tags_20[0]) - 1, /* 1 */
	asn_DEF_LTE_type2_tags_20,	/* Same as above */
	sizeof(asn_DEF_LTE_type2_tags_20)
		/sizeof(asn_DEF_LTE_type2_tags_20[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_type2_constr_20,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_type2_specs_20	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_DelayBudgetReport_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_DelayBudgetReport_r14, choice.type1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_type1_2,
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
		"type1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_DelayBudgetReport_r14, choice.type2),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_type2_20,
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
		"type2"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_DelayBudgetReport_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* type1 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* type2 */
};
asn_CHOICE_specifics_t asn_SPC_LTE_DelayBudgetReport_r14_specs_1 = {
	sizeof(struct LTE_DelayBudgetReport_r14),
	offsetof(struct LTE_DelayBudgetReport_r14, _asn_ctx),
	offsetof(struct LTE_DelayBudgetReport_r14, present),
	sizeof(((struct LTE_DelayBudgetReport_r14 *)0)->present),
	asn_MAP_LTE_DelayBudgetReport_r14_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_LTE_DelayBudgetReport_r14 = {
	"DelayBudgetReport-r14",
	"DelayBudgetReport-r14",
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
		&asn_PER_type_LTE_DelayBudgetReport_r14_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_LTE_DelayBudgetReport_r14_1,
	2,	/* Elements count */
	&asn_SPC_LTE_DelayBudgetReport_r14_specs_1	/* Additional specs */
};

