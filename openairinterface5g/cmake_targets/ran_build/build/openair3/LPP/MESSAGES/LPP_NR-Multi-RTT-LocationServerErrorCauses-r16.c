/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#include "LPP_NR-Multi-RTT-LocationServerErrorCauses-r16.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LPP_cause_r16_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LPP_cause_r16_value2enum_2[] = {
	{ 0,	9,	"undefined" },
	{ 1,	34,	"assistanceDataNotSupportedByServer" },
	{ 2,	55,	"assistanceDataSupportedButCurrentlyNotAvailableByServer" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_LPP_cause_r16_enum2value_2[] = {
	1,	/* assistanceDataNotSupportedByServer(1) */
	2,	/* assistanceDataSupportedButCurrentlyNotAvailableByServer(2) */
	0	/* undefined(0) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_LPP_cause_r16_specs_2 = {
	asn_MAP_LPP_cause_r16_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LPP_cause_r16_enum2value_2,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	4,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LPP_cause_r16_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LPP_cause_r16_2 = {
	"cause-r16",
	"cause-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_LPP_cause_r16_tags_2,
	sizeof(asn_DEF_LPP_cause_r16_tags_2)
		/sizeof(asn_DEF_LPP_cause_r16_tags_2[0]) - 1, /* 1 */
	asn_DEF_LPP_cause_r16_tags_2,	/* Same as above */
	sizeof(asn_DEF_LPP_cause_r16_tags_2)
		/sizeof(asn_DEF_LPP_cause_r16_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LPP_cause_r16_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LPP_cause_r16_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LPP_NR_Multi_RTT_LocationServerErrorCauses_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_NR_Multi_RTT_LocationServerErrorCauses_r16, cause_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_cause_r16_2,
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
		"cause-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_LPP_NR_Multi_RTT_LocationServerErrorCauses_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LPP_NR_Multi_RTT_LocationServerErrorCauses_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* cause-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_LPP_NR_Multi_RTT_LocationServerErrorCauses_r16_specs_1 = {
	sizeof(struct LPP_NR_Multi_RTT_LocationServerErrorCauses_r16),
	offsetof(struct LPP_NR_Multi_RTT_LocationServerErrorCauses_r16, _asn_ctx),
	asn_MAP_LPP_NR_Multi_RTT_LocationServerErrorCauses_r16_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LPP_NR_Multi_RTT_LocationServerErrorCauses_r16 = {
	"NR-Multi-RTT-LocationServerErrorCauses-r16",
	"NR-Multi-RTT-LocationServerErrorCauses-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_LPP_NR_Multi_RTT_LocationServerErrorCauses_r16_tags_1,
	sizeof(asn_DEF_LPP_NR_Multi_RTT_LocationServerErrorCauses_r16_tags_1)
		/sizeof(asn_DEF_LPP_NR_Multi_RTT_LocationServerErrorCauses_r16_tags_1[0]), /* 1 */
	asn_DEF_LPP_NR_Multi_RTT_LocationServerErrorCauses_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_LPP_NR_Multi_RTT_LocationServerErrorCauses_r16_tags_1)
		/sizeof(asn_DEF_LPP_NR_Multi_RTT_LocationServerErrorCauses_r16_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LPP_NR_Multi_RTT_LocationServerErrorCauses_r16_1,
	1,	/* Elements count */
	&asn_SPC_LPP_NR_Multi_RTT_LocationServerErrorCauses_r16_specs_1	/* Additional specs */
};

