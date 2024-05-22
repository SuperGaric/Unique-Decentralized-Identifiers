/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_PosSchedulingInfo-r15.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_posSI_Periodicity_r15_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LTE_posSI_Periodicity_r15_value2enum_2[] = {
	{ 0,	3,	"rf8" },
	{ 1,	4,	"rf16" },
	{ 2,	4,	"rf32" },
	{ 3,	4,	"rf64" },
	{ 4,	5,	"rf128" },
	{ 5,	5,	"rf256" },
	{ 6,	5,	"rf512" }
};
static const unsigned int asn_MAP_LTE_posSI_Periodicity_r15_enum2value_2[] = {
	4,	/* rf128(4) */
	1,	/* rf16(1) */
	5,	/* rf256(5) */
	2,	/* rf32(2) */
	6,	/* rf512(6) */
	3,	/* rf64(3) */
	0	/* rf8(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_posSI_Periodicity_r15_specs_2 = {
	asn_MAP_LTE_posSI_Periodicity_r15_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_posSI_Periodicity_r15_enum2value_2,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_posSI_Periodicity_r15_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_posSI_Periodicity_r15_2 = {
	"posSI-Periodicity-r15",
	"posSI-Periodicity-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_posSI_Periodicity_r15_tags_2,
	sizeof(asn_DEF_LTE_posSI_Periodicity_r15_tags_2)
		/sizeof(asn_DEF_LTE_posSI_Periodicity_r15_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_posSI_Periodicity_r15_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_posSI_Periodicity_r15_tags_2)
		/sizeof(asn_DEF_LTE_posSI_Periodicity_r15_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_posSI_Periodicity_r15_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_posSI_Periodicity_r15_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_PosSchedulingInfo_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PosSchedulingInfo_r15, posSI_Periodicity_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_posSI_Periodicity_r15_2,
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
		"posSI-Periodicity-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PosSchedulingInfo_r15, posSIB_MappingInfo_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PosSIB_MappingInfo_r15,
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
		"posSIB-MappingInfo-r15"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_PosSchedulingInfo_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_PosSchedulingInfo_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* posSI-Periodicity-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* posSIB-MappingInfo-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_PosSchedulingInfo_r15_specs_1 = {
	sizeof(struct LTE_PosSchedulingInfo_r15),
	offsetof(struct LTE_PosSchedulingInfo_r15, _asn_ctx),
	asn_MAP_LTE_PosSchedulingInfo_r15_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_PosSchedulingInfo_r15 = {
	"PosSchedulingInfo-r15",
	"PosSchedulingInfo-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_PosSchedulingInfo_r15_tags_1,
	sizeof(asn_DEF_LTE_PosSchedulingInfo_r15_tags_1)
		/sizeof(asn_DEF_LTE_PosSchedulingInfo_r15_tags_1[0]), /* 1 */
	asn_DEF_LTE_PosSchedulingInfo_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_PosSchedulingInfo_r15_tags_1)
		/sizeof(asn_DEF_LTE_PosSchedulingInfo_r15_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_PosSchedulingInfo_r15_1,
	2,	/* Elements count */
	&asn_SPC_LTE_PosSchedulingInfo_r15_specs_1	/* Additional specs */
};

