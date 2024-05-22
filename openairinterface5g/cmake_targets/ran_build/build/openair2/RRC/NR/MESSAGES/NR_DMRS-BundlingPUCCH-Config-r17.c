/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_DMRS-BundlingPUCCH-Config-r17.h"

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
memb_NR_pucch_TimeDomainWindowLength_r17_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 2L && value <= 8L)) {
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
static asn_per_constraints_t asn_PER_type_NR_pucch_DMRS_Bundling_r17_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_pucch_WindowRestart_r17_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_pucch_FrequencyHoppingInterval_r17_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_pucch_TimeDomainWindowLength_r17_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  2,  8 }	/* (2..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_NR_pucch_DMRS_Bundling_r17_value2enum_2[] = {
	{ 0,	7,	"enabled" }
};
static const unsigned int asn_MAP_NR_pucch_DMRS_Bundling_r17_enum2value_2[] = {
	0	/* enabled(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_pucch_DMRS_Bundling_r17_specs_2 = {
	asn_MAP_NR_pucch_DMRS_Bundling_r17_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_pucch_DMRS_Bundling_r17_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_pucch_DMRS_Bundling_r17_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_pucch_DMRS_Bundling_r17_2 = {
	"pucch-DMRS-Bundling-r17",
	"pucch-DMRS-Bundling-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_pucch_DMRS_Bundling_r17_tags_2,
	sizeof(asn_DEF_NR_pucch_DMRS_Bundling_r17_tags_2)
		/sizeof(asn_DEF_NR_pucch_DMRS_Bundling_r17_tags_2[0]) - 1, /* 1 */
	asn_DEF_NR_pucch_DMRS_Bundling_r17_tags_2,	/* Same as above */
	sizeof(asn_DEF_NR_pucch_DMRS_Bundling_r17_tags_2)
		/sizeof(asn_DEF_NR_pucch_DMRS_Bundling_r17_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_pucch_DMRS_Bundling_r17_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_pucch_DMRS_Bundling_r17_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_pucch_WindowRestart_r17_value2enum_5[] = {
	{ 0,	7,	"enabled" }
};
static const unsigned int asn_MAP_NR_pucch_WindowRestart_r17_enum2value_5[] = {
	0	/* enabled(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_pucch_WindowRestart_r17_specs_5 = {
	asn_MAP_NR_pucch_WindowRestart_r17_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_pucch_WindowRestart_r17_enum2value_5,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_pucch_WindowRestart_r17_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_pucch_WindowRestart_r17_5 = {
	"pucch-WindowRestart-r17",
	"pucch-WindowRestart-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_pucch_WindowRestart_r17_tags_5,
	sizeof(asn_DEF_NR_pucch_WindowRestart_r17_tags_5)
		/sizeof(asn_DEF_NR_pucch_WindowRestart_r17_tags_5[0]) - 1, /* 1 */
	asn_DEF_NR_pucch_WindowRestart_r17_tags_5,	/* Same as above */
	sizeof(asn_DEF_NR_pucch_WindowRestart_r17_tags_5)
		/sizeof(asn_DEF_NR_pucch_WindowRestart_r17_tags_5[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_pucch_WindowRestart_r17_constr_5,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_pucch_WindowRestart_r17_specs_5	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_pucch_FrequencyHoppingInterval_r17_value2enum_7[] = {
	{ 0,	2,	"s2" },
	{ 1,	2,	"s4" },
	{ 2,	2,	"s5" },
	{ 3,	3,	"s10" }
};
static const unsigned int asn_MAP_NR_pucch_FrequencyHoppingInterval_r17_enum2value_7[] = {
	3,	/* s10(3) */
	0,	/* s2(0) */
	1,	/* s4(1) */
	2	/* s5(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_pucch_FrequencyHoppingInterval_r17_specs_7 = {
	asn_MAP_NR_pucch_FrequencyHoppingInterval_r17_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_pucch_FrequencyHoppingInterval_r17_enum2value_7,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_pucch_FrequencyHoppingInterval_r17_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_pucch_FrequencyHoppingInterval_r17_7 = {
	"pucch-FrequencyHoppingInterval-r17",
	"pucch-FrequencyHoppingInterval-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_pucch_FrequencyHoppingInterval_r17_tags_7,
	sizeof(asn_DEF_NR_pucch_FrequencyHoppingInterval_r17_tags_7)
		/sizeof(asn_DEF_NR_pucch_FrequencyHoppingInterval_r17_tags_7[0]) - 1, /* 1 */
	asn_DEF_NR_pucch_FrequencyHoppingInterval_r17_tags_7,	/* Same as above */
	sizeof(asn_DEF_NR_pucch_FrequencyHoppingInterval_r17_tags_7)
		/sizeof(asn_DEF_NR_pucch_FrequencyHoppingInterval_r17_tags_7[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_pucch_FrequencyHoppingInterval_r17_constr_7,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_pucch_FrequencyHoppingInterval_r17_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_DMRS_BundlingPUCCH_Config_r17_1[] = {
	{ ATF_POINTER, 4, offsetof(struct NR_DMRS_BundlingPUCCH_Config_r17, pucch_DMRS_Bundling_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_pucch_DMRS_Bundling_r17_2,
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
		"pucch-DMRS-Bundling-r17"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_DMRS_BundlingPUCCH_Config_r17, pucch_TimeDomainWindowLength_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_pucch_TimeDomainWindowLength_r17_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_pucch_TimeDomainWindowLength_r17_constraint_1
		},
		0, 0, /* No default value */
		"pucch-TimeDomainWindowLength-r17"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_DMRS_BundlingPUCCH_Config_r17, pucch_WindowRestart_r17),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_pucch_WindowRestart_r17_5,
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
		"pucch-WindowRestart-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_DMRS_BundlingPUCCH_Config_r17, pucch_FrequencyHoppingInterval_r17),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_pucch_FrequencyHoppingInterval_r17_7,
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
		"pucch-FrequencyHoppingInterval-r17"
		},
};
static const int asn_MAP_NR_DMRS_BundlingPUCCH_Config_r17_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_NR_DMRS_BundlingPUCCH_Config_r17_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_DMRS_BundlingPUCCH_Config_r17_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pucch-DMRS-Bundling-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pucch-TimeDomainWindowLength-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pucch-WindowRestart-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* pucch-FrequencyHoppingInterval-r17 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_DMRS_BundlingPUCCH_Config_r17_specs_1 = {
	sizeof(struct NR_DMRS_BundlingPUCCH_Config_r17),
	offsetof(struct NR_DMRS_BundlingPUCCH_Config_r17, _asn_ctx),
	asn_MAP_NR_DMRS_BundlingPUCCH_Config_r17_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_NR_DMRS_BundlingPUCCH_Config_r17_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_DMRS_BundlingPUCCH_Config_r17 = {
	"DMRS-BundlingPUCCH-Config-r17",
	"DMRS-BundlingPUCCH-Config-r17",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_DMRS_BundlingPUCCH_Config_r17_tags_1,
	sizeof(asn_DEF_NR_DMRS_BundlingPUCCH_Config_r17_tags_1)
		/sizeof(asn_DEF_NR_DMRS_BundlingPUCCH_Config_r17_tags_1[0]), /* 1 */
	asn_DEF_NR_DMRS_BundlingPUCCH_Config_r17_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_DMRS_BundlingPUCCH_Config_r17_tags_1)
		/sizeof(asn_DEF_NR_DMRS_BundlingPUCCH_Config_r17_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_DMRS_BundlingPUCCH_Config_r17_1,
	4,	/* Elements count */
	&asn_SPC_NR_DMRS_BundlingPUCCH_Config_r17_specs_1	/* Additional specs */
};

