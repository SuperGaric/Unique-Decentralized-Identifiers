/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/X2AP/MESSAGES`
 */

#include "X2AP_SeNBtoMeNBContainer.h"

/*
 * This type is implemented using OCTET_STRING,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_X2AP_SeNBtoMeNBContainer_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (4 << 2))
};
asn_TYPE_descriptor_t asn_DEF_X2AP_SeNBtoMeNBContainer = {
	"SeNBtoMeNBContainer",
	"SeNBtoMeNBContainer",
	&asn_OP_OCTET_STRING,
	asn_DEF_X2AP_SeNBtoMeNBContainer_tags_1,
	sizeof(asn_DEF_X2AP_SeNBtoMeNBContainer_tags_1)
		/sizeof(asn_DEF_X2AP_SeNBtoMeNBContainer_tags_1[0]), /* 1 */
	asn_DEF_X2AP_SeNBtoMeNBContainer_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2AP_SeNBtoMeNBContainer_tags_1)
		/sizeof(asn_DEF_X2AP_SeNBtoMeNBContainer_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		OCTET_STRING_constraint
	},
	0, 0,	/* No members */
	&asn_SPC_OCTET_STRING_specs	/* Additional specs */
};

