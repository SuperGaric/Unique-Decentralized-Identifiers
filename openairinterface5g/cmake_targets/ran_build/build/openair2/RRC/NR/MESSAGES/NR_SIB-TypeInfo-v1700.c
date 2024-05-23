/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_SIB-TypeInfo-v1700.h"

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
memb_NR_valueTag_r17_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_type1_r17_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  4,  4,  0,  15 }	/* (0..15,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_posSibType_r17_constr_22 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  4,  4,  0,  15 }	/* (0..15,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_encrypted_r17_constr_40 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_sibType_r17_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_areaScope_r17_constr_45 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_valueTag_r17_constr_44 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_NR_type1_r17_value2enum_3[] = {
	{ 0,	9,	"sibType15" },
	{ 1,	9,	"sibType16" },
	{ 2,	9,	"sibType17" },
	{ 3,	9,	"sibType18" },
	{ 4,	9,	"sibType19" },
	{ 5,	9,	"sibType20" },
	{ 6,	9,	"sibType21" },
	{ 7,	6,	"spare9" },
	{ 8,	6,	"spare8" },
	{ 9,	6,	"spare7" },
	{ 10,	6,	"spare6" },
	{ 11,	6,	"spare5" },
	{ 12,	6,	"spare4" },
	{ 13,	6,	"spare3" },
	{ 14,	6,	"spare2" },
	{ 15,	6,	"spare1" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_NR_type1_r17_enum2value_3[] = {
	0,	/* sibType15(0) */
	1,	/* sibType16(1) */
	2,	/* sibType17(2) */
	3,	/* sibType18(3) */
	4,	/* sibType19(4) */
	5,	/* sibType20(5) */
	6,	/* sibType21(6) */
	15,	/* spare1(15) */
	14,	/* spare2(14) */
	13,	/* spare3(13) */
	12,	/* spare4(12) */
	11,	/* spare5(11) */
	10,	/* spare6(10) */
	9,	/* spare7(9) */
	8,	/* spare8(8) */
	7	/* spare9(7) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_type1_r17_specs_3 = {
	asn_MAP_NR_type1_r17_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_type1_r17_enum2value_3,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	17,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_type1_r17_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_type1_r17_3 = {
	"type1-r17",
	"type1-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_type1_r17_tags_3,
	sizeof(asn_DEF_NR_type1_r17_tags_3)
		/sizeof(asn_DEF_NR_type1_r17_tags_3[0]) - 1, /* 1 */
	asn_DEF_NR_type1_r17_tags_3,	/* Same as above */
	sizeof(asn_DEF_NR_type1_r17_tags_3)
		/sizeof(asn_DEF_NR_type1_r17_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_type1_r17_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_type1_r17_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_posSibType_r17_value2enum_22[] = {
	{ 0,	13,	"posSibType1-9" },
	{ 1,	14,	"posSibType1-10" },
	{ 2,	14,	"posSibType2-24" },
	{ 3,	14,	"posSibType2-25" },
	{ 4,	13,	"posSibType6-4" },
	{ 5,	13,	"posSibType6-5" },
	{ 6,	13,	"posSibType6-6" },
	{ 7,	6,	"spare9" },
	{ 8,	6,	"spare8" },
	{ 9,	6,	"spare7" },
	{ 10,	6,	"spare6" },
	{ 11,	6,	"spare5" },
	{ 12,	6,	"spare4" },
	{ 13,	6,	"spare3" },
	{ 14,	6,	"spare2" },
	{ 15,	6,	"spare1" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_NR_posSibType_r17_enum2value_22[] = {
	1,	/* posSibType1-10(1) */
	0,	/* posSibType1-9(0) */
	2,	/* posSibType2-24(2) */
	3,	/* posSibType2-25(3) */
	4,	/* posSibType6-4(4) */
	5,	/* posSibType6-5(5) */
	6,	/* posSibType6-6(6) */
	15,	/* spare1(15) */
	14,	/* spare2(14) */
	13,	/* spare3(13) */
	12,	/* spare4(12) */
	11,	/* spare5(11) */
	10,	/* spare6(10) */
	9,	/* spare7(9) */
	8,	/* spare8(8) */
	7	/* spare9(7) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_posSibType_r17_specs_22 = {
	asn_MAP_NR_posSibType_r17_value2enum_22,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_posSibType_r17_enum2value_22,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	17,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_posSibType_r17_tags_22[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_posSibType_r17_22 = {
	"posSibType-r17",
	"posSibType-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_posSibType_r17_tags_22,
	sizeof(asn_DEF_NR_posSibType_r17_tags_22)
		/sizeof(asn_DEF_NR_posSibType_r17_tags_22[0]) - 1, /* 1 */
	asn_DEF_NR_posSibType_r17_tags_22,	/* Same as above */
	sizeof(asn_DEF_NR_posSibType_r17_tags_22)
		/sizeof(asn_DEF_NR_posSibType_r17_tags_22[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_posSibType_r17_constr_22,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_posSibType_r17_specs_22	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_encrypted_r17_value2enum_40[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_NR_encrypted_r17_enum2value_40[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_encrypted_r17_specs_40 = {
	asn_MAP_NR_encrypted_r17_value2enum_40,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_encrypted_r17_enum2value_40,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_encrypted_r17_tags_40[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_encrypted_r17_40 = {
	"encrypted-r17",
	"encrypted-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_encrypted_r17_tags_40,
	sizeof(asn_DEF_NR_encrypted_r17_tags_40)
		/sizeof(asn_DEF_NR_encrypted_r17_tags_40[0]) - 1, /* 1 */
	asn_DEF_NR_encrypted_r17_tags_40,	/* Same as above */
	sizeof(asn_DEF_NR_encrypted_r17_tags_40)
		/sizeof(asn_DEF_NR_encrypted_r17_tags_40[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_encrypted_r17_constr_40,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_encrypted_r17_specs_40	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_type2_r17_21[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SIB_TypeInfo_v1700__sibType_r17__type2_r17, posSibType_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_posSibType_r17_22,
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
		"posSibType-r17"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_SIB_TypeInfo_v1700__sibType_r17__type2_r17, encrypted_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_encrypted_r17_40,
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
		"encrypted-r17"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_SIB_TypeInfo_v1700__sibType_r17__type2_r17, gnss_id_r17),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_GNSS_ID_r16,
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
		"gnss-id-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_SIB_TypeInfo_v1700__sibType_r17__type2_r17, sbas_id_r17),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SBAS_ID_r16,
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
		"sbas-id-r17"
		},
};
static const int asn_MAP_NR_type2_r17_oms_21[] = { 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_NR_type2_r17_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_type2_r17_tag2el_21[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* posSibType-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* encrypted-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* gnss-id-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* sbas-id-r17 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_type2_r17_specs_21 = {
	sizeof(struct NR_SIB_TypeInfo_v1700__sibType_r17__type2_r17),
	offsetof(struct NR_SIB_TypeInfo_v1700__sibType_r17__type2_r17, _asn_ctx),
	asn_MAP_NR_type2_r17_tag2el_21,
	4,	/* Count of tags in the map */
	asn_MAP_NR_type2_r17_oms_21,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_type2_r17_21 = {
	"type2-r17",
	"type2-r17",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_type2_r17_tags_21,
	sizeof(asn_DEF_NR_type2_r17_tags_21)
		/sizeof(asn_DEF_NR_type2_r17_tags_21[0]) - 1, /* 1 */
	asn_DEF_NR_type2_r17_tags_21,	/* Same as above */
	sizeof(asn_DEF_NR_type2_r17_tags_21)
		/sizeof(asn_DEF_NR_type2_r17_tags_21[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_type2_r17_21,
	4,	/* Elements count */
	&asn_SPC_NR_type2_r17_specs_21	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_sibType_r17_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SIB_TypeInfo_v1700__sibType_r17, choice.type1_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_type1_r17_3,
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
		"type1-r17"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_SIB_TypeInfo_v1700__sibType_r17, choice.type2_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_NR_type2_r17_21,
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
		"type2-r17"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NR_sibType_r17_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* type1-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* type2-r17 */
};
static asn_CHOICE_specifics_t asn_SPC_NR_sibType_r17_specs_2 = {
	sizeof(struct NR_SIB_TypeInfo_v1700__sibType_r17),
	offsetof(struct NR_SIB_TypeInfo_v1700__sibType_r17, _asn_ctx),
	offsetof(struct NR_SIB_TypeInfo_v1700__sibType_r17, present),
	sizeof(((struct NR_SIB_TypeInfo_v1700__sibType_r17 *)0)->present),
	asn_MAP_NR_sibType_r17_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_sibType_r17_2 = {
	"sibType-r17",
	"sibType-r17",
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
		&asn_PER_type_NR_sibType_r17_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_NR_sibType_r17_2,
	2,	/* Elements count */
	&asn_SPC_NR_sibType_r17_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_areaScope_r17_value2enum_45[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_NR_areaScope_r17_enum2value_45[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_areaScope_r17_specs_45 = {
	asn_MAP_NR_areaScope_r17_value2enum_45,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_areaScope_r17_enum2value_45,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_areaScope_r17_tags_45[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_areaScope_r17_45 = {
	"areaScope-r17",
	"areaScope-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_areaScope_r17_tags_45,
	sizeof(asn_DEF_NR_areaScope_r17_tags_45)
		/sizeof(asn_DEF_NR_areaScope_r17_tags_45[0]) - 1, /* 1 */
	asn_DEF_NR_areaScope_r17_tags_45,	/* Same as above */
	sizeof(asn_DEF_NR_areaScope_r17_tags_45)
		/sizeof(asn_DEF_NR_areaScope_r17_tags_45[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_areaScope_r17_constr_45,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_areaScope_r17_specs_45	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_SIB_TypeInfo_v1700_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SIB_TypeInfo_v1700, sibType_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_sibType_r17_2,
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
		"sibType-r17"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_SIB_TypeInfo_v1700, valueTag_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_valueTag_r17_constr_44,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_valueTag_r17_constraint_1
		},
		0, 0, /* No default value */
		"valueTag-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_SIB_TypeInfo_v1700, areaScope_r17),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_areaScope_r17_45,
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
		"areaScope-r17"
		},
};
static const int asn_MAP_NR_SIB_TypeInfo_v1700_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_NR_SIB_TypeInfo_v1700_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_SIB_TypeInfo_v1700_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sibType-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* valueTag-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* areaScope-r17 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_SIB_TypeInfo_v1700_specs_1 = {
	sizeof(struct NR_SIB_TypeInfo_v1700),
	offsetof(struct NR_SIB_TypeInfo_v1700, _asn_ctx),
	asn_MAP_NR_SIB_TypeInfo_v1700_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_NR_SIB_TypeInfo_v1700_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_SIB_TypeInfo_v1700 = {
	"SIB-TypeInfo-v1700",
	"SIB-TypeInfo-v1700",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_SIB_TypeInfo_v1700_tags_1,
	sizeof(asn_DEF_NR_SIB_TypeInfo_v1700_tags_1)
		/sizeof(asn_DEF_NR_SIB_TypeInfo_v1700_tags_1[0]), /* 1 */
	asn_DEF_NR_SIB_TypeInfo_v1700_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_SIB_TypeInfo_v1700_tags_1)
		/sizeof(asn_DEF_NR_SIB_TypeInfo_v1700_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_SIB_TypeInfo_v1700_1,
	3,	/* Elements count */
	&asn_SPC_NR_SIB_TypeInfo_v1700_specs_1	/* Additional specs */
};

