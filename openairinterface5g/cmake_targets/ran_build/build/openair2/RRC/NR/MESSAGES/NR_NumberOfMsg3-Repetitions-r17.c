/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_NumberOfMsg3-Repetitions-r17.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_NR_NumberOfMsg3_Repetitions_r17_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_NR_NumberOfMsg3_Repetitions_r17_value2enum_1[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n3" },
	{ 3,	2,	"n4" },
	{ 4,	2,	"n7" },
	{ 5,	2,	"n8" },
	{ 6,	3,	"n12" },
	{ 7,	3,	"n16" }
};
static const unsigned int asn_MAP_NR_NumberOfMsg3_Repetitions_r17_enum2value_1[] = {
	0,	/* n1(0) */
	6,	/* n12(6) */
	7,	/* n16(7) */
	1,	/* n2(1) */
	2,	/* n3(2) */
	3,	/* n4(3) */
	4,	/* n7(4) */
	5	/* n8(5) */
};
const asn_INTEGER_specifics_t asn_SPC_NR_NumberOfMsg3_Repetitions_r17_specs_1 = {
	asn_MAP_NR_NumberOfMsg3_Repetitions_r17_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_NumberOfMsg3_Repetitions_r17_enum2value_1,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_NumberOfMsg3_Repetitions_r17_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_NR_NumberOfMsg3_Repetitions_r17 = {
	"NumberOfMsg3-Repetitions-r17",
	"NumberOfMsg3-Repetitions-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_NumberOfMsg3_Repetitions_r17_tags_1,
	sizeof(asn_DEF_NR_NumberOfMsg3_Repetitions_r17_tags_1)
		/sizeof(asn_DEF_NR_NumberOfMsg3_Repetitions_r17_tags_1[0]), /* 1 */
	asn_DEF_NR_NumberOfMsg3_Repetitions_r17_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_NumberOfMsg3_Repetitions_r17_tags_1)
		/sizeof(asn_DEF_NR_NumberOfMsg3_Repetitions_r17_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_NumberOfMsg3_Repetitions_r17_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_NumberOfMsg3_Repetitions_r17_specs_1	/* Additional specs */
};

