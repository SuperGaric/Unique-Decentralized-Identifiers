/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#include "LPP_TBS-RequestAssistanceData-r14.h"

asn_TYPE_member_t asn_MBR_LPP_TBS_RequestAssistanceData_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_TBS_RequestAssistanceData_r14, mbs_AlmanacAssistanceDataReq_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
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
		"mbs-AlmanacAssistanceDataReq-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_TBS_RequestAssistanceData_r14, mbs_AcquisitionAssistanceDataReq_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
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
		"mbs-AcquisitionAssistanceDataReq-r14"
		},
};
static const ber_tlv_tag_t asn_DEF_LPP_TBS_RequestAssistanceData_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LPP_TBS_RequestAssistanceData_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mbs-AlmanacAssistanceDataReq-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* mbs-AcquisitionAssistanceDataReq-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_LPP_TBS_RequestAssistanceData_r14_specs_1 = {
	sizeof(struct LPP_TBS_RequestAssistanceData_r14),
	offsetof(struct LPP_TBS_RequestAssistanceData_r14, _asn_ctx),
	asn_MAP_LPP_TBS_RequestAssistanceData_r14_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LPP_TBS_RequestAssistanceData_r14 = {
	"TBS-RequestAssistanceData-r14",
	"TBS-RequestAssistanceData-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_LPP_TBS_RequestAssistanceData_r14_tags_1,
	sizeof(asn_DEF_LPP_TBS_RequestAssistanceData_r14_tags_1)
		/sizeof(asn_DEF_LPP_TBS_RequestAssistanceData_r14_tags_1[0]), /* 1 */
	asn_DEF_LPP_TBS_RequestAssistanceData_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_LPP_TBS_RequestAssistanceData_r14_tags_1)
		/sizeof(asn_DEF_LPP_TBS_RequestAssistanceData_r14_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LPP_TBS_RequestAssistanceData_r14_1,
	2,	/* Elements count */
	&asn_SPC_LPP_TBS_RequestAssistanceData_r14_specs_1	/* Additional specs */
};

