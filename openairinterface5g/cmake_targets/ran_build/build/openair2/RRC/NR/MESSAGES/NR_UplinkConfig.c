/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_UplinkConfig.h"

static int
memb_NR_uplinkChannelBW_PerSCS_List_constraint_11(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1UL && size <= 5UL)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

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
static int
memb_NR_uplinkBWP_ToReleaseList_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1UL && size <= 4UL)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_NR_uplinkBWP_ToAddModList_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1UL && size <= 4UL)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_uplinkBWP_ToReleaseList_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_uplinkBWP_ToAddModList_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_uplinkChannelBW_PerSCS_List_constr_13 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  5 }	/* (SIZE(1..5)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_uplinkChannelBW_PerSCS_List_constr_13 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  5 }	/* (SIZE(1..5)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_enablePL_RS_UpdateForPUSCH_SRS_r16_constr_16 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_enableDefaultBeamPL_ForPUSCH0_0_r16_constr_18 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_enableDefaultBeamPL_ForPUCCH_r16_constr_20 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_enableDefaultBeamPL_ForSRS_r16_constr_22 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_mpr_PowerBoost_FR2_r16_constr_25 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_uplinkBWP_ToReleaseList_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_uplinkBWP_ToAddModList_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_NR_uplinkBWP_ToReleaseList_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NR_BWP_Id,
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
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_uplinkBWP_ToReleaseList_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_uplinkBWP_ToReleaseList_specs_3 = {
	sizeof(struct NR_UplinkConfig__uplinkBWP_ToReleaseList),
	offsetof(struct NR_UplinkConfig__uplinkBWP_ToReleaseList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_uplinkBWP_ToReleaseList_3 = {
	"uplinkBWP-ToReleaseList",
	"uplinkBWP-ToReleaseList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_uplinkBWP_ToReleaseList_tags_3,
	sizeof(asn_DEF_NR_uplinkBWP_ToReleaseList_tags_3)
		/sizeof(asn_DEF_NR_uplinkBWP_ToReleaseList_tags_3[0]) - 1, /* 1 */
	asn_DEF_NR_uplinkBWP_ToReleaseList_tags_3,	/* Same as above */
	sizeof(asn_DEF_NR_uplinkBWP_ToReleaseList_tags_3)
		/sizeof(asn_DEF_NR_uplinkBWP_ToReleaseList_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_uplinkBWP_ToReleaseList_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_NR_uplinkBWP_ToReleaseList_3,
	1,	/* Single element */
	&asn_SPC_NR_uplinkBWP_ToReleaseList_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_uplinkBWP_ToAddModList_5[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NR_BWP_Uplink,
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
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_uplinkBWP_ToAddModList_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_uplinkBWP_ToAddModList_specs_5 = {
	sizeof(struct NR_UplinkConfig__uplinkBWP_ToAddModList),
	offsetof(struct NR_UplinkConfig__uplinkBWP_ToAddModList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_uplinkBWP_ToAddModList_5 = {
	"uplinkBWP-ToAddModList",
	"uplinkBWP-ToAddModList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_uplinkBWP_ToAddModList_tags_5,
	sizeof(asn_DEF_NR_uplinkBWP_ToAddModList_tags_5)
		/sizeof(asn_DEF_NR_uplinkBWP_ToAddModList_tags_5[0]) - 1, /* 1 */
	asn_DEF_NR_uplinkBWP_ToAddModList_tags_5,	/* Same as above */
	sizeof(asn_DEF_NR_uplinkBWP_ToAddModList_tags_5)
		/sizeof(asn_DEF_NR_uplinkBWP_ToAddModList_tags_5[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_uplinkBWP_ToAddModList_constr_5,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_NR_uplinkBWP_ToAddModList_5,
	1,	/* Single element */
	&asn_SPC_NR_uplinkBWP_ToAddModList_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_uplinkChannelBW_PerSCS_List_13[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NR_SCS_SpecificCarrier,
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
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_uplinkChannelBW_PerSCS_List_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_uplinkChannelBW_PerSCS_List_specs_13 = {
	sizeof(struct NR_UplinkConfig__ext1__uplinkChannelBW_PerSCS_List),
	offsetof(struct NR_UplinkConfig__ext1__uplinkChannelBW_PerSCS_List, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_uplinkChannelBW_PerSCS_List_13 = {
	"uplinkChannelBW-PerSCS-List",
	"uplinkChannelBW-PerSCS-List",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_uplinkChannelBW_PerSCS_List_tags_13,
	sizeof(asn_DEF_NR_uplinkChannelBW_PerSCS_List_tags_13)
		/sizeof(asn_DEF_NR_uplinkChannelBW_PerSCS_List_tags_13[0]) - 1, /* 1 */
	asn_DEF_NR_uplinkChannelBW_PerSCS_List_tags_13,	/* Same as above */
	sizeof(asn_DEF_NR_uplinkChannelBW_PerSCS_List_tags_13)
		/sizeof(asn_DEF_NR_uplinkChannelBW_PerSCS_List_tags_13[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_uplinkChannelBW_PerSCS_List_constr_13,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_NR_uplinkChannelBW_PerSCS_List_13,
	1,	/* Single element */
	&asn_SPC_NR_uplinkChannelBW_PerSCS_List_specs_13	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_ext1_11[] = {
	{ ATF_POINTER, 2, offsetof(struct NR_UplinkConfig__ext1, powerBoostPi2BPSK),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
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
		"powerBoostPi2BPSK"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_UplinkConfig__ext1, uplinkChannelBW_PerSCS_List),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_NR_uplinkChannelBW_PerSCS_List_13,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_uplinkChannelBW_PerSCS_List_constr_13,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_uplinkChannelBW_PerSCS_List_constraint_11
		},
		0, 0, /* No default value */
		"uplinkChannelBW-PerSCS-List"
		},
};
static const int asn_MAP_NR_ext1_oms_11[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_NR_ext1_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_ext1_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* powerBoostPi2BPSK */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* uplinkChannelBW-PerSCS-List */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_ext1_specs_11 = {
	sizeof(struct NR_UplinkConfig__ext1),
	offsetof(struct NR_UplinkConfig__ext1, _asn_ctx),
	asn_MAP_NR_ext1_tag2el_11,
	2,	/* Count of tags in the map */
	asn_MAP_NR_ext1_oms_11,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ext1_11 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_ext1_tags_11,
	sizeof(asn_DEF_NR_ext1_tags_11)
		/sizeof(asn_DEF_NR_ext1_tags_11[0]) - 1, /* 1 */
	asn_DEF_NR_ext1_tags_11,	/* Same as above */
	sizeof(asn_DEF_NR_ext1_tags_11)
		/sizeof(asn_DEF_NR_ext1_tags_11[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_ext1_11,
	2,	/* Elements count */
	&asn_SPC_NR_ext1_specs_11	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_enablePL_RS_UpdateForPUSCH_SRS_r16_value2enum_16[] = {
	{ 0,	7,	"enabled" }
};
static const unsigned int asn_MAP_NR_enablePL_RS_UpdateForPUSCH_SRS_r16_enum2value_16[] = {
	0	/* enabled(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_enablePL_RS_UpdateForPUSCH_SRS_r16_specs_16 = {
	asn_MAP_NR_enablePL_RS_UpdateForPUSCH_SRS_r16_value2enum_16,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_enablePL_RS_UpdateForPUSCH_SRS_r16_enum2value_16,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_enablePL_RS_UpdateForPUSCH_SRS_r16_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_enablePL_RS_UpdateForPUSCH_SRS_r16_16 = {
	"enablePL-RS-UpdateForPUSCH-SRS-r16",
	"enablePL-RS-UpdateForPUSCH-SRS-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_enablePL_RS_UpdateForPUSCH_SRS_r16_tags_16,
	sizeof(asn_DEF_NR_enablePL_RS_UpdateForPUSCH_SRS_r16_tags_16)
		/sizeof(asn_DEF_NR_enablePL_RS_UpdateForPUSCH_SRS_r16_tags_16[0]) - 1, /* 1 */
	asn_DEF_NR_enablePL_RS_UpdateForPUSCH_SRS_r16_tags_16,	/* Same as above */
	sizeof(asn_DEF_NR_enablePL_RS_UpdateForPUSCH_SRS_r16_tags_16)
		/sizeof(asn_DEF_NR_enablePL_RS_UpdateForPUSCH_SRS_r16_tags_16[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_enablePL_RS_UpdateForPUSCH_SRS_r16_constr_16,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_enablePL_RS_UpdateForPUSCH_SRS_r16_specs_16	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_enableDefaultBeamPL_ForPUSCH0_0_r16_value2enum_18[] = {
	{ 0,	7,	"enabled" }
};
static const unsigned int asn_MAP_NR_enableDefaultBeamPL_ForPUSCH0_0_r16_enum2value_18[] = {
	0	/* enabled(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_enableDefaultBeamPL_ForPUSCH0_0_r16_specs_18 = {
	asn_MAP_NR_enableDefaultBeamPL_ForPUSCH0_0_r16_value2enum_18,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_enableDefaultBeamPL_ForPUSCH0_0_r16_enum2value_18,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_enableDefaultBeamPL_ForPUSCH0_0_r16_tags_18[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_enableDefaultBeamPL_ForPUSCH0_0_r16_18 = {
	"enableDefaultBeamPL-ForPUSCH0-0-r16",
	"enableDefaultBeamPL-ForPUSCH0-0-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_enableDefaultBeamPL_ForPUSCH0_0_r16_tags_18,
	sizeof(asn_DEF_NR_enableDefaultBeamPL_ForPUSCH0_0_r16_tags_18)
		/sizeof(asn_DEF_NR_enableDefaultBeamPL_ForPUSCH0_0_r16_tags_18[0]) - 1, /* 1 */
	asn_DEF_NR_enableDefaultBeamPL_ForPUSCH0_0_r16_tags_18,	/* Same as above */
	sizeof(asn_DEF_NR_enableDefaultBeamPL_ForPUSCH0_0_r16_tags_18)
		/sizeof(asn_DEF_NR_enableDefaultBeamPL_ForPUSCH0_0_r16_tags_18[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_enableDefaultBeamPL_ForPUSCH0_0_r16_constr_18,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_enableDefaultBeamPL_ForPUSCH0_0_r16_specs_18	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_enableDefaultBeamPL_ForPUCCH_r16_value2enum_20[] = {
	{ 0,	7,	"enabled" }
};
static const unsigned int asn_MAP_NR_enableDefaultBeamPL_ForPUCCH_r16_enum2value_20[] = {
	0	/* enabled(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_enableDefaultBeamPL_ForPUCCH_r16_specs_20 = {
	asn_MAP_NR_enableDefaultBeamPL_ForPUCCH_r16_value2enum_20,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_enableDefaultBeamPL_ForPUCCH_r16_enum2value_20,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_enableDefaultBeamPL_ForPUCCH_r16_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_enableDefaultBeamPL_ForPUCCH_r16_20 = {
	"enableDefaultBeamPL-ForPUCCH-r16",
	"enableDefaultBeamPL-ForPUCCH-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_enableDefaultBeamPL_ForPUCCH_r16_tags_20,
	sizeof(asn_DEF_NR_enableDefaultBeamPL_ForPUCCH_r16_tags_20)
		/sizeof(asn_DEF_NR_enableDefaultBeamPL_ForPUCCH_r16_tags_20[0]) - 1, /* 1 */
	asn_DEF_NR_enableDefaultBeamPL_ForPUCCH_r16_tags_20,	/* Same as above */
	sizeof(asn_DEF_NR_enableDefaultBeamPL_ForPUCCH_r16_tags_20)
		/sizeof(asn_DEF_NR_enableDefaultBeamPL_ForPUCCH_r16_tags_20[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_enableDefaultBeamPL_ForPUCCH_r16_constr_20,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_enableDefaultBeamPL_ForPUCCH_r16_specs_20	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_enableDefaultBeamPL_ForSRS_r16_value2enum_22[] = {
	{ 0,	7,	"enabled" }
};
static const unsigned int asn_MAP_NR_enableDefaultBeamPL_ForSRS_r16_enum2value_22[] = {
	0	/* enabled(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_enableDefaultBeamPL_ForSRS_r16_specs_22 = {
	asn_MAP_NR_enableDefaultBeamPL_ForSRS_r16_value2enum_22,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_enableDefaultBeamPL_ForSRS_r16_enum2value_22,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_enableDefaultBeamPL_ForSRS_r16_tags_22[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_enableDefaultBeamPL_ForSRS_r16_22 = {
	"enableDefaultBeamPL-ForSRS-r16",
	"enableDefaultBeamPL-ForSRS-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_enableDefaultBeamPL_ForSRS_r16_tags_22,
	sizeof(asn_DEF_NR_enableDefaultBeamPL_ForSRS_r16_tags_22)
		/sizeof(asn_DEF_NR_enableDefaultBeamPL_ForSRS_r16_tags_22[0]) - 1, /* 1 */
	asn_DEF_NR_enableDefaultBeamPL_ForSRS_r16_tags_22,	/* Same as above */
	sizeof(asn_DEF_NR_enableDefaultBeamPL_ForSRS_r16_tags_22)
		/sizeof(asn_DEF_NR_enableDefaultBeamPL_ForSRS_r16_tags_22[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_enableDefaultBeamPL_ForSRS_r16_constr_22,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_enableDefaultBeamPL_ForSRS_r16_specs_22	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_mpr_PowerBoost_FR2_r16_value2enum_25[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_NR_mpr_PowerBoost_FR2_r16_enum2value_25[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_mpr_PowerBoost_FR2_r16_specs_25 = {
	asn_MAP_NR_mpr_PowerBoost_FR2_r16_value2enum_25,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_mpr_PowerBoost_FR2_r16_enum2value_25,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_mpr_PowerBoost_FR2_r16_tags_25[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_mpr_PowerBoost_FR2_r16_25 = {
	"mpr-PowerBoost-FR2-r16",
	"mpr-PowerBoost-FR2-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_mpr_PowerBoost_FR2_r16_tags_25,
	sizeof(asn_DEF_NR_mpr_PowerBoost_FR2_r16_tags_25)
		/sizeof(asn_DEF_NR_mpr_PowerBoost_FR2_r16_tags_25[0]) - 1, /* 1 */
	asn_DEF_NR_mpr_PowerBoost_FR2_r16_tags_25,	/* Same as above */
	sizeof(asn_DEF_NR_mpr_PowerBoost_FR2_r16_tags_25)
		/sizeof(asn_DEF_NR_mpr_PowerBoost_FR2_r16_tags_25[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_mpr_PowerBoost_FR2_r16_constr_25,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_mpr_PowerBoost_FR2_r16_specs_25	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_ext2_15[] = {
	{ ATF_POINTER, 6, offsetof(struct NR_UplinkConfig__ext2, enablePL_RS_UpdateForPUSCH_SRS_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_enablePL_RS_UpdateForPUSCH_SRS_r16_16,
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
		"enablePL-RS-UpdateForPUSCH-SRS-r16"
		},
	{ ATF_POINTER, 5, offsetof(struct NR_UplinkConfig__ext2, enableDefaultBeamPL_ForPUSCH0_0_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_enableDefaultBeamPL_ForPUSCH0_0_r16_18,
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
		"enableDefaultBeamPL-ForPUSCH0-0-r16"
		},
	{ ATF_POINTER, 4, offsetof(struct NR_UplinkConfig__ext2, enableDefaultBeamPL_ForPUCCH_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_enableDefaultBeamPL_ForPUCCH_r16_20,
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
		"enableDefaultBeamPL-ForPUCCH-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_UplinkConfig__ext2, enableDefaultBeamPL_ForSRS_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_enableDefaultBeamPL_ForSRS_r16_22,
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
		"enableDefaultBeamPL-ForSRS-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_UplinkConfig__ext2, uplinkTxSwitching_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_SetupRelease_UplinkTxSwitching_r16,
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
		"uplinkTxSwitching-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_UplinkConfig__ext2, mpr_PowerBoost_FR2_r16),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_mpr_PowerBoost_FR2_r16_25,
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
		"mpr-PowerBoost-FR2-r16"
		},
};
static const int asn_MAP_NR_ext2_oms_15[] = { 0, 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_NR_ext2_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_ext2_tag2el_15[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* enablePL-RS-UpdateForPUSCH-SRS-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* enableDefaultBeamPL-ForPUSCH0-0-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* enableDefaultBeamPL-ForPUCCH-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* enableDefaultBeamPL-ForSRS-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* uplinkTxSwitching-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* mpr-PowerBoost-FR2-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_ext2_specs_15 = {
	sizeof(struct NR_UplinkConfig__ext2),
	offsetof(struct NR_UplinkConfig__ext2, _asn_ctx),
	asn_MAP_NR_ext2_tag2el_15,
	6,	/* Count of tags in the map */
	asn_MAP_NR_ext2_oms_15,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ext2_15 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_ext2_tags_15,
	sizeof(asn_DEF_NR_ext2_tags_15)
		/sizeof(asn_DEF_NR_ext2_tags_15[0]) - 1, /* 1 */
	asn_DEF_NR_ext2_tags_15,	/* Same as above */
	sizeof(asn_DEF_NR_ext2_tags_15)
		/sizeof(asn_DEF_NR_ext2_tags_15[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_ext2_15,
	6,	/* Elements count */
	&asn_SPC_NR_ext2_specs_15	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_UplinkConfig_1[] = {
	{ ATF_POINTER, 8, offsetof(struct NR_UplinkConfig, initialUplinkBWP),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_BWP_UplinkDedicated,
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
		"initialUplinkBWP"
		},
	{ ATF_POINTER, 7, offsetof(struct NR_UplinkConfig, uplinkBWP_ToReleaseList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_NR_uplinkBWP_ToReleaseList_3,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_uplinkBWP_ToReleaseList_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_uplinkBWP_ToReleaseList_constraint_1
		},
		0, 0, /* No default value */
		"uplinkBWP-ToReleaseList"
		},
	{ ATF_POINTER, 6, offsetof(struct NR_UplinkConfig, uplinkBWP_ToAddModList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_NR_uplinkBWP_ToAddModList_5,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_uplinkBWP_ToAddModList_constr_5,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_uplinkBWP_ToAddModList_constraint_1
		},
		0, 0, /* No default value */
		"uplinkBWP-ToAddModList"
		},
	{ ATF_POINTER, 5, offsetof(struct NR_UplinkConfig, firstActiveUplinkBWP_Id),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_BWP_Id,
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
		"firstActiveUplinkBWP-Id"
		},
	{ ATF_POINTER, 4, offsetof(struct NR_UplinkConfig, pusch_ServingCellConfig),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_SetupRelease_PUSCH_ServingCellConfig,
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
		"pusch-ServingCellConfig"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_UplinkConfig, carrierSwitching),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_SetupRelease_SRS_CarrierSwitching,
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
		"carrierSwitching"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_UplinkConfig, ext1),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_NR_ext1_11,
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
	{ ATF_POINTER, 1, offsetof(struct NR_UplinkConfig, ext2),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		0,
		&asn_DEF_NR_ext2_15,
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
		"ext2"
		},
};
static const int asn_MAP_NR_UplinkConfig_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7 };
static const ber_tlv_tag_t asn_DEF_NR_UplinkConfig_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_UplinkConfig_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* initialUplinkBWP */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* uplinkBWP-ToReleaseList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* uplinkBWP-ToAddModList */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* firstActiveUplinkBWP-Id */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* pusch-ServingCellConfig */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* carrierSwitching */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* ext2 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_UplinkConfig_specs_1 = {
	sizeof(struct NR_UplinkConfig),
	offsetof(struct NR_UplinkConfig, _asn_ctx),
	asn_MAP_NR_UplinkConfig_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_NR_UplinkConfig_oms_1,	/* Optional members */
	6, 2,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_UplinkConfig = {
	"UplinkConfig",
	"UplinkConfig",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_UplinkConfig_tags_1,
	sizeof(asn_DEF_NR_UplinkConfig_tags_1)
		/sizeof(asn_DEF_NR_UplinkConfig_tags_1[0]), /* 1 */
	asn_DEF_NR_UplinkConfig_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_UplinkConfig_tags_1)
		/sizeof(asn_DEF_NR_UplinkConfig_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_UplinkConfig_1,
	8,	/* Elements count */
	&asn_SPC_NR_UplinkConfig_specs_1	/* Additional specs */
};

