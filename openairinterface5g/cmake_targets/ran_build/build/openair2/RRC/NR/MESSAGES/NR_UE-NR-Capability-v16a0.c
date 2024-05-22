/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_UE-NR-Capability-v16a0.h"

static const ber_tlv_tag_t asn_DEF_NR_nonCriticalExtension_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_nonCriticalExtension_specs_4 = {
	sizeof(struct NR_UE_NR_Capability_v16a0__nonCriticalExtension),
	offsetof(struct NR_UE_NR_Capability_v16a0__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_nonCriticalExtension_4 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_nonCriticalExtension_tags_4,
	sizeof(asn_DEF_NR_nonCriticalExtension_tags_4)
		/sizeof(asn_DEF_NR_nonCriticalExtension_tags_4[0]) - 1, /* 1 */
	asn_DEF_NR_nonCriticalExtension_tags_4,	/* Same as above */
	sizeof(asn_DEF_NR_nonCriticalExtension_tags_4)
		/sizeof(asn_DEF_NR_nonCriticalExtension_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	0, 0,	/* No members */
	&asn_SPC_NR_nonCriticalExtension_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_UE_NR_Capability_v16a0_1[] = {
	{ ATF_POINTER, 3, offsetof(struct NR_UE_NR_Capability_v16a0, phy_Parameters_v16a0),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_Phy_Parameters_v16a0,
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
		"phy-Parameters-v16a0"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_UE_NR_Capability_v16a0, rf_Parameters_v16a0),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_RF_Parameters_v16a0,
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
		"rf-Parameters-v16a0"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_UE_NR_Capability_v16a0, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_NR_nonCriticalExtension_4,
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
		"nonCriticalExtension"
		},
};
static const int asn_MAP_NR_UE_NR_Capability_v16a0_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_NR_UE_NR_Capability_v16a0_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_UE_NR_Capability_v16a0_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* phy-Parameters-v16a0 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rf-Parameters-v16a0 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_UE_NR_Capability_v16a0_specs_1 = {
	sizeof(struct NR_UE_NR_Capability_v16a0),
	offsetof(struct NR_UE_NR_Capability_v16a0, _asn_ctx),
	asn_MAP_NR_UE_NR_Capability_v16a0_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_NR_UE_NR_Capability_v16a0_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_UE_NR_Capability_v16a0 = {
	"UE-NR-Capability-v16a0",
	"UE-NR-Capability-v16a0",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_UE_NR_Capability_v16a0_tags_1,
	sizeof(asn_DEF_NR_UE_NR_Capability_v16a0_tags_1)
		/sizeof(asn_DEF_NR_UE_NR_Capability_v16a0_tags_1[0]), /* 1 */
	asn_DEF_NR_UE_NR_Capability_v16a0_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_UE_NR_Capability_v16a0_tags_1)
		/sizeof(asn_DEF_NR_UE_NR_Capability_v16a0_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_UE_NR_Capability_v16a0_1,
	3,	/* Elements count */
	&asn_SPC_NR_UE_NR_Capability_v16a0_specs_1	/* Additional specs */
};

