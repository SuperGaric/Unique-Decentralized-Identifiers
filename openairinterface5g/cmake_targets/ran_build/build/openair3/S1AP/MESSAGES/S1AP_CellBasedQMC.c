/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R15/s1ap-15.6.0.asn1"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/S1AP/MESSAGES`
 */

#include "S1AP_CellBasedQMC.h"

#include "S1AP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_S1AP_CellBasedQMC_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_CellBasedQMC, cellIdListforQMC),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_CellIdListforQMC,
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
		"cellIdListforQMC"
		},
	{ ATF_POINTER, 1, offsetof(struct S1AP_CellBasedQMC, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_ProtocolExtensionContainer_7327P33,
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
static const int asn_MAP_S1AP_CellBasedQMC_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_S1AP_CellBasedQMC_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_S1AP_CellBasedQMC_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellIdListforQMC */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_S1AP_CellBasedQMC_specs_1 = {
	sizeof(struct S1AP_CellBasedQMC),
	offsetof(struct S1AP_CellBasedQMC, _asn_ctx),
	asn_MAP_S1AP_CellBasedQMC_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_S1AP_CellBasedQMC_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_CellBasedQMC = {
	"CellBasedQMC",
	"CellBasedQMC",
	&asn_OP_SEQUENCE,
	asn_DEF_S1AP_CellBasedQMC_tags_1,
	sizeof(asn_DEF_S1AP_CellBasedQMC_tags_1)
		/sizeof(asn_DEF_S1AP_CellBasedQMC_tags_1[0]), /* 1 */
	asn_DEF_S1AP_CellBasedQMC_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_CellBasedQMC_tags_1)
		/sizeof(asn_DEF_S1AP_CellBasedQMC_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_S1AP_CellBasedQMC_1,
	2,	/* Elements count */
	&asn_SPC_S1AP_CellBasedQMC_specs_1	/* Additional specs */
};

