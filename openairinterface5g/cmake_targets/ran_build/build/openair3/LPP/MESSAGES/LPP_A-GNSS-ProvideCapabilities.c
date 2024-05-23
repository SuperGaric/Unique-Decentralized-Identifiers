/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#include "LPP_A-GNSS-ProvideCapabilities.h"

#include "LPP_GNSS-SupportList.h"
#include "LPP_AssistanceDataSupportList.h"
#include "LPP_LocationCoordinateTypes.h"
#include "LPP_VelocityTypes.h"
#include "LPP_PositioningModes.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_LPP_periodicAssistanceData_r15_constraint_11(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1UL && size <= 8UL)) {
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
static asn_per_constraints_t asn_PER_type_LPP_idleStateForMeasurements_r14_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LPP_periodicAssistanceData_r15_constr_12 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LPP_idleStateForMeasurements_r14_value2enum_9[] = {
	{ 0,	8,	"required" }
};
static const unsigned int asn_MAP_LPP_idleStateForMeasurements_r14_enum2value_9[] = {
	0	/* required(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LPP_idleStateForMeasurements_r14_specs_9 = {
	asn_MAP_LPP_idleStateForMeasurements_r14_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_LPP_idleStateForMeasurements_r14_enum2value_9,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LPP_idleStateForMeasurements_r14_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LPP_idleStateForMeasurements_r14_9 = {
	"idleStateForMeasurements-r14",
	"idleStateForMeasurements-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LPP_idleStateForMeasurements_r14_tags_9,
	sizeof(asn_DEF_LPP_idleStateForMeasurements_r14_tags_9)
		/sizeof(asn_DEF_LPP_idleStateForMeasurements_r14_tags_9[0]) - 1, /* 1 */
	asn_DEF_LPP_idleStateForMeasurements_r14_tags_9,	/* Same as above */
	sizeof(asn_DEF_LPP_idleStateForMeasurements_r14_tags_9)
		/sizeof(asn_DEF_LPP_idleStateForMeasurements_r14_tags_9[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LPP_idleStateForMeasurements_r14_constr_9,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LPP_idleStateForMeasurements_r14_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LPP_ext1_7[] = {
	{ ATF_POINTER, 2, offsetof(struct LPP_A_GNSS_ProvideCapabilities__ext1, periodicalReportingNotSupported_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_PositioningModes,
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
		"periodicalReportingNotSupported-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct LPP_A_GNSS_ProvideCapabilities__ext1, idleStateForMeasurements_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_idleStateForMeasurements_r14_9,
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
		"idleStateForMeasurements-r14"
		},
};
static const int asn_MAP_LPP_ext1_oms_7[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LPP_ext1_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LPP_ext1_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* periodicalReportingNotSupported-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* idleStateForMeasurements-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LPP_ext1_specs_7 = {
	sizeof(struct LPP_A_GNSS_ProvideCapabilities__ext1),
	offsetof(struct LPP_A_GNSS_ProvideCapabilities__ext1, _asn_ctx),
	asn_MAP_LPP_ext1_tag2el_7,
	2,	/* Count of tags in the map */
	asn_MAP_LPP_ext1_oms_7,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LPP_ext1_7 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_LPP_ext1_tags_7,
	sizeof(asn_DEF_LPP_ext1_tags_7)
		/sizeof(asn_DEF_LPP_ext1_tags_7[0]) - 1, /* 1 */
	asn_DEF_LPP_ext1_tags_7,	/* Same as above */
	sizeof(asn_DEF_LPP_ext1_tags_7)
		/sizeof(asn_DEF_LPP_ext1_tags_7[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LPP_ext1_7,
	2,	/* Elements count */
	&asn_SPC_LPP_ext1_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LPP_ext2_11[] = {
	{ ATF_POINTER, 1, offsetof(struct LPP_A_GNSS_ProvideCapabilities__ext2, periodicAssistanceData_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LPP_periodicAssistanceData_r15_constr_12,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LPP_periodicAssistanceData_r15_constraint_11
		},
		0, 0, /* No default value */
		"periodicAssistanceData-r15"
		},
};
static const int asn_MAP_LPP_ext2_oms_11[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LPP_ext2_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LPP_ext2_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* periodicAssistanceData-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LPP_ext2_specs_11 = {
	sizeof(struct LPP_A_GNSS_ProvideCapabilities__ext2),
	offsetof(struct LPP_A_GNSS_ProvideCapabilities__ext2, _asn_ctx),
	asn_MAP_LPP_ext2_tag2el_11,
	1,	/* Count of tags in the map */
	asn_MAP_LPP_ext2_oms_11,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LPP_ext2_11 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_LPP_ext2_tags_11,
	sizeof(asn_DEF_LPP_ext2_tags_11)
		/sizeof(asn_DEF_LPP_ext2_tags_11[0]) - 1, /* 1 */
	asn_DEF_LPP_ext2_tags_11,	/* Same as above */
	sizeof(asn_DEF_LPP_ext2_tags_11)
		/sizeof(asn_DEF_LPP_ext2_tags_11[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LPP_ext2_11,
	1,	/* Elements count */
	&asn_SPC_LPP_ext2_specs_11	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LPP_A_GNSS_ProvideCapabilities_1[] = {
	{ ATF_POINTER, 6, offsetof(struct LPP_A_GNSS_ProvideCapabilities, gnss_SupportList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_GNSS_SupportList,
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
		"gnss-SupportList"
		},
	{ ATF_POINTER, 5, offsetof(struct LPP_A_GNSS_ProvideCapabilities, assistanceDataSupportList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_AssistanceDataSupportList,
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
		"assistanceDataSupportList"
		},
	{ ATF_POINTER, 4, offsetof(struct LPP_A_GNSS_ProvideCapabilities, locationCoordinateTypes),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_LocationCoordinateTypes,
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
		"locationCoordinateTypes"
		},
	{ ATF_POINTER, 3, offsetof(struct LPP_A_GNSS_ProvideCapabilities, velocityTypes),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_VelocityTypes,
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
		"velocityTypes"
		},
	{ ATF_POINTER, 2, offsetof(struct LPP_A_GNSS_ProvideCapabilities, ext1),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_LPP_ext1_7,
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
	{ ATF_POINTER, 1, offsetof(struct LPP_A_GNSS_ProvideCapabilities, ext2),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_LPP_ext2_11,
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
static const int asn_MAP_LPP_A_GNSS_ProvideCapabilities_oms_1[] = { 0, 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_LPP_A_GNSS_ProvideCapabilities_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LPP_A_GNSS_ProvideCapabilities_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gnss-SupportList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* assistanceDataSupportList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* locationCoordinateTypes */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* velocityTypes */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* ext2 */
};
asn_SEQUENCE_specifics_t asn_SPC_LPP_A_GNSS_ProvideCapabilities_specs_1 = {
	sizeof(struct LPP_A_GNSS_ProvideCapabilities),
	offsetof(struct LPP_A_GNSS_ProvideCapabilities, _asn_ctx),
	asn_MAP_LPP_A_GNSS_ProvideCapabilities_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_LPP_A_GNSS_ProvideCapabilities_oms_1,	/* Optional members */
	4, 2,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LPP_A_GNSS_ProvideCapabilities = {
	"A-GNSS-ProvideCapabilities",
	"A-GNSS-ProvideCapabilities",
	&asn_OP_SEQUENCE,
	asn_DEF_LPP_A_GNSS_ProvideCapabilities_tags_1,
	sizeof(asn_DEF_LPP_A_GNSS_ProvideCapabilities_tags_1)
		/sizeof(asn_DEF_LPP_A_GNSS_ProvideCapabilities_tags_1[0]), /* 1 */
	asn_DEF_LPP_A_GNSS_ProvideCapabilities_tags_1,	/* Same as above */
	sizeof(asn_DEF_LPP_A_GNSS_ProvideCapabilities_tags_1)
		/sizeof(asn_DEF_LPP_A_GNSS_ProvideCapabilities_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LPP_A_GNSS_ProvideCapabilities_1,
	6,	/* Elements count */
	&asn_SPC_LPP_A_GNSS_ProvideCapabilities_specs_1	/* Additional specs */
};

