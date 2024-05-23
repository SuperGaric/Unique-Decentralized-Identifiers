/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_SIB-Type-v12j0.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_LTE_SIB_Type_v12j0_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  4,  4,  0,  15 }	/* (0..15,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LTE_SIB_Type_v12j0_value2enum_1[] = {
	{ 0,	15,	"sibType19-v1250" },
	{ 1,	15,	"sibType20-v1310" },
	{ 2,	15,	"sibType21-v1430" },
	{ 3,	15,	"sibType24-v1530" },
	{ 4,	15,	"sibType25-v1530" },
	{ 5,	15,	"sibType26-v1530" },
	{ 6,	16,	"sibType26a-v1610" },
	{ 7,	15,	"sibType27-v1610" },
	{ 8,	15,	"sibType28-v1610" },
	{ 9,	15,	"sibType29-v1610" },
	{ 10,	6,	"spare6" },
	{ 11,	6,	"spare5" },
	{ 12,	6,	"spare4" },
	{ 13,	6,	"spare3" },
	{ 14,	6,	"spare2" },
	{ 15,	6,	"spare1" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_LTE_SIB_Type_v12j0_enum2value_1[] = {
	0,	/* sibType19-v1250(0) */
	1,	/* sibType20-v1310(1) */
	2,	/* sibType21-v1430(2) */
	3,	/* sibType24-v1530(3) */
	4,	/* sibType25-v1530(4) */
	5,	/* sibType26-v1530(5) */
	6,	/* sibType26a-v1610(6) */
	7,	/* sibType27-v1610(7) */
	8,	/* sibType28-v1610(8) */
	9,	/* sibType29-v1610(9) */
	15,	/* spare1(15) */
	14,	/* spare2(14) */
	13,	/* spare3(13) */
	12,	/* spare4(12) */
	11,	/* spare5(11) */
	10	/* spare6(10) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_LTE_SIB_Type_v12j0_specs_1 = {
	asn_MAP_LTE_SIB_Type_v12j0_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_SIB_Type_v12j0_enum2value_1,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	17,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_SIB_Type_v12j0_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_LTE_SIB_Type_v12j0 = {
	"SIB-Type-v12j0",
	"SIB-Type-v12j0",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_SIB_Type_v12j0_tags_1,
	sizeof(asn_DEF_LTE_SIB_Type_v12j0_tags_1)
		/sizeof(asn_DEF_LTE_SIB_Type_v12j0_tags_1[0]), /* 1 */
	asn_DEF_LTE_SIB_Type_v12j0_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SIB_Type_v12j0_tags_1)
		/sizeof(asn_DEF_LTE_SIB_Type_v12j0_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_SIB_Type_v12j0_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_SIB_Type_v12j0_specs_1	/* Additional specs */
};

