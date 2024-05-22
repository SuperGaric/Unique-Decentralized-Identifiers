/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-PDU-Contents"
 * 	found in "/home/dmt/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R15/s1ap-15.6.0.asn1"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/S1AP/MESSAGES`
 */

#include "S1AP_E-RABNotToBeModifiedItemBearerModInd.h"

#include "S1AP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_S1AP_E_RABNotToBeModifiedItemBearerModInd_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_E_RABNotToBeModifiedItemBearerModInd, e_RAB_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_E_RAB_ID,
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
		"e-RAB-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_E_RABNotToBeModifiedItemBearerModInd, transportLayerAddress),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_TransportLayerAddress,
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
		"transportLayerAddress"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_E_RABNotToBeModifiedItemBearerModInd, dL_GTP_TEID),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_GTP_TEID,
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
		"dL-GTP-TEID"
		},
	{ ATF_POINTER, 1, offsetof(struct S1AP_E_RABNotToBeModifiedItemBearerModInd, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_ProtocolExtensionContainer_7327P15,
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
static const int asn_MAP_S1AP_E_RABNotToBeModifiedItemBearerModInd_oms_1[] = { 3 };
static const ber_tlv_tag_t asn_DEF_S1AP_E_RABNotToBeModifiedItemBearerModInd_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_S1AP_E_RABNotToBeModifiedItemBearerModInd_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* e-RAB-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* transportLayerAddress */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* dL-GTP-TEID */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_S1AP_E_RABNotToBeModifiedItemBearerModInd_specs_1 = {
	sizeof(struct S1AP_E_RABNotToBeModifiedItemBearerModInd),
	offsetof(struct S1AP_E_RABNotToBeModifiedItemBearerModInd, _asn_ctx),
	asn_MAP_S1AP_E_RABNotToBeModifiedItemBearerModInd_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_S1AP_E_RABNotToBeModifiedItemBearerModInd_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_E_RABNotToBeModifiedItemBearerModInd = {
	"E-RABNotToBeModifiedItemBearerModInd",
	"E-RABNotToBeModifiedItemBearerModInd",
	&asn_OP_SEQUENCE,
	asn_DEF_S1AP_E_RABNotToBeModifiedItemBearerModInd_tags_1,
	sizeof(asn_DEF_S1AP_E_RABNotToBeModifiedItemBearerModInd_tags_1)
		/sizeof(asn_DEF_S1AP_E_RABNotToBeModifiedItemBearerModInd_tags_1[0]), /* 1 */
	asn_DEF_S1AP_E_RABNotToBeModifiedItemBearerModInd_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_E_RABNotToBeModifiedItemBearerModInd_tags_1)
		/sizeof(asn_DEF_S1AP_E_RABNotToBeModifiedItemBearerModInd_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_S1AP_E_RABNotToBeModifiedItemBearerModInd_1,
	4,	/* Elements count */
	&asn_SPC_S1AP_E_RABNotToBeModifiedItemBearerModInd_specs_1	/* Additional specs */
};

