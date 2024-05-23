/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair2/F1AP/MESSAGES/ASN1/R16.3.1/38473-g31.asn"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/F1AP/MESSAGES`
 */

#include "F1AP_ReportingPeriodicity.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_F1AP_ReportingPeriodicity_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  4 }	/* (0..4,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_F1AP_ReportingPeriodicity_value2enum_1[] = {
	{ 0,	5,	"ms500" },
	{ 1,	6,	"ms1000" },
	{ 2,	6,	"ms2000" },
	{ 3,	6,	"ms5000" },
	{ 4,	7,	"ms10000" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_F1AP_ReportingPeriodicity_enum2value_1[] = {
	1,	/* ms1000(1) */
	4,	/* ms10000(4) */
	2,	/* ms2000(2) */
	0,	/* ms500(0) */
	3	/* ms5000(3) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_F1AP_ReportingPeriodicity_specs_1 = {
	asn_MAP_F1AP_ReportingPeriodicity_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_F1AP_ReportingPeriodicity_enum2value_1,	/* N => "tag"; sorted by N */
	5,	/* Number of elements in the maps */
	6,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_F1AP_ReportingPeriodicity_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_F1AP_ReportingPeriodicity = {
	"ReportingPeriodicity",
	"ReportingPeriodicity",
	&asn_OP_NativeEnumerated,
	asn_DEF_F1AP_ReportingPeriodicity_tags_1,
	sizeof(asn_DEF_F1AP_ReportingPeriodicity_tags_1)
		/sizeof(asn_DEF_F1AP_ReportingPeriodicity_tags_1[0]), /* 1 */
	asn_DEF_F1AP_ReportingPeriodicity_tags_1,	/* Same as above */
	sizeof(asn_DEF_F1AP_ReportingPeriodicity_tags_1)
		/sizeof(asn_DEF_F1AP_ReportingPeriodicity_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_F1AP_ReportingPeriodicity_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_F1AP_ReportingPeriodicity_specs_1	/* Additional specs */
};

