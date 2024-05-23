/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "/home/dmt/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/X2AP/MESSAGES`
 */

#include "X2AP_Limited-list.h"

#include "X2AP_ProtocolExtensionContainer.h"
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_X2AP_Limited_list_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 14,  14,  1,  16384 }	/* (SIZE(1..16384)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_X2AP_Member_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_Limited_list__Member, nrCellID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_NRCGI,
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
		"nrCellID"
		},
	{ ATF_POINTER, 1, offsetof(struct X2AP_Limited_list__Member, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_ProtocolExtensionContainer_8421P95,
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
static const int asn_MAP_X2AP_Member_oms_2[] = { 1 };
static const ber_tlv_tag_t asn_DEF_X2AP_Member_tags_2[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_X2AP_Member_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nrCellID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_X2AP_Member_specs_2 = {
	sizeof(struct X2AP_Limited_list__Member),
	offsetof(struct X2AP_Limited_list__Member, _asn_ctx),
	asn_MAP_X2AP_Member_tag2el_2,
	2,	/* Count of tags in the map */
	asn_MAP_X2AP_Member_oms_2,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_X2AP_Member_2 = {
	"SEQUENCE",
	"SEQUENCE",
	&asn_OP_SEQUENCE,
	asn_DEF_X2AP_Member_tags_2,
	sizeof(asn_DEF_X2AP_Member_tags_2)
		/sizeof(asn_DEF_X2AP_Member_tags_2[0]), /* 1 */
	asn_DEF_X2AP_Member_tags_2,	/* Same as above */
	sizeof(asn_DEF_X2AP_Member_tags_2)
		/sizeof(asn_DEF_X2AP_Member_tags_2[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_X2AP_Member_2,
	2,	/* Elements count */
	&asn_SPC_X2AP_Member_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_X2AP_Limited_list_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_X2AP_Member_2,
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
		""
		},
};
static const ber_tlv_tag_t asn_DEF_X2AP_Limited_list_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_X2AP_Limited_list_specs_1 = {
	sizeof(struct X2AP_Limited_list),
	offsetof(struct X2AP_Limited_list, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_X2AP_Limited_list = {
	"Limited-list",
	"Limited-list",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_X2AP_Limited_list_tags_1,
	sizeof(asn_DEF_X2AP_Limited_list_tags_1)
		/sizeof(asn_DEF_X2AP_Limited_list_tags_1[0]), /* 1 */
	asn_DEF_X2AP_Limited_list_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2AP_Limited_list_tags_1)
		/sizeof(asn_DEF_X2AP_Limited_list_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_X2AP_Limited_list_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_X2AP_Limited_list_1,
	1,	/* Single element */
	&asn_SPC_X2AP_Limited_list_specs_1	/* Additional specs */
};

