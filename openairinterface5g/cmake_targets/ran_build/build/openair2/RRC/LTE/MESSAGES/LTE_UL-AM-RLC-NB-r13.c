/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_UL-AM-RLC-NB-r13.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_maxRetxThreshold_r13_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LTE_maxRetxThreshold_r13_value2enum_3[] = {
	{ 0,	2,	"t1" },
	{ 1,	2,	"t2" },
	{ 2,	2,	"t3" },
	{ 3,	2,	"t4" },
	{ 4,	2,	"t6" },
	{ 5,	2,	"t8" },
	{ 6,	3,	"t16" },
	{ 7,	3,	"t32" }
};
static const unsigned int asn_MAP_LTE_maxRetxThreshold_r13_enum2value_3[] = {
	0,	/* t1(0) */
	6,	/* t16(6) */
	1,	/* t2(1) */
	2,	/* t3(2) */
	7,	/* t32(7) */
	3,	/* t4(3) */
	4,	/* t6(4) */
	5	/* t8(5) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_maxRetxThreshold_r13_specs_3 = {
	asn_MAP_LTE_maxRetxThreshold_r13_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_maxRetxThreshold_r13_enum2value_3,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_maxRetxThreshold_r13_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_maxRetxThreshold_r13_3 = {
	"maxRetxThreshold-r13",
	"maxRetxThreshold-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_maxRetxThreshold_r13_tags_3,
	sizeof(asn_DEF_LTE_maxRetxThreshold_r13_tags_3)
		/sizeof(asn_DEF_LTE_maxRetxThreshold_r13_tags_3[0]) - 1, /* 1 */
	asn_DEF_LTE_maxRetxThreshold_r13_tags_3,	/* Same as above */
	sizeof(asn_DEF_LTE_maxRetxThreshold_r13_tags_3)
		/sizeof(asn_DEF_LTE_maxRetxThreshold_r13_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_maxRetxThreshold_r13_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_maxRetxThreshold_r13_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_UL_AM_RLC_NB_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_UL_AM_RLC_NB_r13, t_PollRetransmit_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_T_PollRetransmit_NB_r13,
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
		"t-PollRetransmit-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_UL_AM_RLC_NB_r13, maxRetxThreshold_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_maxRetxThreshold_r13_3,
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
		"maxRetxThreshold-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_UL_AM_RLC_NB_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_UL_AM_RLC_NB_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* t-PollRetransmit-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* maxRetxThreshold-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_UL_AM_RLC_NB_r13_specs_1 = {
	sizeof(struct LTE_UL_AM_RLC_NB_r13),
	offsetof(struct LTE_UL_AM_RLC_NB_r13, _asn_ctx),
	asn_MAP_LTE_UL_AM_RLC_NB_r13_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_UL_AM_RLC_NB_r13 = {
	"UL-AM-RLC-NB-r13",
	"UL-AM-RLC-NB-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_UL_AM_RLC_NB_r13_tags_1,
	sizeof(asn_DEF_LTE_UL_AM_RLC_NB_r13_tags_1)
		/sizeof(asn_DEF_LTE_UL_AM_RLC_NB_r13_tags_1[0]), /* 1 */
	asn_DEF_LTE_UL_AM_RLC_NB_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_UL_AM_RLC_NB_r13_tags_1)
		/sizeof(asn_DEF_LTE_UL_AM_RLC_NB_r13_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_UL_AM_RLC_NB_r13_1,
	2,	/* Elements count */
	&asn_SPC_LTE_UL_AM_RLC_NB_r13_specs_1	/* Additional specs */
};

