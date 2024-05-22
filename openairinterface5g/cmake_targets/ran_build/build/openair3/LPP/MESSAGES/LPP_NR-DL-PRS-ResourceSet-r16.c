/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#include "LPP_NR-DL-PRS-ResourceSet-r16.h"

#include "LPP_DL-PRS-MutingOption1-r16.h"
#include "LPP_DL-PRS-MutingOption2-r16.h"
#include "LPP_NR-DL-PRS-Resource-r16.h"
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
memb_LPP_dl_PRS_ResourcePower_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -60L && value <= 50L)) {
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
memb_LPP_dl_PRS_ResourceList_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1UL && size <= 64UL)) {
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
static asn_per_constraints_t asn_PER_type_LPP_dl_PRS_ResourceRepetitionFactor_r16_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  5 }	/* (0..5,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LPP_dl_PRS_ResourceTimeGap_r16_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  5 }	/* (0..5,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LPP_dl_PRS_NumSymbols_r16_constr_20 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  3 }	/* (0..3,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LPP_dl_PRS_ResourceList_r16_constr_29 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LPP_dl_PRS_ResourcePower_r16_constr_28 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7, -60,  50 }	/* (-60..50) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LPP_dl_PRS_ResourceList_r16_constr_29 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LPP_dl_PRS_ResourceRepetitionFactor_r16_value2enum_4[] = {
	{ 0,	2,	"n2" },
	{ 1,	2,	"n4" },
	{ 2,	2,	"n6" },
	{ 3,	2,	"n8" },
	{ 4,	3,	"n16" },
	{ 5,	3,	"n32" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_LPP_dl_PRS_ResourceRepetitionFactor_r16_enum2value_4[] = {
	4,	/* n16(4) */
	0,	/* n2(0) */
	5,	/* n32(5) */
	1,	/* n4(1) */
	2,	/* n6(2) */
	3	/* n8(3) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_LPP_dl_PRS_ResourceRepetitionFactor_r16_specs_4 = {
	asn_MAP_LPP_dl_PRS_ResourceRepetitionFactor_r16_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_LPP_dl_PRS_ResourceRepetitionFactor_r16_enum2value_4,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	7,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LPP_dl_PRS_ResourceRepetitionFactor_r16_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LPP_dl_PRS_ResourceRepetitionFactor_r16_4 = {
	"dl-PRS-ResourceRepetitionFactor-r16",
	"dl-PRS-ResourceRepetitionFactor-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_LPP_dl_PRS_ResourceRepetitionFactor_r16_tags_4,
	sizeof(asn_DEF_LPP_dl_PRS_ResourceRepetitionFactor_r16_tags_4)
		/sizeof(asn_DEF_LPP_dl_PRS_ResourceRepetitionFactor_r16_tags_4[0]) - 1, /* 1 */
	asn_DEF_LPP_dl_PRS_ResourceRepetitionFactor_r16_tags_4,	/* Same as above */
	sizeof(asn_DEF_LPP_dl_PRS_ResourceRepetitionFactor_r16_tags_4)
		/sizeof(asn_DEF_LPP_dl_PRS_ResourceRepetitionFactor_r16_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LPP_dl_PRS_ResourceRepetitionFactor_r16_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LPP_dl_PRS_ResourceRepetitionFactor_r16_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LPP_dl_PRS_ResourceTimeGap_r16_value2enum_12[] = {
	{ 0,	2,	"s1" },
	{ 1,	2,	"s2" },
	{ 2,	2,	"s4" },
	{ 3,	2,	"s8" },
	{ 4,	3,	"s16" },
	{ 5,	3,	"s32" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_LPP_dl_PRS_ResourceTimeGap_r16_enum2value_12[] = {
	0,	/* s1(0) */
	4,	/* s16(4) */
	1,	/* s2(1) */
	5,	/* s32(5) */
	2,	/* s4(2) */
	3	/* s8(3) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_LPP_dl_PRS_ResourceTimeGap_r16_specs_12 = {
	asn_MAP_LPP_dl_PRS_ResourceTimeGap_r16_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_LPP_dl_PRS_ResourceTimeGap_r16_enum2value_12,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	7,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LPP_dl_PRS_ResourceTimeGap_r16_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LPP_dl_PRS_ResourceTimeGap_r16_12 = {
	"dl-PRS-ResourceTimeGap-r16",
	"dl-PRS-ResourceTimeGap-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_LPP_dl_PRS_ResourceTimeGap_r16_tags_12,
	sizeof(asn_DEF_LPP_dl_PRS_ResourceTimeGap_r16_tags_12)
		/sizeof(asn_DEF_LPP_dl_PRS_ResourceTimeGap_r16_tags_12[0]) - 1, /* 1 */
	asn_DEF_LPP_dl_PRS_ResourceTimeGap_r16_tags_12,	/* Same as above */
	sizeof(asn_DEF_LPP_dl_PRS_ResourceTimeGap_r16_tags_12)
		/sizeof(asn_DEF_LPP_dl_PRS_ResourceTimeGap_r16_tags_12[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LPP_dl_PRS_ResourceTimeGap_r16_constr_12,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LPP_dl_PRS_ResourceTimeGap_r16_specs_12	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LPP_dl_PRS_NumSymbols_r16_value2enum_20[] = {
	{ 0,	2,	"n2" },
	{ 1,	2,	"n4" },
	{ 2,	2,	"n6" },
	{ 3,	3,	"n12" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_LPP_dl_PRS_NumSymbols_r16_enum2value_20[] = {
	3,	/* n12(3) */
	0,	/* n2(0) */
	1,	/* n4(1) */
	2	/* n6(2) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_LPP_dl_PRS_NumSymbols_r16_specs_20 = {
	asn_MAP_LPP_dl_PRS_NumSymbols_r16_value2enum_20,	/* "tag" => N; sorted by tag */
	asn_MAP_LPP_dl_PRS_NumSymbols_r16_enum2value_20,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	5,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LPP_dl_PRS_NumSymbols_r16_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LPP_dl_PRS_NumSymbols_r16_20 = {
	"dl-PRS-NumSymbols-r16",
	"dl-PRS-NumSymbols-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_LPP_dl_PRS_NumSymbols_r16_tags_20,
	sizeof(asn_DEF_LPP_dl_PRS_NumSymbols_r16_tags_20)
		/sizeof(asn_DEF_LPP_dl_PRS_NumSymbols_r16_tags_20[0]) - 1, /* 1 */
	asn_DEF_LPP_dl_PRS_NumSymbols_r16_tags_20,	/* Same as above */
	sizeof(asn_DEF_LPP_dl_PRS_NumSymbols_r16_tags_20)
		/sizeof(asn_DEF_LPP_dl_PRS_NumSymbols_r16_tags_20[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LPP_dl_PRS_NumSymbols_r16_constr_20,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LPP_dl_PRS_NumSymbols_r16_specs_20	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LPP_dl_PRS_ResourceList_r16_29[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_LPP_NR_DL_PRS_Resource_r16,
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
static const ber_tlv_tag_t asn_DEF_LPP_dl_PRS_ResourceList_r16_tags_29[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_LPP_dl_PRS_ResourceList_r16_specs_29 = {
	sizeof(struct LPP_NR_DL_PRS_ResourceSet_r16__dl_PRS_ResourceList_r16),
	offsetof(struct LPP_NR_DL_PRS_ResourceSet_r16__dl_PRS_ResourceList_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LPP_dl_PRS_ResourceList_r16_29 = {
	"dl-PRS-ResourceList-r16",
	"dl-PRS-ResourceList-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_LPP_dl_PRS_ResourceList_r16_tags_29,
	sizeof(asn_DEF_LPP_dl_PRS_ResourceList_r16_tags_29)
		/sizeof(asn_DEF_LPP_dl_PRS_ResourceList_r16_tags_29[0]) - 1, /* 1 */
	asn_DEF_LPP_dl_PRS_ResourceList_r16_tags_29,	/* Same as above */
	sizeof(asn_DEF_LPP_dl_PRS_ResourceList_r16_tags_29)
		/sizeof(asn_DEF_LPP_dl_PRS_ResourceList_r16_tags_29[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LPP_dl_PRS_ResourceList_r16_constr_29,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_LPP_dl_PRS_ResourceList_r16_29,
	1,	/* Single element */
	&asn_SPC_LPP_dl_PRS_ResourceList_r16_specs_29	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LPP_NR_DL_PRS_ResourceSet_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_NR_DL_PRS_ResourceSet_r16, nr_DL_PRS_ResourceSetID_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_NR_DL_PRS_ResourceSetID_r16,
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
		"nr-DL-PRS-ResourceSetID-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_NR_DL_PRS_ResourceSet_r16, dl_PRS_Periodicity_and_ResourceSetSlotOffset_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LPP_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16,
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
		"dl-PRS-Periodicity-and-ResourceSetSlotOffset-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct LPP_NR_DL_PRS_ResourceSet_r16, dl_PRS_ResourceRepetitionFactor_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_dl_PRS_ResourceRepetitionFactor_r16_4,
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
		"dl-PRS-ResourceRepetitionFactor-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct LPP_NR_DL_PRS_ResourceSet_r16, dl_PRS_ResourceTimeGap_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_dl_PRS_ResourceTimeGap_r16_12,
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
		"dl-PRS-ResourceTimeGap-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_NR_DL_PRS_ResourceSet_r16, dl_PRS_NumSymbols_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_dl_PRS_NumSymbols_r16_20,
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
		"dl-PRS-NumSymbols-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct LPP_NR_DL_PRS_ResourceSet_r16, dl_PRS_MutingOption1_r16),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_DL_PRS_MutingOption1_r16,
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
		"dl-PRS-MutingOption1-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct LPP_NR_DL_PRS_ResourceSet_r16, dl_PRS_MutingOption2_r16),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_DL_PRS_MutingOption2_r16,
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
		"dl-PRS-MutingOption2-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_NR_DL_PRS_ResourceSet_r16, dl_PRS_ResourcePower_r16),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LPP_dl_PRS_ResourcePower_r16_constr_28,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LPP_dl_PRS_ResourcePower_r16_constraint_1
		},
		0, 0, /* No default value */
		"dl-PRS-ResourcePower-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_NR_DL_PRS_ResourceSet_r16, dl_PRS_ResourceList_r16),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		0,
		&asn_DEF_LPP_dl_PRS_ResourceList_r16_29,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LPP_dl_PRS_ResourceList_r16_constr_29,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LPP_dl_PRS_ResourceList_r16_constraint_1
		},
		0, 0, /* No default value */
		"dl-PRS-ResourceList-r16"
		},
};
static const int asn_MAP_LPP_NR_DL_PRS_ResourceSet_r16_oms_1[] = { 2, 3, 5, 6 };
static const ber_tlv_tag_t asn_DEF_LPP_NR_DL_PRS_ResourceSet_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LPP_NR_DL_PRS_ResourceSet_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nr-DL-PRS-ResourceSetID-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dl-PRS-Periodicity-and-ResourceSetSlotOffset-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* dl-PRS-ResourceRepetitionFactor-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* dl-PRS-ResourceTimeGap-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* dl-PRS-NumSymbols-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* dl-PRS-MutingOption1-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* dl-PRS-MutingOption2-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* dl-PRS-ResourcePower-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* dl-PRS-ResourceList-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_LPP_NR_DL_PRS_ResourceSet_r16_specs_1 = {
	sizeof(struct LPP_NR_DL_PRS_ResourceSet_r16),
	offsetof(struct LPP_NR_DL_PRS_ResourceSet_r16, _asn_ctx),
	asn_MAP_LPP_NR_DL_PRS_ResourceSet_r16_tag2el_1,
	9,	/* Count of tags in the map */
	asn_MAP_LPP_NR_DL_PRS_ResourceSet_r16_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	9,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LPP_NR_DL_PRS_ResourceSet_r16 = {
	"NR-DL-PRS-ResourceSet-r16",
	"NR-DL-PRS-ResourceSet-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_LPP_NR_DL_PRS_ResourceSet_r16_tags_1,
	sizeof(asn_DEF_LPP_NR_DL_PRS_ResourceSet_r16_tags_1)
		/sizeof(asn_DEF_LPP_NR_DL_PRS_ResourceSet_r16_tags_1[0]), /* 1 */
	asn_DEF_LPP_NR_DL_PRS_ResourceSet_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_LPP_NR_DL_PRS_ResourceSet_r16_tags_1)
		/sizeof(asn_DEF_LPP_NR_DL_PRS_ResourceSet_r16_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LPP_NR_DL_PRS_ResourceSet_r16_1,
	9,	/* Elements count */
	&asn_SPC_LPP_NR_DL_PRS_ResourceSet_r16_specs_1	/* Additional specs */
};
