/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_RF-Parameters-v1610.h"

asn_TYPE_member_t asn_MBR_LTE_RF_Parameters_v1610_1[] = {
	{ ATF_POINTER, 3, offsetof(struct LTE_RF_Parameters_v1610, supportedBandCombination_v1610),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SupportedBandCombination_v1610,
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
		"supportedBandCombination-v1610"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_RF_Parameters_v1610, supportedBandCombinationAdd_v1610),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SupportedBandCombinationAdd_v1610,
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
		"supportedBandCombinationAdd-v1610"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_RF_Parameters_v1610, supportedBandCombinationReduced_v1610),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SupportedBandCombinationReduced_v1610,
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
		"supportedBandCombinationReduced-v1610"
		},
};
static const int asn_MAP_LTE_RF_Parameters_v1610_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_LTE_RF_Parameters_v1610_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_RF_Parameters_v1610_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* supportedBandCombination-v1610 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* supportedBandCombinationAdd-v1610 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* supportedBandCombinationReduced-v1610 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_RF_Parameters_v1610_specs_1 = {
	sizeof(struct LTE_RF_Parameters_v1610),
	offsetof(struct LTE_RF_Parameters_v1610, _asn_ctx),
	asn_MAP_LTE_RF_Parameters_v1610_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_LTE_RF_Parameters_v1610_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_RF_Parameters_v1610 = {
	"RF-Parameters-v1610",
	"RF-Parameters-v1610",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_RF_Parameters_v1610_tags_1,
	sizeof(asn_DEF_LTE_RF_Parameters_v1610_tags_1)
		/sizeof(asn_DEF_LTE_RF_Parameters_v1610_tags_1[0]), /* 1 */
	asn_DEF_LTE_RF_Parameters_v1610_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_RF_Parameters_v1610_tags_1)
		/sizeof(asn_DEF_LTE_RF_Parameters_v1610_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_RF_Parameters_v1610_1,
	3,	/* Elements count */
	&asn_SPC_LTE_RF_Parameters_v1610_specs_1	/* Additional specs */
};
