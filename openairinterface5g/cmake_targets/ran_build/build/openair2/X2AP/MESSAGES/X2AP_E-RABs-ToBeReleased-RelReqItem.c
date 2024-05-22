/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "/home/dmt/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/X2AP/MESSAGES`
 */

#include "X2AP_E-RABs-ToBeReleased-RelReqItem.h"

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_X2AP_E_RABs_ToBeReleased_RelReqItem_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_X2AP_E_RABs_ToBeReleased_RelReqItem_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_E_RABs_ToBeReleased_RelReqItem, choice.sCG_Bearer),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_E_RABs_ToBeReleased_RelReqItem_SCG_Bearer,
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
		"sCG-Bearer"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_E_RABs_ToBeReleased_RelReqItem, choice.split_Bearer),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_E_RABs_ToBeReleased_RelReqItem_Split_Bearer,
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
		"split-Bearer"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_X2AP_E_RABs_ToBeReleased_RelReqItem_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sCG-Bearer */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* split-Bearer */
};
asn_CHOICE_specifics_t asn_SPC_X2AP_E_RABs_ToBeReleased_RelReqItem_specs_1 = {
	sizeof(struct X2AP_E_RABs_ToBeReleased_RelReqItem),
	offsetof(struct X2AP_E_RABs_ToBeReleased_RelReqItem, _asn_ctx),
	offsetof(struct X2AP_E_RABs_ToBeReleased_RelReqItem, present),
	sizeof(((struct X2AP_E_RABs_ToBeReleased_RelReqItem *)0)->present),
	asn_MAP_X2AP_E_RABs_ToBeReleased_RelReqItem_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_X2AP_E_RABs_ToBeReleased_RelReqItem = {
	"E-RABs-ToBeReleased-RelReqItem",
	"E-RABs-ToBeReleased-RelReqItem",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_X2AP_E_RABs_ToBeReleased_RelReqItem_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_X2AP_E_RABs_ToBeReleased_RelReqItem_1,
	2,	/* Elements count */
	&asn_SPC_X2AP_E_RABs_ToBeReleased_RelReqItem_specs_1	/* Additional specs */
};

