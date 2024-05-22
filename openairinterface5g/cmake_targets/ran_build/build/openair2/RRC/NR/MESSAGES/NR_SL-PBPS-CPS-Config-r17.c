/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_SL-PBPS-CPS-Config-r17.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_NativeInteger_constraint_11(const asn_TYPE_descriptor_t *td, const void *sptr,
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

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_NR_sl_MinNumCandidateSlotsPeriodic_r17_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1L && value <= 32L)) {
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
memb_NR_sl_PBPS_OccasionReservePeriodList_r17_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1UL && size <= 16UL)) {
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
memb_NR_sl_CPS_WindowPeriodic_r17_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 5L && value <= 30L)) {
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
memb_NR_sl_MinNumCandidateSlotsAperiodic_r17_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1L && value <= 32L)) {
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
memb_NR_sl_MinNumRssiMeasurementSlots_r17_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1L && value <= 800L)) {
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
memb_NR_sl_DefaultCBR_RandomSelection_r17_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 100L)) {
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
memb_NR_sl_DefaultCBR_PartialSensing_r17_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 100L)) {
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
memb_NR_sl_CPS_WindowAperiodic_r17_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_sl_AllowedResourceSelectionConfig_r17_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_Member_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (1..16) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_sl_PBPS_OccasionReservePeriodList_r17_constr_11 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_sl_Additional_PBPS_Occasion_r17_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_sl_PartialSensingInactiveTime_r17_constr_21 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_sl_MinNumCandidateSlotsPeriodic_r17_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (1..32) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_sl_PBPS_OccasionReservePeriodList_r17_constr_11 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_sl_CPS_WindowPeriodic_r17_constr_15 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  5,  30 }	/* (5..30) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_sl_MinNumCandidateSlotsAperiodic_r17_constr_16 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (1..32) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_sl_MinNumRssiMeasurementSlots_r17_constr_17 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  1,  800 }	/* (1..800) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_sl_DefaultCBR_RandomSelection_r17_constr_18 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  100 }	/* (0..100) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_sl_DefaultCBR_PartialSensing_r17_constr_19 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  100 }	/* (0..100) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_sl_CPS_WindowAperiodic_r17_constr_20 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  30 }	/* (0..30) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_NR_sl_AllowedResourceSelectionConfig_r17_value2enum_2[] = {
	{ 0,	2,	"c1" },
	{ 1,	2,	"c2" },
	{ 2,	2,	"c3" },
	{ 3,	2,	"c4" },
	{ 4,	2,	"c5" },
	{ 5,	2,	"c6" },
	{ 6,	2,	"c7" }
};
static const unsigned int asn_MAP_NR_sl_AllowedResourceSelectionConfig_r17_enum2value_2[] = {
	0,	/* c1(0) */
	1,	/* c2(1) */
	2,	/* c3(2) */
	3,	/* c4(3) */
	4,	/* c5(4) */
	5,	/* c6(5) */
	6	/* c7(6) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_sl_AllowedResourceSelectionConfig_r17_specs_2 = {
	asn_MAP_NR_sl_AllowedResourceSelectionConfig_r17_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_sl_AllowedResourceSelectionConfig_r17_enum2value_2,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_sl_AllowedResourceSelectionConfig_r17_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_sl_AllowedResourceSelectionConfig_r17_2 = {
	"sl-AllowedResourceSelectionConfig-r17",
	"sl-AllowedResourceSelectionConfig-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_sl_AllowedResourceSelectionConfig_r17_tags_2,
	sizeof(asn_DEF_NR_sl_AllowedResourceSelectionConfig_r17_tags_2)
		/sizeof(asn_DEF_NR_sl_AllowedResourceSelectionConfig_r17_tags_2[0]) - 1, /* 1 */
	asn_DEF_NR_sl_AllowedResourceSelectionConfig_r17_tags_2,	/* Same as above */
	sizeof(asn_DEF_NR_sl_AllowedResourceSelectionConfig_r17_tags_2)
		/sizeof(asn_DEF_NR_sl_AllowedResourceSelectionConfig_r17_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_sl_AllowedResourceSelectionConfig_r17_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_sl_AllowedResourceSelectionConfig_r17_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_sl_PBPS_OccasionReservePeriodList_r17_11[] = {
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
			&asn_PER_memb_NR_Member_constr_12,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NativeInteger_constraint_11
		},
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_sl_PBPS_OccasionReservePeriodList_r17_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_sl_PBPS_OccasionReservePeriodList_r17_specs_11 = {
	sizeof(struct NR_SL_PBPS_CPS_Config_r17__sl_PBPS_OccasionReservePeriodList_r17),
	offsetof(struct NR_SL_PBPS_CPS_Config_r17__sl_PBPS_OccasionReservePeriodList_r17, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_sl_PBPS_OccasionReservePeriodList_r17_11 = {
	"sl-PBPS-OccasionReservePeriodList-r17",
	"sl-PBPS-OccasionReservePeriodList-r17",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_sl_PBPS_OccasionReservePeriodList_r17_tags_11,
	sizeof(asn_DEF_NR_sl_PBPS_OccasionReservePeriodList_r17_tags_11)
		/sizeof(asn_DEF_NR_sl_PBPS_OccasionReservePeriodList_r17_tags_11[0]) - 1, /* 1 */
	asn_DEF_NR_sl_PBPS_OccasionReservePeriodList_r17_tags_11,	/* Same as above */
	sizeof(asn_DEF_NR_sl_PBPS_OccasionReservePeriodList_r17_tags_11)
		/sizeof(asn_DEF_NR_sl_PBPS_OccasionReservePeriodList_r17_tags_11[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_sl_PBPS_OccasionReservePeriodList_r17_constr_11,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_NR_sl_PBPS_OccasionReservePeriodList_r17_11,
	1,	/* Single element */
	&asn_SPC_NR_sl_PBPS_OccasionReservePeriodList_r17_specs_11	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_sl_Additional_PBPS_Occasion_r17_value2enum_13[] = {
	{ 0,	9,	"monitored" }
};
static const unsigned int asn_MAP_NR_sl_Additional_PBPS_Occasion_r17_enum2value_13[] = {
	0	/* monitored(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_sl_Additional_PBPS_Occasion_r17_specs_13 = {
	asn_MAP_NR_sl_Additional_PBPS_Occasion_r17_value2enum_13,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_sl_Additional_PBPS_Occasion_r17_enum2value_13,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_sl_Additional_PBPS_Occasion_r17_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_sl_Additional_PBPS_Occasion_r17_13 = {
	"sl-Additional-PBPS-Occasion-r17",
	"sl-Additional-PBPS-Occasion-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_sl_Additional_PBPS_Occasion_r17_tags_13,
	sizeof(asn_DEF_NR_sl_Additional_PBPS_Occasion_r17_tags_13)
		/sizeof(asn_DEF_NR_sl_Additional_PBPS_Occasion_r17_tags_13[0]) - 1, /* 1 */
	asn_DEF_NR_sl_Additional_PBPS_Occasion_r17_tags_13,	/* Same as above */
	sizeof(asn_DEF_NR_sl_Additional_PBPS_Occasion_r17_tags_13)
		/sizeof(asn_DEF_NR_sl_Additional_PBPS_Occasion_r17_tags_13[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_sl_Additional_PBPS_Occasion_r17_constr_13,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_sl_Additional_PBPS_Occasion_r17_specs_13	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_sl_PartialSensingInactiveTime_r17_value2enum_21[] = {
	{ 0,	7,	"enabled" },
	{ 1,	8,	"disabled" }
};
static const unsigned int asn_MAP_NR_sl_PartialSensingInactiveTime_r17_enum2value_21[] = {
	1,	/* disabled(1) */
	0	/* enabled(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_sl_PartialSensingInactiveTime_r17_specs_21 = {
	asn_MAP_NR_sl_PartialSensingInactiveTime_r17_value2enum_21,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_sl_PartialSensingInactiveTime_r17_enum2value_21,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_sl_PartialSensingInactiveTime_r17_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_sl_PartialSensingInactiveTime_r17_21 = {
	"sl-PartialSensingInactiveTime-r17",
	"sl-PartialSensingInactiveTime-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_sl_PartialSensingInactiveTime_r17_tags_21,
	sizeof(asn_DEF_NR_sl_PartialSensingInactiveTime_r17_tags_21)
		/sizeof(asn_DEF_NR_sl_PartialSensingInactiveTime_r17_tags_21[0]) - 1, /* 1 */
	asn_DEF_NR_sl_PartialSensingInactiveTime_r17_tags_21,	/* Same as above */
	sizeof(asn_DEF_NR_sl_PartialSensingInactiveTime_r17_tags_21)
		/sizeof(asn_DEF_NR_sl_PartialSensingInactiveTime_r17_tags_21[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_sl_PartialSensingInactiveTime_r17_constr_21,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_sl_PartialSensingInactiveTime_r17_specs_21	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_SL_PBPS_CPS_Config_r17_1[] = {
	{ ATF_POINTER, 11, offsetof(struct NR_SL_PBPS_CPS_Config_r17, sl_AllowedResourceSelectionConfig_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_sl_AllowedResourceSelectionConfig_r17_2,
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
		"sl-AllowedResourceSelectionConfig-r17"
		},
	{ ATF_POINTER, 10, offsetof(struct NR_SL_PBPS_CPS_Config_r17, sl_MinNumCandidateSlotsPeriodic_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_sl_MinNumCandidateSlotsPeriodic_r17_constr_10,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_sl_MinNumCandidateSlotsPeriodic_r17_constraint_1
		},
		0, 0, /* No default value */
		"sl-MinNumCandidateSlotsPeriodic-r17"
		},
	{ ATF_POINTER, 9, offsetof(struct NR_SL_PBPS_CPS_Config_r17, sl_PBPS_OccasionReservePeriodList_r17),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_NR_sl_PBPS_OccasionReservePeriodList_r17_11,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_sl_PBPS_OccasionReservePeriodList_r17_constr_11,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_sl_PBPS_OccasionReservePeriodList_r17_constraint_1
		},
		0, 0, /* No default value */
		"sl-PBPS-OccasionReservePeriodList-r17"
		},
	{ ATF_POINTER, 8, offsetof(struct NR_SL_PBPS_CPS_Config_r17, sl_Additional_PBPS_Occasion_r17),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_sl_Additional_PBPS_Occasion_r17_13,
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
		"sl-Additional-PBPS-Occasion-r17"
		},
	{ ATF_POINTER, 7, offsetof(struct NR_SL_PBPS_CPS_Config_r17, sl_CPS_WindowPeriodic_r17),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_sl_CPS_WindowPeriodic_r17_constr_15,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_sl_CPS_WindowPeriodic_r17_constraint_1
		},
		0, 0, /* No default value */
		"sl-CPS-WindowPeriodic-r17"
		},
	{ ATF_POINTER, 6, offsetof(struct NR_SL_PBPS_CPS_Config_r17, sl_MinNumCandidateSlotsAperiodic_r17),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_sl_MinNumCandidateSlotsAperiodic_r17_constr_16,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_sl_MinNumCandidateSlotsAperiodic_r17_constraint_1
		},
		0, 0, /* No default value */
		"sl-MinNumCandidateSlotsAperiodic-r17"
		},
	{ ATF_POINTER, 5, offsetof(struct NR_SL_PBPS_CPS_Config_r17, sl_MinNumRssiMeasurementSlots_r17),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_sl_MinNumRssiMeasurementSlots_r17_constr_17,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_sl_MinNumRssiMeasurementSlots_r17_constraint_1
		},
		0, 0, /* No default value */
		"sl-MinNumRssiMeasurementSlots-r17"
		},
	{ ATF_POINTER, 4, offsetof(struct NR_SL_PBPS_CPS_Config_r17, sl_DefaultCBR_RandomSelection_r17),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_sl_DefaultCBR_RandomSelection_r17_constr_18,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_sl_DefaultCBR_RandomSelection_r17_constraint_1
		},
		0, 0, /* No default value */
		"sl-DefaultCBR-RandomSelection-r17"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_SL_PBPS_CPS_Config_r17, sl_DefaultCBR_PartialSensing_r17),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_sl_DefaultCBR_PartialSensing_r17_constr_19,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_sl_DefaultCBR_PartialSensing_r17_constraint_1
		},
		0, 0, /* No default value */
		"sl-DefaultCBR-PartialSensing-r17"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_SL_PBPS_CPS_Config_r17, sl_CPS_WindowAperiodic_r17),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_sl_CPS_WindowAperiodic_r17_constr_20,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_sl_CPS_WindowAperiodic_r17_constraint_1
		},
		0, 0, /* No default value */
		"sl-CPS-WindowAperiodic-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_SL_PBPS_CPS_Config_r17, sl_PartialSensingInactiveTime_r17),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_sl_PartialSensingInactiveTime_r17_21,
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
		"sl-PartialSensingInactiveTime-r17"
		},
};
static const int asn_MAP_NR_SL_PBPS_CPS_Config_r17_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
static const ber_tlv_tag_t asn_DEF_NR_SL_PBPS_CPS_Config_r17_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_SL_PBPS_CPS_Config_r17_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sl-AllowedResourceSelectionConfig-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sl-MinNumCandidateSlotsPeriodic-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sl-PBPS-OccasionReservePeriodList-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sl-Additional-PBPS-Occasion-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* sl-CPS-WindowPeriodic-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* sl-MinNumCandidateSlotsAperiodic-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* sl-MinNumRssiMeasurementSlots-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* sl-DefaultCBR-RandomSelection-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* sl-DefaultCBR-PartialSensing-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* sl-CPS-WindowAperiodic-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 } /* sl-PartialSensingInactiveTime-r17 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_SL_PBPS_CPS_Config_r17_specs_1 = {
	sizeof(struct NR_SL_PBPS_CPS_Config_r17),
	offsetof(struct NR_SL_PBPS_CPS_Config_r17, _asn_ctx),
	asn_MAP_NR_SL_PBPS_CPS_Config_r17_tag2el_1,
	11,	/* Count of tags in the map */
	asn_MAP_NR_SL_PBPS_CPS_Config_r17_oms_1,	/* Optional members */
	11, 0,	/* Root/Additions */
	11,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_SL_PBPS_CPS_Config_r17 = {
	"SL-PBPS-CPS-Config-r17",
	"SL-PBPS-CPS-Config-r17",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_SL_PBPS_CPS_Config_r17_tags_1,
	sizeof(asn_DEF_NR_SL_PBPS_CPS_Config_r17_tags_1)
		/sizeof(asn_DEF_NR_SL_PBPS_CPS_Config_r17_tags_1[0]), /* 1 */
	asn_DEF_NR_SL_PBPS_CPS_Config_r17_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_SL_PBPS_CPS_Config_r17_tags_1)
		/sizeof(asn_DEF_NR_SL_PBPS_CPS_Config_r17_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_SL_PBPS_CPS_Config_r17_1,
	11,	/* Elements count */
	&asn_SPC_NR_SL_PBPS_CPS_Config_r17_specs_1	/* Additional specs */
};

