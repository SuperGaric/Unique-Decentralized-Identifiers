/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_PLMN-IdentityInfo.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_cellReservedForOperatorUse_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LTE_cellReservedForOperatorUse_value2enum_3[] = {
	{ 0,	8,	"reserved" },
	{ 1,	11,	"notReserved" }
};
static const unsigned int asn_MAP_LTE_cellReservedForOperatorUse_enum2value_3[] = {
	1,	/* notReserved(1) */
	0	/* reserved(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_cellReservedForOperatorUse_specs_3 = {
	asn_MAP_LTE_cellReservedForOperatorUse_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_cellReservedForOperatorUse_enum2value_3,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_cellReservedForOperatorUse_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_cellReservedForOperatorUse_3 = {
	"cellReservedForOperatorUse",
	"cellReservedForOperatorUse",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_cellReservedForOperatorUse_tags_3,
	sizeof(asn_DEF_LTE_cellReservedForOperatorUse_tags_3)
		/sizeof(asn_DEF_LTE_cellReservedForOperatorUse_tags_3[0]) - 1, /* 1 */
	asn_DEF_LTE_cellReservedForOperatorUse_tags_3,	/* Same as above */
	sizeof(asn_DEF_LTE_cellReservedForOperatorUse_tags_3)
		/sizeof(asn_DEF_LTE_cellReservedForOperatorUse_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_cellReservedForOperatorUse_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_cellReservedForOperatorUse_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_PLMN_IdentityInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PLMN_IdentityInfo, plmn_Identity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PLMN_Identity,
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
		"plmn-Identity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PLMN_IdentityInfo, cellReservedForOperatorUse),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_cellReservedForOperatorUse_3,
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
		"cellReservedForOperatorUse"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_PLMN_IdentityInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_PLMN_IdentityInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* plmn-Identity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* cellReservedForOperatorUse */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_PLMN_IdentityInfo_specs_1 = {
	sizeof(struct LTE_PLMN_IdentityInfo),
	offsetof(struct LTE_PLMN_IdentityInfo, _asn_ctx),
	asn_MAP_LTE_PLMN_IdentityInfo_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_PLMN_IdentityInfo = {
	"PLMN-IdentityInfo",
	"PLMN-IdentityInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_PLMN_IdentityInfo_tags_1,
	sizeof(asn_DEF_LTE_PLMN_IdentityInfo_tags_1)
		/sizeof(asn_DEF_LTE_PLMN_IdentityInfo_tags_1[0]), /* 1 */
	asn_DEF_LTE_PLMN_IdentityInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_PLMN_IdentityInfo_tags_1)
		/sizeof(asn_DEF_LTE_PLMN_IdentityInfo_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_PLMN_IdentityInfo_1,
	2,	/* Elements count */
	&asn_SPC_LTE_PLMN_IdentityInfo_specs_1	/* Additional specs */
};

