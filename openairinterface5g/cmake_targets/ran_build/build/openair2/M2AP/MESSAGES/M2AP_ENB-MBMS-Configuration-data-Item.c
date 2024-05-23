/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M2AP-Ies"
 * 	found in "/home/dmt/openairinterface5g/openair2/M2AP/MESSAGES/ASN1/m2ap-14.0.0.asn"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/M2AP/MESSAGES`
 */

#include "M2AP_ENB-MBMS-Configuration-data-Item.h"

#include "M2AP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_M2AP_ENB_MBMS_Configuration_data_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct M2AP_ENB_MBMS_Configuration_data_Item, eCGI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_M2AP_ECGI,
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
		"eCGI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct M2AP_ENB_MBMS_Configuration_data_Item, mbsfnSynchronisationArea),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_M2AP_MBSFN_SynchronisationArea_ID,
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
		"mbsfnSynchronisationArea"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct M2AP_ENB_MBMS_Configuration_data_Item, mbmsServiceAreaList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_M2AP_MBMS_Service_Area_ID_List,
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
		"mbmsServiceAreaList"
		},
	{ ATF_POINTER, 1, offsetof(struct M2AP_ENB_MBMS_Configuration_data_Item, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_M2AP_ProtocolExtensionContainer_1871P9,
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
static const int asn_MAP_M2AP_ENB_MBMS_Configuration_data_Item_oms_1[] = { 3 };
static const ber_tlv_tag_t asn_DEF_M2AP_ENB_MBMS_Configuration_data_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_M2AP_ENB_MBMS_Configuration_data_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eCGI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mbsfnSynchronisationArea */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* mbmsServiceAreaList */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_M2AP_ENB_MBMS_Configuration_data_Item_specs_1 = {
	sizeof(struct M2AP_ENB_MBMS_Configuration_data_Item),
	offsetof(struct M2AP_ENB_MBMS_Configuration_data_Item, _asn_ctx),
	asn_MAP_M2AP_ENB_MBMS_Configuration_data_Item_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_M2AP_ENB_MBMS_Configuration_data_Item_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_M2AP_ENB_MBMS_Configuration_data_Item = {
	"ENB-MBMS-Configuration-data-Item",
	"ENB-MBMS-Configuration-data-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_M2AP_ENB_MBMS_Configuration_data_Item_tags_1,
	sizeof(asn_DEF_M2AP_ENB_MBMS_Configuration_data_Item_tags_1)
		/sizeof(asn_DEF_M2AP_ENB_MBMS_Configuration_data_Item_tags_1[0]), /* 1 */
	asn_DEF_M2AP_ENB_MBMS_Configuration_data_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_M2AP_ENB_MBMS_Configuration_data_Item_tags_1)
		/sizeof(asn_DEF_M2AP_ENB_MBMS_Configuration_data_Item_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_M2AP_ENB_MBMS_Configuration_data_Item_1,
	4,	/* Elements count */
	&asn_SPC_M2AP_ENB_MBMS_Configuration_data_Item_specs_1	/* Additional specs */
};

