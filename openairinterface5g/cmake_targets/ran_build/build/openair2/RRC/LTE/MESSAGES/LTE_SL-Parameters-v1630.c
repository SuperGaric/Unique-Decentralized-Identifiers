/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_SL-Parameters-v1630.h"

asn_TYPE_member_t asn_MBR_LTE_SL_Parameters_v1630_1[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_SL_Parameters_v1630, v2x_SupportedBandCombinationListEUTRA_NR_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_V2X_SupportedBandCombinationEUTRA_NR_v1630,
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
		"v2x-SupportedBandCombinationListEUTRA-NR-r16"
		},
};
static const int asn_MAP_LTE_SL_Parameters_v1630_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_SL_Parameters_v1630_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SL_Parameters_v1630_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* v2x-SupportedBandCombinationListEUTRA-NR-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_SL_Parameters_v1630_specs_1 = {
	sizeof(struct LTE_SL_Parameters_v1630),
	offsetof(struct LTE_SL_Parameters_v1630, _asn_ctx),
	asn_MAP_LTE_SL_Parameters_v1630_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_SL_Parameters_v1630_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SL_Parameters_v1630 = {
	"SL-Parameters-v1630",
	"SL-Parameters-v1630",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_SL_Parameters_v1630_tags_1,
	sizeof(asn_DEF_LTE_SL_Parameters_v1630_tags_1)
		/sizeof(asn_DEF_LTE_SL_Parameters_v1630_tags_1[0]), /* 1 */
	asn_DEF_LTE_SL_Parameters_v1630_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SL_Parameters_v1630_tags_1)
		/sizeof(asn_DEF_LTE_SL_Parameters_v1630_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_SL_Parameters_v1630_1,
	1,	/* Elements count */
	&asn_SPC_LTE_SL_Parameters_v1630_specs_1	/* Additional specs */
};

