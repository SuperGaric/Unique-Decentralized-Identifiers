/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PC5-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_SBCCH-SL-BCH-MessageType.h"

/*
 * This type is implemented using LTE_MasterInformationBlock_SL,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_LTE_SBCCH_SL_BCH_MessageType_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_LTE_SBCCH_SL_BCH_MessageType = {
	"SBCCH-SL-BCH-MessageType",
	"SBCCH-SL-BCH-MessageType",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_SBCCH_SL_BCH_MessageType_tags_1,
	sizeof(asn_DEF_LTE_SBCCH_SL_BCH_MessageType_tags_1)
		/sizeof(asn_DEF_LTE_SBCCH_SL_BCH_MessageType_tags_1[0]), /* 1 */
	asn_DEF_LTE_SBCCH_SL_BCH_MessageType_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SBCCH_SL_BCH_MessageType_tags_1)
		/sizeof(asn_DEF_LTE_SBCCH_SL_BCH_MessageType_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_MasterInformationBlock_SL_1,
	6,	/* Elements count */
	&asn_SPC_LTE_MasterInformationBlock_SL_specs_1	/* Additional specs */
};
