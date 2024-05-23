/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_BWP-UplinkDedicatedSDT-r17.h"

asn_TYPE_member_t asn_MBR_NR_BWP_UplinkDedicatedSDT_r17_1[] = {
	{ ATF_POINTER, 3, offsetof(struct NR_BWP_UplinkDedicatedSDT_r17, pusch_Config_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_SetupRelease_PUSCH_Config,
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
		"pusch-Config-r17"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_BWP_UplinkDedicatedSDT_r17, configuredGrantConfigToAddModList_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_ConfiguredGrantConfigToAddModList_r16,
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
		"configuredGrantConfigToAddModList-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_BWP_UplinkDedicatedSDT_r17, configuredGrantConfigToReleaseList_r17),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_ConfiguredGrantConfigToReleaseList_r16,
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
		"configuredGrantConfigToReleaseList-r17"
		},
};
static const int asn_MAP_NR_BWP_UplinkDedicatedSDT_r17_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_NR_BWP_UplinkDedicatedSDT_r17_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_BWP_UplinkDedicatedSDT_r17_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pusch-Config-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* configuredGrantConfigToAddModList-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* configuredGrantConfigToReleaseList-r17 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_BWP_UplinkDedicatedSDT_r17_specs_1 = {
	sizeof(struct NR_BWP_UplinkDedicatedSDT_r17),
	offsetof(struct NR_BWP_UplinkDedicatedSDT_r17, _asn_ctx),
	asn_MAP_NR_BWP_UplinkDedicatedSDT_r17_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_NR_BWP_UplinkDedicatedSDT_r17_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_BWP_UplinkDedicatedSDT_r17 = {
	"BWP-UplinkDedicatedSDT-r17",
	"BWP-UplinkDedicatedSDT-r17",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_BWP_UplinkDedicatedSDT_r17_tags_1,
	sizeof(asn_DEF_NR_BWP_UplinkDedicatedSDT_r17_tags_1)
		/sizeof(asn_DEF_NR_BWP_UplinkDedicatedSDT_r17_tags_1[0]), /* 1 */
	asn_DEF_NR_BWP_UplinkDedicatedSDT_r17_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_BWP_UplinkDedicatedSDT_r17_tags_1)
		/sizeof(asn_DEF_NR_BWP_UplinkDedicatedSDT_r17_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_BWP_UplinkDedicatedSDT_r17_1,
	3,	/* Elements count */
	&asn_SPC_NR_BWP_UplinkDedicatedSDT_r17_specs_1	/* Additional specs */
};

