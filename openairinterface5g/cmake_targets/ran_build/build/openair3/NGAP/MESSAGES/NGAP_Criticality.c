/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-CommonDataTypes"
 * 	found in "/home/dmt/openairinterface5g/openair3/NGAP/MESSAGES/ASN1/ngap-15.8.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -no-gen-example -fno-include-deps -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/NGAP/MESSAGES`
 */

#include "NGAP_Criticality.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_NGAP_Criticality_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_NGAP_Criticality_value2enum_1[] = {
	{ 0,	6,	"reject" },
	{ 1,	6,	"ignore" },
	{ 2,	6,	"notify" }
};
static const unsigned int asn_MAP_NGAP_Criticality_enum2value_1[] = {
	1,	/* ignore(1) */
	2,	/* notify(2) */
	0	/* reject(0) */
};
const asn_INTEGER_specifics_t asn_SPC_NGAP_Criticality_specs_1 = {
	asn_MAP_NGAP_Criticality_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_NGAP_Criticality_enum2value_1,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NGAP_Criticality_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_NGAP_Criticality = {
	"Criticality",
	"Criticality",
	&asn_OP_NativeEnumerated,
	asn_DEF_NGAP_Criticality_tags_1,
	sizeof(asn_DEF_NGAP_Criticality_tags_1)
		/sizeof(asn_DEF_NGAP_Criticality_tags_1[0]), /* 1 */
	asn_DEF_NGAP_Criticality_tags_1,	/* Same as above */
	sizeof(asn_DEF_NGAP_Criticality_tags_1)
		/sizeof(asn_DEF_NGAP_Criticality_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NGAP_Criticality_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NGAP_Criticality_specs_1	/* Additional specs */
};

