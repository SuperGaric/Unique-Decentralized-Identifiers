/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_CipheringAlgorithm.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_NR_CipheringAlgorithm_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  7 }	/* (0..7,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_NR_CipheringAlgorithm_value2enum_1[] = {
	{ 0,	4,	"nea0" },
	{ 1,	4,	"nea1" },
	{ 2,	4,	"nea2" },
	{ 3,	4,	"nea3" },
	{ 4,	6,	"spare4" },
	{ 5,	6,	"spare3" },
	{ 6,	6,	"spare2" },
	{ 7,	6,	"spare1" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_NR_CipheringAlgorithm_enum2value_1[] = {
	0,	/* nea0(0) */
	1,	/* nea1(1) */
	2,	/* nea2(2) */
	3,	/* nea3(3) */
	7,	/* spare1(7) */
	6,	/* spare2(6) */
	5,	/* spare3(5) */
	4	/* spare4(4) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_NR_CipheringAlgorithm_specs_1 = {
	asn_MAP_NR_CipheringAlgorithm_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_CipheringAlgorithm_enum2value_1,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	9,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_CipheringAlgorithm_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_NR_CipheringAlgorithm = {
	"CipheringAlgorithm",
	"CipheringAlgorithm",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_CipheringAlgorithm_tags_1,
	sizeof(asn_DEF_NR_CipheringAlgorithm_tags_1)
		/sizeof(asn_DEF_NR_CipheringAlgorithm_tags_1[0]), /* 1 */
	asn_DEF_NR_CipheringAlgorithm_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_CipheringAlgorithm_tags_1)
		/sizeof(asn_DEF_NR_CipheringAlgorithm_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_CipheringAlgorithm_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_CipheringAlgorithm_specs_1	/* Additional specs */
};
