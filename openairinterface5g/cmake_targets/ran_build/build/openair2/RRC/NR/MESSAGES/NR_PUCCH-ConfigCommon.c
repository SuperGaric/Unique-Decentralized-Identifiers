/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_PUCCH-ConfigCommon.h"

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
memb_NR_nrofPRBs_constraint_10(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1L && value <= 16L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_NR_pucch_ResourceCommonRedCap_r17_constraint_10(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 15L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_NR_pucch_ResourceCommon_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 15L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_NR_hoppingId_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 1023L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_NR_p0_nominal_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -202L && value <= 24L)) {
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
static asn_per_constraints_t asn_PER_type_NR_pucch_GroupHopping_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_intra_SlotFH_r17_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_additionalPRBOffset_r17_constr_16 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_nrofPRBs_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (1..16) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_pucch_ResourceCommonRedCap_r17_constr_15 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_pucch_ResourceCommon_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_hoppingId_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  1023 }	/* (0..1023) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_p0_nominal_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8, -202,  24 }	/* (-202..24) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_NR_pucch_GroupHopping_value2enum_3[] = {
	{ 0,	7,	"neither" },
	{ 1,	6,	"enable" },
	{ 2,	7,	"disable" }
};
static const unsigned int asn_MAP_NR_pucch_GroupHopping_enum2value_3[] = {
	2,	/* disable(2) */
	1,	/* enable(1) */
	0	/* neither(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_pucch_GroupHopping_specs_3 = {
	asn_MAP_NR_pucch_GroupHopping_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_pucch_GroupHopping_enum2value_3,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_pucch_GroupHopping_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_pucch_GroupHopping_3 = {
	"pucch-GroupHopping",
	"pucch-GroupHopping",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_pucch_GroupHopping_tags_3,
	sizeof(asn_DEF_NR_pucch_GroupHopping_tags_3)
		/sizeof(asn_DEF_NR_pucch_GroupHopping_tags_3[0]) - 1, /* 1 */
	asn_DEF_NR_pucch_GroupHopping_tags_3,	/* Same as above */
	sizeof(asn_DEF_NR_pucch_GroupHopping_tags_3)
		/sizeof(asn_DEF_NR_pucch_GroupHopping_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_pucch_GroupHopping_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_pucch_GroupHopping_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_intra_SlotFH_r17_value2enum_12[] = {
	{ 0,	13,	"fromLowerEdge" },
	{ 1,	13,	"fromUpperEdge" }
};
static const unsigned int asn_MAP_NR_intra_SlotFH_r17_enum2value_12[] = {
	0,	/* fromLowerEdge(0) */
	1	/* fromUpperEdge(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_intra_SlotFH_r17_specs_12 = {
	asn_MAP_NR_intra_SlotFH_r17_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_intra_SlotFH_r17_enum2value_12,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_intra_SlotFH_r17_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_intra_SlotFH_r17_12 = {
	"intra-SlotFH-r17",
	"intra-SlotFH-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_intra_SlotFH_r17_tags_12,
	sizeof(asn_DEF_NR_intra_SlotFH_r17_tags_12)
		/sizeof(asn_DEF_NR_intra_SlotFH_r17_tags_12[0]) - 1, /* 1 */
	asn_DEF_NR_intra_SlotFH_r17_tags_12,	/* Same as above */
	sizeof(asn_DEF_NR_intra_SlotFH_r17_tags_12)
		/sizeof(asn_DEF_NR_intra_SlotFH_r17_tags_12[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_intra_SlotFH_r17_constr_12,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_intra_SlotFH_r17_specs_12	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_additionalPRBOffset_r17_value2enum_16[] = {
	{ 0,	2,	"n2" },
	{ 1,	2,	"n3" },
	{ 2,	2,	"n4" },
	{ 3,	2,	"n6" },
	{ 4,	2,	"n8" },
	{ 5,	2,	"n9" },
	{ 6,	3,	"n10" },
	{ 7,	3,	"n12" }
};
static const unsigned int asn_MAP_NR_additionalPRBOffset_r17_enum2value_16[] = {
	6,	/* n10(6) */
	7,	/* n12(7) */
	0,	/* n2(0) */
	1,	/* n3(1) */
	2,	/* n4(2) */
	3,	/* n6(3) */
	4,	/* n8(4) */
	5	/* n9(5) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_additionalPRBOffset_r17_specs_16 = {
	asn_MAP_NR_additionalPRBOffset_r17_value2enum_16,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_additionalPRBOffset_r17_enum2value_16,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_additionalPRBOffset_r17_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_additionalPRBOffset_r17_16 = {
	"additionalPRBOffset-r17",
	"additionalPRBOffset-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_additionalPRBOffset_r17_tags_16,
	sizeof(asn_DEF_NR_additionalPRBOffset_r17_tags_16)
		/sizeof(asn_DEF_NR_additionalPRBOffset_r17_tags_16[0]) - 1, /* 1 */
	asn_DEF_NR_additionalPRBOffset_r17_tags_16,	/* Same as above */
	sizeof(asn_DEF_NR_additionalPRBOffset_r17_tags_16)
		/sizeof(asn_DEF_NR_additionalPRBOffset_r17_tags_16[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_additionalPRBOffset_r17_constr_16,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_additionalPRBOffset_r17_specs_16	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_ext1_10[] = {
	{ ATF_POINTER, 4, offsetof(struct NR_PUCCH_ConfigCommon__ext1, nrofPRBs),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_nrofPRBs_constr_11,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_nrofPRBs_constraint_10
		},
		0, 0, /* No default value */
		"nrofPRBs"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_PUCCH_ConfigCommon__ext1, intra_SlotFH_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_intra_SlotFH_r17_12,
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
		"intra-SlotFH-r17"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_PUCCH_ConfigCommon__ext1, pucch_ResourceCommonRedCap_r17),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_pucch_ResourceCommonRedCap_r17_constr_15,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_pucch_ResourceCommonRedCap_r17_constraint_10
		},
		0, 0, /* No default value */
		"pucch-ResourceCommonRedCap-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_PUCCH_ConfigCommon__ext1, additionalPRBOffset_r17),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_additionalPRBOffset_r17_16,
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
		"additionalPRBOffset-r17"
		},
};
static const int asn_MAP_NR_ext1_oms_10[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_NR_ext1_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_ext1_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nrofPRBs */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* intra-SlotFH-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pucch-ResourceCommonRedCap-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* additionalPRBOffset-r17 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_ext1_specs_10 = {
	sizeof(struct NR_PUCCH_ConfigCommon__ext1),
	offsetof(struct NR_PUCCH_ConfigCommon__ext1, _asn_ctx),
	asn_MAP_NR_ext1_tag2el_10,
	4,	/* Count of tags in the map */
	asn_MAP_NR_ext1_oms_10,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ext1_10 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_ext1_tags_10,
	sizeof(asn_DEF_NR_ext1_tags_10)
		/sizeof(asn_DEF_NR_ext1_tags_10[0]) - 1, /* 1 */
	asn_DEF_NR_ext1_tags_10,	/* Same as above */
	sizeof(asn_DEF_NR_ext1_tags_10)
		/sizeof(asn_DEF_NR_ext1_tags_10[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_ext1_10,
	4,	/* Elements count */
	&asn_SPC_NR_ext1_specs_10	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_PUCCH_ConfigCommon_1[] = {
	{ ATF_POINTER, 1, offsetof(struct NR_PUCCH_ConfigCommon, pucch_ResourceCommon),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_pucch_ResourceCommon_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_pucch_ResourceCommon_constraint_1
		},
		0, 0, /* No default value */
		"pucch-ResourceCommon"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_PUCCH_ConfigCommon, pucch_GroupHopping),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_pucch_GroupHopping_3,
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
		"pucch-GroupHopping"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_PUCCH_ConfigCommon, hoppingId),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_hoppingId_constr_7,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_hoppingId_constraint_1
		},
		0, 0, /* No default value */
		"hoppingId"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_PUCCH_ConfigCommon, p0_nominal),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_p0_nominal_constr_8,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_p0_nominal_constraint_1
		},
		0, 0, /* No default value */
		"p0-nominal"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_PUCCH_ConfigCommon, ext1),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_NR_ext1_10,
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
		"ext1"
		},
};
static const int asn_MAP_NR_PUCCH_ConfigCommon_oms_1[] = { 0, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_NR_PUCCH_ConfigCommon_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_PUCCH_ConfigCommon_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pucch-ResourceCommon */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pucch-GroupHopping */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* hoppingId */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* p0-nominal */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_PUCCH_ConfigCommon_specs_1 = {
	sizeof(struct NR_PUCCH_ConfigCommon),
	offsetof(struct NR_PUCCH_ConfigCommon, _asn_ctx),
	asn_MAP_NR_PUCCH_ConfigCommon_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_NR_PUCCH_ConfigCommon_oms_1,	/* Optional members */
	3, 1,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_PUCCH_ConfigCommon = {
	"PUCCH-ConfigCommon",
	"PUCCH-ConfigCommon",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_PUCCH_ConfigCommon_tags_1,
	sizeof(asn_DEF_NR_PUCCH_ConfigCommon_tags_1)
		/sizeof(asn_DEF_NR_PUCCH_ConfigCommon_tags_1[0]), /* 1 */
	asn_DEF_NR_PUCCH_ConfigCommon_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_PUCCH_ConfigCommon_tags_1)
		/sizeof(asn_DEF_NR_PUCCH_ConfigCommon_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_PUCCH_ConfigCommon_1,
	5,	/* Elements count */
	&asn_SPC_NR_PUCCH_ConfigCommon_specs_1	/* Additional specs */
};

