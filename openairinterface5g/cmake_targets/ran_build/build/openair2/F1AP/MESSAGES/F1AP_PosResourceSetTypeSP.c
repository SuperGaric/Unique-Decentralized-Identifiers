/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair2/F1AP/MESSAGES/ASN1/R16.3.1/38473-g31.asn"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/F1AP/MESSAGES`
 */

#include "F1AP_PosResourceSetTypeSP.h"

#include "F1AP_ProtocolExtensionContainer.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_F1AP_possemi_persistentSet_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  0,  0,  0,  0 }	/* (0..0,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_F1AP_possemi_persistentSet_value2enum_2[] = {
	{ 0,	4,	"true" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_F1AP_possemi_persistentSet_enum2value_2[] = {
	0	/* true(0) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_F1AP_possemi_persistentSet_specs_2 = {
	asn_MAP_F1AP_possemi_persistentSet_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_F1AP_possemi_persistentSet_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	2,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_F1AP_possemi_persistentSet_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_F1AP_possemi_persistentSet_2 = {
	"possemi-persistentSet",
	"possemi-persistentSet",
	&asn_OP_NativeEnumerated,
	asn_DEF_F1AP_possemi_persistentSet_tags_2,
	sizeof(asn_DEF_F1AP_possemi_persistentSet_tags_2)
		/sizeof(asn_DEF_F1AP_possemi_persistentSet_tags_2[0]) - 1, /* 1 */
	asn_DEF_F1AP_possemi_persistentSet_tags_2,	/* Same as above */
	sizeof(asn_DEF_F1AP_possemi_persistentSet_tags_2)
		/sizeof(asn_DEF_F1AP_possemi_persistentSet_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_F1AP_possemi_persistentSet_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_F1AP_possemi_persistentSet_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_F1AP_PosResourceSetTypeSP_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct F1AP_PosResourceSetTypeSP, possemi_persistentSet),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_F1AP_possemi_persistentSet_2,
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
		"possemi-persistentSet"
		},
	{ ATF_POINTER, 1, offsetof(struct F1AP_PosResourceSetTypeSP, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_F1AP_ProtocolExtensionContainer_10696P185,
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
		"iE-Extensions"
		},
};
static const int asn_MAP_F1AP_PosResourceSetTypeSP_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_F1AP_PosResourceSetTypeSP_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_F1AP_PosResourceSetTypeSP_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* possemi-persistentSet */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_F1AP_PosResourceSetTypeSP_specs_1 = {
	sizeof(struct F1AP_PosResourceSetTypeSP),
	offsetof(struct F1AP_PosResourceSetTypeSP, _asn_ctx),
	asn_MAP_F1AP_PosResourceSetTypeSP_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_F1AP_PosResourceSetTypeSP_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_F1AP_PosResourceSetTypeSP = {
	"PosResourceSetTypeSP",
	"PosResourceSetTypeSP",
	&asn_OP_SEQUENCE,
	asn_DEF_F1AP_PosResourceSetTypeSP_tags_1,
	sizeof(asn_DEF_F1AP_PosResourceSetTypeSP_tags_1)
		/sizeof(asn_DEF_F1AP_PosResourceSetTypeSP_tags_1[0]), /* 1 */
	asn_DEF_F1AP_PosResourceSetTypeSP_tags_1,	/* Same as above */
	sizeof(asn_DEF_F1AP_PosResourceSetTypeSP_tags_1)
		/sizeof(asn_DEF_F1AP_PosResourceSetTypeSP_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_F1AP_PosResourceSetTypeSP_1,
	2,	/* Elements count */
	&asn_SPC_F1AP_PosResourceSetTypeSP_specs_1	/* Additional specs */
};

