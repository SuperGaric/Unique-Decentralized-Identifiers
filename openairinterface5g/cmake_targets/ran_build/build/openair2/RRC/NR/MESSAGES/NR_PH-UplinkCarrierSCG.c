/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_PH-UplinkCarrierSCG.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_ph_Type1or3_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_NR_ph_Type1or3_value2enum_2[] = {
	{ 0,	5,	"type1" },
	{ 1,	5,	"type3" }
};
static const unsigned int asn_MAP_NR_ph_Type1or3_enum2value_2[] = {
	0,	/* type1(0) */
	1	/* type3(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_ph_Type1or3_specs_2 = {
	asn_MAP_NR_ph_Type1or3_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_ph_Type1or3_enum2value_2,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_ph_Type1or3_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ph_Type1or3_2 = {
	"ph-Type1or3",
	"ph-Type1or3",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_ph_Type1or3_tags_2,
	sizeof(asn_DEF_NR_ph_Type1or3_tags_2)
		/sizeof(asn_DEF_NR_ph_Type1or3_tags_2[0]) - 1, /* 1 */
	asn_DEF_NR_ph_Type1or3_tags_2,	/* Same as above */
	sizeof(asn_DEF_NR_ph_Type1or3_tags_2)
		/sizeof(asn_DEF_NR_ph_Type1or3_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_ph_Type1or3_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_ph_Type1or3_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_PH_UplinkCarrierSCG_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_PH_UplinkCarrierSCG, ph_Type1or3),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_ph_Type1or3_2,
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
		"ph-Type1or3"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_PH_UplinkCarrierSCG_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_PH_UplinkCarrierSCG_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* ph-Type1or3 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_PH_UplinkCarrierSCG_specs_1 = {
	sizeof(struct NR_PH_UplinkCarrierSCG),
	offsetof(struct NR_PH_UplinkCarrierSCG, _asn_ctx),
	asn_MAP_NR_PH_UplinkCarrierSCG_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_PH_UplinkCarrierSCG = {
	"PH-UplinkCarrierSCG",
	"PH-UplinkCarrierSCG",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_PH_UplinkCarrierSCG_tags_1,
	sizeof(asn_DEF_NR_PH_UplinkCarrierSCG_tags_1)
		/sizeof(asn_DEF_NR_PH_UplinkCarrierSCG_tags_1[0]), /* 1 */
	asn_DEF_NR_PH_UplinkCarrierSCG_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_PH_UplinkCarrierSCG_tags_1)
		/sizeof(asn_DEF_NR_PH_UplinkCarrierSCG_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_PH_UplinkCarrierSCG_1,
	1,	/* Elements count */
	&asn_SPC_NR_PH_UplinkCarrierSCG_specs_1	/* Additional specs */
};

