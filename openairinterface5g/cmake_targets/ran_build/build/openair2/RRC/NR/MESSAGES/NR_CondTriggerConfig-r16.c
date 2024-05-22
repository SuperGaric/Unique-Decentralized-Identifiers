/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_CondTriggerConfig-r16.h"

static int
memb_NR_distanceThreshFromReference1_r17_constraint_17(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 65525L)) {
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
memb_NR_distanceThreshFromReference2_r17_constraint_17(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 65525L)) {
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
memb_NR_t1_Threshold_r17_constraint_24(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const INTEGER_t *st = (const INTEGER_t *)sptr;
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(asn_INTEGER2long(st, &value)) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value too large (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if((value >= 0L && value <= 549755813887L)) {
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
memb_NR_duration_r17_constraint_24(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1L && value <= 6000L)) {
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
static asn_per_constraints_t asn_PER_memb_NR_distanceThreshFromReference1_r17_constr_18 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16,  0,  65525 }	/* (0..65525) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_distanceThreshFromReference2_r17_constr_19 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16,  0,  65525 }	/* (0..65525) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_t1_Threshold_r17_constr_25 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 39, -1,  0,  549755813887 }	/* (0..549755813887) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_duration_r17_constr_26 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 13,  13,  1,  6000 }	/* (1..6000) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_condEventId_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_NR_condEventA3_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CondTriggerConfig_r16__condEventId__condEventA3, a3_Offset),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_MeasTriggerQuantityOffset,
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
		"a3-Offset"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CondTriggerConfig_r16__condEventId__condEventA3, hysteresis),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_Hysteresis,
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
		"hysteresis"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CondTriggerConfig_r16__condEventId__condEventA3, timeToTrigger),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_TimeToTrigger,
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
		"timeToTrigger"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_condEventA3_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_condEventA3_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* a3-Offset */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* hysteresis */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* timeToTrigger */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_condEventA3_specs_3 = {
	sizeof(struct NR_CondTriggerConfig_r16__condEventId__condEventA3),
	offsetof(struct NR_CondTriggerConfig_r16__condEventId__condEventA3, _asn_ctx),
	asn_MAP_NR_condEventA3_tag2el_3,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_condEventA3_3 = {
	"condEventA3",
	"condEventA3",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_condEventA3_tags_3,
	sizeof(asn_DEF_NR_condEventA3_tags_3)
		/sizeof(asn_DEF_NR_condEventA3_tags_3[0]) - 1, /* 1 */
	asn_DEF_NR_condEventA3_tags_3,	/* Same as above */
	sizeof(asn_DEF_NR_condEventA3_tags_3)
		/sizeof(asn_DEF_NR_condEventA3_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_condEventA3_3,
	3,	/* Elements count */
	&asn_SPC_NR_condEventA3_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_condEventA5_7[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CondTriggerConfig_r16__condEventId__condEventA5, a5_Threshold1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_MeasTriggerQuantity,
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
		"a5-Threshold1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CondTriggerConfig_r16__condEventId__condEventA5, a5_Threshold2),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_MeasTriggerQuantity,
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
		"a5-Threshold2"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CondTriggerConfig_r16__condEventId__condEventA5, hysteresis),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_Hysteresis,
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
		"hysteresis"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CondTriggerConfig_r16__condEventId__condEventA5, timeToTrigger),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_TimeToTrigger,
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
		"timeToTrigger"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_condEventA5_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_condEventA5_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* a5-Threshold1 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* a5-Threshold2 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* hysteresis */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* timeToTrigger */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_condEventA5_specs_7 = {
	sizeof(struct NR_CondTriggerConfig_r16__condEventId__condEventA5),
	offsetof(struct NR_CondTriggerConfig_r16__condEventId__condEventA5, _asn_ctx),
	asn_MAP_NR_condEventA5_tag2el_7,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_condEventA5_7 = {
	"condEventA5",
	"condEventA5",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_condEventA5_tags_7,
	sizeof(asn_DEF_NR_condEventA5_tags_7)
		/sizeof(asn_DEF_NR_condEventA5_tags_7[0]) - 1, /* 1 */
	asn_DEF_NR_condEventA5_tags_7,	/* Same as above */
	sizeof(asn_DEF_NR_condEventA5_tags_7)
		/sizeof(asn_DEF_NR_condEventA5_tags_7[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_condEventA5_7,
	4,	/* Elements count */
	&asn_SPC_NR_condEventA5_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_condEventA4_r17_13[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CondTriggerConfig_r16__condEventId__condEventA4_r17, a4_Threshold_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_MeasTriggerQuantity,
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
		"a4-Threshold-r17"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CondTriggerConfig_r16__condEventId__condEventA4_r17, hysteresis_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_Hysteresis,
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
		"hysteresis-r17"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CondTriggerConfig_r16__condEventId__condEventA4_r17, timeToTrigger_r17),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_TimeToTrigger,
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
		"timeToTrigger-r17"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_condEventA4_r17_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_condEventA4_r17_tag2el_13[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* a4-Threshold-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* hysteresis-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* timeToTrigger-r17 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_condEventA4_r17_specs_13 = {
	sizeof(struct NR_CondTriggerConfig_r16__condEventId__condEventA4_r17),
	offsetof(struct NR_CondTriggerConfig_r16__condEventId__condEventA4_r17, _asn_ctx),
	asn_MAP_NR_condEventA4_r17_tag2el_13,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_condEventA4_r17_13 = {
	"condEventA4-r17",
	"condEventA4-r17",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_condEventA4_r17_tags_13,
	sizeof(asn_DEF_NR_condEventA4_r17_tags_13)
		/sizeof(asn_DEF_NR_condEventA4_r17_tags_13[0]) - 1, /* 1 */
	asn_DEF_NR_condEventA4_r17_tags_13,	/* Same as above */
	sizeof(asn_DEF_NR_condEventA4_r17_tags_13)
		/sizeof(asn_DEF_NR_condEventA4_r17_tags_13[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_condEventA4_r17_13,
	3,	/* Elements count */
	&asn_SPC_NR_condEventA4_r17_specs_13	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_condEventD1_r17_17[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CondTriggerConfig_r16__condEventId__condEventD1_r17, distanceThreshFromReference1_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_distanceThreshFromReference1_r17_constr_18,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_distanceThreshFromReference1_r17_constraint_17
		},
		0, 0, /* No default value */
		"distanceThreshFromReference1-r17"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CondTriggerConfig_r16__condEventId__condEventD1_r17, distanceThreshFromReference2_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_distanceThreshFromReference2_r17_constr_19,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_distanceThreshFromReference2_r17_constraint_17
		},
		0, 0, /* No default value */
		"distanceThreshFromReference2-r17"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CondTriggerConfig_r16__condEventId__condEventD1_r17, referenceLocation1_r17),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_ReferenceLocation_r17,
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
		"referenceLocation1-r17"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CondTriggerConfig_r16__condEventId__condEventD1_r17, referenceLocation2_r17),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_ReferenceLocation_r17,
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
		"referenceLocation2-r17"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CondTriggerConfig_r16__condEventId__condEventD1_r17, hysteresisLocation_r17),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_HysteresisLocation_r17,
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
		"hysteresisLocation-r17"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CondTriggerConfig_r16__condEventId__condEventD1_r17, timeToTrigger_r17),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_TimeToTrigger,
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
		"timeToTrigger-r17"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_condEventD1_r17_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_condEventD1_r17_tag2el_17[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* distanceThreshFromReference1-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* distanceThreshFromReference2-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* referenceLocation1-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* referenceLocation2-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* hysteresisLocation-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* timeToTrigger-r17 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_condEventD1_r17_specs_17 = {
	sizeof(struct NR_CondTriggerConfig_r16__condEventId__condEventD1_r17),
	offsetof(struct NR_CondTriggerConfig_r16__condEventId__condEventD1_r17, _asn_ctx),
	asn_MAP_NR_condEventD1_r17_tag2el_17,
	6,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_condEventD1_r17_17 = {
	"condEventD1-r17",
	"condEventD1-r17",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_condEventD1_r17_tags_17,
	sizeof(asn_DEF_NR_condEventD1_r17_tags_17)
		/sizeof(asn_DEF_NR_condEventD1_r17_tags_17[0]) - 1, /* 1 */
	asn_DEF_NR_condEventD1_r17_tags_17,	/* Same as above */
	sizeof(asn_DEF_NR_condEventD1_r17_tags_17)
		/sizeof(asn_DEF_NR_condEventD1_r17_tags_17[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_condEventD1_r17_17,
	6,	/* Elements count */
	&asn_SPC_NR_condEventD1_r17_specs_17	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_condEventT1_r17_24[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CondTriggerConfig_r16__condEventId__condEventT1_r17, t1_Threshold_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_INTEGER,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_t1_Threshold_r17_constr_25,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_t1_Threshold_r17_constraint_24
		},
		0, 0, /* No default value */
		"t1-Threshold-r17"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CondTriggerConfig_r16__condEventId__condEventT1_r17, duration_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_duration_r17_constr_26,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_duration_r17_constraint_24
		},
		0, 0, /* No default value */
		"duration-r17"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_condEventT1_r17_tags_24[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_condEventT1_r17_tag2el_24[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* t1-Threshold-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* duration-r17 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_condEventT1_r17_specs_24 = {
	sizeof(struct NR_CondTriggerConfig_r16__condEventId__condEventT1_r17),
	offsetof(struct NR_CondTriggerConfig_r16__condEventId__condEventT1_r17, _asn_ctx),
	asn_MAP_NR_condEventT1_r17_tag2el_24,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_condEventT1_r17_24 = {
	"condEventT1-r17",
	"condEventT1-r17",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_condEventT1_r17_tags_24,
	sizeof(asn_DEF_NR_condEventT1_r17_tags_24)
		/sizeof(asn_DEF_NR_condEventT1_r17_tags_24[0]) - 1, /* 1 */
	asn_DEF_NR_condEventT1_r17_tags_24,	/* Same as above */
	sizeof(asn_DEF_NR_condEventT1_r17_tags_24)
		/sizeof(asn_DEF_NR_condEventT1_r17_tags_24[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_condEventT1_r17_24,
	2,	/* Elements count */
	&asn_SPC_NR_condEventT1_r17_specs_24	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_condEventId_2[] = {
	{ ATF_POINTER, 0, offsetof(struct NR_CondTriggerConfig_r16__condEventId, choice.condEventA3),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_NR_condEventA3_3,
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
		"condEventA3"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_CondTriggerConfig_r16__condEventId, choice.condEventA5),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_NR_condEventA5_7,
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
		"condEventA5"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_CondTriggerConfig_r16__condEventId, choice.condEventA4_r17),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_NR_condEventA4_r17_13,
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
		"condEventA4-r17"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_CondTriggerConfig_r16__condEventId, choice.condEventD1_r17),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_NR_condEventD1_r17_17,
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
		"condEventD1-r17"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_CondTriggerConfig_r16__condEventId, choice.condEventT1_r17),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_NR_condEventT1_r17_24,
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
		"condEventT1-r17"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NR_condEventId_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* condEventA3 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* condEventA5 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* condEventA4-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* condEventD1-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* condEventT1-r17 */
};
static asn_CHOICE_specifics_t asn_SPC_NR_condEventId_specs_2 = {
	sizeof(struct NR_CondTriggerConfig_r16__condEventId),
	offsetof(struct NR_CondTriggerConfig_r16__condEventId, _asn_ctx),
	offsetof(struct NR_CondTriggerConfig_r16__condEventId, present),
	sizeof(((struct NR_CondTriggerConfig_r16__condEventId *)0)->present),
	asn_MAP_NR_condEventId_tag2el_2,
	5,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_condEventId_2 = {
	"condEventId",
	"condEventId",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_condEventId_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_NR_condEventId_2,
	5,	/* Elements count */
	&asn_SPC_NR_condEventId_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_CondTriggerConfig_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CondTriggerConfig_r16, condEventId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_condEventId_2,
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
		"condEventId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CondTriggerConfig_r16, rsType_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_NR_RS_Type,
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
		"rsType-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_CondTriggerConfig_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_CondTriggerConfig_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* condEventId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* rsType-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_CondTriggerConfig_r16_specs_1 = {
	sizeof(struct NR_CondTriggerConfig_r16),
	offsetof(struct NR_CondTriggerConfig_r16, _asn_ctx),
	asn_MAP_NR_CondTriggerConfig_r16_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_CondTriggerConfig_r16 = {
	"CondTriggerConfig-r16",
	"CondTriggerConfig-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_CondTriggerConfig_r16_tags_1,
	sizeof(asn_DEF_NR_CondTriggerConfig_r16_tags_1)
		/sizeof(asn_DEF_NR_CondTriggerConfig_r16_tags_1[0]), /* 1 */
	asn_DEF_NR_CondTriggerConfig_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_CondTriggerConfig_r16_tags_1)
		/sizeof(asn_DEF_NR_CondTriggerConfig_r16_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_CondTriggerConfig_r16_1,
	2,	/* Elements count */
	&asn_SPC_NR_CondTriggerConfig_r16_specs_1	/* Additional specs */
};

