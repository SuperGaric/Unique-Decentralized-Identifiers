/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_NPUSCH-ConfigCommon-NB-r13.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_LTE_threeTone_BaseSequence_r13_constraint_21(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 12L)) {
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
memb_LTE_threeTone_CyclicShift_r13_constraint_21(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 2L)) {
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
memb_LTE_sixTone_BaseSequence_r13_constraint_21(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 14L)) {
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
memb_LTE_sixTone_CyclicShift_r13_constraint_21(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 3L)) {
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
memb_LTE_twelveTone_BaseSequence_r13_constraint_21(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 30L)) {
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
memb_LTE_ack_NACK_NumRepetitions_Msg4_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1UL && size <= 3UL)) {
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
static asn_per_constraints_t asn_PER_type_LTE_ack_NACK_NumRepetitions_Msg4_r13_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  3 }	/* (SIZE(1..3)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_srs_SubframeConfig_r13_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LTE_threeTone_BaseSequence_r13_constr_22 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  12 }	/* (0..12) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LTE_threeTone_CyclicShift_r13_constr_23 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LTE_sixTone_BaseSequence_r13_constr_24 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  14 }	/* (0..14) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LTE_sixTone_CyclicShift_r13_constr_25 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LTE_twelveTone_BaseSequence_r13_constr_26 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  30 }	/* (0..30) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LTE_ack_NACK_NumRepetitions_Msg4_r13_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  3 }	/* (SIZE(1..3)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_LTE_ack_NACK_NumRepetitions_Msg4_r13_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_LTE_ACK_NACK_NumRepetitions_NB_r13,
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
static const ber_tlv_tag_t asn_DEF_LTE_ack_NACK_NumRepetitions_Msg4_r13_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_LTE_ack_NACK_NumRepetitions_Msg4_r13_specs_2 = {
	sizeof(struct LTE_NPUSCH_ConfigCommon_NB_r13__ack_NACK_NumRepetitions_Msg4_r13),
	offsetof(struct LTE_NPUSCH_ConfigCommon_NB_r13__ack_NACK_NumRepetitions_Msg4_r13, _asn_ctx),
	1,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ack_NACK_NumRepetitions_Msg4_r13_2 = {
	"ack-NACK-NumRepetitions-Msg4-r13",
	"ack-NACK-NumRepetitions-Msg4-r13",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_LTE_ack_NACK_NumRepetitions_Msg4_r13_tags_2,
	sizeof(asn_DEF_LTE_ack_NACK_NumRepetitions_Msg4_r13_tags_2)
		/sizeof(asn_DEF_LTE_ack_NACK_NumRepetitions_Msg4_r13_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_ack_NACK_NumRepetitions_Msg4_r13_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_ack_NACK_NumRepetitions_Msg4_r13_tags_2)
		/sizeof(asn_DEF_LTE_ack_NACK_NumRepetitions_Msg4_r13_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_ack_NACK_NumRepetitions_Msg4_r13_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_LTE_ack_NACK_NumRepetitions_Msg4_r13_2,
	1,	/* Single element */
	&asn_SPC_LTE_ack_NACK_NumRepetitions_Msg4_r13_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_srs_SubframeConfig_r13_value2enum_4[] = {
	{ 0,	3,	"sc0" },
	{ 1,	3,	"sc1" },
	{ 2,	3,	"sc2" },
	{ 3,	3,	"sc3" },
	{ 4,	3,	"sc4" },
	{ 5,	3,	"sc5" },
	{ 6,	3,	"sc6" },
	{ 7,	3,	"sc7" },
	{ 8,	3,	"sc8" },
	{ 9,	3,	"sc9" },
	{ 10,	4,	"sc10" },
	{ 11,	4,	"sc11" },
	{ 12,	4,	"sc12" },
	{ 13,	4,	"sc13" },
	{ 14,	4,	"sc14" },
	{ 15,	4,	"sc15" }
};
static const unsigned int asn_MAP_LTE_srs_SubframeConfig_r13_enum2value_4[] = {
	0,	/* sc0(0) */
	1,	/* sc1(1) */
	10,	/* sc10(10) */
	11,	/* sc11(11) */
	12,	/* sc12(12) */
	13,	/* sc13(13) */
	14,	/* sc14(14) */
	15,	/* sc15(15) */
	2,	/* sc2(2) */
	3,	/* sc3(3) */
	4,	/* sc4(4) */
	5,	/* sc5(5) */
	6,	/* sc6(6) */
	7,	/* sc7(7) */
	8,	/* sc8(8) */
	9	/* sc9(9) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_srs_SubframeConfig_r13_specs_4 = {
	asn_MAP_LTE_srs_SubframeConfig_r13_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_srs_SubframeConfig_r13_enum2value_4,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_srs_SubframeConfig_r13_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_srs_SubframeConfig_r13_4 = {
	"srs-SubframeConfig-r13",
	"srs-SubframeConfig-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_srs_SubframeConfig_r13_tags_4,
	sizeof(asn_DEF_LTE_srs_SubframeConfig_r13_tags_4)
		/sizeof(asn_DEF_LTE_srs_SubframeConfig_r13_tags_4[0]) - 1, /* 1 */
	asn_DEF_LTE_srs_SubframeConfig_r13_tags_4,	/* Same as above */
	sizeof(asn_DEF_LTE_srs_SubframeConfig_r13_tags_4)
		/sizeof(asn_DEF_LTE_srs_SubframeConfig_r13_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_srs_SubframeConfig_r13_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_srs_SubframeConfig_r13_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_dmrs_Config_r13_21[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_NPUSCH_ConfigCommon_NB_r13__dmrs_Config_r13, threeTone_BaseSequence_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LTE_threeTone_BaseSequence_r13_constr_22,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LTE_threeTone_BaseSequence_r13_constraint_21
		},
		0, 0, /* No default value */
		"threeTone-BaseSequence-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_NPUSCH_ConfigCommon_NB_r13__dmrs_Config_r13, threeTone_CyclicShift_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LTE_threeTone_CyclicShift_r13_constr_23,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LTE_threeTone_CyclicShift_r13_constraint_21
		},
		0, 0, /* No default value */
		"threeTone-CyclicShift-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_NPUSCH_ConfigCommon_NB_r13__dmrs_Config_r13, sixTone_BaseSequence_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LTE_sixTone_BaseSequence_r13_constr_24,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LTE_sixTone_BaseSequence_r13_constraint_21
		},
		0, 0, /* No default value */
		"sixTone-BaseSequence-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_NPUSCH_ConfigCommon_NB_r13__dmrs_Config_r13, sixTone_CyclicShift_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LTE_sixTone_CyclicShift_r13_constr_25,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LTE_sixTone_CyclicShift_r13_constraint_21
		},
		0, 0, /* No default value */
		"sixTone-CyclicShift-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_NPUSCH_ConfigCommon_NB_r13__dmrs_Config_r13, twelveTone_BaseSequence_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LTE_twelveTone_BaseSequence_r13_constr_26,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LTE_twelveTone_BaseSequence_r13_constraint_21
		},
		0, 0, /* No default value */
		"twelveTone-BaseSequence-r13"
		},
};
static const int asn_MAP_LTE_dmrs_Config_r13_oms_21[] = { 0, 2, 4 };
static const ber_tlv_tag_t asn_DEF_LTE_dmrs_Config_r13_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_dmrs_Config_r13_tag2el_21[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* threeTone-BaseSequence-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* threeTone-CyclicShift-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sixTone-BaseSequence-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sixTone-CyclicShift-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* twelveTone-BaseSequence-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_dmrs_Config_r13_specs_21 = {
	sizeof(struct LTE_NPUSCH_ConfigCommon_NB_r13__dmrs_Config_r13),
	offsetof(struct LTE_NPUSCH_ConfigCommon_NB_r13__dmrs_Config_r13, _asn_ctx),
	asn_MAP_LTE_dmrs_Config_r13_tag2el_21,
	5,	/* Count of tags in the map */
	asn_MAP_LTE_dmrs_Config_r13_oms_21,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_dmrs_Config_r13_21 = {
	"dmrs-Config-r13",
	"dmrs-Config-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_dmrs_Config_r13_tags_21,
	sizeof(asn_DEF_LTE_dmrs_Config_r13_tags_21)
		/sizeof(asn_DEF_LTE_dmrs_Config_r13_tags_21[0]) - 1, /* 1 */
	asn_DEF_LTE_dmrs_Config_r13_tags_21,	/* Same as above */
	sizeof(asn_DEF_LTE_dmrs_Config_r13_tags_21)
		/sizeof(asn_DEF_LTE_dmrs_Config_r13_tags_21[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_dmrs_Config_r13_21,
	5,	/* Elements count */
	&asn_SPC_LTE_dmrs_Config_r13_specs_21	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_NPUSCH_ConfigCommon_NB_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_NPUSCH_ConfigCommon_NB_r13, ack_NACK_NumRepetitions_Msg4_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_LTE_ack_NACK_NumRepetitions_Msg4_r13_2,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LTE_ack_NACK_NumRepetitions_Msg4_r13_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LTE_ack_NACK_NumRepetitions_Msg4_r13_constraint_1
		},
		0, 0, /* No default value */
		"ack-NACK-NumRepetitions-Msg4-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_NPUSCH_ConfigCommon_NB_r13, srs_SubframeConfig_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_srs_SubframeConfig_r13_4,
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
		"srs-SubframeConfig-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_NPUSCH_ConfigCommon_NB_r13, dmrs_Config_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_LTE_dmrs_Config_r13_21,
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
		"dmrs-Config-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_NPUSCH_ConfigCommon_NB_r13, ul_ReferenceSignalsNPUSCH_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_UL_ReferenceSignalsNPUSCH_NB_r13,
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
		"ul-ReferenceSignalsNPUSCH-r13"
		},
};
static const int asn_MAP_LTE_NPUSCH_ConfigCommon_NB_r13_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_LTE_NPUSCH_ConfigCommon_NB_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_NPUSCH_ConfigCommon_NB_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ack-NACK-NumRepetitions-Msg4-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* srs-SubframeConfig-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* dmrs-Config-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* ul-ReferenceSignalsNPUSCH-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_NPUSCH_ConfigCommon_NB_r13_specs_1 = {
	sizeof(struct LTE_NPUSCH_ConfigCommon_NB_r13),
	offsetof(struct LTE_NPUSCH_ConfigCommon_NB_r13, _asn_ctx),
	asn_MAP_LTE_NPUSCH_ConfigCommon_NB_r13_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_LTE_NPUSCH_ConfigCommon_NB_r13_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_NPUSCH_ConfigCommon_NB_r13 = {
	"NPUSCH-ConfigCommon-NB-r13",
	"NPUSCH-ConfigCommon-NB-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_NPUSCH_ConfigCommon_NB_r13_tags_1,
	sizeof(asn_DEF_LTE_NPUSCH_ConfigCommon_NB_r13_tags_1)
		/sizeof(asn_DEF_LTE_NPUSCH_ConfigCommon_NB_r13_tags_1[0]), /* 1 */
	asn_DEF_LTE_NPUSCH_ConfigCommon_NB_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_NPUSCH_ConfigCommon_NB_r13_tags_1)
		/sizeof(asn_DEF_LTE_NPUSCH_ConfigCommon_NB_r13_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_NPUSCH_ConfigCommon_NB_r13_1,
	4,	/* Elements count */
	&asn_SPC_LTE_NPUSCH_ConfigCommon_NB_r13_specs_1	/* Additional specs */
};

