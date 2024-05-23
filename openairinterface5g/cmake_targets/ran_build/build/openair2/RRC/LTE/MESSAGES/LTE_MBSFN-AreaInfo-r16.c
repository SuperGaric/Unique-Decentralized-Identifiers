/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_MBSFN-AreaInfo-r16.h"

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
memb_LTE_mcch_Offset_r16_constraint_4(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 10L)) {
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
memb_LTE_sf_AllocInfo_r16_constraint_4(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 10UL)) {
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
memb_LTE_notificationIndicator_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 7L)) {
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
static asn_per_constraints_t asn_PER_type_LTE_mcch_RepetitionPeriod_r16_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_mcch_ModificationPeriod_r16_constr_22 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_signallingMCS_r16_constr_41 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LTE_mcch_Offset_r16_constr_39 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  10 }	/* (0..10) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LTE_sf_AllocInfo_r16_constr_40 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  10,  10 }	/* (SIZE(10..10)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_subcarrierSpacingMBMS_r16_constr_46 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_timeSeparation_r16_constr_55 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LTE_notificationIndicator_r16_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LTE_mcch_RepetitionPeriod_r16_value2enum_5[] = {
	{ 0,	3,	"rf1" },
	{ 1,	3,	"rf2" },
	{ 2,	3,	"rf4" },
	{ 3,	3,	"rf8" },
	{ 4,	4,	"rf16" },
	{ 5,	4,	"rf32" },
	{ 6,	4,	"rf64" },
	{ 7,	5,	"rf128" },
	{ 8,	5,	"rf256" },
	{ 9,	6,	"spare7" },
	{ 10,	6,	"spare6" },
	{ 11,	6,	"spare5" },
	{ 12,	6,	"spare4" },
	{ 13,	6,	"spare3" },
	{ 14,	6,	"spare2" },
	{ 15,	6,	"spare1" }
};
static const unsigned int asn_MAP_LTE_mcch_RepetitionPeriod_r16_enum2value_5[] = {
	0,	/* rf1(0) */
	7,	/* rf128(7) */
	4,	/* rf16(4) */
	1,	/* rf2(1) */
	8,	/* rf256(8) */
	5,	/* rf32(5) */
	2,	/* rf4(2) */
	6,	/* rf64(6) */
	3,	/* rf8(3) */
	15,	/* spare1(15) */
	14,	/* spare2(14) */
	13,	/* spare3(13) */
	12,	/* spare4(12) */
	11,	/* spare5(11) */
	10,	/* spare6(10) */
	9	/* spare7(9) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_mcch_RepetitionPeriod_r16_specs_5 = {
	asn_MAP_LTE_mcch_RepetitionPeriod_r16_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_mcch_RepetitionPeriod_r16_enum2value_5,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_mcch_RepetitionPeriod_r16_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_mcch_RepetitionPeriod_r16_5 = {
	"mcch-RepetitionPeriod-r16",
	"mcch-RepetitionPeriod-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_mcch_RepetitionPeriod_r16_tags_5,
	sizeof(asn_DEF_LTE_mcch_RepetitionPeriod_r16_tags_5)
		/sizeof(asn_DEF_LTE_mcch_RepetitionPeriod_r16_tags_5[0]) - 1, /* 1 */
	asn_DEF_LTE_mcch_RepetitionPeriod_r16_tags_5,	/* Same as above */
	sizeof(asn_DEF_LTE_mcch_RepetitionPeriod_r16_tags_5)
		/sizeof(asn_DEF_LTE_mcch_RepetitionPeriod_r16_tags_5[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_mcch_RepetitionPeriod_r16_constr_5,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_mcch_RepetitionPeriod_r16_specs_5	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_mcch_ModificationPeriod_r16_value2enum_22[] = {
	{ 0,	3,	"rf1" },
	{ 1,	3,	"rf2" },
	{ 2,	3,	"rf4" },
	{ 3,	3,	"rf8" },
	{ 4,	4,	"rf16" },
	{ 5,	4,	"rf32" },
	{ 6,	4,	"rf64" },
	{ 7,	5,	"rf128" },
	{ 8,	5,	"rf256" },
	{ 9,	5,	"rf512" },
	{ 10,	6,	"rf1024" },
	{ 11,	6,	"spare5" },
	{ 12,	6,	"spare4" },
	{ 13,	6,	"spare3" },
	{ 14,	6,	"spare2" },
	{ 15,	6,	"spare1" }
};
static const unsigned int asn_MAP_LTE_mcch_ModificationPeriod_r16_enum2value_22[] = {
	0,	/* rf1(0) */
	10,	/* rf1024(10) */
	7,	/* rf128(7) */
	4,	/* rf16(4) */
	1,	/* rf2(1) */
	8,	/* rf256(8) */
	5,	/* rf32(5) */
	2,	/* rf4(2) */
	9,	/* rf512(9) */
	6,	/* rf64(6) */
	3,	/* rf8(3) */
	15,	/* spare1(15) */
	14,	/* spare2(14) */
	13,	/* spare3(13) */
	12,	/* spare4(12) */
	11	/* spare5(11) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_mcch_ModificationPeriod_r16_specs_22 = {
	asn_MAP_LTE_mcch_ModificationPeriod_r16_value2enum_22,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_mcch_ModificationPeriod_r16_enum2value_22,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_mcch_ModificationPeriod_r16_tags_22[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_mcch_ModificationPeriod_r16_22 = {
	"mcch-ModificationPeriod-r16",
	"mcch-ModificationPeriod-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_mcch_ModificationPeriod_r16_tags_22,
	sizeof(asn_DEF_LTE_mcch_ModificationPeriod_r16_tags_22)
		/sizeof(asn_DEF_LTE_mcch_ModificationPeriod_r16_tags_22[0]) - 1, /* 1 */
	asn_DEF_LTE_mcch_ModificationPeriod_r16_tags_22,	/* Same as above */
	sizeof(asn_DEF_LTE_mcch_ModificationPeriod_r16_tags_22)
		/sizeof(asn_DEF_LTE_mcch_ModificationPeriod_r16_tags_22[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_mcch_ModificationPeriod_r16_constr_22,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_mcch_ModificationPeriod_r16_specs_22	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_signallingMCS_r16_value2enum_41[] = {
	{ 0,	2,	"n2" },
	{ 1,	2,	"n7" },
	{ 2,	3,	"n13" },
	{ 3,	3,	"n19" }
};
static const unsigned int asn_MAP_LTE_signallingMCS_r16_enum2value_41[] = {
	2,	/* n13(2) */
	3,	/* n19(3) */
	0,	/* n2(0) */
	1	/* n7(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_signallingMCS_r16_specs_41 = {
	asn_MAP_LTE_signallingMCS_r16_value2enum_41,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_signallingMCS_r16_enum2value_41,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_signallingMCS_r16_tags_41[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_signallingMCS_r16_41 = {
	"signallingMCS-r16",
	"signallingMCS-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_signallingMCS_r16_tags_41,
	sizeof(asn_DEF_LTE_signallingMCS_r16_tags_41)
		/sizeof(asn_DEF_LTE_signallingMCS_r16_tags_41[0]) - 1, /* 1 */
	asn_DEF_LTE_signallingMCS_r16_tags_41,	/* Same as above */
	sizeof(asn_DEF_LTE_signallingMCS_r16_tags_41)
		/sizeof(asn_DEF_LTE_signallingMCS_r16_tags_41[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_signallingMCS_r16_constr_41,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_signallingMCS_r16_specs_41	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_mcch_Config_r16_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MBSFN_AreaInfo_r16__mcch_Config_r16, mcch_RepetitionPeriod_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_mcch_RepetitionPeriod_r16_5,
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
		"mcch-RepetitionPeriod-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MBSFN_AreaInfo_r16__mcch_Config_r16, mcch_ModificationPeriod_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_mcch_ModificationPeriod_r16_22,
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
		"mcch-ModificationPeriod-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MBSFN_AreaInfo_r16__mcch_Config_r16, mcch_Offset_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LTE_mcch_Offset_r16_constr_39,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LTE_mcch_Offset_r16_constraint_4
		},
		0, 0, /* No default value */
		"mcch-Offset-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MBSFN_AreaInfo_r16__mcch_Config_r16, sf_AllocInfo_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LTE_sf_AllocInfo_r16_constr_40,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LTE_sf_AllocInfo_r16_constraint_4
		},
		0, 0, /* No default value */
		"sf-AllocInfo-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MBSFN_AreaInfo_r16__mcch_Config_r16, signallingMCS_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_signallingMCS_r16_41,
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
		"signallingMCS-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_mcch_Config_r16_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_mcch_Config_r16_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mcch-RepetitionPeriod-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mcch-ModificationPeriod-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* mcch-Offset-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sf-AllocInfo-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* signallingMCS-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_mcch_Config_r16_specs_4 = {
	sizeof(struct LTE_MBSFN_AreaInfo_r16__mcch_Config_r16),
	offsetof(struct LTE_MBSFN_AreaInfo_r16__mcch_Config_r16, _asn_ctx),
	asn_MAP_LTE_mcch_Config_r16_tag2el_4,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_mcch_Config_r16_4 = {
	"mcch-Config-r16",
	"mcch-Config-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_mcch_Config_r16_tags_4,
	sizeof(asn_DEF_LTE_mcch_Config_r16_tags_4)
		/sizeof(asn_DEF_LTE_mcch_Config_r16_tags_4[0]) - 1, /* 1 */
	asn_DEF_LTE_mcch_Config_r16_tags_4,	/* Same as above */
	sizeof(asn_DEF_LTE_mcch_Config_r16_tags_4)
		/sizeof(asn_DEF_LTE_mcch_Config_r16_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_mcch_Config_r16_4,
	5,	/* Elements count */
	&asn_SPC_LTE_mcch_Config_r16_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_subcarrierSpacingMBMS_r16_value2enum_46[] = {
	{ 0,	8,	"kHz7dot5" },
	{ 1,	8,	"kHz2dot5" },
	{ 2,	9,	"kHz1dot25" },
	{ 3,	9,	"kHz0dot37" },
	{ 4,	6,	"spare4" },
	{ 5,	6,	"spare3" },
	{ 6,	6,	"spare2" },
	{ 7,	6,	"spare1" }
};
static const unsigned int asn_MAP_LTE_subcarrierSpacingMBMS_r16_enum2value_46[] = {
	3,	/* kHz0dot37(3) */
	2,	/* kHz1dot25(2) */
	1,	/* kHz2dot5(1) */
	0,	/* kHz7dot5(0) */
	7,	/* spare1(7) */
	6,	/* spare2(6) */
	5,	/* spare3(5) */
	4	/* spare4(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_subcarrierSpacingMBMS_r16_specs_46 = {
	asn_MAP_LTE_subcarrierSpacingMBMS_r16_value2enum_46,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_subcarrierSpacingMBMS_r16_enum2value_46,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_subcarrierSpacingMBMS_r16_tags_46[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_subcarrierSpacingMBMS_r16_46 = {
	"subcarrierSpacingMBMS-r16",
	"subcarrierSpacingMBMS-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_subcarrierSpacingMBMS_r16_tags_46,
	sizeof(asn_DEF_LTE_subcarrierSpacingMBMS_r16_tags_46)
		/sizeof(asn_DEF_LTE_subcarrierSpacingMBMS_r16_tags_46[0]) - 1, /* 1 */
	asn_DEF_LTE_subcarrierSpacingMBMS_r16_tags_46,	/* Same as above */
	sizeof(asn_DEF_LTE_subcarrierSpacingMBMS_r16_tags_46)
		/sizeof(asn_DEF_LTE_subcarrierSpacingMBMS_r16_tags_46[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_subcarrierSpacingMBMS_r16_constr_46,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_subcarrierSpacingMBMS_r16_specs_46	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_timeSeparation_r16_value2enum_55[] = {
	{ 0,	3,	"sl2" },
	{ 1,	3,	"sl4" }
};
static const unsigned int asn_MAP_LTE_timeSeparation_r16_enum2value_55[] = {
	0,	/* sl2(0) */
	1	/* sl4(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_timeSeparation_r16_specs_55 = {
	asn_MAP_LTE_timeSeparation_r16_value2enum_55,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_timeSeparation_r16_enum2value_55,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_timeSeparation_r16_tags_55[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_timeSeparation_r16_55 = {
	"timeSeparation-r16",
	"timeSeparation-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_timeSeparation_r16_tags_55,
	sizeof(asn_DEF_LTE_timeSeparation_r16_tags_55)
		/sizeof(asn_DEF_LTE_timeSeparation_r16_tags_55[0]) - 1, /* 1 */
	asn_DEF_LTE_timeSeparation_r16_tags_55,	/* Same as above */
	sizeof(asn_DEF_LTE_timeSeparation_r16_tags_55)
		/sizeof(asn_DEF_LTE_timeSeparation_r16_tags_55[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_timeSeparation_r16_constr_55,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_timeSeparation_r16_specs_55	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_MBSFN_AreaInfo_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MBSFN_AreaInfo_r16, mbsfn_AreaId_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MBSFN_AreaId_r12,
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
		"mbsfn-AreaId-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MBSFN_AreaInfo_r16, notificationIndicator_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LTE_notificationIndicator_r16_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LTE_notificationIndicator_r16_constraint_1
		},
		0, 0, /* No default value */
		"notificationIndicator-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MBSFN_AreaInfo_r16, mcch_Config_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_LTE_mcch_Config_r16_4,
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
		"mcch-Config-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MBSFN_AreaInfo_r16, subcarrierSpacingMBMS_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_subcarrierSpacingMBMS_r16_46,
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
		"subcarrierSpacingMBMS-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_MBSFN_AreaInfo_r16, timeSeparation_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_timeSeparation_r16_55,
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
		"timeSeparation-r16"
		},
};
static const int asn_MAP_LTE_MBSFN_AreaInfo_r16_oms_1[] = { 4 };
static const ber_tlv_tag_t asn_DEF_LTE_MBSFN_AreaInfo_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_MBSFN_AreaInfo_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mbsfn-AreaId-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* notificationIndicator-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* mcch-Config-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* subcarrierSpacingMBMS-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* timeSeparation-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_MBSFN_AreaInfo_r16_specs_1 = {
	sizeof(struct LTE_MBSFN_AreaInfo_r16),
	offsetof(struct LTE_MBSFN_AreaInfo_r16, _asn_ctx),
	asn_MAP_LTE_MBSFN_AreaInfo_r16_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_LTE_MBSFN_AreaInfo_r16_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_MBSFN_AreaInfo_r16 = {
	"MBSFN-AreaInfo-r16",
	"MBSFN-AreaInfo-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_MBSFN_AreaInfo_r16_tags_1,
	sizeof(asn_DEF_LTE_MBSFN_AreaInfo_r16_tags_1)
		/sizeof(asn_DEF_LTE_MBSFN_AreaInfo_r16_tags_1[0]), /* 1 */
	asn_DEF_LTE_MBSFN_AreaInfo_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_MBSFN_AreaInfo_r16_tags_1)
		/sizeof(asn_DEF_LTE_MBSFN_AreaInfo_r16_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_MBSFN_AreaInfo_r16_1,
	5,	/* Elements count */
	&asn_SPC_LTE_MBSFN_AreaInfo_r16_specs_1	/* Additional specs */
};

