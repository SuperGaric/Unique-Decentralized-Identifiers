/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair2/E1AP/MESSAGES/ASN.1/38463-g80.R16.78.0.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-JER -no-gen-BER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/E1AP/MESSAGES`
 */

#include "E1AP_DRB-Confirm-Modified-Item-EUTRAN.h"

#include "E1AP_Cell-Group-Information.h"
#include "E1AP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_E1AP_DRB_Confirm_Modified_Item_EUTRAN_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E1AP_DRB_Confirm_Modified_Item_EUTRAN, dRB_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E1AP_DRB_ID,
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
		"dRB-ID"
		},
	{ ATF_POINTER, 2, offsetof(struct E1AP_DRB_Confirm_Modified_Item_EUTRAN, cell_Group_Information),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E1AP_Cell_Group_Information,
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
		"cell-Group-Information"
		},
	{ ATF_POINTER, 1, offsetof(struct E1AP_DRB_Confirm_Modified_Item_EUTRAN, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E1AP_ProtocolExtensionContainer_4961P15,
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
static const int asn_MAP_E1AP_DRB_Confirm_Modified_Item_EUTRAN_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_E1AP_DRB_Confirm_Modified_Item_EUTRAN_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E1AP_DRB_Confirm_Modified_Item_EUTRAN_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dRB-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cell-Group-Information */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_E1AP_DRB_Confirm_Modified_Item_EUTRAN_specs_1 = {
	sizeof(struct E1AP_DRB_Confirm_Modified_Item_EUTRAN),
	offsetof(struct E1AP_DRB_Confirm_Modified_Item_EUTRAN, _asn_ctx),
	asn_MAP_E1AP_DRB_Confirm_Modified_Item_EUTRAN_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_E1AP_DRB_Confirm_Modified_Item_EUTRAN_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E1AP_DRB_Confirm_Modified_Item_EUTRAN = {
	"DRB-Confirm-Modified-Item-EUTRAN",
	"DRB-Confirm-Modified-Item-EUTRAN",
	&asn_OP_SEQUENCE,
	asn_DEF_E1AP_DRB_Confirm_Modified_Item_EUTRAN_tags_1,
	sizeof(asn_DEF_E1AP_DRB_Confirm_Modified_Item_EUTRAN_tags_1)
		/sizeof(asn_DEF_E1AP_DRB_Confirm_Modified_Item_EUTRAN_tags_1[0]), /* 1 */
	asn_DEF_E1AP_DRB_Confirm_Modified_Item_EUTRAN_tags_1,	/* Same as above */
	sizeof(asn_DEF_E1AP_DRB_Confirm_Modified_Item_EUTRAN_tags_1)
		/sizeof(asn_DEF_E1AP_DRB_Confirm_Modified_Item_EUTRAN_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_E1AP_DRB_Confirm_Modified_Item_EUTRAN_1,
	3,	/* Elements count */
	&asn_SPC_E1AP_DRB_Confirm_Modified_Item_EUTRAN_specs_1	/* Additional specs */
};

