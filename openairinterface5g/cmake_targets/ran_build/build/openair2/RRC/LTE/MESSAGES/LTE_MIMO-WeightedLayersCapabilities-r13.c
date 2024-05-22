/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_MIMO-WeightedLayersCapabilities-r13.h"

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
static int
memb_LTE_totalWeightedLayers_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 2L && value <= 128L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_relWeightTwoLayers_r13_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_relWeightFourLayers_r13_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_relWeightEightLayers_r13_constr_20 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LTE_totalWeightedLayers_r13_constr_29 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  2,  128 }	/* (2..128) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LTE_relWeightTwoLayers_r13_value2enum_2[] = {
	{ 0,	2,	"v1" },
	{ 1,	7,	"v1dot25" },
	{ 2,	6,	"v1dot5" },
	{ 3,	7,	"v1dot75" },
	{ 4,	2,	"v2" },
	{ 5,	6,	"v2dot5" },
	{ 6,	2,	"v3" },
	{ 7,	2,	"v4" }
};
static const unsigned int asn_MAP_LTE_relWeightTwoLayers_r13_enum2value_2[] = {
	0,	/* v1(0) */
	1,	/* v1dot25(1) */
	2,	/* v1dot5(2) */
	3,	/* v1dot75(3) */
	4,	/* v2(4) */
	5,	/* v2dot5(5) */
	6,	/* v3(6) */
	7	/* v4(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_relWeightTwoLayers_r13_specs_2 = {
	asn_MAP_LTE_relWeightTwoLayers_r13_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_relWeightTwoLayers_r13_enum2value_2,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_relWeightTwoLayers_r13_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_relWeightTwoLayers_r13_2 = {
	"relWeightTwoLayers-r13",
	"relWeightTwoLayers-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_relWeightTwoLayers_r13_tags_2,
	sizeof(asn_DEF_LTE_relWeightTwoLayers_r13_tags_2)
		/sizeof(asn_DEF_LTE_relWeightTwoLayers_r13_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_relWeightTwoLayers_r13_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_relWeightTwoLayers_r13_tags_2)
		/sizeof(asn_DEF_LTE_relWeightTwoLayers_r13_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_relWeightTwoLayers_r13_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_relWeightTwoLayers_r13_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_relWeightFourLayers_r13_value2enum_11[] = {
	{ 0,	2,	"v1" },
	{ 1,	7,	"v1dot25" },
	{ 2,	6,	"v1dot5" },
	{ 3,	7,	"v1dot75" },
	{ 4,	2,	"v2" },
	{ 5,	6,	"v2dot5" },
	{ 6,	2,	"v3" },
	{ 7,	2,	"v4" }
};
static const unsigned int asn_MAP_LTE_relWeightFourLayers_r13_enum2value_11[] = {
	0,	/* v1(0) */
	1,	/* v1dot25(1) */
	2,	/* v1dot5(2) */
	3,	/* v1dot75(3) */
	4,	/* v2(4) */
	5,	/* v2dot5(5) */
	6,	/* v3(6) */
	7	/* v4(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_relWeightFourLayers_r13_specs_11 = {
	asn_MAP_LTE_relWeightFourLayers_r13_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_relWeightFourLayers_r13_enum2value_11,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_relWeightFourLayers_r13_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_relWeightFourLayers_r13_11 = {
	"relWeightFourLayers-r13",
	"relWeightFourLayers-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_relWeightFourLayers_r13_tags_11,
	sizeof(asn_DEF_LTE_relWeightFourLayers_r13_tags_11)
		/sizeof(asn_DEF_LTE_relWeightFourLayers_r13_tags_11[0]) - 1, /* 1 */
	asn_DEF_LTE_relWeightFourLayers_r13_tags_11,	/* Same as above */
	sizeof(asn_DEF_LTE_relWeightFourLayers_r13_tags_11)
		/sizeof(asn_DEF_LTE_relWeightFourLayers_r13_tags_11[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_relWeightFourLayers_r13_constr_11,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_relWeightFourLayers_r13_specs_11	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_relWeightEightLayers_r13_value2enum_20[] = {
	{ 0,	2,	"v1" },
	{ 1,	7,	"v1dot25" },
	{ 2,	6,	"v1dot5" },
	{ 3,	7,	"v1dot75" },
	{ 4,	2,	"v2" },
	{ 5,	6,	"v2dot5" },
	{ 6,	2,	"v3" },
	{ 7,	2,	"v4" }
};
static const unsigned int asn_MAP_LTE_relWeightEightLayers_r13_enum2value_20[] = {
	0,	/* v1(0) */
	1,	/* v1dot25(1) */
	2,	/* v1dot5(2) */
	3,	/* v1dot75(3) */
	4,	/* v2(4) */
	5,	/* v2dot5(5) */
	6,	/* v3(6) */
	7	/* v4(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_relWeightEightLayers_r13_specs_20 = {
	asn_MAP_LTE_relWeightEightLayers_r13_value2enum_20,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_relWeightEightLayers_r13_enum2value_20,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_relWeightEightLayers_r13_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_relWeightEightLayers_r13_20 = {
	"relWeightEightLayers-r13",
	"relWeightEightLayers-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_relWeightEightLayers_r13_tags_20,
	sizeof(asn_DEF_LTE_relWeightEightLayers_r13_tags_20)
		/sizeof(asn_DEF_LTE_relWeightEightLayers_r13_tags_20[0]) - 1, /* 1 */
	asn_DEF_LTE_relWeightEightLayers_r13_tags_20,	/* Same as above */
	sizeof(asn_DEF_LTE_relWeightEightLayers_r13_tags_20)
		/sizeof(asn_DEF_LTE_relWeightEightLayers_r13_tags_20[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_relWeightEightLayers_r13_constr_20,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_relWeightEightLayers_r13_specs_20	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_MIMO_WeightedLayersCapabilities_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MIMO_WeightedLayersCapabilities_r13, relWeightTwoLayers_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_relWeightTwoLayers_r13_2,
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
		"relWeightTwoLayers-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_MIMO_WeightedLayersCapabilities_r13, relWeightFourLayers_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_relWeightFourLayers_r13_11,
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
		"relWeightFourLayers-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_MIMO_WeightedLayersCapabilities_r13, relWeightEightLayers_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_relWeightEightLayers_r13_20,
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
		"relWeightEightLayers-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MIMO_WeightedLayersCapabilities_r13, totalWeightedLayers_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LTE_totalWeightedLayers_r13_constr_29,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LTE_totalWeightedLayers_r13_constraint_1
		},
		0, 0, /* No default value */
		"totalWeightedLayers-r13"
		},
};
static const int asn_MAP_LTE_MIMO_WeightedLayersCapabilities_r13_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_LTE_MIMO_WeightedLayersCapabilities_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_MIMO_WeightedLayersCapabilities_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* relWeightTwoLayers-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* relWeightFourLayers-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* relWeightEightLayers-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* totalWeightedLayers-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_MIMO_WeightedLayersCapabilities_r13_specs_1 = {
	sizeof(struct LTE_MIMO_WeightedLayersCapabilities_r13),
	offsetof(struct LTE_MIMO_WeightedLayersCapabilities_r13, _asn_ctx),
	asn_MAP_LTE_MIMO_WeightedLayersCapabilities_r13_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_LTE_MIMO_WeightedLayersCapabilities_r13_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_MIMO_WeightedLayersCapabilities_r13 = {
	"MIMO-WeightedLayersCapabilities-r13",
	"MIMO-WeightedLayersCapabilities-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_MIMO_WeightedLayersCapabilities_r13_tags_1,
	sizeof(asn_DEF_LTE_MIMO_WeightedLayersCapabilities_r13_tags_1)
		/sizeof(asn_DEF_LTE_MIMO_WeightedLayersCapabilities_r13_tags_1[0]), /* 1 */
	asn_DEF_LTE_MIMO_WeightedLayersCapabilities_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_MIMO_WeightedLayersCapabilities_r13_tags_1)
		/sizeof(asn_DEF_LTE_MIMO_WeightedLayersCapabilities_r13_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_MIMO_WeightedLayersCapabilities_r13_1,
	4,	/* Elements count */
	&asn_SPC_LTE_MIMO_WeightedLayersCapabilities_r13_specs_1	/* Additional specs */
};

