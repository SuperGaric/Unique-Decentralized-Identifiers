/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_DLInformationTransfer-v1700-IEs.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_ta_PDC_r17_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_sib9Fallback_r17_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_NR_ta_PDC_r17_value2enum_4[] = {
	{ 0,	8,	"activate" },
	{ 1,	10,	"deactivate" }
};
static const unsigned int asn_MAP_NR_ta_PDC_r17_enum2value_4[] = {
	0,	/* activate(0) */
	1	/* deactivate(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_ta_PDC_r17_specs_4 = {
	asn_MAP_NR_ta_PDC_r17_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_ta_PDC_r17_enum2value_4,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_ta_PDC_r17_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ta_PDC_r17_4 = {
	"ta-PDC-r17",
	"ta-PDC-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_ta_PDC_r17_tags_4,
	sizeof(asn_DEF_NR_ta_PDC_r17_tags_4)
		/sizeof(asn_DEF_NR_ta_PDC_r17_tags_4[0]) - 1, /* 1 */
	asn_DEF_NR_ta_PDC_r17_tags_4,	/* Same as above */
	sizeof(asn_DEF_NR_ta_PDC_r17_tags_4)
		/sizeof(asn_DEF_NR_ta_PDC_r17_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_ta_PDC_r17_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_ta_PDC_r17_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_sib9Fallback_r17_value2enum_7[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_NR_sib9Fallback_r17_enum2value_7[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_sib9Fallback_r17_specs_7 = {
	asn_MAP_NR_sib9Fallback_r17_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_sib9Fallback_r17_enum2value_7,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_sib9Fallback_r17_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_sib9Fallback_r17_7 = {
	"sib9Fallback-r17",
	"sib9Fallback-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_sib9Fallback_r17_tags_7,
	sizeof(asn_DEF_NR_sib9Fallback_r17_tags_7)
		/sizeof(asn_DEF_NR_sib9Fallback_r17_tags_7[0]) - 1, /* 1 */
	asn_DEF_NR_sib9Fallback_r17_tags_7,	/* Same as above */
	sizeof(asn_DEF_NR_sib9Fallback_r17_tags_7)
		/sizeof(asn_DEF_NR_sib9Fallback_r17_tags_7[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_sib9Fallback_r17_constr_7,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_sib9Fallback_r17_specs_7	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_NR_nonCriticalExtension_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_nonCriticalExtension_specs_9 = {
	sizeof(struct NR_DLInformationTransfer_v1700_IEs__nonCriticalExtension),
	offsetof(struct NR_DLInformationTransfer_v1700_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_nonCriticalExtension_9 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_nonCriticalExtension_tags_9,
	sizeof(asn_DEF_NR_nonCriticalExtension_tags_9)
		/sizeof(asn_DEF_NR_nonCriticalExtension_tags_9[0]) - 1, /* 1 */
	asn_DEF_NR_nonCriticalExtension_tags_9,	/* Same as above */
	sizeof(asn_DEF_NR_nonCriticalExtension_tags_9)
		/sizeof(asn_DEF_NR_nonCriticalExtension_tags_9[0]), /* 2 */
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
	&asn_SPC_NR_nonCriticalExtension_specs_9	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_DLInformationTransfer_v1700_IEs_1[] = {
	{ ATF_POINTER, 5, offsetof(struct NR_DLInformationTransfer_v1700_IEs, dedicatedInfoF1c_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_DedicatedInfoF1c_r17,
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
		"dedicatedInfoF1c-r17"
		},
	{ ATF_POINTER, 4, offsetof(struct NR_DLInformationTransfer_v1700_IEs, rxTxTimeDiff_gNB_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_RxTxTimeDiff_r17,
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
		"rxTxTimeDiff-gNB-r17"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_DLInformationTransfer_v1700_IEs, ta_PDC_r17),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_ta_PDC_r17_4,
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
		"ta-PDC-r17"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_DLInformationTransfer_v1700_IEs, sib9Fallback_r17),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_sib9Fallback_r17_7,
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
		"sib9Fallback-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_DLInformationTransfer_v1700_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_NR_nonCriticalExtension_9,
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
static const int asn_MAP_NR_DLInformationTransfer_v1700_IEs_oms_1[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_NR_DLInformationTransfer_v1700_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_DLInformationTransfer_v1700_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dedicatedInfoF1c-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rxTxTimeDiff-gNB-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ta-PDC-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sib9Fallback-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_DLInformationTransfer_v1700_IEs_specs_1 = {
	sizeof(struct NR_DLInformationTransfer_v1700_IEs),
	offsetof(struct NR_DLInformationTransfer_v1700_IEs, _asn_ctx),
	asn_MAP_NR_DLInformationTransfer_v1700_IEs_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_NR_DLInformationTransfer_v1700_IEs_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_DLInformationTransfer_v1700_IEs = {
	"DLInformationTransfer-v1700-IEs",
	"DLInformationTransfer-v1700-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_DLInformationTransfer_v1700_IEs_tags_1,
	sizeof(asn_DEF_NR_DLInformationTransfer_v1700_IEs_tags_1)
		/sizeof(asn_DEF_NR_DLInformationTransfer_v1700_IEs_tags_1[0]), /* 1 */
	asn_DEF_NR_DLInformationTransfer_v1700_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_DLInformationTransfer_v1700_IEs_tags_1)
		/sizeof(asn_DEF_NR_DLInformationTransfer_v1700_IEs_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_DLInformationTransfer_v1700_IEs_1,
	5,	/* Elements count */
	&asn_SPC_NR_DLInformationTransfer_v1700_IEs_specs_1	/* Additional specs */
};
