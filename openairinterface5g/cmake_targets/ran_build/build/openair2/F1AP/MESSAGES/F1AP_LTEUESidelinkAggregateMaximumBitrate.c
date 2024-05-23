/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair2/F1AP/MESSAGES/ASN1/R16.3.1/38473-g31.asn"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/F1AP/MESSAGES`
 */

#include "F1AP_LTEUESidelinkAggregateMaximumBitrate.h"

#include "F1AP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_F1AP_LTEUESidelinkAggregateMaximumBitrate_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct F1AP_LTEUESidelinkAggregateMaximumBitrate, uELTESidelinkAggregateMaximumBitrate),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_F1AP_BitRate,
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
		"uELTESidelinkAggregateMaximumBitrate"
		},
	{ ATF_POINTER, 1, offsetof(struct F1AP_LTEUESidelinkAggregateMaximumBitrate, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_F1AP_ProtocolExtensionContainer_10696P148,
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
		"iE-Extensions"
		},
};
static const int asn_MAP_F1AP_LTEUESidelinkAggregateMaximumBitrate_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_F1AP_LTEUESidelinkAggregateMaximumBitrate_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_F1AP_LTEUESidelinkAggregateMaximumBitrate_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* uELTESidelinkAggregateMaximumBitrate */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_F1AP_LTEUESidelinkAggregateMaximumBitrate_specs_1 = {
	sizeof(struct F1AP_LTEUESidelinkAggregateMaximumBitrate),
	offsetof(struct F1AP_LTEUESidelinkAggregateMaximumBitrate, _asn_ctx),
	asn_MAP_F1AP_LTEUESidelinkAggregateMaximumBitrate_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_F1AP_LTEUESidelinkAggregateMaximumBitrate_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_F1AP_LTEUESidelinkAggregateMaximumBitrate = {
	"LTEUESidelinkAggregateMaximumBitrate",
	"LTEUESidelinkAggregateMaximumBitrate",
	&asn_OP_SEQUENCE,
	asn_DEF_F1AP_LTEUESidelinkAggregateMaximumBitrate_tags_1,
	sizeof(asn_DEF_F1AP_LTEUESidelinkAggregateMaximumBitrate_tags_1)
		/sizeof(asn_DEF_F1AP_LTEUESidelinkAggregateMaximumBitrate_tags_1[0]), /* 1 */
	asn_DEF_F1AP_LTEUESidelinkAggregateMaximumBitrate_tags_1,	/* Same as above */
	sizeof(asn_DEF_F1AP_LTEUESidelinkAggregateMaximumBitrate_tags_1)
		/sizeof(asn_DEF_F1AP_LTEUESidelinkAggregateMaximumBitrate_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_F1AP_LTEUESidelinkAggregateMaximumBitrate_1,
	2,	/* Elements count */
	&asn_SPC_F1AP_LTEUESidelinkAggregateMaximumBitrate_specs_1	/* Additional specs */
};

