/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_RRCEarlyDataRequest-NB-r15-IEs.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_establishmentCause_r15_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LTE_establishmentCause_r15_value2enum_3[] = {
	{ 0,	7,	"mo-Data" },
	{ 1,	16,	"mo-ExceptionData" },
	{ 2,	19,	"delayTolerantAccess" },
	{ 3,	15,	"mt-Access-v1610" }
};
static const unsigned int asn_MAP_LTE_establishmentCause_r15_enum2value_3[] = {
	2,	/* delayTolerantAccess(2) */
	0,	/* mo-Data(0) */
	1,	/* mo-ExceptionData(1) */
	3	/* mt-Access-v1610(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_establishmentCause_r15_specs_3 = {
	asn_MAP_LTE_establishmentCause_r15_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_establishmentCause_r15_enum2value_3,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_establishmentCause_r15_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_establishmentCause_r15_3 = {
	"establishmentCause-r15",
	"establishmentCause-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_establishmentCause_r15_tags_3,
	sizeof(asn_DEF_LTE_establishmentCause_r15_tags_3)
		/sizeof(asn_DEF_LTE_establishmentCause_r15_tags_3[0]) - 1, /* 1 */
	asn_DEF_LTE_establishmentCause_r15_tags_3,	/* Same as above */
	sizeof(asn_DEF_LTE_establishmentCause_r15_tags_3)
		/sizeof(asn_DEF_LTE_establishmentCause_r15_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_establishmentCause_r15_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_establishmentCause_r15_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_RRCEarlyDataRequest_NB_r15_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RRCEarlyDataRequest_NB_r15_IEs, s_TMSI_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_S_TMSI,
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
		"s-TMSI-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RRCEarlyDataRequest_NB_r15_IEs, establishmentCause_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_establishmentCause_r15_3,
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
		"establishmentCause-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_RRCEarlyDataRequest_NB_r15_IEs, cqi_NPDCCH_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_CQI_NPDCCH_NB_r14,
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
		"cqi-NPDCCH-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RRCEarlyDataRequest_NB_r15_IEs, dedicatedInfoNAS_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_DedicatedInfoNAS,
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
		"dedicatedInfoNAS-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_RRCEarlyDataRequest_NB_r15_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RRCEarlyDataRequest_NB_v1590_IEs,
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
static const int asn_MAP_LTE_RRCEarlyDataRequest_NB_r15_IEs_oms_1[] = { 2, 4 };
static const ber_tlv_tag_t asn_DEF_LTE_RRCEarlyDataRequest_NB_r15_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_RRCEarlyDataRequest_NB_r15_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* s-TMSI-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* establishmentCause-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* cqi-NPDCCH-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* dedicatedInfoNAS-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_RRCEarlyDataRequest_NB_r15_IEs_specs_1 = {
	sizeof(struct LTE_RRCEarlyDataRequest_NB_r15_IEs),
	offsetof(struct LTE_RRCEarlyDataRequest_NB_r15_IEs, _asn_ctx),
	asn_MAP_LTE_RRCEarlyDataRequest_NB_r15_IEs_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_LTE_RRCEarlyDataRequest_NB_r15_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_RRCEarlyDataRequest_NB_r15_IEs = {
	"RRCEarlyDataRequest-NB-r15-IEs",
	"RRCEarlyDataRequest-NB-r15-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_RRCEarlyDataRequest_NB_r15_IEs_tags_1,
	sizeof(asn_DEF_LTE_RRCEarlyDataRequest_NB_r15_IEs_tags_1)
		/sizeof(asn_DEF_LTE_RRCEarlyDataRequest_NB_r15_IEs_tags_1[0]), /* 1 */
	asn_DEF_LTE_RRCEarlyDataRequest_NB_r15_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_RRCEarlyDataRequest_NB_r15_IEs_tags_1)
		/sizeof(asn_DEF_LTE_RRCEarlyDataRequest_NB_r15_IEs_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_RRCEarlyDataRequest_NB_r15_IEs_1,
	5,	/* Elements count */
	&asn_SPC_LTE_RRCEarlyDataRequest_NB_r15_IEs_specs_1	/* Additional specs */
};
