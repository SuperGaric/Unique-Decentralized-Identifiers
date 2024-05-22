/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_AS-Config-v13c0.h"

asn_TYPE_member_t asn_MBR_LTE_AS_Config_v13c0_1[] = {
	{ ATF_POINTER, 4, offsetof(struct LTE_AS_Config_v13c0, radioResourceConfigDedicated_v13c01),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RadioResourceConfigDedicated_v1370,
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
		"radioResourceConfigDedicated-v13c01"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_AS_Config_v13c0, radioResourceConfigDedicated_v13c02),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RadioResourceConfigDedicated_v13c0,
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
		"radioResourceConfigDedicated-v13c02"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_AS_Config_v13c0, sCellToAddModList_v13c0),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SCellToAddModList_v13c0,
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
		"sCellToAddModList-v13c0"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_AS_Config_v13c0, sCellToAddModListExt_v13c0),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SCellToAddModListExt_v13c0,
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
		"sCellToAddModListExt-v13c0"
		},
};
static const int asn_MAP_LTE_AS_Config_v13c0_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_LTE_AS_Config_v13c0_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_AS_Config_v13c0_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* radioResourceConfigDedicated-v13c01 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* radioResourceConfigDedicated-v13c02 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sCellToAddModList-v13c0 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* sCellToAddModListExt-v13c0 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_AS_Config_v13c0_specs_1 = {
	sizeof(struct LTE_AS_Config_v13c0),
	offsetof(struct LTE_AS_Config_v13c0, _asn_ctx),
	asn_MAP_LTE_AS_Config_v13c0_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_LTE_AS_Config_v13c0_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_AS_Config_v13c0 = {
	"AS-Config-v13c0",
	"AS-Config-v13c0",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_AS_Config_v13c0_tags_1,
	sizeof(asn_DEF_LTE_AS_Config_v13c0_tags_1)
		/sizeof(asn_DEF_LTE_AS_Config_v13c0_tags_1[0]), /* 1 */
	asn_DEF_LTE_AS_Config_v13c0_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_AS_Config_v13c0_tags_1)
		/sizeof(asn_DEF_LTE_AS_Config_v13c0_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_AS_Config_v13c0_1,
	4,	/* Elements count */
	&asn_SPC_LTE_AS_Config_v13c0_specs_1	/* Additional specs */
};

