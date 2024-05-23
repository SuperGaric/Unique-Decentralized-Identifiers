/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_FailureReportMCG-r16.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_NR_measResultSCG_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		(void)st; /* Unused variable */
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_failureType_r16_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_measResultSCG_r16_constr_13 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_NR_failureType_r16_value2enum_2[] = {
	{ 0,	11,	"t310-Expiry" },
	{ 1,	19,	"randomAccessProblem" },
	{ 2,	14,	"rlc-MaxNumRetx" },
	{ 3,	15,	"t312-Expiry-r16" },
	{ 4,	15,	"lbt-Failure-r16" },
	{ 5,	30,	"beamFailureRecoveryFailure-r16" },
	{ 6,	10,	"bh-RLF-r16" },
	{ 7,	6,	"spare1" }
};
static const unsigned int asn_MAP_NR_failureType_r16_enum2value_2[] = {
	5,	/* beamFailureRecoveryFailure-r16(5) */
	6,	/* bh-RLF-r16(6) */
	4,	/* lbt-Failure-r16(4) */
	1,	/* randomAccessProblem(1) */
	2,	/* rlc-MaxNumRetx(2) */
	7,	/* spare1(7) */
	0,	/* t310-Expiry(0) */
	3	/* t312-Expiry-r16(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_failureType_r16_specs_2 = {
	asn_MAP_NR_failureType_r16_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_failureType_r16_enum2value_2,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_failureType_r16_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_failureType_r16_2 = {
	"failureType-r16",
	"failureType-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_failureType_r16_tags_2,
	sizeof(asn_DEF_NR_failureType_r16_tags_2)
		/sizeof(asn_DEF_NR_failureType_r16_tags_2[0]) - 1, /* 1 */
	asn_DEF_NR_failureType_r16_tags_2,	/* Same as above */
	sizeof(asn_DEF_NR_failureType_r16_tags_2)
		/sizeof(asn_DEF_NR_failureType_r16_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_failureType_r16_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_failureType_r16_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_FailureReportMCG_r16_1[] = {
	{ ATF_POINTER, 6, offsetof(struct NR_FailureReportMCG_r16, failureType_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_failureType_r16_2,
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
		"failureType-r16"
		},
	{ ATF_POINTER, 5, offsetof(struct NR_FailureReportMCG_r16, measResultFreqList_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_MeasResultList2NR,
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
		"measResultFreqList-r16"
		},
	{ ATF_POINTER, 4, offsetof(struct NR_FailureReportMCG_r16, measResultFreqListEUTRA_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_MeasResultList2EUTRA,
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
		"measResultFreqListEUTRA-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_FailureReportMCG_r16, measResultSCG_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_measResultSCG_r16_constr_13,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_measResultSCG_r16_constraint_1
		},
		0, 0, /* No default value */
		"measResultSCG-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_FailureReportMCG_r16, measResultSCG_EUTRA_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
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
		"measResultSCG-EUTRA-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_FailureReportMCG_r16, measResultFreqListUTRA_FDD_r16),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_MeasResultList2UTRA,
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
		"measResultFreqListUTRA-FDD-r16"
		},
};
static const int asn_MAP_NR_FailureReportMCG_r16_oms_1[] = { 0, 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_NR_FailureReportMCG_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_FailureReportMCG_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* failureType-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* measResultFreqList-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* measResultFreqListEUTRA-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* measResultSCG-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* measResultSCG-EUTRA-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* measResultFreqListUTRA-FDD-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_FailureReportMCG_r16_specs_1 = {
	sizeof(struct NR_FailureReportMCG_r16),
	offsetof(struct NR_FailureReportMCG_r16, _asn_ctx),
	asn_MAP_NR_FailureReportMCG_r16_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_NR_FailureReportMCG_r16_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_FailureReportMCG_r16 = {
	"FailureReportMCG-r16",
	"FailureReportMCG-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_FailureReportMCG_r16_tags_1,
	sizeof(asn_DEF_NR_FailureReportMCG_r16_tags_1)
		/sizeof(asn_DEF_NR_FailureReportMCG_r16_tags_1[0]), /* 1 */
	asn_DEF_NR_FailureReportMCG_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_FailureReportMCG_r16_tags_1)
		/sizeof(asn_DEF_NR_FailureReportMCG_r16_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_FailureReportMCG_r16_1,
	6,	/* Elements count */
	&asn_SPC_NR_FailureReportMCG_r16_specs_1	/* Additional specs */
};

