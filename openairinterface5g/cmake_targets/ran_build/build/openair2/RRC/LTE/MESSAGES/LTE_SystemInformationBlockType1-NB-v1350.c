/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_SystemInformationBlockType1-NB-v1350.h"

asn_TYPE_member_t asn_MBR_LTE_SystemInformationBlockType1_NB_v1350_1[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_SystemInformationBlockType1_NB_v1350, cellSelectionInfo_v1350),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_CellSelectionInfo_NB_v1350,
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
		"cellSelectionInfo-v1350"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SystemInformationBlockType1_NB_v1350, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SystemInformationBlockType1_NB_v1430,
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
static const int asn_MAP_LTE_SystemInformationBlockType1_NB_v1350_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_SystemInformationBlockType1_NB_v1350_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SystemInformationBlockType1_NB_v1350_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellSelectionInfo-v1350 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_SystemInformationBlockType1_NB_v1350_specs_1 = {
	sizeof(struct LTE_SystemInformationBlockType1_NB_v1350),
	offsetof(struct LTE_SystemInformationBlockType1_NB_v1350, _asn_ctx),
	asn_MAP_LTE_SystemInformationBlockType1_NB_v1350_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_SystemInformationBlockType1_NB_v1350_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SystemInformationBlockType1_NB_v1350 = {
	"SystemInformationBlockType1-NB-v1350",
	"SystemInformationBlockType1-NB-v1350",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_SystemInformationBlockType1_NB_v1350_tags_1,
	sizeof(asn_DEF_LTE_SystemInformationBlockType1_NB_v1350_tags_1)
		/sizeof(asn_DEF_LTE_SystemInformationBlockType1_NB_v1350_tags_1[0]), /* 1 */
	asn_DEF_LTE_SystemInformationBlockType1_NB_v1350_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SystemInformationBlockType1_NB_v1350_tags_1)
		/sizeof(asn_DEF_LTE_SystemInformationBlockType1_NB_v1350_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_SystemInformationBlockType1_NB_v1350_1,
	2,	/* Elements count */
	&asn_SPC_LTE_SystemInformationBlockType1_NB_v1350_specs_1	/* Additional specs */
};

