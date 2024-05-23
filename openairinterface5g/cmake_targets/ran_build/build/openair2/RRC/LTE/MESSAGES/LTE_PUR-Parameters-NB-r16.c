/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_PUR-Parameters-NB-r16.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_pur_CP_EPC_r16_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_pur_CP_5GC_r16_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_pur_UP_EPC_r16_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_pur_UP_5GC_r16_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_pur_NRSRP_Validation_r16_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_pur_CP_L1Ack_r16_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LTE_pur_CP_EPC_r16_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_pur_CP_EPC_r16_enum2value_2[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_pur_CP_EPC_r16_specs_2 = {
	asn_MAP_LTE_pur_CP_EPC_r16_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_pur_CP_EPC_r16_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_pur_CP_EPC_r16_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_pur_CP_EPC_r16_2 = {
	"pur-CP-EPC-r16",
	"pur-CP-EPC-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_pur_CP_EPC_r16_tags_2,
	sizeof(asn_DEF_LTE_pur_CP_EPC_r16_tags_2)
		/sizeof(asn_DEF_LTE_pur_CP_EPC_r16_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_pur_CP_EPC_r16_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_pur_CP_EPC_r16_tags_2)
		/sizeof(asn_DEF_LTE_pur_CP_EPC_r16_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_pur_CP_EPC_r16_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_pur_CP_EPC_r16_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_pur_CP_5GC_r16_value2enum_4[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_pur_CP_5GC_r16_enum2value_4[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_pur_CP_5GC_r16_specs_4 = {
	asn_MAP_LTE_pur_CP_5GC_r16_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_pur_CP_5GC_r16_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_pur_CP_5GC_r16_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_pur_CP_5GC_r16_4 = {
	"pur-CP-5GC-r16",
	"pur-CP-5GC-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_pur_CP_5GC_r16_tags_4,
	sizeof(asn_DEF_LTE_pur_CP_5GC_r16_tags_4)
		/sizeof(asn_DEF_LTE_pur_CP_5GC_r16_tags_4[0]) - 1, /* 1 */
	asn_DEF_LTE_pur_CP_5GC_r16_tags_4,	/* Same as above */
	sizeof(asn_DEF_LTE_pur_CP_5GC_r16_tags_4)
		/sizeof(asn_DEF_LTE_pur_CP_5GC_r16_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_pur_CP_5GC_r16_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_pur_CP_5GC_r16_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_pur_UP_EPC_r16_value2enum_6[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_pur_UP_EPC_r16_enum2value_6[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_pur_UP_EPC_r16_specs_6 = {
	asn_MAP_LTE_pur_UP_EPC_r16_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_pur_UP_EPC_r16_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_pur_UP_EPC_r16_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_pur_UP_EPC_r16_6 = {
	"pur-UP-EPC-r16",
	"pur-UP-EPC-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_pur_UP_EPC_r16_tags_6,
	sizeof(asn_DEF_LTE_pur_UP_EPC_r16_tags_6)
		/sizeof(asn_DEF_LTE_pur_UP_EPC_r16_tags_6[0]) - 1, /* 1 */
	asn_DEF_LTE_pur_UP_EPC_r16_tags_6,	/* Same as above */
	sizeof(asn_DEF_LTE_pur_UP_EPC_r16_tags_6)
		/sizeof(asn_DEF_LTE_pur_UP_EPC_r16_tags_6[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_pur_UP_EPC_r16_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_pur_UP_EPC_r16_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_pur_UP_5GC_r16_value2enum_8[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_pur_UP_5GC_r16_enum2value_8[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_pur_UP_5GC_r16_specs_8 = {
	asn_MAP_LTE_pur_UP_5GC_r16_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_pur_UP_5GC_r16_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_pur_UP_5GC_r16_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_pur_UP_5GC_r16_8 = {
	"pur-UP-5GC-r16",
	"pur-UP-5GC-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_pur_UP_5GC_r16_tags_8,
	sizeof(asn_DEF_LTE_pur_UP_5GC_r16_tags_8)
		/sizeof(asn_DEF_LTE_pur_UP_5GC_r16_tags_8[0]) - 1, /* 1 */
	asn_DEF_LTE_pur_UP_5GC_r16_tags_8,	/* Same as above */
	sizeof(asn_DEF_LTE_pur_UP_5GC_r16_tags_8)
		/sizeof(asn_DEF_LTE_pur_UP_5GC_r16_tags_8[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_pur_UP_5GC_r16_constr_8,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_pur_UP_5GC_r16_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_pur_NRSRP_Validation_r16_value2enum_10[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_pur_NRSRP_Validation_r16_enum2value_10[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_pur_NRSRP_Validation_r16_specs_10 = {
	asn_MAP_LTE_pur_NRSRP_Validation_r16_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_pur_NRSRP_Validation_r16_enum2value_10,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_pur_NRSRP_Validation_r16_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_pur_NRSRP_Validation_r16_10 = {
	"pur-NRSRP-Validation-r16",
	"pur-NRSRP-Validation-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_pur_NRSRP_Validation_r16_tags_10,
	sizeof(asn_DEF_LTE_pur_NRSRP_Validation_r16_tags_10)
		/sizeof(asn_DEF_LTE_pur_NRSRP_Validation_r16_tags_10[0]) - 1, /* 1 */
	asn_DEF_LTE_pur_NRSRP_Validation_r16_tags_10,	/* Same as above */
	sizeof(asn_DEF_LTE_pur_NRSRP_Validation_r16_tags_10)
		/sizeof(asn_DEF_LTE_pur_NRSRP_Validation_r16_tags_10[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_pur_NRSRP_Validation_r16_constr_10,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_pur_NRSRP_Validation_r16_specs_10	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_pur_CP_L1Ack_r16_value2enum_12[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_pur_CP_L1Ack_r16_enum2value_12[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_pur_CP_L1Ack_r16_specs_12 = {
	asn_MAP_LTE_pur_CP_L1Ack_r16_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_pur_CP_L1Ack_r16_enum2value_12,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_pur_CP_L1Ack_r16_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_pur_CP_L1Ack_r16_12 = {
	"pur-CP-L1Ack-r16",
	"pur-CP-L1Ack-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_pur_CP_L1Ack_r16_tags_12,
	sizeof(asn_DEF_LTE_pur_CP_L1Ack_r16_tags_12)
		/sizeof(asn_DEF_LTE_pur_CP_L1Ack_r16_tags_12[0]) - 1, /* 1 */
	asn_DEF_LTE_pur_CP_L1Ack_r16_tags_12,	/* Same as above */
	sizeof(asn_DEF_LTE_pur_CP_L1Ack_r16_tags_12)
		/sizeof(asn_DEF_LTE_pur_CP_L1Ack_r16_tags_12[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_pur_CP_L1Ack_r16_constr_12,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_pur_CP_L1Ack_r16_specs_12	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_PUR_Parameters_NB_r16_1[] = {
	{ ATF_POINTER, 6, offsetof(struct LTE_PUR_Parameters_NB_r16, pur_CP_EPC_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_pur_CP_EPC_r16_2,
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
		"pur-CP-EPC-r16"
		},
	{ ATF_POINTER, 5, offsetof(struct LTE_PUR_Parameters_NB_r16, pur_CP_5GC_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_pur_CP_5GC_r16_4,
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
		"pur-CP-5GC-r16"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_PUR_Parameters_NB_r16, pur_UP_EPC_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_pur_UP_EPC_r16_6,
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
		"pur-UP-EPC-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_PUR_Parameters_NB_r16, pur_UP_5GC_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_pur_UP_5GC_r16_8,
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
		"pur-UP-5GC-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_PUR_Parameters_NB_r16, pur_NRSRP_Validation_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_pur_NRSRP_Validation_r16_10,
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
		"pur-NRSRP-Validation-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_PUR_Parameters_NB_r16, pur_CP_L1Ack_r16),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_pur_CP_L1Ack_r16_12,
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
		"pur-CP-L1Ack-r16"
		},
};
static const int asn_MAP_LTE_PUR_Parameters_NB_r16_oms_1[] = { 0, 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_LTE_PUR_Parameters_NB_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_PUR_Parameters_NB_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pur-CP-EPC-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pur-CP-5GC-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pur-UP-EPC-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* pur-UP-5GC-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* pur-NRSRP-Validation-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* pur-CP-L1Ack-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_PUR_Parameters_NB_r16_specs_1 = {
	sizeof(struct LTE_PUR_Parameters_NB_r16),
	offsetof(struct LTE_PUR_Parameters_NB_r16, _asn_ctx),
	asn_MAP_LTE_PUR_Parameters_NB_r16_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_LTE_PUR_Parameters_NB_r16_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_PUR_Parameters_NB_r16 = {
	"PUR-Parameters-NB-r16",
	"PUR-Parameters-NB-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_PUR_Parameters_NB_r16_tags_1,
	sizeof(asn_DEF_LTE_PUR_Parameters_NB_r16_tags_1)
		/sizeof(asn_DEF_LTE_PUR_Parameters_NB_r16_tags_1[0]), /* 1 */
	asn_DEF_LTE_PUR_Parameters_NB_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_PUR_Parameters_NB_r16_tags_1)
		/sizeof(asn_DEF_LTE_PUR_Parameters_NB_r16_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_PUR_Parameters_NB_r16_1,
	6,	/* Elements count */
	&asn_SPC_LTE_PUR_Parameters_NB_r16_specs_1	/* Additional specs */
};

