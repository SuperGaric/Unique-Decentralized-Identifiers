/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/X2AP/MESSAGES`
 */

#include "X2AP_Number-of-Antennaports.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_X2AP_Number_of_Antennaports_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_X2AP_Number_of_Antennaports_value2enum_1[] = {
	{ 0,	3,	"an1" },
	{ 1,	3,	"an2" },
	{ 2,	3,	"an4" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_X2AP_Number_of_Antennaports_enum2value_1[] = {
	0,	/* an1(0) */
	1,	/* an2(1) */
	2	/* an4(2) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_X2AP_Number_of_Antennaports_specs_1 = {
	asn_MAP_X2AP_Number_of_Antennaports_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_X2AP_Number_of_Antennaports_enum2value_1,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	4,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_X2AP_Number_of_Antennaports_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_X2AP_Number_of_Antennaports = {
	"Number-of-Antennaports",
	"Number-of-Antennaports",
	&asn_OP_NativeEnumerated,
	asn_DEF_X2AP_Number_of_Antennaports_tags_1,
	sizeof(asn_DEF_X2AP_Number_of_Antennaports_tags_1)
		/sizeof(asn_DEF_X2AP_Number_of_Antennaports_tags_1[0]), /* 1 */
	asn_DEF_X2AP_Number_of_Antennaports_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2AP_Number_of_Antennaports_tags_1)
		/sizeof(asn_DEF_X2AP_Number_of_Antennaports_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_X2AP_Number_of_Antennaports_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_X2AP_Number_of_Antennaports_specs_1	/* Additional specs */
};

