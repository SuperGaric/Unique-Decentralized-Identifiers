/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/X2AP/MESSAGES`
 */

#include "X2AP_CompositeAvailableCapacityGroup.h"

#include "X2AP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_X2AP_CompositeAvailableCapacityGroup_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_CompositeAvailableCapacityGroup, dL_CompositeAvailableCapacity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_CompositeAvailableCapacity,
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
		"dL-CompositeAvailableCapacity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_CompositeAvailableCapacityGroup, uL_CompositeAvailableCapacity),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_CompositeAvailableCapacity,
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
		"uL-CompositeAvailableCapacity"
		},
	{ ATF_POINTER, 1, offsetof(struct X2AP_CompositeAvailableCapacityGroup, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_ProtocolExtensionContainer_8421P121,
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
static const int asn_MAP_X2AP_CompositeAvailableCapacityGroup_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_X2AP_CompositeAvailableCapacityGroup_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_X2AP_CompositeAvailableCapacityGroup_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dL-CompositeAvailableCapacity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* uL-CompositeAvailableCapacity */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_X2AP_CompositeAvailableCapacityGroup_specs_1 = {
	sizeof(struct X2AP_CompositeAvailableCapacityGroup),
	offsetof(struct X2AP_CompositeAvailableCapacityGroup, _asn_ctx),
	asn_MAP_X2AP_CompositeAvailableCapacityGroup_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_X2AP_CompositeAvailableCapacityGroup_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_X2AP_CompositeAvailableCapacityGroup = {
	"CompositeAvailableCapacityGroup",
	"CompositeAvailableCapacityGroup",
	&asn_OP_SEQUENCE,
	asn_DEF_X2AP_CompositeAvailableCapacityGroup_tags_1,
	sizeof(asn_DEF_X2AP_CompositeAvailableCapacityGroup_tags_1)
		/sizeof(asn_DEF_X2AP_CompositeAvailableCapacityGroup_tags_1[0]), /* 1 */
	asn_DEF_X2AP_CompositeAvailableCapacityGroup_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2AP_CompositeAvailableCapacityGroup_tags_1)
		/sizeof(asn_DEF_X2AP_CompositeAvailableCapacityGroup_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_X2AP_CompositeAvailableCapacityGroup_1,
	3,	/* Elements count */
	&asn_SPC_X2AP_CompositeAvailableCapacityGroup_specs_1	/* Additional specs */
};

