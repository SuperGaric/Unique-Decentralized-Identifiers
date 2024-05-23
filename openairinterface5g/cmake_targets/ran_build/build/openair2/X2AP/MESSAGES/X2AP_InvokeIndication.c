/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/X2AP/MESSAGES`
 */

#include "X2AP_InvokeIndication.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_X2AP_InvokeIndication_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  0,  0,  0,  0 }	/* (0..0,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_X2AP_InvokeIndication_value2enum_1[] = {
	{ 0,	15,	"abs-information" },
	{ 1,	23,	"naics-information-start" },
	{ 2,	22,	"naics-information-stop" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_X2AP_InvokeIndication_enum2value_1[] = {
	0,	/* abs-information(0) */
	1,	/* naics-information-start(1) */
	2	/* naics-information-stop(2) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_X2AP_InvokeIndication_specs_1 = {
	asn_MAP_X2AP_InvokeIndication_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_X2AP_InvokeIndication_enum2value_1,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	2,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_X2AP_InvokeIndication_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_X2AP_InvokeIndication = {
	"InvokeIndication",
	"InvokeIndication",
	&asn_OP_NativeEnumerated,
	asn_DEF_X2AP_InvokeIndication_tags_1,
	sizeof(asn_DEF_X2AP_InvokeIndication_tags_1)
		/sizeof(asn_DEF_X2AP_InvokeIndication_tags_1[0]), /* 1 */
	asn_DEF_X2AP_InvokeIndication_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2AP_InvokeIndication_tags_1)
		/sizeof(asn_DEF_X2AP_InvokeIndication_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_X2AP_InvokeIndication_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_X2AP_InvokeIndication_specs_1	/* Additional specs */
};

