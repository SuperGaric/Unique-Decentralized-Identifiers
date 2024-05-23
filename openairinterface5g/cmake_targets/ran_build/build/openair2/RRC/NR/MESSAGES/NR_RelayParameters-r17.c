/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_RelayParameters-r17.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_relayUE_Operation_L2_r17_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_remoteUE_Operation_L2_r17_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_remoteUE_PathSwitchToIdleInactiveRelay_r17_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_NR_relayUE_Operation_L2_r17_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_NR_relayUE_Operation_L2_r17_enum2value_2[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_relayUE_Operation_L2_r17_specs_2 = {
	asn_MAP_NR_relayUE_Operation_L2_r17_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_relayUE_Operation_L2_r17_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_relayUE_Operation_L2_r17_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_relayUE_Operation_L2_r17_2 = {
	"relayUE-Operation-L2-r17",
	"relayUE-Operation-L2-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_relayUE_Operation_L2_r17_tags_2,
	sizeof(asn_DEF_NR_relayUE_Operation_L2_r17_tags_2)
		/sizeof(asn_DEF_NR_relayUE_Operation_L2_r17_tags_2[0]) - 1, /* 1 */
	asn_DEF_NR_relayUE_Operation_L2_r17_tags_2,	/* Same as above */
	sizeof(asn_DEF_NR_relayUE_Operation_L2_r17_tags_2)
		/sizeof(asn_DEF_NR_relayUE_Operation_L2_r17_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_relayUE_Operation_L2_r17_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_relayUE_Operation_L2_r17_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_remoteUE_Operation_L2_r17_value2enum_4[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_NR_remoteUE_Operation_L2_r17_enum2value_4[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_remoteUE_Operation_L2_r17_specs_4 = {
	asn_MAP_NR_remoteUE_Operation_L2_r17_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_remoteUE_Operation_L2_r17_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_remoteUE_Operation_L2_r17_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_remoteUE_Operation_L2_r17_4 = {
	"remoteUE-Operation-L2-r17",
	"remoteUE-Operation-L2-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_remoteUE_Operation_L2_r17_tags_4,
	sizeof(asn_DEF_NR_remoteUE_Operation_L2_r17_tags_4)
		/sizeof(asn_DEF_NR_remoteUE_Operation_L2_r17_tags_4[0]) - 1, /* 1 */
	asn_DEF_NR_remoteUE_Operation_L2_r17_tags_4,	/* Same as above */
	sizeof(asn_DEF_NR_remoteUE_Operation_L2_r17_tags_4)
		/sizeof(asn_DEF_NR_remoteUE_Operation_L2_r17_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_remoteUE_Operation_L2_r17_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_remoteUE_Operation_L2_r17_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_remoteUE_PathSwitchToIdleInactiveRelay_r17_value2enum_6[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_NR_remoteUE_PathSwitchToIdleInactiveRelay_r17_enum2value_6[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_remoteUE_PathSwitchToIdleInactiveRelay_r17_specs_6 = {
	asn_MAP_NR_remoteUE_PathSwitchToIdleInactiveRelay_r17_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_remoteUE_PathSwitchToIdleInactiveRelay_r17_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_remoteUE_PathSwitchToIdleInactiveRelay_r17_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_remoteUE_PathSwitchToIdleInactiveRelay_r17_6 = {
	"remoteUE-PathSwitchToIdleInactiveRelay-r17",
	"remoteUE-PathSwitchToIdleInactiveRelay-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_remoteUE_PathSwitchToIdleInactiveRelay_r17_tags_6,
	sizeof(asn_DEF_NR_remoteUE_PathSwitchToIdleInactiveRelay_r17_tags_6)
		/sizeof(asn_DEF_NR_remoteUE_PathSwitchToIdleInactiveRelay_r17_tags_6[0]) - 1, /* 1 */
	asn_DEF_NR_remoteUE_PathSwitchToIdleInactiveRelay_r17_tags_6,	/* Same as above */
	sizeof(asn_DEF_NR_remoteUE_PathSwitchToIdleInactiveRelay_r17_tags_6)
		/sizeof(asn_DEF_NR_remoteUE_PathSwitchToIdleInactiveRelay_r17_tags_6[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_remoteUE_PathSwitchToIdleInactiveRelay_r17_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_remoteUE_PathSwitchToIdleInactiveRelay_r17_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_RelayParameters_r17_1[] = {
	{ ATF_POINTER, 3, offsetof(struct NR_RelayParameters_r17, relayUE_Operation_L2_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_relayUE_Operation_L2_r17_2,
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
		"relayUE-Operation-L2-r17"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_RelayParameters_r17, remoteUE_Operation_L2_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_remoteUE_Operation_L2_r17_4,
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
		"remoteUE-Operation-L2-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_RelayParameters_r17, remoteUE_PathSwitchToIdleInactiveRelay_r17),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_remoteUE_PathSwitchToIdleInactiveRelay_r17_6,
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
		"remoteUE-PathSwitchToIdleInactiveRelay-r17"
		},
};
static const int asn_MAP_NR_RelayParameters_r17_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_NR_RelayParameters_r17_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_RelayParameters_r17_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* relayUE-Operation-L2-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* remoteUE-Operation-L2-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* remoteUE-PathSwitchToIdleInactiveRelay-r17 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_RelayParameters_r17_specs_1 = {
	sizeof(struct NR_RelayParameters_r17),
	offsetof(struct NR_RelayParameters_r17, _asn_ctx),
	asn_MAP_NR_RelayParameters_r17_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_NR_RelayParameters_r17_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_RelayParameters_r17 = {
	"RelayParameters-r17",
	"RelayParameters-r17",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_RelayParameters_r17_tags_1,
	sizeof(asn_DEF_NR_RelayParameters_r17_tags_1)
		/sizeof(asn_DEF_NR_RelayParameters_r17_tags_1[0]), /* 1 */
	asn_DEF_NR_RelayParameters_r17_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_RelayParameters_r17_tags_1)
		/sizeof(asn_DEF_NR_RelayParameters_r17_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_RelayParameters_r17_1,
	3,	/* Elements count */
	&asn_SPC_NR_RelayParameters_r17_specs_1	/* Additional specs */
};

