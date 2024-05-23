/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_FailureInformation-r16-IEs.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_failureType_r16_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LTE_failureType_r16_value2enum_3[] = {
	{ 0,	11,	"duplication" },
	{ 1,	14,	"dapsHO-failure" },
	{ 2,	6,	"spare2" },
	{ 3,	6,	"spare1" }
};
static const unsigned int asn_MAP_LTE_failureType_r16_enum2value_3[] = {
	1,	/* dapsHO-failure(1) */
	0,	/* duplication(0) */
	3,	/* spare1(3) */
	2	/* spare2(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_failureType_r16_specs_3 = {
	asn_MAP_LTE_failureType_r16_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_failureType_r16_enum2value_3,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_failureType_r16_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_failureType_r16_3 = {
	"failureType-r16",
	"failureType-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_failureType_r16_tags_3,
	sizeof(asn_DEF_LTE_failureType_r16_tags_3)
		/sizeof(asn_DEF_LTE_failureType_r16_tags_3[0]) - 1, /* 1 */
	asn_DEF_LTE_failureType_r16_tags_3,	/* Same as above */
	sizeof(asn_DEF_LTE_failureType_r16_tags_3)
		/sizeof(asn_DEF_LTE_failureType_r16_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_failureType_r16_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_failureType_r16_specs_3	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_LTE_nonCriticalExtension_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_nonCriticalExtension_specs_8 = {
	sizeof(struct LTE_FailureInformation_r16_IEs__nonCriticalExtension),
	offsetof(struct LTE_FailureInformation_r16_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_nonCriticalExtension_8 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_nonCriticalExtension_tags_8,
	sizeof(asn_DEF_LTE_nonCriticalExtension_tags_8)
		/sizeof(asn_DEF_LTE_nonCriticalExtension_tags_8[0]) - 1, /* 1 */
	asn_DEF_LTE_nonCriticalExtension_tags_8,	/* Same as above */
	sizeof(asn_DEF_LTE_nonCriticalExtension_tags_8)
		/sizeof(asn_DEF_LTE_nonCriticalExtension_tags_8[0]), /* 2 */
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
	&asn_SPC_LTE_nonCriticalExtension_specs_8	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_FailureInformation_r16_IEs_1[] = {
	{ ATF_POINTER, 3, offsetof(struct LTE_FailureInformation_r16_IEs, failedLogicalChannelIdentity_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_FailedLogicalChannelIdentity_r16,
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
		"failedLogicalChannelIdentity-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_FailureInformation_r16_IEs, failureType_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_failureType_r16_3,
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
		"failureType-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_FailureInformation_r16_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_LTE_nonCriticalExtension_8,
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
		"nonCriticalExtension"
		},
};
static const int asn_MAP_LTE_FailureInformation_r16_IEs_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_LTE_FailureInformation_r16_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_FailureInformation_r16_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* failedLogicalChannelIdentity-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* failureType-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_FailureInformation_r16_IEs_specs_1 = {
	sizeof(struct LTE_FailureInformation_r16_IEs),
	offsetof(struct LTE_FailureInformation_r16_IEs, _asn_ctx),
	asn_MAP_LTE_FailureInformation_r16_IEs_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_LTE_FailureInformation_r16_IEs_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_FailureInformation_r16_IEs = {
	"FailureInformation-r16-IEs",
	"FailureInformation-r16-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_FailureInformation_r16_IEs_tags_1,
	sizeof(asn_DEF_LTE_FailureInformation_r16_IEs_tags_1)
		/sizeof(asn_DEF_LTE_FailureInformation_r16_IEs_tags_1[0]), /* 1 */
	asn_DEF_LTE_FailureInformation_r16_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_FailureInformation_r16_IEs_tags_1)
		/sizeof(asn_DEF_LTE_FailureInformation_r16_IEs_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_FailureInformation_r16_IEs_1,
	3,	/* Elements count */
	&asn_SPC_LTE_FailureInformation_r16_IEs_specs_1	/* Additional specs */
};

