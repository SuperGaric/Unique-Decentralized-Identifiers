/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair2/E1AP/MESSAGES/ASN.1/38463-g80.R16.78.0.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-JER -no-gen-BER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/E1AP/MESSAGES`
 */

#include "E1AP_BurstArrivalTime.h"

/*
 * This type is implemented using OCTET_STRING,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_E1AP_BurstArrivalTime_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (4 << 2))
};
asn_TYPE_descriptor_t asn_DEF_E1AP_BurstArrivalTime = {
	"BurstArrivalTime",
	"BurstArrivalTime",
	&asn_OP_OCTET_STRING,
	asn_DEF_E1AP_BurstArrivalTime_tags_1,
	sizeof(asn_DEF_E1AP_BurstArrivalTime_tags_1)
		/sizeof(asn_DEF_E1AP_BurstArrivalTime_tags_1[0]), /* 1 */
	asn_DEF_E1AP_BurstArrivalTime_tags_1,	/* Same as above */
	sizeof(asn_DEF_E1AP_BurstArrivalTime_tags_1)
		/sizeof(asn_DEF_E1AP_BurstArrivalTime_tags_1[0]), /* 1 */
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

