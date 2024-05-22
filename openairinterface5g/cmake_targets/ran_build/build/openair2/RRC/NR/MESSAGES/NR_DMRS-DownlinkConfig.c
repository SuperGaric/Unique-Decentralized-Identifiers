/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_DMRS-DownlinkConfig.h"

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
memb_NR_scramblingID0_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 65535L)) {
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
memb_NR_scramblingID1_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 65535L)) {
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
static asn_per_constraints_t asn_PER_type_NR_dmrs_Type_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_dmrs_AdditionalPosition_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_maxLength_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_dmrs_Downlink_r16_constr_15 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_scramblingID0_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16,  0,  65535 }	/* (0..65535) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_scramblingID1_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16,  0,  65535 }	/* (0..65535) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_NR_dmrs_Type_value2enum_2[] = {
	{ 0,	5,	"type2" }
};
static const unsigned int asn_MAP_NR_dmrs_Type_enum2value_2[] = {
	0	/* type2(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_dmrs_Type_specs_2 = {
	asn_MAP_NR_dmrs_Type_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_dmrs_Type_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_dmrs_Type_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_dmrs_Type_2 = {
	"dmrs-Type",
	"dmrs-Type",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_dmrs_Type_tags_2,
	sizeof(asn_DEF_NR_dmrs_Type_tags_2)
		/sizeof(asn_DEF_NR_dmrs_Type_tags_2[0]) - 1, /* 1 */
	asn_DEF_NR_dmrs_Type_tags_2,	/* Same as above */
	sizeof(asn_DEF_NR_dmrs_Type_tags_2)
		/sizeof(asn_DEF_NR_dmrs_Type_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_dmrs_Type_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_dmrs_Type_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_dmrs_AdditionalPosition_value2enum_4[] = {
	{ 0,	4,	"pos0" },
	{ 1,	4,	"pos1" },
	{ 2,	4,	"pos3" }
};
static const unsigned int asn_MAP_NR_dmrs_AdditionalPosition_enum2value_4[] = {
	0,	/* pos0(0) */
	1,	/* pos1(1) */
	2	/* pos3(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_dmrs_AdditionalPosition_specs_4 = {
	asn_MAP_NR_dmrs_AdditionalPosition_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_dmrs_AdditionalPosition_enum2value_4,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_dmrs_AdditionalPosition_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_dmrs_AdditionalPosition_4 = {
	"dmrs-AdditionalPosition",
	"dmrs-AdditionalPosition",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_dmrs_AdditionalPosition_tags_4,
	sizeof(asn_DEF_NR_dmrs_AdditionalPosition_tags_4)
		/sizeof(asn_DEF_NR_dmrs_AdditionalPosition_tags_4[0]) - 1, /* 1 */
	asn_DEF_NR_dmrs_AdditionalPosition_tags_4,	/* Same as above */
	sizeof(asn_DEF_NR_dmrs_AdditionalPosition_tags_4)
		/sizeof(asn_DEF_NR_dmrs_AdditionalPosition_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_dmrs_AdditionalPosition_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_dmrs_AdditionalPosition_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_maxLength_value2enum_8[] = {
	{ 0,	4,	"len2" }
};
static const unsigned int asn_MAP_NR_maxLength_enum2value_8[] = {
	0	/* len2(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_maxLength_specs_8 = {
	asn_MAP_NR_maxLength_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_maxLength_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_maxLength_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_maxLength_8 = {
	"maxLength",
	"maxLength",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_maxLength_tags_8,
	sizeof(asn_DEF_NR_maxLength_tags_8)
		/sizeof(asn_DEF_NR_maxLength_tags_8[0]) - 1, /* 1 */
	asn_DEF_NR_maxLength_tags_8,	/* Same as above */
	sizeof(asn_DEF_NR_maxLength_tags_8)
		/sizeof(asn_DEF_NR_maxLength_tags_8[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_maxLength_constr_8,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_maxLength_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_dmrs_Downlink_r16_value2enum_15[] = {
	{ 0,	7,	"enabled" }
};
static const unsigned int asn_MAP_NR_dmrs_Downlink_r16_enum2value_15[] = {
	0	/* enabled(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_dmrs_Downlink_r16_specs_15 = {
	asn_MAP_NR_dmrs_Downlink_r16_value2enum_15,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_dmrs_Downlink_r16_enum2value_15,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_dmrs_Downlink_r16_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_dmrs_Downlink_r16_15 = {
	"dmrs-Downlink-r16",
	"dmrs-Downlink-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_dmrs_Downlink_r16_tags_15,
	sizeof(asn_DEF_NR_dmrs_Downlink_r16_tags_15)
		/sizeof(asn_DEF_NR_dmrs_Downlink_r16_tags_15[0]) - 1, /* 1 */
	asn_DEF_NR_dmrs_Downlink_r16_tags_15,	/* Same as above */
	sizeof(asn_DEF_NR_dmrs_Downlink_r16_tags_15)
		/sizeof(asn_DEF_NR_dmrs_Downlink_r16_tags_15[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_dmrs_Downlink_r16_constr_15,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_dmrs_Downlink_r16_specs_15	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_ext1_14[] = {
	{ ATF_POINTER, 1, offsetof(struct NR_DMRS_DownlinkConfig__ext1, dmrs_Downlink_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_dmrs_Downlink_r16_15,
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
		"dmrs-Downlink-r16"
		},
};
static const int asn_MAP_NR_ext1_oms_14[] = { 0 };
static const ber_tlv_tag_t asn_DEF_NR_ext1_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_ext1_tag2el_14[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* dmrs-Downlink-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_ext1_specs_14 = {
	sizeof(struct NR_DMRS_DownlinkConfig__ext1),
	offsetof(struct NR_DMRS_DownlinkConfig__ext1, _asn_ctx),
	asn_MAP_NR_ext1_tag2el_14,
	1,	/* Count of tags in the map */
	asn_MAP_NR_ext1_oms_14,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ext1_14 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_ext1_tags_14,
	sizeof(asn_DEF_NR_ext1_tags_14)
		/sizeof(asn_DEF_NR_ext1_tags_14[0]) - 1, /* 1 */
	asn_DEF_NR_ext1_tags_14,	/* Same as above */
	sizeof(asn_DEF_NR_ext1_tags_14)
		/sizeof(asn_DEF_NR_ext1_tags_14[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_ext1_14,
	1,	/* Elements count */
	&asn_SPC_NR_ext1_specs_14	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_DMRS_DownlinkConfig_1[] = {
	{ ATF_POINTER, 7, offsetof(struct NR_DMRS_DownlinkConfig, dmrs_Type),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_dmrs_Type_2,
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
		"dmrs-Type"
		},
	{ ATF_POINTER, 6, offsetof(struct NR_DMRS_DownlinkConfig, dmrs_AdditionalPosition),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_dmrs_AdditionalPosition_4,
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
		"dmrs-AdditionalPosition"
		},
	{ ATF_POINTER, 5, offsetof(struct NR_DMRS_DownlinkConfig, maxLength),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_maxLength_8,
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
		"maxLength"
		},
	{ ATF_POINTER, 4, offsetof(struct NR_DMRS_DownlinkConfig, scramblingID0),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_scramblingID0_constr_10,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_scramblingID0_constraint_1
		},
		0, 0, /* No default value */
		"scramblingID0"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_DMRS_DownlinkConfig, scramblingID1),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_scramblingID1_constr_11,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_scramblingID1_constraint_1
		},
		0, 0, /* No default value */
		"scramblingID1"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_DMRS_DownlinkConfig, phaseTrackingRS),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_SetupRelease_PTRS_DownlinkConfig,
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
		"phaseTrackingRS"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_DMRS_DownlinkConfig, ext1),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_NR_ext1_14,
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
};
static const int asn_MAP_NR_DMRS_DownlinkConfig_oms_1[] = { 0, 1, 2, 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_NR_DMRS_DownlinkConfig_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_DMRS_DownlinkConfig_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dmrs-Type */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dmrs-AdditionalPosition */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* maxLength */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* scramblingID0 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* scramblingID1 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* phaseTrackingRS */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_DMRS_DownlinkConfig_specs_1 = {
	sizeof(struct NR_DMRS_DownlinkConfig),
	offsetof(struct NR_DMRS_DownlinkConfig, _asn_ctx),
	asn_MAP_NR_DMRS_DownlinkConfig_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_NR_DMRS_DownlinkConfig_oms_1,	/* Optional members */
	6, 1,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_DMRS_DownlinkConfig = {
	"DMRS-DownlinkConfig",
	"DMRS-DownlinkConfig",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_DMRS_DownlinkConfig_tags_1,
	sizeof(asn_DEF_NR_DMRS_DownlinkConfig_tags_1)
		/sizeof(asn_DEF_NR_DMRS_DownlinkConfig_tags_1[0]), /* 1 */
	asn_DEF_NR_DMRS_DownlinkConfig_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_DMRS_DownlinkConfig_tags_1)
		/sizeof(asn_DEF_NR_DMRS_DownlinkConfig_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_DMRS_DownlinkConfig_1,
	7,	/* Elements count */
	&asn_SPC_NR_DMRS_DownlinkConfig_specs_1	/* Additional specs */
};
