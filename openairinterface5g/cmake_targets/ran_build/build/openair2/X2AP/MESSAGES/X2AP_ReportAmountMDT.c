/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/X2AP/MESSAGES`
 */

#include "X2AP_ReportAmountMDT.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_X2AP_ReportAmountMDT_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_X2AP_ReportAmountMDT_value2enum_1[] = {
	{ 0,	2,	"r1" },
	{ 1,	2,	"r2" },
	{ 2,	2,	"r4" },
	{ 3,	2,	"r8" },
	{ 4,	3,	"r16" },
	{ 5,	3,	"r32" },
	{ 6,	3,	"r64" },
	{ 7,	9,	"rinfinity" }
};
static const unsigned int asn_MAP_X2AP_ReportAmountMDT_enum2value_1[] = {
	0,	/* r1(0) */
	4,	/* r16(4) */
	1,	/* r2(1) */
	5,	/* r32(5) */
	2,	/* r4(2) */
	6,	/* r64(6) */
	3,	/* r8(3) */
	7	/* rinfinity(7) */
};
const asn_INTEGER_specifics_t asn_SPC_X2AP_ReportAmountMDT_specs_1 = {
	asn_MAP_X2AP_ReportAmountMDT_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_X2AP_ReportAmountMDT_enum2value_1,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_X2AP_ReportAmountMDT_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_X2AP_ReportAmountMDT = {
	"ReportAmountMDT",
	"ReportAmountMDT",
	&asn_OP_NativeEnumerated,
	asn_DEF_X2AP_ReportAmountMDT_tags_1,
	sizeof(asn_DEF_X2AP_ReportAmountMDT_tags_1)
		/sizeof(asn_DEF_X2AP_ReportAmountMDT_tags_1[0]), /* 1 */
	asn_DEF_X2AP_ReportAmountMDT_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2AP_ReportAmountMDT_tags_1)
		/sizeof(asn_DEF_X2AP_ReportAmountMDT_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_X2AP_ReportAmountMDT_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_X2AP_ReportAmountMDT_specs_1	/* Additional specs */
};

