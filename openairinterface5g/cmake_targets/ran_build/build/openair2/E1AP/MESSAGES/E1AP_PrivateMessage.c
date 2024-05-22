/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-PDU-Contents"
 * 	found in "/home/dmt/openairinterface5g/openair2/E1AP/MESSAGES/ASN.1/38463-g80.R16.78.0.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-JER -no-gen-BER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/E1AP/MESSAGES`
 */

#include "E1AP_PrivateMessage.h"

asn_TYPE_member_t asn_MBR_E1AP_PrivateMessage_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E1AP_PrivateMessage, privateIEs),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E1AP_PrivateIE_Container_4977P0,
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
		"privateIEs"
		},
};
static const ber_tlv_tag_t asn_DEF_E1AP_PrivateMessage_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E1AP_PrivateMessage_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* privateIEs */
};
asn_SEQUENCE_specifics_t asn_SPC_E1AP_PrivateMessage_specs_1 = {
	sizeof(struct E1AP_PrivateMessage),
	offsetof(struct E1AP_PrivateMessage, _asn_ctx),
	asn_MAP_E1AP_PrivateMessage_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E1AP_PrivateMessage = {
	"PrivateMessage",
	"PrivateMessage",
	&asn_OP_SEQUENCE,
	asn_DEF_E1AP_PrivateMessage_tags_1,
	sizeof(asn_DEF_E1AP_PrivateMessage_tags_1)
		/sizeof(asn_DEF_E1AP_PrivateMessage_tags_1[0]), /* 1 */
	asn_DEF_E1AP_PrivateMessage_tags_1,	/* Same as above */
	sizeof(asn_DEF_E1AP_PrivateMessage_tags_1)
		/sizeof(asn_DEF_E1AP_PrivateMessage_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_E1AP_PrivateMessage_1,
	1,	/* Elements count */
	&asn_SPC_E1AP_PrivateMessage_specs_1	/* Additional specs */
};

