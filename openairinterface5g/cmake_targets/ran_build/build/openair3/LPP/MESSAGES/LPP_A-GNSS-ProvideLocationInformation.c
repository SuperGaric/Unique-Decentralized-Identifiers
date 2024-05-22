/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#include "LPP_A-GNSS-ProvideLocationInformation.h"

#include "LPP_GNSS-SignalMeasurementInformation.h"
#include "LPP_GNSS-LocationInformation.h"
#include "LPP_A-GNSS-Error.h"
asn_TYPE_member_t asn_MBR_LPP_A_GNSS_ProvideLocationInformation_1[] = {
	{ ATF_POINTER, 3, offsetof(struct LPP_A_GNSS_ProvideLocationInformation, gnss_SignalMeasurementInformation),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_GNSS_SignalMeasurementInformation,
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
		"gnss-SignalMeasurementInformation"
		},
	{ ATF_POINTER, 2, offsetof(struct LPP_A_GNSS_ProvideLocationInformation, gnss_LocationInformation),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_GNSS_LocationInformation,
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
		"gnss-LocationInformation"
		},
	{ ATF_POINTER, 1, offsetof(struct LPP_A_GNSS_ProvideLocationInformation, gnss_Error),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LPP_A_GNSS_Error,
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
		"gnss-Error"
		},
};
static const int asn_MAP_LPP_A_GNSS_ProvideLocationInformation_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_LPP_A_GNSS_ProvideLocationInformation_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LPP_A_GNSS_ProvideLocationInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gnss-SignalMeasurementInformation */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* gnss-LocationInformation */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* gnss-Error */
};
asn_SEQUENCE_specifics_t asn_SPC_LPP_A_GNSS_ProvideLocationInformation_specs_1 = {
	sizeof(struct LPP_A_GNSS_ProvideLocationInformation),
	offsetof(struct LPP_A_GNSS_ProvideLocationInformation, _asn_ctx),
	asn_MAP_LPP_A_GNSS_ProvideLocationInformation_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_LPP_A_GNSS_ProvideLocationInformation_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LPP_A_GNSS_ProvideLocationInformation = {
	"A-GNSS-ProvideLocationInformation",
	"A-GNSS-ProvideLocationInformation",
	&asn_OP_SEQUENCE,
	asn_DEF_LPP_A_GNSS_ProvideLocationInformation_tags_1,
	sizeof(asn_DEF_LPP_A_GNSS_ProvideLocationInformation_tags_1)
		/sizeof(asn_DEF_LPP_A_GNSS_ProvideLocationInformation_tags_1[0]), /* 1 */
	asn_DEF_LPP_A_GNSS_ProvideLocationInformation_tags_1,	/* Same as above */
	sizeof(asn_DEF_LPP_A_GNSS_ProvideLocationInformation_tags_1)
		/sizeof(asn_DEF_LPP_A_GNSS_ProvideLocationInformation_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LPP_A_GNSS_ProvideLocationInformation_1,
	3,	/* Elements count */
	&asn_SPC_LPP_A_GNSS_ProvideLocationInformation_specs_1	/* Additional specs */
};

