/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_SRS-SpatialRelationInfoPos-r16.h"

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_resourceSelection_r16_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_referenceSignal_r16_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_NR_SRS_SpatialRelationInfoPos_r16_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_NR_resourceSelection_r16_8[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SRS_SpatialRelationInfoPos_r16__servingRS_r16__referenceSignal_r16__srs_SpatialRelation_r16__resourceSelection_r16, choice.srs_ResourceId_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SRS_ResourceId,
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
		"srs-ResourceId-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SRS_SpatialRelationInfoPos_r16__servingRS_r16__referenceSignal_r16__srs_SpatialRelation_r16__resourceSelection_r16, choice.srs_PosResourceId_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SRS_PosResourceId_r16,
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
		"srs-PosResourceId-r16"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NR_resourceSelection_r16_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* srs-ResourceId-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* srs-PosResourceId-r16 */
};
static asn_CHOICE_specifics_t asn_SPC_NR_resourceSelection_r16_specs_8 = {
	sizeof(struct NR_SRS_SpatialRelationInfoPos_r16__servingRS_r16__referenceSignal_r16__srs_SpatialRelation_r16__resourceSelection_r16),
	offsetof(struct NR_SRS_SpatialRelationInfoPos_r16__servingRS_r16__referenceSignal_r16__srs_SpatialRelation_r16__resourceSelection_r16, _asn_ctx),
	offsetof(struct NR_SRS_SpatialRelationInfoPos_r16__servingRS_r16__referenceSignal_r16__srs_SpatialRelation_r16__resourceSelection_r16, present),
	sizeof(((struct NR_SRS_SpatialRelationInfoPos_r16__servingRS_r16__referenceSignal_r16__srs_SpatialRelation_r16__resourceSelection_r16 *)0)->present),
	asn_MAP_NR_resourceSelection_r16_tag2el_8,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_resourceSelection_r16_8 = {
	"resourceSelection-r16",
	"resourceSelection-r16",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_resourceSelection_r16_constr_8,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_NR_resourceSelection_r16_8,
	2,	/* Elements count */
	&asn_SPC_NR_resourceSelection_r16_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_srs_SpatialRelation_r16_7[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SRS_SpatialRelationInfoPos_r16__servingRS_r16__referenceSignal_r16__srs_SpatialRelation_r16, resourceSelection_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_resourceSelection_r16_8,
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
		"resourceSelection-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SRS_SpatialRelationInfoPos_r16__servingRS_r16__referenceSignal_r16__srs_SpatialRelation_r16, uplinkBWP_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_BWP_Id,
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
		"uplinkBWP-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_srs_SpatialRelation_r16_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_srs_SpatialRelation_r16_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* resourceSelection-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* uplinkBWP-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_srs_SpatialRelation_r16_specs_7 = {
	sizeof(struct NR_SRS_SpatialRelationInfoPos_r16__servingRS_r16__referenceSignal_r16__srs_SpatialRelation_r16),
	offsetof(struct NR_SRS_SpatialRelationInfoPos_r16__servingRS_r16__referenceSignal_r16__srs_SpatialRelation_r16, _asn_ctx),
	asn_MAP_NR_srs_SpatialRelation_r16_tag2el_7,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_srs_SpatialRelation_r16_7 = {
	"srs-SpatialRelation-r16",
	"srs-SpatialRelation-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_srs_SpatialRelation_r16_tags_7,
	sizeof(asn_DEF_NR_srs_SpatialRelation_r16_tags_7)
		/sizeof(asn_DEF_NR_srs_SpatialRelation_r16_tags_7[0]) - 1, /* 1 */
	asn_DEF_NR_srs_SpatialRelation_r16_tags_7,	/* Same as above */
	sizeof(asn_DEF_NR_srs_SpatialRelation_r16_tags_7)
		/sizeof(asn_DEF_NR_srs_SpatialRelation_r16_tags_7[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_srs_SpatialRelation_r16_7,
	2,	/* Elements count */
	&asn_SPC_NR_srs_SpatialRelation_r16_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_referenceSignal_r16_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SRS_SpatialRelationInfoPos_r16__servingRS_r16__referenceSignal_r16, choice.ssb_IndexServing_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SSB_Index,
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
		"ssb-IndexServing-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SRS_SpatialRelationInfoPos_r16__servingRS_r16__referenceSignal_r16, choice.csi_RS_IndexServing_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_NZP_CSI_RS_ResourceId,
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
		"csi-RS-IndexServing-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_SRS_SpatialRelationInfoPos_r16__servingRS_r16__referenceSignal_r16, choice.srs_SpatialRelation_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_NR_srs_SpatialRelation_r16_7,
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
		"srs-SpatialRelation-r16"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NR_referenceSignal_r16_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ssb-IndexServing-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* csi-RS-IndexServing-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* srs-SpatialRelation-r16 */
};
static asn_CHOICE_specifics_t asn_SPC_NR_referenceSignal_r16_specs_4 = {
	sizeof(struct NR_SRS_SpatialRelationInfoPos_r16__servingRS_r16__referenceSignal_r16),
	offsetof(struct NR_SRS_SpatialRelationInfoPos_r16__servingRS_r16__referenceSignal_r16, _asn_ctx),
	offsetof(struct NR_SRS_SpatialRelationInfoPos_r16__servingRS_r16__referenceSignal_r16, present),
	sizeof(((struct NR_SRS_SpatialRelationInfoPos_r16__servingRS_r16__referenceSignal_r16 *)0)->present),
	asn_MAP_NR_referenceSignal_r16_tag2el_4,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_referenceSignal_r16_4 = {
	"referenceSignal-r16",
	"referenceSignal-r16",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_referenceSignal_r16_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_NR_referenceSignal_r16_4,
	3,	/* Elements count */
	&asn_SPC_NR_referenceSignal_r16_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_servingRS_r16_2[] = {
	{ ATF_POINTER, 1, offsetof(struct NR_SRS_SpatialRelationInfoPos_r16__servingRS_r16, servingCellId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_ServCellIndex,
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
		"servingCellId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SRS_SpatialRelationInfoPos_r16__servingRS_r16, referenceSignal_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_referenceSignal_r16_4,
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
		"referenceSignal-r16"
		},
};
static const int asn_MAP_NR_servingRS_r16_oms_2[] = { 0 };
static const ber_tlv_tag_t asn_DEF_NR_servingRS_r16_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_servingRS_r16_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* servingCellId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* referenceSignal-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_servingRS_r16_specs_2 = {
	sizeof(struct NR_SRS_SpatialRelationInfoPos_r16__servingRS_r16),
	offsetof(struct NR_SRS_SpatialRelationInfoPos_r16__servingRS_r16, _asn_ctx),
	asn_MAP_NR_servingRS_r16_tag2el_2,
	2,	/* Count of tags in the map */
	asn_MAP_NR_servingRS_r16_oms_2,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_servingRS_r16_2 = {
	"servingRS-r16",
	"servingRS-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_servingRS_r16_tags_2,
	sizeof(asn_DEF_NR_servingRS_r16_tags_2)
		/sizeof(asn_DEF_NR_servingRS_r16_tags_2[0]) - 1, /* 1 */
	asn_DEF_NR_servingRS_r16_tags_2,	/* Same as above */
	sizeof(asn_DEF_NR_servingRS_r16_tags_2)
		/sizeof(asn_DEF_NR_servingRS_r16_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_servingRS_r16_2,
	2,	/* Elements count */
	&asn_SPC_NR_servingRS_r16_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_SRS_SpatialRelationInfoPos_r16_1[] = {
	{ ATF_POINTER, 0, offsetof(struct NR_SRS_SpatialRelationInfoPos_r16, choice.servingRS_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_NR_servingRS_r16_2,
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
		"servingRS-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_SRS_SpatialRelationInfoPos_r16, choice.ssb_Ncell_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SSB_InfoNcell_r16,
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
		"ssb-Ncell-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_SRS_SpatialRelationInfoPos_r16, choice.dl_PRS_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_DL_PRS_Info_r16,
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
		"dl-PRS-r16"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NR_SRS_SpatialRelationInfoPos_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* servingRS-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ssb-Ncell-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* dl-PRS-r16 */
};
asn_CHOICE_specifics_t asn_SPC_NR_SRS_SpatialRelationInfoPos_r16_specs_1 = {
	sizeof(struct NR_SRS_SpatialRelationInfoPos_r16),
	offsetof(struct NR_SRS_SpatialRelationInfoPos_r16, _asn_ctx),
	offsetof(struct NR_SRS_SpatialRelationInfoPos_r16, present),
	sizeof(((struct NR_SRS_SpatialRelationInfoPos_r16 *)0)->present),
	asn_MAP_NR_SRS_SpatialRelationInfoPos_r16_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_NR_SRS_SpatialRelationInfoPos_r16 = {
	"SRS-SpatialRelationInfoPos-r16",
	"SRS-SpatialRelationInfoPos-r16",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_SRS_SpatialRelationInfoPos_r16_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_NR_SRS_SpatialRelationInfoPos_r16_1,
	3,	/* Elements count */
	&asn_SPC_NR_SRS_SpatialRelationInfoPos_r16_specs_1	/* Additional specs */
};

