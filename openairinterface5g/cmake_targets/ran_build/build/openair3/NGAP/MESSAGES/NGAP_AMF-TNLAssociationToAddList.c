/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair3/NGAP/MESSAGES/ASN1/ngap-15.8.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -no-gen-example -fno-include-deps -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/NGAP/MESSAGES`
 */

#include "NGAP_AMF-TNLAssociationToAddList.h"

#include "NGAP_AMF-TNLAssociationToAddItem.h"
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_NGAP_AMF_TNLAssociationToAddList_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_NGAP_AMF_TNLAssociationToAddList_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NGAP_AMF_TNLAssociationToAddItem,
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
static const ber_tlv_tag_t asn_DEF_NGAP_AMF_TNLAssociationToAddList_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_NGAP_AMF_TNLAssociationToAddList_specs_1 = {
	sizeof(struct NGAP_AMF_TNLAssociationToAddList),
	offsetof(struct NGAP_AMF_TNLAssociationToAddList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_NGAP_AMF_TNLAssociationToAddList = {
	"AMF-TNLAssociationToAddList",
	"AMF-TNLAssociationToAddList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NGAP_AMF_TNLAssociationToAddList_tags_1,
	sizeof(asn_DEF_NGAP_AMF_TNLAssociationToAddList_tags_1)
		/sizeof(asn_DEF_NGAP_AMF_TNLAssociationToAddList_tags_1[0]), /* 1 */
	asn_DEF_NGAP_AMF_TNLAssociationToAddList_tags_1,	/* Same as above */
	sizeof(asn_DEF_NGAP_AMF_TNLAssociationToAddList_tags_1)
		/sizeof(asn_DEF_NGAP_AMF_TNLAssociationToAddList_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NGAP_AMF_TNLAssociationToAddList_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_NGAP_AMF_TNLAssociationToAddList_1,
	1,	/* Single element */
	&asn_SPC_NGAP_AMF_TNLAssociationToAddList_specs_1	/* Additional specs */
};

