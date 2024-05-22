/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_RRCConnectionSetupComplete-NB-v1610-IEs.h"

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
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_LTE_s_NSSAI_list_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1UL && size <= 8UL)) {
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
static asn_per_constraints_t asn_PER_type_LTE_gummei_Type_v1610_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_guami_Type_r16_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_s_NSSAI_list_r16_constr_9 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_ng_U_DataTransfer_r16_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_up_CIoT_5GS_Optimisation_r16_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_rlf_InfoAvailable_r16_constr_15 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_anr_InfoAvailable_r16_constr_17 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LTE_s_NSSAI_list_r16_constr_9 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LTE_gummei_Type_v1610_value2enum_4[] = {
	{ 0,	12,	"mappedFrom5G" }
};
static const unsigned int asn_MAP_LTE_gummei_Type_v1610_enum2value_4[] = {
	0	/* mappedFrom5G(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_gummei_Type_v1610_specs_4 = {
	asn_MAP_LTE_gummei_Type_v1610_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_gummei_Type_v1610_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_gummei_Type_v1610_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_gummei_Type_v1610_4 = {
	"gummei-Type-v1610",
	"gummei-Type-v1610",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_gummei_Type_v1610_tags_4,
	sizeof(asn_DEF_LTE_gummei_Type_v1610_tags_4)
		/sizeof(asn_DEF_LTE_gummei_Type_v1610_tags_4[0]) - 1, /* 1 */
	asn_DEF_LTE_gummei_Type_v1610_tags_4,	/* Same as above */
	sizeof(asn_DEF_LTE_gummei_Type_v1610_tags_4)
		/sizeof(asn_DEF_LTE_gummei_Type_v1610_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_gummei_Type_v1610_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_gummei_Type_v1610_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_guami_Type_r16_value2enum_6[] = {
	{ 0,	6,	"native" },
	{ 1,	6,	"mapped" }
};
static const unsigned int asn_MAP_LTE_guami_Type_r16_enum2value_6[] = {
	1,	/* mapped(1) */
	0	/* native(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_guami_Type_r16_specs_6 = {
	asn_MAP_LTE_guami_Type_r16_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_guami_Type_r16_enum2value_6,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_guami_Type_r16_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_guami_Type_r16_6 = {
	"guami-Type-r16",
	"guami-Type-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_guami_Type_r16_tags_6,
	sizeof(asn_DEF_LTE_guami_Type_r16_tags_6)
		/sizeof(asn_DEF_LTE_guami_Type_r16_tags_6[0]) - 1, /* 1 */
	asn_DEF_LTE_guami_Type_r16_tags_6,	/* Same as above */
	sizeof(asn_DEF_LTE_guami_Type_r16_tags_6)
		/sizeof(asn_DEF_LTE_guami_Type_r16_tags_6[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_guami_Type_r16_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_guami_Type_r16_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_s_NSSAI_list_r16_9[] = {
	{ ATF_POINTER, 0, 0,
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_LTE_S_NSSAI_r15,
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
static const ber_tlv_tag_t asn_DEF_LTE_s_NSSAI_list_r16_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_LTE_s_NSSAI_list_r16_specs_9 = {
	sizeof(struct LTE_RRCConnectionSetupComplete_NB_v1610_IEs__s_NSSAI_list_r16),
	offsetof(struct LTE_RRCConnectionSetupComplete_NB_v1610_IEs__s_NSSAI_list_r16, _asn_ctx),
	2,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_s_NSSAI_list_r16_9 = {
	"s-NSSAI-list-r16",
	"s-NSSAI-list-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_LTE_s_NSSAI_list_r16_tags_9,
	sizeof(asn_DEF_LTE_s_NSSAI_list_r16_tags_9)
		/sizeof(asn_DEF_LTE_s_NSSAI_list_r16_tags_9[0]) - 1, /* 1 */
	asn_DEF_LTE_s_NSSAI_list_r16_tags_9,	/* Same as above */
	sizeof(asn_DEF_LTE_s_NSSAI_list_r16_tags_9)
		/sizeof(asn_DEF_LTE_s_NSSAI_list_r16_tags_9[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_s_NSSAI_list_r16_constr_9,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_LTE_s_NSSAI_list_r16_9,
	1,	/* Single element */
	&asn_SPC_LTE_s_NSSAI_list_r16_specs_9	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_ng_U_DataTransfer_r16_value2enum_11[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_ng_U_DataTransfer_r16_enum2value_11[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_ng_U_DataTransfer_r16_specs_11 = {
	asn_MAP_LTE_ng_U_DataTransfer_r16_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_ng_U_DataTransfer_r16_enum2value_11,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_ng_U_DataTransfer_r16_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ng_U_DataTransfer_r16_11 = {
	"ng-U-DataTransfer-r16",
	"ng-U-DataTransfer-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_ng_U_DataTransfer_r16_tags_11,
	sizeof(asn_DEF_LTE_ng_U_DataTransfer_r16_tags_11)
		/sizeof(asn_DEF_LTE_ng_U_DataTransfer_r16_tags_11[0]) - 1, /* 1 */
	asn_DEF_LTE_ng_U_DataTransfer_r16_tags_11,	/* Same as above */
	sizeof(asn_DEF_LTE_ng_U_DataTransfer_r16_tags_11)
		/sizeof(asn_DEF_LTE_ng_U_DataTransfer_r16_tags_11[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_ng_U_DataTransfer_r16_constr_11,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_ng_U_DataTransfer_r16_specs_11	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_up_CIoT_5GS_Optimisation_r16_value2enum_13[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_up_CIoT_5GS_Optimisation_r16_enum2value_13[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_up_CIoT_5GS_Optimisation_r16_specs_13 = {
	asn_MAP_LTE_up_CIoT_5GS_Optimisation_r16_value2enum_13,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_up_CIoT_5GS_Optimisation_r16_enum2value_13,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_up_CIoT_5GS_Optimisation_r16_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_up_CIoT_5GS_Optimisation_r16_13 = {
	"up-CIoT-5GS-Optimisation-r16",
	"up-CIoT-5GS-Optimisation-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_up_CIoT_5GS_Optimisation_r16_tags_13,
	sizeof(asn_DEF_LTE_up_CIoT_5GS_Optimisation_r16_tags_13)
		/sizeof(asn_DEF_LTE_up_CIoT_5GS_Optimisation_r16_tags_13[0]) - 1, /* 1 */
	asn_DEF_LTE_up_CIoT_5GS_Optimisation_r16_tags_13,	/* Same as above */
	sizeof(asn_DEF_LTE_up_CIoT_5GS_Optimisation_r16_tags_13)
		/sizeof(asn_DEF_LTE_up_CIoT_5GS_Optimisation_r16_tags_13[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_up_CIoT_5GS_Optimisation_r16_constr_13,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_up_CIoT_5GS_Optimisation_r16_specs_13	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_rlf_InfoAvailable_r16_value2enum_15[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_rlf_InfoAvailable_r16_enum2value_15[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_rlf_InfoAvailable_r16_specs_15 = {
	asn_MAP_LTE_rlf_InfoAvailable_r16_value2enum_15,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_rlf_InfoAvailable_r16_enum2value_15,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_rlf_InfoAvailable_r16_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_rlf_InfoAvailable_r16_15 = {
	"rlf-InfoAvailable-r16",
	"rlf-InfoAvailable-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_rlf_InfoAvailable_r16_tags_15,
	sizeof(asn_DEF_LTE_rlf_InfoAvailable_r16_tags_15)
		/sizeof(asn_DEF_LTE_rlf_InfoAvailable_r16_tags_15[0]) - 1, /* 1 */
	asn_DEF_LTE_rlf_InfoAvailable_r16_tags_15,	/* Same as above */
	sizeof(asn_DEF_LTE_rlf_InfoAvailable_r16_tags_15)
		/sizeof(asn_DEF_LTE_rlf_InfoAvailable_r16_tags_15[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_rlf_InfoAvailable_r16_constr_15,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_rlf_InfoAvailable_r16_specs_15	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_anr_InfoAvailable_r16_value2enum_17[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_anr_InfoAvailable_r16_enum2value_17[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_anr_InfoAvailable_r16_specs_17 = {
	asn_MAP_LTE_anr_InfoAvailable_r16_value2enum_17,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_anr_InfoAvailable_r16_enum2value_17,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_anr_InfoAvailable_r16_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_anr_InfoAvailable_r16_17 = {
	"anr-InfoAvailable-r16",
	"anr-InfoAvailable-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_anr_InfoAvailable_r16_tags_17,
	sizeof(asn_DEF_LTE_anr_InfoAvailable_r16_tags_17)
		/sizeof(asn_DEF_LTE_anr_InfoAvailable_r16_tags_17[0]) - 1, /* 1 */
	asn_DEF_LTE_anr_InfoAvailable_r16_tags_17,	/* Same as above */
	sizeof(asn_DEF_LTE_anr_InfoAvailable_r16_tags_17)
		/sizeof(asn_DEF_LTE_anr_InfoAvailable_r16_tags_17[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_anr_InfoAvailable_r16_constr_17,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_anr_InfoAvailable_r16_specs_17	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_LTE_nonCriticalExtension_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_nonCriticalExtension_specs_20 = {
	sizeof(struct LTE_RRCConnectionSetupComplete_NB_v1610_IEs__nonCriticalExtension),
	offsetof(struct LTE_RRCConnectionSetupComplete_NB_v1610_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_nonCriticalExtension_20 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_nonCriticalExtension_tags_20,
	sizeof(asn_DEF_LTE_nonCriticalExtension_tags_20)
		/sizeof(asn_DEF_LTE_nonCriticalExtension_tags_20[0]) - 1, /* 1 */
	asn_DEF_LTE_nonCriticalExtension_tags_20,	/* Same as above */
	sizeof(asn_DEF_LTE_nonCriticalExtension_tags_20)
		/sizeof(asn_DEF_LTE_nonCriticalExtension_tags_20[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	0, 0,	/* No members */
	&asn_SPC_LTE_nonCriticalExtension_specs_20	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_RRCConnectionSetupComplete_NB_v1610_IEs_1[] = {
	{ ATF_POINTER, 11, offsetof(struct LTE_RRCConnectionSetupComplete_NB_v1610_IEs, ng_5G_S_TMSI_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_NG_5G_S_TMSI_r15,
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
		"ng-5G-S-TMSI-r16"
		},
	{ ATF_POINTER, 10, offsetof(struct LTE_RRCConnectionSetupComplete_NB_v1610_IEs, registeredAMF_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RegisteredAMF_r15,
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
		"registeredAMF-r16"
		},
	{ ATF_POINTER, 9, offsetof(struct LTE_RRCConnectionSetupComplete_NB_v1610_IEs, gummei_Type_v1610),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_gummei_Type_v1610_4,
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
		"gummei-Type-v1610"
		},
	{ ATF_POINTER, 8, offsetof(struct LTE_RRCConnectionSetupComplete_NB_v1610_IEs, guami_Type_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_guami_Type_r16_6,
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
		"guami-Type-r16"
		},
	{ ATF_POINTER, 7, offsetof(struct LTE_RRCConnectionSetupComplete_NB_v1610_IEs, s_NSSAI_list_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_LTE_s_NSSAI_list_r16_9,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LTE_s_NSSAI_list_r16_constr_9,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LTE_s_NSSAI_list_r16_constraint_1
		},
		0, 0, /* No default value */
		"s-NSSAI-list-r16"
		},
	{ ATF_POINTER, 6, offsetof(struct LTE_RRCConnectionSetupComplete_NB_v1610_IEs, ng_U_DataTransfer_r16),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ng_U_DataTransfer_r16_11,
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
		"ng-U-DataTransfer-r16"
		},
	{ ATF_POINTER, 5, offsetof(struct LTE_RRCConnectionSetupComplete_NB_v1610_IEs, up_CIoT_5GS_Optimisation_r16),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_up_CIoT_5GS_Optimisation_r16_13,
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
		"up-CIoT-5GS-Optimisation-r16"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_RRCConnectionSetupComplete_NB_v1610_IEs, rlf_InfoAvailable_r16),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_rlf_InfoAvailable_r16_15,
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
		"rlf-InfoAvailable-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_RRCConnectionSetupComplete_NB_v1610_IEs, anr_InfoAvailable_r16),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_anr_InfoAvailable_r16_17,
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
		"anr-InfoAvailable-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_RRCConnectionSetupComplete_NB_v1610_IEs, pur_ConfigID_r16),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PUR_ConfigID_NB_r16,
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
		"pur-ConfigID-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_RRCConnectionSetupComplete_NB_v1610_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		0,
		&asn_DEF_LTE_nonCriticalExtension_20,
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
static const int asn_MAP_LTE_RRCConnectionSetupComplete_NB_v1610_IEs_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
static const ber_tlv_tag_t asn_DEF_LTE_RRCConnectionSetupComplete_NB_v1610_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_RRCConnectionSetupComplete_NB_v1610_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ng-5G-S-TMSI-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* registeredAMF-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* gummei-Type-v1610 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* guami-Type-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* s-NSSAI-list-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* ng-U-DataTransfer-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* up-CIoT-5GS-Optimisation-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* rlf-InfoAvailable-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* anr-InfoAvailable-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* pur-ConfigID-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_RRCConnectionSetupComplete_NB_v1610_IEs_specs_1 = {
	sizeof(struct LTE_RRCConnectionSetupComplete_NB_v1610_IEs),
	offsetof(struct LTE_RRCConnectionSetupComplete_NB_v1610_IEs, _asn_ctx),
	asn_MAP_LTE_RRCConnectionSetupComplete_NB_v1610_IEs_tag2el_1,
	11,	/* Count of tags in the map */
	asn_MAP_LTE_RRCConnectionSetupComplete_NB_v1610_IEs_oms_1,	/* Optional members */
	11, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_RRCConnectionSetupComplete_NB_v1610_IEs = {
	"RRCConnectionSetupComplete-NB-v1610-IEs",
	"RRCConnectionSetupComplete-NB-v1610-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_RRCConnectionSetupComplete_NB_v1610_IEs_tags_1,
	sizeof(asn_DEF_LTE_RRCConnectionSetupComplete_NB_v1610_IEs_tags_1)
		/sizeof(asn_DEF_LTE_RRCConnectionSetupComplete_NB_v1610_IEs_tags_1[0]), /* 1 */
	asn_DEF_LTE_RRCConnectionSetupComplete_NB_v1610_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_RRCConnectionSetupComplete_NB_v1610_IEs_tags_1)
		/sizeof(asn_DEF_LTE_RRCConnectionSetupComplete_NB_v1610_IEs_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_RRCConnectionSetupComplete_NB_v1610_IEs_1,
	11,	/* Elements count */
	&asn_SPC_LTE_RRCConnectionSetupComplete_NB_v1610_IEs_specs_1	/* Additional specs */
};

