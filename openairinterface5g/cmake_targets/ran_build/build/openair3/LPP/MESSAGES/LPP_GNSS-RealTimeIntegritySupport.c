/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#include "LPP_GNSS-RealTimeIntegritySupport.h"

static const ber_tlv_tag_t asn_DEF_LPP_GNSS_RealTimeIntegritySupport_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SEQUENCE_specifics_t asn_SPC_LPP_GNSS_RealTimeIntegritySupport_specs_1 = {
	sizeof(struct LPP_GNSS_RealTimeIntegritySupport),
	offsetof(struct LPP_GNSS_RealTimeIntegritySupport, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	0,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LPP_GNSS_RealTimeIntegritySupport = {
	"GNSS-RealTimeIntegritySupport",
	"GNSS-RealTimeIntegritySupport",
	&asn_OP_SEQUENCE,
	asn_DEF_LPP_GNSS_RealTimeIntegritySupport_tags_1,
	sizeof(asn_DEF_LPP_GNSS_RealTimeIntegritySupport_tags_1)
		/sizeof(asn_DEF_LPP_GNSS_RealTimeIntegritySupport_tags_1[0]), /* 1 */
	asn_DEF_LPP_GNSS_RealTimeIntegritySupport_tags_1,	/* Same as above */
	sizeof(asn_DEF_LPP_GNSS_RealTimeIntegritySupport_tags_1)
		/sizeof(asn_DEF_LPP_GNSS_RealTimeIntegritySupport_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	0, 0,	/* No members */
	&asn_SPC_LPP_GNSS_RealTimeIntegritySupport_specs_1	/* Additional specs */
};

