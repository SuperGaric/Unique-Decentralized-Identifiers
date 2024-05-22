/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_GWUS-ResourceConfig-r16.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_resourceLocationWithWUS_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_resourceLocationWithoutWUS_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_resourceMappingPattern_r16_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LTE_resourceLocationWithWUS_value2enum_3[] = {
	{ 0,	7,	"primary" },
	{ 1,	9,	"secondary" },
	{ 2,	11,	"primary3FDM" }
};
static const unsigned int asn_MAP_LTE_resourceLocationWithWUS_enum2value_3[] = {
	0,	/* primary(0) */
	2,	/* primary3FDM(2) */
	1	/* secondary(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_resourceLocationWithWUS_specs_3 = {
	asn_MAP_LTE_resourceLocationWithWUS_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_resourceLocationWithWUS_enum2value_3,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_resourceLocationWithWUS_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_resourceLocationWithWUS_3 = {
	"resourceLocationWithWUS",
	"resourceLocationWithWUS",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_resourceLocationWithWUS_tags_3,
	sizeof(asn_DEF_LTE_resourceLocationWithWUS_tags_3)
		/sizeof(asn_DEF_LTE_resourceLocationWithWUS_tags_3[0]) - 1, /* 1 */
	asn_DEF_LTE_resourceLocationWithWUS_tags_3,	/* Same as above */
	sizeof(asn_DEF_LTE_resourceLocationWithWUS_tags_3)
		/sizeof(asn_DEF_LTE_resourceLocationWithWUS_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_resourceLocationWithWUS_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_resourceLocationWithWUS_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_resourceLocationWithoutWUS_value2enum_7[] = {
	{ 0,	2,	"n0" },
	{ 1,	2,	"n2" }
};
static const unsigned int asn_MAP_LTE_resourceLocationWithoutWUS_enum2value_7[] = {
	0,	/* n0(0) */
	1	/* n2(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_resourceLocationWithoutWUS_specs_7 = {
	asn_MAP_LTE_resourceLocationWithoutWUS_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_resourceLocationWithoutWUS_enum2value_7,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_resourceLocationWithoutWUS_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_resourceLocationWithoutWUS_7 = {
	"resourceLocationWithoutWUS",
	"resourceLocationWithoutWUS",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_resourceLocationWithoutWUS_tags_7,
	sizeof(asn_DEF_LTE_resourceLocationWithoutWUS_tags_7)
		/sizeof(asn_DEF_LTE_resourceLocationWithoutWUS_tags_7[0]) - 1, /* 1 */
	asn_DEF_LTE_resourceLocationWithoutWUS_tags_7,	/* Same as above */
	sizeof(asn_DEF_LTE_resourceLocationWithoutWUS_tags_7)
		/sizeof(asn_DEF_LTE_resourceLocationWithoutWUS_tags_7[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_resourceLocationWithoutWUS_constr_7,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_resourceLocationWithoutWUS_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_resourceMappingPattern_r16_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_GWUS_ResourceConfig_r16__resourceMappingPattern_r16, choice.resourceLocationWithWUS),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_resourceLocationWithWUS_3,
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
		"resourceLocationWithWUS"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_GWUS_ResourceConfig_r16__resourceMappingPattern_r16, choice.resourceLocationWithoutWUS),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_resourceLocationWithoutWUS_7,
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
		"resourceLocationWithoutWUS"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_resourceMappingPattern_r16_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* resourceLocationWithWUS */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* resourceLocationWithoutWUS */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_resourceMappingPattern_r16_specs_2 = {
	sizeof(struct LTE_GWUS_ResourceConfig_r16__resourceMappingPattern_r16),
	offsetof(struct LTE_GWUS_ResourceConfig_r16__resourceMappingPattern_r16, _asn_ctx),
	offsetof(struct LTE_GWUS_ResourceConfig_r16__resourceMappingPattern_r16, present),
	sizeof(((struct LTE_GWUS_ResourceConfig_r16__resourceMappingPattern_r16 *)0)->present),
	asn_MAP_LTE_resourceMappingPattern_r16_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_resourceMappingPattern_r16_2 = {
	"resourceMappingPattern-r16",
	"resourceMappingPattern-r16",
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
		&asn_PER_type_LTE_resourceMappingPattern_r16_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_LTE_resourceMappingPattern_r16_2,
	2,	/* Elements count */
	&asn_SPC_LTE_resourceMappingPattern_r16_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_GWUS_ResourceConfig_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_GWUS_ResourceConfig_r16, resourceMappingPattern_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_resourceMappingPattern_r16_2,
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
		"resourceMappingPattern-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_GWUS_ResourceConfig_r16, numGroupsList_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_GWUS_NumGroupsList_r16,
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
	{ ATF_POINTER, 1, offsetof(struct LTE_GWUS_ResourceConfig_r16, groupsForServiceList_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_GWUS_GroupsForServiceList_r16,
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
static const int asn_MAP_LTE_GWUS_ResourceConfig_r16_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_LTE_GWUS_ResourceConfig_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_GWUS_ResourceConfig_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* resourceMappingPattern-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* numGroupsList-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* groupsForServiceList-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_GWUS_ResourceConfig_r16_specs_1 = {
	sizeof(struct LTE_GWUS_ResourceConfig_r16),
	offsetof(struct LTE_GWUS_ResourceConfig_r16, _asn_ctx),
	asn_MAP_LTE_GWUS_ResourceConfig_r16_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_LTE_GWUS_ResourceConfig_r16_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_GWUS_ResourceConfig_r16 = {
	"GWUS-ResourceConfig-r16",
	"GWUS-ResourceConfig-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_GWUS_ResourceConfig_r16_tags_1,
	sizeof(asn_DEF_LTE_GWUS_ResourceConfig_r16_tags_1)
		/sizeof(asn_DEF_LTE_GWUS_ResourceConfig_r16_tags_1[0]), /* 1 */
	asn_DEF_LTE_GWUS_ResourceConfig_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_GWUS_ResourceConfig_r16_tags_1)
		/sizeof(asn_DEF_LTE_GWUS_ResourceConfig_r16_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_GWUS_ResourceConfig_r16_1,
	3,	/* Elements count */
	&asn_SPC_LTE_GWUS_ResourceConfig_r16_specs_1	/* Additional specs */
};

