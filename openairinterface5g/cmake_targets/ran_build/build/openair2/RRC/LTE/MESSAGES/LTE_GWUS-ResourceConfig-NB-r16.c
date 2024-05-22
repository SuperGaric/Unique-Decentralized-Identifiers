/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_GWUS-ResourceConfig-NB-r16.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_resourcePosition_r16_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LTE_resourcePosition_r16_value2enum_2[] = {
	{ 0,	7,	"primary" },
	{ 1,	9,	"secondary" }
};
static const unsigned int asn_MAP_LTE_resourcePosition_r16_enum2value_2[] = {
	0,	/* primary(0) */
	1	/* secondary(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_resourcePosition_r16_specs_2 = {
	asn_MAP_LTE_resourcePosition_r16_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_resourcePosition_r16_enum2value_2,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_resourcePosition_r16_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_resourcePosition_r16_2 = {
	"resourcePosition-r16",
	"resourcePosition-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_resourcePosition_r16_tags_2,
	sizeof(asn_DEF_LTE_resourcePosition_r16_tags_2)
		/sizeof(asn_DEF_LTE_resourcePosition_r16_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_resourcePosition_r16_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_resourcePosition_r16_tags_2)
		/sizeof(asn_DEF_LTE_resourcePosition_r16_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_resourcePosition_r16_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_resourcePosition_r16_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_GWUS_ResourceConfig_NB_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_GWUS_ResourceConfig_NB_r16, resourcePosition_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_resourcePosition_r16_2,
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
		"resourcePosition-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_GWUS_ResourceConfig_NB_r16, numGroupsList_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_GWUS_NumGroupsList_NB_r16,
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
		"numGroupsList-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_GWUS_ResourceConfig_NB_r16, groupsForServiceList_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_GWUS_GroupsForServiceList_NB_r16,
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
		"groupsForServiceList-r16"
		},
};
static const int asn_MAP_LTE_GWUS_ResourceConfig_NB_r16_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_LTE_GWUS_ResourceConfig_NB_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_GWUS_ResourceConfig_NB_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* resourcePosition-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* numGroupsList-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* groupsForServiceList-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_GWUS_ResourceConfig_NB_r16_specs_1 = {
	sizeof(struct LTE_GWUS_ResourceConfig_NB_r16),
	offsetof(struct LTE_GWUS_ResourceConfig_NB_r16, _asn_ctx),
	asn_MAP_LTE_GWUS_ResourceConfig_NB_r16_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_LTE_GWUS_ResourceConfig_NB_r16_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_GWUS_ResourceConfig_NB_r16 = {
	"GWUS-ResourceConfig-NB-r16",
	"GWUS-ResourceConfig-NB-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_GWUS_ResourceConfig_NB_r16_tags_1,
	sizeof(asn_DEF_LTE_GWUS_ResourceConfig_NB_r16_tags_1)
		/sizeof(asn_DEF_LTE_GWUS_ResourceConfig_NB_r16_tags_1[0]), /* 1 */
	asn_DEF_LTE_GWUS_ResourceConfig_NB_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_GWUS_ResourceConfig_NB_r16_tags_1)
		/sizeof(asn_DEF_LTE_GWUS_ResourceConfig_NB_r16_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_GWUS_ResourceConfig_NB_r16_1,
	3,	/* Elements count */
	&asn_SPC_LTE_GWUS_ResourceConfig_NB_r16_specs_1	/* Additional specs */
};
