/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_CA-ParametersNRDC-v1700.h"

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
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_simultaneousRxTx_IAB_MultipleParents_r17_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_condPSCellAdditionNRDC_r17_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_scg_ActivationDeactivationNRDC_r17_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_scg_ActivationDeactivationResumeNRDC_r17_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_beamManagementType_CBM_r17_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_NR_simultaneousRxTx_IAB_MultipleParents_r17_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_NR_simultaneousRxTx_IAB_MultipleParents_r17_enum2value_2[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_simultaneousRxTx_IAB_MultipleParents_r17_specs_2 = {
	asn_MAP_NR_simultaneousRxTx_IAB_MultipleParents_r17_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_simultaneousRxTx_IAB_MultipleParents_r17_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_simultaneousRxTx_IAB_MultipleParents_r17_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_simultaneousRxTx_IAB_MultipleParents_r17_2 = {
	"simultaneousRxTx-IAB-MultipleParents-r17",
	"simultaneousRxTx-IAB-MultipleParents-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_simultaneousRxTx_IAB_MultipleParents_r17_tags_2,
	sizeof(asn_DEF_NR_simultaneousRxTx_IAB_MultipleParents_r17_tags_2)
		/sizeof(asn_DEF_NR_simultaneousRxTx_IAB_MultipleParents_r17_tags_2[0]) - 1, /* 1 */
	asn_DEF_NR_simultaneousRxTx_IAB_MultipleParents_r17_tags_2,	/* Same as above */
	sizeof(asn_DEF_NR_simultaneousRxTx_IAB_MultipleParents_r17_tags_2)
		/sizeof(asn_DEF_NR_simultaneousRxTx_IAB_MultipleParents_r17_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_simultaneousRxTx_IAB_MultipleParents_r17_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_simultaneousRxTx_IAB_MultipleParents_r17_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_condPSCellAdditionNRDC_r17_value2enum_4[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_NR_condPSCellAdditionNRDC_r17_enum2value_4[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_condPSCellAdditionNRDC_r17_specs_4 = {
	asn_MAP_NR_condPSCellAdditionNRDC_r17_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_condPSCellAdditionNRDC_r17_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_condPSCellAdditionNRDC_r17_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_condPSCellAdditionNRDC_r17_4 = {
	"condPSCellAdditionNRDC-r17",
	"condPSCellAdditionNRDC-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_condPSCellAdditionNRDC_r17_tags_4,
	sizeof(asn_DEF_NR_condPSCellAdditionNRDC_r17_tags_4)
		/sizeof(asn_DEF_NR_condPSCellAdditionNRDC_r17_tags_4[0]) - 1, /* 1 */
	asn_DEF_NR_condPSCellAdditionNRDC_r17_tags_4,	/* Same as above */
	sizeof(asn_DEF_NR_condPSCellAdditionNRDC_r17_tags_4)
		/sizeof(asn_DEF_NR_condPSCellAdditionNRDC_r17_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_condPSCellAdditionNRDC_r17_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_condPSCellAdditionNRDC_r17_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_scg_ActivationDeactivationNRDC_r17_value2enum_6[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_NR_scg_ActivationDeactivationNRDC_r17_enum2value_6[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_scg_ActivationDeactivationNRDC_r17_specs_6 = {
	asn_MAP_NR_scg_ActivationDeactivationNRDC_r17_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_scg_ActivationDeactivationNRDC_r17_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_scg_ActivationDeactivationNRDC_r17_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_scg_ActivationDeactivationNRDC_r17_6 = {
	"scg-ActivationDeactivationNRDC-r17",
	"scg-ActivationDeactivationNRDC-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_scg_ActivationDeactivationNRDC_r17_tags_6,
	sizeof(asn_DEF_NR_scg_ActivationDeactivationNRDC_r17_tags_6)
		/sizeof(asn_DEF_NR_scg_ActivationDeactivationNRDC_r17_tags_6[0]) - 1, /* 1 */
	asn_DEF_NR_scg_ActivationDeactivationNRDC_r17_tags_6,	/* Same as above */
	sizeof(asn_DEF_NR_scg_ActivationDeactivationNRDC_r17_tags_6)
		/sizeof(asn_DEF_NR_scg_ActivationDeactivationNRDC_r17_tags_6[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_scg_ActivationDeactivationNRDC_r17_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_scg_ActivationDeactivationNRDC_r17_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_scg_ActivationDeactivationResumeNRDC_r17_value2enum_8[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_NR_scg_ActivationDeactivationResumeNRDC_r17_enum2value_8[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_scg_ActivationDeactivationResumeNRDC_r17_specs_8 = {
	asn_MAP_NR_scg_ActivationDeactivationResumeNRDC_r17_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_scg_ActivationDeactivationResumeNRDC_r17_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_scg_ActivationDeactivationResumeNRDC_r17_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_scg_ActivationDeactivationResumeNRDC_r17_8 = {
	"scg-ActivationDeactivationResumeNRDC-r17",
	"scg-ActivationDeactivationResumeNRDC-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_scg_ActivationDeactivationResumeNRDC_r17_tags_8,
	sizeof(asn_DEF_NR_scg_ActivationDeactivationResumeNRDC_r17_tags_8)
		/sizeof(asn_DEF_NR_scg_ActivationDeactivationResumeNRDC_r17_tags_8[0]) - 1, /* 1 */
	asn_DEF_NR_scg_ActivationDeactivationResumeNRDC_r17_tags_8,	/* Same as above */
	sizeof(asn_DEF_NR_scg_ActivationDeactivationResumeNRDC_r17_tags_8)
		/sizeof(asn_DEF_NR_scg_ActivationDeactivationResumeNRDC_r17_tags_8[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_scg_ActivationDeactivationResumeNRDC_r17_constr_8,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_scg_ActivationDeactivationResumeNRDC_r17_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_beamManagementType_CBM_r17_value2enum_10[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_NR_beamManagementType_CBM_r17_enum2value_10[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_beamManagementType_CBM_r17_specs_10 = {
	asn_MAP_NR_beamManagementType_CBM_r17_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_beamManagementType_CBM_r17_enum2value_10,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_beamManagementType_CBM_r17_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_beamManagementType_CBM_r17_10 = {
	"beamManagementType-CBM-r17",
	"beamManagementType-CBM-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_beamManagementType_CBM_r17_tags_10,
	sizeof(asn_DEF_NR_beamManagementType_CBM_r17_tags_10)
		/sizeof(asn_DEF_NR_beamManagementType_CBM_r17_tags_10[0]) - 1, /* 1 */
	asn_DEF_NR_beamManagementType_CBM_r17_tags_10,	/* Same as above */
	sizeof(asn_DEF_NR_beamManagementType_CBM_r17_tags_10)
		/sizeof(asn_DEF_NR_beamManagementType_CBM_r17_tags_10[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_beamManagementType_CBM_r17_constr_10,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_beamManagementType_CBM_r17_specs_10	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_CA_ParametersNRDC_v1700_1[] = {
	{ ATF_POINTER, 5, offsetof(struct NR_CA_ParametersNRDC_v1700, simultaneousRxTx_IAB_MultipleParents_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_simultaneousRxTx_IAB_MultipleParents_r17_2,
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
		"simultaneousRxTx-IAB-MultipleParents-r17"
		},
	{ ATF_POINTER, 4, offsetof(struct NR_CA_ParametersNRDC_v1700, condPSCellAdditionNRDC_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_condPSCellAdditionNRDC_r17_4,
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
		"condPSCellAdditionNRDC-r17"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_CA_ParametersNRDC_v1700, scg_ActivationDeactivationNRDC_r17),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_scg_ActivationDeactivationNRDC_r17_6,
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
		"scg-ActivationDeactivationNRDC-r17"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_CA_ParametersNRDC_v1700, scg_ActivationDeactivationResumeNRDC_r17),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_scg_ActivationDeactivationResumeNRDC_r17_8,
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
		"scg-ActivationDeactivationResumeNRDC-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_CA_ParametersNRDC_v1700, beamManagementType_CBM_r17),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_beamManagementType_CBM_r17_10,
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
		"beamManagementType-CBM-r17"
		},
};
static const int asn_MAP_NR_CA_ParametersNRDC_v1700_oms_1[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_NR_CA_ParametersNRDC_v1700_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_CA_ParametersNRDC_v1700_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* simultaneousRxTx-IAB-MultipleParents-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* condPSCellAdditionNRDC-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* scg-ActivationDeactivationNRDC-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* scg-ActivationDeactivationResumeNRDC-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* beamManagementType-CBM-r17 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_CA_ParametersNRDC_v1700_specs_1 = {
	sizeof(struct NR_CA_ParametersNRDC_v1700),
	offsetof(struct NR_CA_ParametersNRDC_v1700, _asn_ctx),
	asn_MAP_NR_CA_ParametersNRDC_v1700_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_NR_CA_ParametersNRDC_v1700_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_CA_ParametersNRDC_v1700 = {
	"CA-ParametersNRDC-v1700",
	"CA-ParametersNRDC-v1700",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_CA_ParametersNRDC_v1700_tags_1,
	sizeof(asn_DEF_NR_CA_ParametersNRDC_v1700_tags_1)
		/sizeof(asn_DEF_NR_CA_ParametersNRDC_v1700_tags_1[0]), /* 1 */
	asn_DEF_NR_CA_ParametersNRDC_v1700_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_CA_ParametersNRDC_v1700_tags_1)
		/sizeof(asn_DEF_NR_CA_ParametersNRDC_v1700_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_CA_ParametersNRDC_v1700_1,
	5,	/* Elements count */
	&asn_SPC_NR_CA_ParametersNRDC_v1700_specs_1	/* Additional specs */
};

