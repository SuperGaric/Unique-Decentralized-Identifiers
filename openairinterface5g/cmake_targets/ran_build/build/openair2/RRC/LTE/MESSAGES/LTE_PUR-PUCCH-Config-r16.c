/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_PUR-PUCCH-Config-r16.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_LTE_n1PUCCH_AN_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 2047L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_pucch_NumRepetitionCE_Format1_r16_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LTE_n1PUCCH_AN_r16_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 11,  11,  0,  2047 }	/* (0..2047) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LTE_pucch_NumRepetitionCE_Format1_r16_value2enum_3[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n4" },
	{ 3,	2,	"n8" }
};
static const unsigned int asn_MAP_LTE_pucch_NumRepetitionCE_Format1_r16_enum2value_3[] = {
	0,	/* n1(0) */
	1,	/* n2(1) */
	2,	/* n4(2) */
	3	/* n8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_pucch_NumRepetitionCE_Format1_r16_specs_3 = {
	asn_MAP_LTE_pucch_NumRepetitionCE_Format1_r16_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_pucch_NumRepetitionCE_Format1_r16_enum2value_3,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_pucch_NumRepetitionCE_Format1_r16_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_pucch_NumRepetitionCE_Format1_r16_3 = {
	"pucch-NumRepetitionCE-Format1-r16",
	"pucch-NumRepetitionCE-Format1-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_pucch_NumRepetitionCE_Format1_r16_tags_3,
	sizeof(asn_DEF_LTE_pucch_NumRepetitionCE_Format1_r16_tags_3)
		/sizeof(asn_DEF_LTE_pucch_NumRepetitionCE_Format1_r16_tags_3[0]) - 1, /* 1 */
	asn_DEF_LTE_pucch_NumRepetitionCE_Format1_r16_tags_3,	/* Same as above */
	sizeof(asn_DEF_LTE_pucch_NumRepetitionCE_Format1_r16_tags_3)
		/sizeof(asn_DEF_LTE_pucch_NumRepetitionCE_Format1_r16_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_pucch_NumRepetitionCE_Format1_r16_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_pucch_NumRepetitionCE_Format1_r16_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_PUR_PUCCH_Config_r16_1[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_PUR_PUCCH_Config_r16, n1PUCCH_AN_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LTE_n1PUCCH_AN_r16_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LTE_n1PUCCH_AN_r16_constraint_1
		},
		0, 0, /* No default value */
		"n1PUCCH-AN-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_PUR_PUCCH_Config_r16, pucch_NumRepetitionCE_Format1_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_pucch_NumRepetitionCE_Format1_r16_3,
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
		"pucch-NumRepetitionCE-Format1-r16"
		},
};
static const int asn_MAP_LTE_PUR_PUCCH_Config_r16_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_PUR_PUCCH_Config_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_PUR_PUCCH_Config_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* n1PUCCH-AN-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* pucch-NumRepetitionCE-Format1-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_PUR_PUCCH_Config_r16_specs_1 = {
	sizeof(struct LTE_PUR_PUCCH_Config_r16),
	offsetof(struct LTE_PUR_PUCCH_Config_r16, _asn_ctx),
	asn_MAP_LTE_PUR_PUCCH_Config_r16_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_PUR_PUCCH_Config_r16_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_PUR_PUCCH_Config_r16 = {
	"PUR-PUCCH-Config-r16",
	"PUR-PUCCH-Config-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_PUR_PUCCH_Config_r16_tags_1,
	sizeof(asn_DEF_LTE_PUR_PUCCH_Config_r16_tags_1)
		/sizeof(asn_DEF_LTE_PUR_PUCCH_Config_r16_tags_1[0]), /* 1 */
	asn_DEF_LTE_PUR_PUCCH_Config_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_PUR_PUCCH_Config_r16_tags_1)
		/sizeof(asn_DEF_LTE_PUR_PUCCH_Config_r16_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_PUR_PUCCH_Config_r16_1,
	2,	/* Elements count */
	&asn_SPC_LTE_PUR_PUCCH_Config_r16_specs_1	/* Additional specs */
};
