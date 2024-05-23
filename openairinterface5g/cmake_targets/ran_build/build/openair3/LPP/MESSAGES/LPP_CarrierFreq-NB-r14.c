/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#include "LPP_CarrierFreq-NB-r14.h"

asn_TYPE_member_t asn_MBR_LPP_CarrierFreq_NB_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_CarrierFreq_NB_r14, carrierFreq_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_ARFCN_ValueEUTRA_r14,
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
		"carrierFreq-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct LPP_CarrierFreq_NB_r14, carrierFreqOffset_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_CarrierFreqOffsetNB_r14,
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
		"carrierFreqOffset-r14"
		},
};
static const int asn_MAP_LPP_CarrierFreq_NB_r14_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_LPP_CarrierFreq_NB_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LPP_CarrierFreq_NB_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierFreq-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* carrierFreqOffset-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_LPP_CarrierFreq_NB_r14_specs_1 = {
	sizeof(struct LPP_CarrierFreq_NB_r14),
	offsetof(struct LPP_CarrierFreq_NB_r14, _asn_ctx),
	asn_MAP_LPP_CarrierFreq_NB_r14_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_LPP_CarrierFreq_NB_r14_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LPP_CarrierFreq_NB_r14 = {
	"CarrierFreq-NB-r14",
	"CarrierFreq-NB-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_LPP_CarrierFreq_NB_r14_tags_1,
	sizeof(asn_DEF_LPP_CarrierFreq_NB_r14_tags_1)
		/sizeof(asn_DEF_LPP_CarrierFreq_NB_r14_tags_1[0]), /* 1 */
	asn_DEF_LPP_CarrierFreq_NB_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_LPP_CarrierFreq_NB_r14_tags_1)
		/sizeof(asn_DEF_LPP_CarrierFreq_NB_r14_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LPP_CarrierFreq_NB_r14_1,
	2,	/* Elements count */
	&asn_SPC_LPP_CarrierFreq_NB_r14_specs_1	/* Additional specs */
};

