/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair2/F1AP/MESSAGES/ASN1/R16.3.1/38473-g31.asn"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/F1AP/MESSAGES`
 */

#include "F1AP_BroadcastPNI-NPN-ID-List.h"

#include "F1AP_BroadcastPNI-NPN-ID-List-Item.h"
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_F1AP_BroadcastPNI_NPN_ID_List_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  12 }	/* (SIZE(1..12)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_F1AP_BroadcastPNI_NPN_ID_List_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_F1AP_BroadcastPNI_NPN_ID_List_Item,
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
static const ber_tlv_tag_t asn_DEF_F1AP_BroadcastPNI_NPN_ID_List_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_F1AP_BroadcastPNI_NPN_ID_List_specs_1 = {
	sizeof(struct F1AP_BroadcastPNI_NPN_ID_List),
	offsetof(struct F1AP_BroadcastPNI_NPN_ID_List, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_F1AP_BroadcastPNI_NPN_ID_List = {
	"BroadcastPNI-NPN-ID-List",
	"BroadcastPNI-NPN-ID-List",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_F1AP_BroadcastPNI_NPN_ID_List_tags_1,
	sizeof(asn_DEF_F1AP_BroadcastPNI_NPN_ID_List_tags_1)
		/sizeof(asn_DEF_F1AP_BroadcastPNI_NPN_ID_List_tags_1[0]), /* 1 */
	asn_DEF_F1AP_BroadcastPNI_NPN_ID_List_tags_1,	/* Same as above */
	sizeof(asn_DEF_F1AP_BroadcastPNI_NPN_ID_List_tags_1)
		/sizeof(asn_DEF_F1AP_BroadcastPNI_NPN_ID_List_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_F1AP_BroadcastPNI_NPN_ID_List_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_F1AP_BroadcastPNI_NPN_ID_List_1,
	1,	/* Single element */
	&asn_SPC_F1AP_BroadcastPNI_NPN_ID_List_specs_1	/* Additional specs */
};

