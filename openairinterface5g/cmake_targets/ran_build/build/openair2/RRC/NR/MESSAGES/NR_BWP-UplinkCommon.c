/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_BWP-UplinkCommon.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_NativeInteger_constraint_18(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 31L)) {
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
memb_NR_numberOfMsg3_RepetitionsList_r17_constraint_12(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 4UL)) {
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
memb_NR_mcs_Msg3_Repetitions_r17_constraint_12(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 8UL)) {
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
static asn_per_constraints_t asn_PER_type_NR_useInterlacePUCCH_PUSCH_r16_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_numberOfMsg3_RepetitionsList_r17_constr_16 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  4,  4 }	/* (SIZE(4..4)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_Member_constr_19 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_mcs_Msg3_Repetitions_r17_constr_18 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  8,  8 }	/* (SIZE(8..8)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_numberOfMsg3_RepetitionsList_r17_constr_16 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  4,  4 }	/* (SIZE(4..4)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_mcs_Msg3_Repetitions_r17_constr_18 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  8,  8 }	/* (SIZE(8..8)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_NR_useInterlacePUCCH_PUSCH_r16_value2enum_9[] = {
	{ 0,	7,	"enabled" }
};
static const unsigned int asn_MAP_NR_useInterlacePUCCH_PUSCH_r16_enum2value_9[] = {
	0	/* enabled(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_useInterlacePUCCH_PUSCH_r16_specs_9 = {
	asn_MAP_NR_useInterlacePUCCH_PUSCH_r16_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_useInterlacePUCCH_PUSCH_r16_enum2value_9,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_useInterlacePUCCH_PUSCH_r16_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_useInterlacePUCCH_PUSCH_r16_9 = {
	"useInterlacePUCCH-PUSCH-r16",
	"useInterlacePUCCH-PUSCH-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_useInterlacePUCCH_PUSCH_r16_tags_9,
	sizeof(asn_DEF_NR_useInterlacePUCCH_PUSCH_r16_tags_9)
		/sizeof(asn_DEF_NR_useInterlacePUCCH_PUSCH_r16_tags_9[0]) - 1, /* 1 */
	asn_DEF_NR_useInterlacePUCCH_PUSCH_r16_tags_9,	/* Same as above */
	sizeof(asn_DEF_NR_useInterlacePUCCH_PUSCH_r16_tags_9)
		/sizeof(asn_DEF_NR_useInterlacePUCCH_PUSCH_r16_tags_9[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_useInterlacePUCCH_PUSCH_r16_constr_9,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_useInterlacePUCCH_PUSCH_r16_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_ext1_7[] = {
	{ ATF_POINTER, 3, offsetof(struct NR_BWP_UplinkCommon__ext1, rach_ConfigCommonIAB_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_SetupRelease_RACH_ConfigCommon,
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
		"rach-ConfigCommonIAB-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_BWP_UplinkCommon__ext1, useInterlacePUCCH_PUSCH_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_useInterlacePUCCH_PUSCH_r16_9,
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
		"useInterlacePUCCH-PUSCH-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_BWP_UplinkCommon__ext1, msgA_ConfigCommon_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_SetupRelease_MsgA_ConfigCommon_r16,
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
		"msgA-ConfigCommon-r16"
		},
};
static const int asn_MAP_NR_ext1_oms_7[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_NR_ext1_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_ext1_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rach-ConfigCommonIAB-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* useInterlacePUCCH-PUSCH-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* msgA-ConfigCommon-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_ext1_specs_7 = {
	sizeof(struct NR_BWP_UplinkCommon__ext1),
	offsetof(struct NR_BWP_UplinkCommon__ext1, _asn_ctx),
	asn_MAP_NR_ext1_tag2el_7,
	3,	/* Count of tags in the map */
	asn_MAP_NR_ext1_oms_7,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ext1_7 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_ext1_tags_7,
	sizeof(asn_DEF_NR_ext1_tags_7)
		/sizeof(asn_DEF_NR_ext1_tags_7[0]) - 1, /* 1 */
	asn_DEF_NR_ext1_tags_7,	/* Same as above */
	sizeof(asn_DEF_NR_ext1_tags_7)
		/sizeof(asn_DEF_NR_ext1_tags_7[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_ext1_7,
	3,	/* Elements count */
	&asn_SPC_NR_ext1_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_numberOfMsg3_RepetitionsList_r17_16[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_NR_NumberOfMsg3_Repetitions_r17,
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
static const ber_tlv_tag_t asn_DEF_NR_numberOfMsg3_RepetitionsList_r17_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_numberOfMsg3_RepetitionsList_r17_specs_16 = {
	sizeof(struct NR_BWP_UplinkCommon__ext2__numberOfMsg3_RepetitionsList_r17),
	offsetof(struct NR_BWP_UplinkCommon__ext2__numberOfMsg3_RepetitionsList_r17, _asn_ctx),
	1,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_numberOfMsg3_RepetitionsList_r17_16 = {
	"numberOfMsg3-RepetitionsList-r17",
	"numberOfMsg3-RepetitionsList-r17",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_numberOfMsg3_RepetitionsList_r17_tags_16,
	sizeof(asn_DEF_NR_numberOfMsg3_RepetitionsList_r17_tags_16)
		/sizeof(asn_DEF_NR_numberOfMsg3_RepetitionsList_r17_tags_16[0]) - 1, /* 1 */
	asn_DEF_NR_numberOfMsg3_RepetitionsList_r17_tags_16,	/* Same as above */
	sizeof(asn_DEF_NR_numberOfMsg3_RepetitionsList_r17_tags_16)
		/sizeof(asn_DEF_NR_numberOfMsg3_RepetitionsList_r17_tags_16[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_numberOfMsg3_RepetitionsList_r17_constr_16,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_NR_numberOfMsg3_RepetitionsList_r17_16,
	1,	/* Single element */
	&asn_SPC_NR_numberOfMsg3_RepetitionsList_r17_specs_16	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_mcs_Msg3_Repetitions_r17_18[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_Member_constr_19,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NativeInteger_constraint_18
		},
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_mcs_Msg3_Repetitions_r17_tags_18[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_mcs_Msg3_Repetitions_r17_specs_18 = {
	sizeof(struct NR_BWP_UplinkCommon__ext2__mcs_Msg3_Repetitions_r17),
	offsetof(struct NR_BWP_UplinkCommon__ext2__mcs_Msg3_Repetitions_r17, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_mcs_Msg3_Repetitions_r17_18 = {
	"mcs-Msg3-Repetitions-r17",
	"mcs-Msg3-Repetitions-r17",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_mcs_Msg3_Repetitions_r17_tags_18,
	sizeof(asn_DEF_NR_mcs_Msg3_Repetitions_r17_tags_18)
		/sizeof(asn_DEF_NR_mcs_Msg3_Repetitions_r17_tags_18[0]) - 1, /* 1 */
	asn_DEF_NR_mcs_Msg3_Repetitions_r17_tags_18,	/* Same as above */
	sizeof(asn_DEF_NR_mcs_Msg3_Repetitions_r17_tags_18)
		/sizeof(asn_DEF_NR_mcs_Msg3_Repetitions_r17_tags_18[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_mcs_Msg3_Repetitions_r17_constr_18,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_NR_mcs_Msg3_Repetitions_r17_18,
	1,	/* Single element */
	&asn_SPC_NR_mcs_Msg3_Repetitions_r17_specs_18	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_ext2_12[] = {
	{ ATF_POINTER, 5, offsetof(struct NR_BWP_UplinkCommon__ext2, enableRA_PrioritizationForSlicing_r17),
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
		"enableRA-PrioritizationForSlicing-r17"
		},
	{ ATF_POINTER, 4, offsetof(struct NR_BWP_UplinkCommon__ext2, additionalRACH_ConfigList_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_SetupRelease_AdditionalRACH_ConfigList_r17,
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
		"additionalRACH-ConfigList-r17"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_BWP_UplinkCommon__ext2, rsrp_ThresholdMsg3_r17),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_RSRP_Range,
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
		"rsrp-ThresholdMsg3-r17"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_BWP_UplinkCommon__ext2, numberOfMsg3_RepetitionsList_r17),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_NR_numberOfMsg3_RepetitionsList_r17_16,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_numberOfMsg3_RepetitionsList_r17_constr_16,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_numberOfMsg3_RepetitionsList_r17_constraint_12
		},
		0, 0, /* No default value */
		"numberOfMsg3-RepetitionsList-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_BWP_UplinkCommon__ext2, mcs_Msg3_Repetitions_r17),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_NR_mcs_Msg3_Repetitions_r17_18,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_mcs_Msg3_Repetitions_r17_constr_18,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_mcs_Msg3_Repetitions_r17_constraint_12
		},
		0, 0, /* No default value */
		"mcs-Msg3-Repetitions-r17"
		},
};
static const int asn_MAP_NR_ext2_oms_12[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_NR_ext2_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_ext2_tag2el_12[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* enableRA-PrioritizationForSlicing-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* additionalRACH-ConfigList-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rsrp-ThresholdMsg3-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* numberOfMsg3-RepetitionsList-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* mcs-Msg3-Repetitions-r17 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_ext2_specs_12 = {
	sizeof(struct NR_BWP_UplinkCommon__ext2),
	offsetof(struct NR_BWP_UplinkCommon__ext2, _asn_ctx),
	asn_MAP_NR_ext2_tag2el_12,
	5,	/* Count of tags in the map */
	asn_MAP_NR_ext2_oms_12,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ext2_12 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_ext2_tags_12,
	sizeof(asn_DEF_NR_ext2_tags_12)
		/sizeof(asn_DEF_NR_ext2_tags_12[0]) - 1, /* 1 */
	asn_DEF_NR_ext2_tags_12,	/* Same as above */
	sizeof(asn_DEF_NR_ext2_tags_12)
		/sizeof(asn_DEF_NR_ext2_tags_12[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_ext2_12,
	5,	/* Elements count */
	&asn_SPC_NR_ext2_specs_12	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_BWP_UplinkCommon_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_BWP_UplinkCommon, genericParameters),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_BWP,
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
		"genericParameters"
		},
	{ ATF_POINTER, 5, offsetof(struct NR_BWP_UplinkCommon, rach_ConfigCommon),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_SetupRelease_RACH_ConfigCommon,
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
		"rach-ConfigCommon"
		},
	{ ATF_POINTER, 4, offsetof(struct NR_BWP_UplinkCommon, pusch_ConfigCommon),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_SetupRelease_PUSCH_ConfigCommon,
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
		"pusch-ConfigCommon"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_BWP_UplinkCommon, pucch_ConfigCommon),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_SetupRelease_PUCCH_ConfigCommon,
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
		"pucch-ConfigCommon"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_BWP_UplinkCommon, ext1),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_NR_ext1_7,
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
	{ ATF_POINTER, 1, offsetof(struct NR_BWP_UplinkCommon, ext2),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_NR_ext2_12,
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
static const int asn_MAP_NR_BWP_UplinkCommon_oms_1[] = { 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_NR_BWP_UplinkCommon_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_BWP_UplinkCommon_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* genericParameters */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rach-ConfigCommon */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pusch-ConfigCommon */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* pucch-ConfigCommon */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* ext2 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_BWP_UplinkCommon_specs_1 = {
	sizeof(struct NR_BWP_UplinkCommon),
	offsetof(struct NR_BWP_UplinkCommon, _asn_ctx),
	asn_MAP_NR_BWP_UplinkCommon_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_NR_BWP_UplinkCommon_oms_1,	/* Optional members */
	3, 2,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_BWP_UplinkCommon = {
	"BWP-UplinkCommon",
	"BWP-UplinkCommon",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_BWP_UplinkCommon_tags_1,
	sizeof(asn_DEF_NR_BWP_UplinkCommon_tags_1)
		/sizeof(asn_DEF_NR_BWP_UplinkCommon_tags_1[0]), /* 1 */
	asn_DEF_NR_BWP_UplinkCommon_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_BWP_UplinkCommon_tags_1)
		/sizeof(asn_DEF_NR_BWP_UplinkCommon_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_BWP_UplinkCommon_1,
	6,	/* Elements count */
	&asn_SPC_NR_BWP_UplinkCommon_specs_1	/* Additional specs */
};

