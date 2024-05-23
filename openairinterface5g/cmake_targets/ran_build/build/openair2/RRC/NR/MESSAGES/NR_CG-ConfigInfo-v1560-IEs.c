/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_CG-ConfigInfo-v1560-IEs.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_failureTypeEUTRA_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_NR_failureTypeEUTRA_value2enum_6[] = {
	{ 0,	11,	"t313-Expiry" },
	{ 1,	19,	"randomAccessProblem" },
	{ 2,	14,	"rlc-MaxNumRetx" },
	{ 3,	17,	"scg-ChangeFailure" }
};
static const unsigned int asn_MAP_NR_failureTypeEUTRA_enum2value_6[] = {
	1,	/* randomAccessProblem(1) */
	2,	/* rlc-MaxNumRetx(2) */
	3,	/* scg-ChangeFailure(3) */
	0	/* t313-Expiry(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_failureTypeEUTRA_specs_6 = {
	asn_MAP_NR_failureTypeEUTRA_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_failureTypeEUTRA_enum2value_6,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_failureTypeEUTRA_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_failureTypeEUTRA_6 = {
	"failureTypeEUTRA",
	"failureTypeEUTRA",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_failureTypeEUTRA_tags_6,
	sizeof(asn_DEF_NR_failureTypeEUTRA_tags_6)
		/sizeof(asn_DEF_NR_failureTypeEUTRA_tags_6[0]) - 1, /* 1 */
	asn_DEF_NR_failureTypeEUTRA_tags_6,	/* Same as above */
	sizeof(asn_DEF_NR_failureTypeEUTRA_tags_6)
		/sizeof(asn_DEF_NR_failureTypeEUTRA_tags_6[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_failureTypeEUTRA_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_failureTypeEUTRA_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_scgFailureInfoEUTRA_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CG_ConfigInfo_v1560_IEs__scgFailureInfoEUTRA, failureTypeEUTRA),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_failureTypeEUTRA_6,
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
		"failureTypeEUTRA"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CG_ConfigInfo_v1560_IEs__scgFailureInfoEUTRA, measResultSCG_EUTRA),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
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
		"measResultSCG-EUTRA"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_scgFailureInfoEUTRA_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_scgFailureInfoEUTRA_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* failureTypeEUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* measResultSCG-EUTRA */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_scgFailureInfoEUTRA_specs_5 = {
	sizeof(struct NR_CG_ConfigInfo_v1560_IEs__scgFailureInfoEUTRA),
	offsetof(struct NR_CG_ConfigInfo_v1560_IEs__scgFailureInfoEUTRA, _asn_ctx),
	asn_MAP_NR_scgFailureInfoEUTRA_tag2el_5,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_scgFailureInfoEUTRA_5 = {
	"scgFailureInfoEUTRA",
	"scgFailureInfoEUTRA",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_scgFailureInfoEUTRA_tags_5,
	sizeof(asn_DEF_NR_scgFailureInfoEUTRA_tags_5)
		/sizeof(asn_DEF_NR_scgFailureInfoEUTRA_tags_5[0]) - 1, /* 1 */
	asn_DEF_NR_scgFailureInfoEUTRA_tags_5,	/* Same as above */
	sizeof(asn_DEF_NR_scgFailureInfoEUTRA_tags_5)
		/sizeof(asn_DEF_NR_scgFailureInfoEUTRA_tags_5[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_scgFailureInfoEUTRA_5,
	2,	/* Elements count */
	&asn_SPC_NR_scgFailureInfoEUTRA_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_measResultReportCGI_EUTRA_13[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CG_ConfigInfo_v1560_IEs__measResultReportCGI_EUTRA, eutraFrequency),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_ARFCN_ValueEUTRA,
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
		"eutraFrequency"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CG_ConfigInfo_v1560_IEs__measResultReportCGI_EUTRA, cellForWhichToReportCGI_EUTRA),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_EUTRA_PhysCellId,
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
		"cellForWhichToReportCGI-EUTRA"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CG_ConfigInfo_v1560_IEs__measResultReportCGI_EUTRA, cgi_InfoEUTRA),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_CGI_InfoEUTRA,
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
		"cgi-InfoEUTRA"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_measResultReportCGI_EUTRA_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_measResultReportCGI_EUTRA_tag2el_13[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eutraFrequency */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cellForWhichToReportCGI-EUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* cgi-InfoEUTRA */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_measResultReportCGI_EUTRA_specs_13 = {
	sizeof(struct NR_CG_ConfigInfo_v1560_IEs__measResultReportCGI_EUTRA),
	offsetof(struct NR_CG_ConfigInfo_v1560_IEs__measResultReportCGI_EUTRA, _asn_ctx),
	asn_MAP_NR_measResultReportCGI_EUTRA_tag2el_13,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_measResultReportCGI_EUTRA_13 = {
	"measResultReportCGI-EUTRA",
	"measResultReportCGI-EUTRA",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_measResultReportCGI_EUTRA_tags_13,
	sizeof(asn_DEF_NR_measResultReportCGI_EUTRA_tags_13)
		/sizeof(asn_DEF_NR_measResultReportCGI_EUTRA_tags_13[0]) - 1, /* 1 */
	asn_DEF_NR_measResultReportCGI_EUTRA_tags_13,	/* Same as above */
	sizeof(asn_DEF_NR_measResultReportCGI_EUTRA_tags_13)
		/sizeof(asn_DEF_NR_measResultReportCGI_EUTRA_tags_13[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_measResultReportCGI_EUTRA_13,
	3,	/* Elements count */
	&asn_SPC_NR_measResultReportCGI_EUTRA_specs_13	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_CG_ConfigInfo_v1560_IEs_1[] = {
	{ ATF_POINTER, 9, offsetof(struct NR_CG_ConfigInfo_v1560_IEs, candidateCellInfoListMN_EUTRA),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
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
		"candidateCellInfoListMN-EUTRA"
		},
	{ ATF_POINTER, 8, offsetof(struct NR_CG_ConfigInfo_v1560_IEs, candidateCellInfoListSN_EUTRA),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
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
		"candidateCellInfoListSN-EUTRA"
		},
	{ ATF_POINTER, 7, offsetof(struct NR_CG_ConfigInfo_v1560_IEs, sourceConfigSCG_EUTRA),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
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
		"sourceConfigSCG-EUTRA"
		},
	{ ATF_POINTER, 6, offsetof(struct NR_CG_ConfigInfo_v1560_IEs, scgFailureInfoEUTRA),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_NR_scgFailureInfoEUTRA_5,
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
		"scgFailureInfoEUTRA"
		},
	{ ATF_POINTER, 5, offsetof(struct NR_CG_ConfigInfo_v1560_IEs, drx_ConfigMCG),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_DRX_Config,
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
		"drx-ConfigMCG"
		},
	{ ATF_POINTER, 4, offsetof(struct NR_CG_ConfigInfo_v1560_IEs, measResultReportCGI_EUTRA),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_NR_measResultReportCGI_EUTRA_13,
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
		"measResultReportCGI-EUTRA"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_CG_ConfigInfo_v1560_IEs, measResultCellListSFTD_EUTRA),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_MeasResultCellListSFTD_EUTRA,
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
		"measResultCellListSFTD-EUTRA"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_CG_ConfigInfo_v1560_IEs, fr_InfoListMCG),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_FR_InfoList,
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
		"fr-InfoListMCG"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_CG_ConfigInfo_v1560_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_CG_ConfigInfo_v1570_IEs,
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
		"nonCriticalExtension"
		},
};
static const int asn_MAP_NR_CG_ConfigInfo_v1560_IEs_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8 };
static const ber_tlv_tag_t asn_DEF_NR_CG_ConfigInfo_v1560_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_CG_ConfigInfo_v1560_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* candidateCellInfoListMN-EUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* candidateCellInfoListSN-EUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sourceConfigSCG-EUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* scgFailureInfoEUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* drx-ConfigMCG */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* measResultReportCGI-EUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* measResultCellListSFTD-EUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* fr-InfoListMCG */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_CG_ConfigInfo_v1560_IEs_specs_1 = {
	sizeof(struct NR_CG_ConfigInfo_v1560_IEs),
	offsetof(struct NR_CG_ConfigInfo_v1560_IEs, _asn_ctx),
	asn_MAP_NR_CG_ConfigInfo_v1560_IEs_tag2el_1,
	9,	/* Count of tags in the map */
	asn_MAP_NR_CG_ConfigInfo_v1560_IEs_oms_1,	/* Optional members */
	9, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_CG_ConfigInfo_v1560_IEs = {
	"CG-ConfigInfo-v1560-IEs",
	"CG-ConfigInfo-v1560-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_CG_ConfigInfo_v1560_IEs_tags_1,
	sizeof(asn_DEF_NR_CG_ConfigInfo_v1560_IEs_tags_1)
		/sizeof(asn_DEF_NR_CG_ConfigInfo_v1560_IEs_tags_1[0]), /* 1 */
	asn_DEF_NR_CG_ConfigInfo_v1560_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_CG_ConfigInfo_v1560_IEs_tags_1)
		/sizeof(asn_DEF_NR_CG_ConfigInfo_v1560_IEs_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_CG_ConfigInfo_v1560_IEs_1,
	9,	/* Elements count */
	&asn_SPC_NR_CG_ConfigInfo_v1560_IEs_specs_1	/* Additional specs */
};

