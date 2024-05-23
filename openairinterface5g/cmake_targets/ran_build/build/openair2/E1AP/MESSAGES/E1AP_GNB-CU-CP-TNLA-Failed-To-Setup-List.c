/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-PDU-Contents"
 * 	found in "/home/dmt/openairinterface5g/openair2/E1AP/MESSAGES/ASN.1/38463-g80.R16.78.0.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-JER -no-gen-BER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/E1AP/MESSAGES`
 */

#include "E1AP_GNB-CU-CP-TNLA-Failed-To-Setup-List.h"

#include "E1AP_GNB-CU-CP-TNLA-Failed-To-Setup-Item.h"
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_E1AP_GNB_CU_CP_TNLA_Failed_To_Setup_List_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_E1AP_GNB_CU_CP_TNLA_Failed_To_Setup_List_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_E1AP_GNB_CU_CP_TNLA_Failed_To_Setup_Item,
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
static const ber_tlv_tag_t asn_DEF_E1AP_GNB_CU_CP_TNLA_Failed_To_Setup_List_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_E1AP_GNB_CU_CP_TNLA_Failed_To_Setup_List_specs_1 = {
	sizeof(struct E1AP_GNB_CU_CP_TNLA_Failed_To_Setup_List),
	offsetof(struct E1AP_GNB_CU_CP_TNLA_Failed_To_Setup_List, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_E1AP_GNB_CU_CP_TNLA_Failed_To_Setup_List = {
	"GNB-CU-CP-TNLA-Failed-To-Setup-List",
	"GNB-CU-CP-TNLA-Failed-To-Setup-List",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_E1AP_GNB_CU_CP_TNLA_Failed_To_Setup_List_tags_1,
	sizeof(asn_DEF_E1AP_GNB_CU_CP_TNLA_Failed_To_Setup_List_tags_1)
		/sizeof(asn_DEF_E1AP_GNB_CU_CP_TNLA_Failed_To_Setup_List_tags_1[0]), /* 1 */
	asn_DEF_E1AP_GNB_CU_CP_TNLA_Failed_To_Setup_List_tags_1,	/* Same as above */
	sizeof(asn_DEF_E1AP_GNB_CU_CP_TNLA_Failed_To_Setup_List_tags_1)
		/sizeof(asn_DEF_E1AP_GNB_CU_CP_TNLA_Failed_To_Setup_List_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_E1AP_GNB_CU_CP_TNLA_Failed_To_Setup_List_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_E1AP_GNB_CU_CP_TNLA_Failed_To_Setup_List_1,
	1,	/* Single element */
	&asn_SPC_E1AP_GNB_CU_CP_TNLA_Failed_To_Setup_List_specs_1	/* Additional specs */
};

