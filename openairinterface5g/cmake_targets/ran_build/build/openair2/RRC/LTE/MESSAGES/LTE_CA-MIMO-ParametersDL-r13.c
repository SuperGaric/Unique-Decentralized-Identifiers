/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_CA-MIMO-ParametersDL-r13.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_LTE_intraBandContiguousCC_InfoList_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1UL && size <= 32UL)) {
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
static asn_per_constraints_t asn_PER_type_LTE_fourLayerTM3_TM4_r13_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_intraBandContiguousCC_InfoList_r13_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LTE_intraBandContiguousCC_InfoList_r13_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LTE_fourLayerTM3_TM4_r13_value2enum_4[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_fourLayerTM3_TM4_r13_enum2value_4[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_fourLayerTM3_TM4_r13_specs_4 = {
	asn_MAP_LTE_fourLayerTM3_TM4_r13_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_fourLayerTM3_TM4_r13_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_fourLayerTM3_TM4_r13_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_fourLayerTM3_TM4_r13_4 = {
	"fourLayerTM3-TM4-r13",
	"fourLayerTM3-TM4-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_fourLayerTM3_TM4_r13_tags_4,
	sizeof(asn_DEF_LTE_fourLayerTM3_TM4_r13_tags_4)
		/sizeof(asn_DEF_LTE_fourLayerTM3_TM4_r13_tags_4[0]) - 1, /* 1 */
	asn_DEF_LTE_fourLayerTM3_TM4_r13_tags_4,	/* Same as above */
	sizeof(asn_DEF_LTE_fourLayerTM3_TM4_r13_tags_4)
		/sizeof(asn_DEF_LTE_fourLayerTM3_TM4_r13_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_fourLayerTM3_TM4_r13_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_fourLayerTM3_TM4_r13_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_intraBandContiguousCC_InfoList_r13_6[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_LTE_IntraBandContiguousCC_Info_r12,
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
static const ber_tlv_tag_t asn_DEF_LTE_intraBandContiguousCC_InfoList_r13_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_LTE_intraBandContiguousCC_InfoList_r13_specs_6 = {
	sizeof(struct LTE_CA_MIMO_ParametersDL_r13__intraBandContiguousCC_InfoList_r13),
	offsetof(struct LTE_CA_MIMO_ParametersDL_r13__intraBandContiguousCC_InfoList_r13, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_intraBandContiguousCC_InfoList_r13_6 = {
	"intraBandContiguousCC-InfoList-r13",
	"intraBandContiguousCC-InfoList-r13",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_LTE_intraBandContiguousCC_InfoList_r13_tags_6,
	sizeof(asn_DEF_LTE_intraBandContiguousCC_InfoList_r13_tags_6)
		/sizeof(asn_DEF_LTE_intraBandContiguousCC_InfoList_r13_tags_6[0]) - 1, /* 1 */
	asn_DEF_LTE_intraBandContiguousCC_InfoList_r13_tags_6,	/* Same as above */
	sizeof(asn_DEF_LTE_intraBandContiguousCC_InfoList_r13_tags_6)
		/sizeof(asn_DEF_LTE_intraBandContiguousCC_InfoList_r13_tags_6[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_intraBandContiguousCC_InfoList_r13_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_LTE_intraBandContiguousCC_InfoList_r13_6,
	1,	/* Single element */
	&asn_SPC_LTE_intraBandContiguousCC_InfoList_r13_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_CA_MIMO_ParametersDL_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CA_MIMO_ParametersDL_r13, ca_BandwidthClassDL_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_CA_BandwidthClass_r10,
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
		"ca-BandwidthClassDL-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_CA_MIMO_ParametersDL_r13, supportedMIMO_CapabilityDL_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MIMO_CapabilityDL_r10,
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
		"supportedMIMO-CapabilityDL-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_CA_MIMO_ParametersDL_r13, fourLayerTM3_TM4_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_fourLayerTM3_TM4_r13_4,
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
		"fourLayerTM3-TM4-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CA_MIMO_ParametersDL_r13, intraBandContiguousCC_InfoList_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_LTE_intraBandContiguousCC_InfoList_r13_6,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LTE_intraBandContiguousCC_InfoList_r13_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LTE_intraBandContiguousCC_InfoList_r13_constraint_1
		},
		0, 0, /* No default value */
		"intraBandContiguousCC-InfoList-r13"
		},
};
static const int asn_MAP_LTE_CA_MIMO_ParametersDL_r13_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_LTE_CA_MIMO_ParametersDL_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_CA_MIMO_ParametersDL_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ca-BandwidthClassDL-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* supportedMIMO-CapabilityDL-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* fourLayerTM3-TM4-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* intraBandContiguousCC-InfoList-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_CA_MIMO_ParametersDL_r13_specs_1 = {
	sizeof(struct LTE_CA_MIMO_ParametersDL_r13),
	offsetof(struct LTE_CA_MIMO_ParametersDL_r13, _asn_ctx),
	asn_MAP_LTE_CA_MIMO_ParametersDL_r13_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_LTE_CA_MIMO_ParametersDL_r13_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_CA_MIMO_ParametersDL_r13 = {
	"CA-MIMO-ParametersDL-r13",
	"CA-MIMO-ParametersDL-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_CA_MIMO_ParametersDL_r13_tags_1,
	sizeof(asn_DEF_LTE_CA_MIMO_ParametersDL_r13_tags_1)
		/sizeof(asn_DEF_LTE_CA_MIMO_ParametersDL_r13_tags_1[0]), /* 1 */
	asn_DEF_LTE_CA_MIMO_ParametersDL_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_CA_MIMO_ParametersDL_r13_tags_1)
		/sizeof(asn_DEF_LTE_CA_MIMO_ParametersDL_r13_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_CA_MIMO_ParametersDL_r13_1,
	4,	/* Elements count */
	&asn_SPC_LTE_CA_MIMO_ParametersDL_r13_specs_1	/* Additional specs */
};

