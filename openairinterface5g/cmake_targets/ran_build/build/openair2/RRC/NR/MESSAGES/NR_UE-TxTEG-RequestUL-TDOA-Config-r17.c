/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_UE-TxTEG-RequestUL-TDOA-Config-r17.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_periodicReporting_r17_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_NR_UE_TxTEG_RequestUL_TDOA_Config_r17_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_NR_periodicReporting_r17_value2enum_3[] = {
	{ 0,	5,	"ms160" },
	{ 1,	5,	"ms320" },
	{ 2,	6,	"ms1280" },
	{ 3,	6,	"ms2560" },
	{ 4,	7,	"ms61440" },
	{ 5,	7,	"ms81920" },
	{ 6,	8,	"ms368640" },
	{ 7,	8,	"ms737280" }
};
static const unsigned int asn_MAP_NR_periodicReporting_r17_enum2value_3[] = {
	2,	/* ms1280(2) */
	0,	/* ms160(0) */
	3,	/* ms2560(3) */
	1,	/* ms320(1) */
	6,	/* ms368640(6) */
	4,	/* ms61440(4) */
	7,	/* ms737280(7) */
	5	/* ms81920(5) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_periodicReporting_r17_specs_3 = {
	asn_MAP_NR_periodicReporting_r17_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_periodicReporting_r17_enum2value_3,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_periodicReporting_r17_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_periodicReporting_r17_3 = {
	"periodicReporting-r17",
	"periodicReporting-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_periodicReporting_r17_tags_3,
	sizeof(asn_DEF_NR_periodicReporting_r17_tags_3)
		/sizeof(asn_DEF_NR_periodicReporting_r17_tags_3[0]) - 1, /* 1 */
	asn_DEF_NR_periodicReporting_r17_tags_3,	/* Same as above */
	sizeof(asn_DEF_NR_periodicReporting_r17_tags_3)
		/sizeof(asn_DEF_NR_periodicReporting_r17_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_periodicReporting_r17_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_periodicReporting_r17_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_UE_TxTEG_RequestUL_TDOA_Config_r17_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_UE_TxTEG_RequestUL_TDOA_Config_r17, choice.oneShot_r17),
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
		"oneShot-r17"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_UE_TxTEG_RequestUL_TDOA_Config_r17, choice.periodicReporting_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_periodicReporting_r17_3,
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
		"periodicReporting-r17"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NR_UE_TxTEG_RequestUL_TDOA_Config_r17_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* oneShot-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* periodicReporting-r17 */
};
asn_CHOICE_specifics_t asn_SPC_NR_UE_TxTEG_RequestUL_TDOA_Config_r17_specs_1 = {
	sizeof(struct NR_UE_TxTEG_RequestUL_TDOA_Config_r17),
	offsetof(struct NR_UE_TxTEG_RequestUL_TDOA_Config_r17, _asn_ctx),
	offsetof(struct NR_UE_TxTEG_RequestUL_TDOA_Config_r17, present),
	sizeof(((struct NR_UE_TxTEG_RequestUL_TDOA_Config_r17 *)0)->present),
	asn_MAP_NR_UE_TxTEG_RequestUL_TDOA_Config_r17_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_NR_UE_TxTEG_RequestUL_TDOA_Config_r17 = {
	"UE-TxTEG-RequestUL-TDOA-Config-r17",
	"UE-TxTEG-RequestUL-TDOA-Config-r17",
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
		&asn_PER_type_NR_UE_TxTEG_RequestUL_TDOA_Config_r17_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_NR_UE_TxTEG_RequestUL_TDOA_Config_r17_1,
	2,	/* Elements count */
	&asn_SPC_NR_UE_TxTEG_RequestUL_TDOA_Config_r17_specs_1	/* Additional specs */
};

