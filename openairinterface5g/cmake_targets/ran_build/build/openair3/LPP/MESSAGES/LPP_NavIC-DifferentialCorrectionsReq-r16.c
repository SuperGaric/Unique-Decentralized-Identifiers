/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#include "LPP_NavIC-DifferentialCorrectionsReq-r16.h"

asn_TYPE_member_t asn_MBR_LPP_NavIC_DifferentialCorrectionsReq_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_NavIC_DifferentialCorrectionsReq_r16, dgnss_SignalsReq_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_GNSS_SignalIDs,
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
		"dgnss-SignalsReq-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_LPP_NavIC_DifferentialCorrectionsReq_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LPP_NavIC_DifferentialCorrectionsReq_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* dgnss-SignalsReq-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_LPP_NavIC_DifferentialCorrectionsReq_r16_specs_1 = {
	sizeof(struct LPP_NavIC_DifferentialCorrectionsReq_r16),
	offsetof(struct LPP_NavIC_DifferentialCorrectionsReq_r16, _asn_ctx),
	asn_MAP_LPP_NavIC_DifferentialCorrectionsReq_r16_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LPP_NavIC_DifferentialCorrectionsReq_r16 = {
	"NavIC-DifferentialCorrectionsReq-r16",
	"NavIC-DifferentialCorrectionsReq-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_LPP_NavIC_DifferentialCorrectionsReq_r16_tags_1,
	sizeof(asn_DEF_LPP_NavIC_DifferentialCorrectionsReq_r16_tags_1)
		/sizeof(asn_DEF_LPP_NavIC_DifferentialCorrectionsReq_r16_tags_1[0]), /* 1 */
	asn_DEF_LPP_NavIC_DifferentialCorrectionsReq_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_LPP_NavIC_DifferentialCorrectionsReq_r16_tags_1)
		/sizeof(asn_DEF_LPP_NavIC_DifferentialCorrectionsReq_r16_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LPP_NavIC_DifferentialCorrectionsReq_r16_1,
	1,	/* Elements count */
	&asn_SPC_LPP_NavIC_DifferentialCorrectionsReq_r16_specs_1	/* Additional specs */
};

