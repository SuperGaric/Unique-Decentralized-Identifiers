/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_IRAT-ParametersCDMA2000-1XRTT.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_tx_Config1XRTT_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_rx_Config1XRTT_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LTE_tx_Config1XRTT_value2enum_3[] = {
	{ 0,	6,	"single" },
	{ 1,	4,	"dual" }
};
static const unsigned int asn_MAP_LTE_tx_Config1XRTT_enum2value_3[] = {
	1,	/* dual(1) */
	0	/* single(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_tx_Config1XRTT_specs_3 = {
	asn_MAP_LTE_tx_Config1XRTT_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_tx_Config1XRTT_enum2value_3,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_tx_Config1XRTT_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_tx_Config1XRTT_3 = {
	"tx-Config1XRTT",
	"tx-Config1XRTT",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_tx_Config1XRTT_tags_3,
	sizeof(asn_DEF_LTE_tx_Config1XRTT_tags_3)
		/sizeof(asn_DEF_LTE_tx_Config1XRTT_tags_3[0]) - 1, /* 1 */
	asn_DEF_LTE_tx_Config1XRTT_tags_3,	/* Same as above */
	sizeof(asn_DEF_LTE_tx_Config1XRTT_tags_3)
		/sizeof(asn_DEF_LTE_tx_Config1XRTT_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_tx_Config1XRTT_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_tx_Config1XRTT_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_rx_Config1XRTT_value2enum_6[] = {
	{ 0,	6,	"single" },
	{ 1,	4,	"dual" }
};
static const unsigned int asn_MAP_LTE_rx_Config1XRTT_enum2value_6[] = {
	1,	/* dual(1) */
	0	/* single(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_rx_Config1XRTT_specs_6 = {
	asn_MAP_LTE_rx_Config1XRTT_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_rx_Config1XRTT_enum2value_6,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_rx_Config1XRTT_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_rx_Config1XRTT_6 = {
	"rx-Config1XRTT",
	"rx-Config1XRTT",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_rx_Config1XRTT_tags_6,
	sizeof(asn_DEF_LTE_rx_Config1XRTT_tags_6)
		/sizeof(asn_DEF_LTE_rx_Config1XRTT_tags_6[0]) - 1, /* 1 */
	asn_DEF_LTE_rx_Config1XRTT_tags_6,	/* Same as above */
	sizeof(asn_DEF_LTE_rx_Config1XRTT_tags_6)
		/sizeof(asn_DEF_LTE_rx_Config1XRTT_tags_6[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_rx_Config1XRTT_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_rx_Config1XRTT_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_IRAT_ParametersCDMA2000_1XRTT_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_IRAT_ParametersCDMA2000_1XRTT, supportedBandList1XRTT),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SupportedBandList1XRTT,
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
		"supportedBandList1XRTT"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_IRAT_ParametersCDMA2000_1XRTT, tx_Config1XRTT),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_tx_Config1XRTT_3,
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
		"tx-Config1XRTT"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_IRAT_ParametersCDMA2000_1XRTT, rx_Config1XRTT),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_rx_Config1XRTT_6,
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
		"rx-Config1XRTT"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_IRAT_ParametersCDMA2000_1XRTT_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_IRAT_ParametersCDMA2000_1XRTT_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* supportedBandList1XRTT */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tx-Config1XRTT */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* rx-Config1XRTT */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_IRAT_ParametersCDMA2000_1XRTT_specs_1 = {
	sizeof(struct LTE_IRAT_ParametersCDMA2000_1XRTT),
	offsetof(struct LTE_IRAT_ParametersCDMA2000_1XRTT, _asn_ctx),
	asn_MAP_LTE_IRAT_ParametersCDMA2000_1XRTT_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_IRAT_ParametersCDMA2000_1XRTT = {
	"IRAT-ParametersCDMA2000-1XRTT",
	"IRAT-ParametersCDMA2000-1XRTT",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_IRAT_ParametersCDMA2000_1XRTT_tags_1,
	sizeof(asn_DEF_LTE_IRAT_ParametersCDMA2000_1XRTT_tags_1)
		/sizeof(asn_DEF_LTE_IRAT_ParametersCDMA2000_1XRTT_tags_1[0]), /* 1 */
	asn_DEF_LTE_IRAT_ParametersCDMA2000_1XRTT_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_IRAT_ParametersCDMA2000_1XRTT_tags_1)
		/sizeof(asn_DEF_LTE_IRAT_ParametersCDMA2000_1XRTT_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_IRAT_ParametersCDMA2000_1XRTT_1,
	3,	/* Elements count */
	&asn_SPC_LTE_IRAT_ParametersCDMA2000_1XRTT_specs_1	/* Additional specs */
};

