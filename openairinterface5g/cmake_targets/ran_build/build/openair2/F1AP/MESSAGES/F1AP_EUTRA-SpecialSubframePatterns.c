/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair2/F1AP/MESSAGES/ASN1/R16.3.1/38473-g31.asn"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/F1AP/MESSAGES`
 */

#include "F1AP_EUTRA-SpecialSubframePatterns.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_F1AP_EUTRA_SpecialSubframePatterns_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  4,  4,  0,  10 }	/* (0..10,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_F1AP_EUTRA_SpecialSubframePatterns_value2enum_1[] = {
	{ 0,	4,	"ssp0" },
	{ 1,	4,	"ssp1" },
	{ 2,	4,	"ssp2" },
	{ 3,	4,	"ssp3" },
	{ 4,	4,	"ssp4" },
	{ 5,	4,	"ssp5" },
	{ 6,	4,	"ssp6" },
	{ 7,	4,	"ssp7" },
	{ 8,	4,	"ssp8" },
	{ 9,	4,	"ssp9" },
	{ 10,	5,	"ssp10" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_F1AP_EUTRA_SpecialSubframePatterns_enum2value_1[] = {
	0,	/* ssp0(0) */
	1,	/* ssp1(1) */
	10,	/* ssp10(10) */
	2,	/* ssp2(2) */
	3,	/* ssp3(3) */
	4,	/* ssp4(4) */
	5,	/* ssp5(5) */
	6,	/* ssp6(6) */
	7,	/* ssp7(7) */
	8,	/* ssp8(8) */
	9	/* ssp9(9) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_F1AP_EUTRA_SpecialSubframePatterns_specs_1 = {
	asn_MAP_F1AP_EUTRA_SpecialSubframePatterns_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_F1AP_EUTRA_SpecialSubframePatterns_enum2value_1,	/* N => "tag"; sorted by N */
	11,	/* Number of elements in the maps */
	12,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_F1AP_EUTRA_SpecialSubframePatterns_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_F1AP_EUTRA_SpecialSubframePatterns = {
	"EUTRA-SpecialSubframePatterns",
	"EUTRA-SpecialSubframePatterns",
	&asn_OP_NativeEnumerated,
	asn_DEF_F1AP_EUTRA_SpecialSubframePatterns_tags_1,
	sizeof(asn_DEF_F1AP_EUTRA_SpecialSubframePatterns_tags_1)
		/sizeof(asn_DEF_F1AP_EUTRA_SpecialSubframePatterns_tags_1[0]), /* 1 */
	asn_DEF_F1AP_EUTRA_SpecialSubframePatterns_tags_1,	/* Same as above */
	sizeof(asn_DEF_F1AP_EUTRA_SpecialSubframePatterns_tags_1)
		/sizeof(asn_DEF_F1AP_EUTRA_SpecialSubframePatterns_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_F1AP_EUTRA_SpecialSubframePatterns_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_F1AP_EUTRA_SpecialSubframePatterns_specs_1	/* Additional specs */
};
