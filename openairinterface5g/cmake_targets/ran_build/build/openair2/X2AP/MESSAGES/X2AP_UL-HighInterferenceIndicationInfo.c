/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/X2AP/MESSAGES`
 */

#include "X2AP_UL-HighInterferenceIndicationInfo.h"

#include "X2AP_UL-HighInterferenceIndicationInfo-Item.h"
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_X2AP_UL_HighInterferenceIndicationInfo_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  256 }	/* (SIZE(1..256)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_X2AP_UL_HighInterferenceIndicationInfo_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_X2AP_UL_HighInterferenceIndicationInfo_Item,
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
static const ber_tlv_tag_t asn_DEF_X2AP_UL_HighInterferenceIndicationInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_X2AP_UL_HighInterferenceIndicationInfo_specs_1 = {
	sizeof(struct X2AP_UL_HighInterferenceIndicationInfo),
	offsetof(struct X2AP_UL_HighInterferenceIndicationInfo, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_X2AP_UL_HighInterferenceIndicationInfo = {
	"UL-HighInterferenceIndicationInfo",
	"UL-HighInterferenceIndicationInfo",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_X2AP_UL_HighInterferenceIndicationInfo_tags_1,
	sizeof(asn_DEF_X2AP_UL_HighInterferenceIndicationInfo_tags_1)
		/sizeof(asn_DEF_X2AP_UL_HighInterferenceIndicationInfo_tags_1[0]), /* 1 */
	asn_DEF_X2AP_UL_HighInterferenceIndicationInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2AP_UL_HighInterferenceIndicationInfo_tags_1)
		/sizeof(asn_DEF_X2AP_UL_HighInterferenceIndicationInfo_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_X2AP_UL_HighInterferenceIndicationInfo_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_X2AP_UL_HighInterferenceIndicationInfo_1,
	1,	/* Single element */
	&asn_SPC_X2AP_UL_HighInterferenceIndicationInfo_specs_1	/* Additional specs */
};

