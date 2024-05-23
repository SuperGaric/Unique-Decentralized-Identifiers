/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_P-C-AndCBSR-Pair-r13a.h"

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_LTE_P_C_AndCBSR_Pair_r13a_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (SIZE(1..2)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_LTE_P_C_AndCBSR_Pair_r13a_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_LTE_P_C_AndCBSR_r11,
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
static const ber_tlv_tag_t asn_DEF_LTE_P_C_AndCBSR_Pair_r13a_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_LTE_P_C_AndCBSR_Pair_r13a_specs_1 = {
	sizeof(struct LTE_P_C_AndCBSR_Pair_r13a),
	offsetof(struct LTE_P_C_AndCBSR_Pair_r13a, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_LTE_P_C_AndCBSR_Pair_r13a = {
	"P-C-AndCBSR-Pair-r13a",
	"P-C-AndCBSR-Pair-r13a",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_LTE_P_C_AndCBSR_Pair_r13a_tags_1,
	sizeof(asn_DEF_LTE_P_C_AndCBSR_Pair_r13a_tags_1)
		/sizeof(asn_DEF_LTE_P_C_AndCBSR_Pair_r13a_tags_1[0]), /* 1 */
	asn_DEF_LTE_P_C_AndCBSR_Pair_r13a_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_P_C_AndCBSR_Pair_r13a_tags_1)
		/sizeof(asn_DEF_LTE_P_C_AndCBSR_Pair_r13a_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_P_C_AndCBSR_Pair_r13a_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_LTE_P_C_AndCBSR_Pair_r13a_1,
	1,	/* Single element */
	&asn_SPC_LTE_P_C_AndCBSR_Pair_r13a_specs_1	/* Additional specs */
};

