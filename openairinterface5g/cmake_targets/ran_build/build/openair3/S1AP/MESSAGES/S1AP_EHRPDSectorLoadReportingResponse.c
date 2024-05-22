/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SonTransfer-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R15/s1ap-15.6.0.asn1"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/S1AP/MESSAGES`
 */

#include "S1AP_EHRPDSectorLoadReportingResponse.h"

asn_TYPE_member_t asn_MBR_S1AP_EHRPDSectorLoadReportingResponse_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_EHRPDSectorLoadReportingResponse, dL_EHRPD_CompositeAvailableCapacity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_EHRPDCompositeAvailableCapacity,
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
		"dL-EHRPD-CompositeAvailableCapacity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_EHRPDSectorLoadReportingResponse, uL_EHRPD_CompositeAvailableCapacity),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_EHRPDCompositeAvailableCapacity,
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
		"uL-EHRPD-CompositeAvailableCapacity"
		},
};
static const ber_tlv_tag_t asn_DEF_S1AP_EHRPDSectorLoadReportingResponse_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_S1AP_EHRPDSectorLoadReportingResponse_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dL-EHRPD-CompositeAvailableCapacity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* uL-EHRPD-CompositeAvailableCapacity */
};
asn_SEQUENCE_specifics_t asn_SPC_S1AP_EHRPDSectorLoadReportingResponse_specs_1 = {
	sizeof(struct S1AP_EHRPDSectorLoadReportingResponse),
	offsetof(struct S1AP_EHRPDSectorLoadReportingResponse, _asn_ctx),
	asn_MAP_S1AP_EHRPDSectorLoadReportingResponse_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_EHRPDSectorLoadReportingResponse = {
	"EHRPDSectorLoadReportingResponse",
	"EHRPDSectorLoadReportingResponse",
	&asn_OP_SEQUENCE,
	asn_DEF_S1AP_EHRPDSectorLoadReportingResponse_tags_1,
	sizeof(asn_DEF_S1AP_EHRPDSectorLoadReportingResponse_tags_1)
		/sizeof(asn_DEF_S1AP_EHRPDSectorLoadReportingResponse_tags_1[0]), /* 1 */
	asn_DEF_S1AP_EHRPDSectorLoadReportingResponse_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_EHRPDSectorLoadReportingResponse_tags_1)
		/sizeof(asn_DEF_S1AP_EHRPDSectorLoadReportingResponse_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_S1AP_EHRPDSectorLoadReportingResponse_1,
	2,	/* Elements count */
	&asn_SPC_S1AP_EHRPDSectorLoadReportingResponse_specs_1	/* Additional specs */
};

