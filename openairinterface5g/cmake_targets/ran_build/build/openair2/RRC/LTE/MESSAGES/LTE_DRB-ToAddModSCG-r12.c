/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_DRB-ToAddModSCG-r12.h"

static int
memb_LTE_eps_BearerIdentity_r12_constraint_5(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 15L)) {
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
memb_LTE_logicalChannelIdentitySCG_r15_constraint_15(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 32L && value <= 38L)) {
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
memb_LTE_logicalChannelIdentitySCG_r12_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 3L && value <= 10L)) {
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
static asn_per_constraints_t asn_PER_memb_LTE_eps_BearerIdentity_r12_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_drb_Type_r12_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LTE_logicalChannelIdentitySCG_r15_constr_16 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  32,  38 }	/* (32..38) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LTE_logicalChannelIdentitySCG_r12_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  3,  10 }	/* (3..10) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_LTE_scg_r12_5[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_DRB_ToAddModSCG_r12__drb_Type_r12__scg_r12, eps_BearerIdentity_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LTE_eps_BearerIdentity_r12_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LTE_eps_BearerIdentity_r12_constraint_5
		},
		0, 0, /* No default value */
		"eps-BearerIdentity-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_DRB_ToAddModSCG_r12__drb_Type_r12__scg_r12, pdcp_Config_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PDCP_Config,
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
		"pdcp-Config-r12"
		},
};
static const int asn_MAP_LTE_scg_r12_oms_5[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_scg_r12_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_scg_r12_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eps-BearerIdentity-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* pdcp-Config-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_scg_r12_specs_5 = {
	sizeof(struct LTE_DRB_ToAddModSCG_r12__drb_Type_r12__scg_r12),
	offsetof(struct LTE_DRB_ToAddModSCG_r12__drb_Type_r12__scg_r12, _asn_ctx),
	asn_MAP_LTE_scg_r12_tag2el_5,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_scg_r12_oms_5,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_scg_r12_5 = {
	"scg-r12",
	"scg-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_scg_r12_tags_5,
	sizeof(asn_DEF_LTE_scg_r12_tags_5)
		/sizeof(asn_DEF_LTE_scg_r12_tags_5[0]) - 1, /* 1 */
	asn_DEF_LTE_scg_r12_tags_5,	/* Same as above */
	sizeof(asn_DEF_LTE_scg_r12_tags_5)
		/sizeof(asn_DEF_LTE_scg_r12_tags_5[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_scg_r12_5,
	2,	/* Elements count */
	&asn_SPC_LTE_scg_r12_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_drb_Type_r12_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_DRB_ToAddModSCG_r12__drb_Type_r12, choice.split_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
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
		"split-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_DRB_ToAddModSCG_r12__drb_Type_r12, choice.scg_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_scg_r12_5,
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
		"scg-r12"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_drb_Type_r12_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* split-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* scg-r12 */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_drb_Type_r12_specs_3 = {
	sizeof(struct LTE_DRB_ToAddModSCG_r12__drb_Type_r12),
	offsetof(struct LTE_DRB_ToAddModSCG_r12__drb_Type_r12, _asn_ctx),
	offsetof(struct LTE_DRB_ToAddModSCG_r12__drb_Type_r12, present),
	sizeof(((struct LTE_DRB_ToAddModSCG_r12__drb_Type_r12 *)0)->present),
	asn_MAP_LTE_drb_Type_r12_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_drb_Type_r12_3 = {
	"drb-Type-r12",
	"drb-Type-r12",
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
		&asn_PER_type_LTE_drb_Type_r12_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_LTE_drb_Type_r12_3,
	2,	/* Elements count */
	&asn_SPC_LTE_drb_Type_r12_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext1_13[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_DRB_ToAddModSCG_r12__ext1, rlc_Config_v1430),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_RLC_Config_v1430,
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
		"rlc-Config-v1430"
		},
};
static const int asn_MAP_LTE_ext1_oms_13[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext1_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext1_tag2el_13[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* rlc-Config-v1430 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext1_specs_13 = {
	sizeof(struct LTE_DRB_ToAddModSCG_r12__ext1),
	offsetof(struct LTE_DRB_ToAddModSCG_r12__ext1, _asn_ctx),
	asn_MAP_LTE_ext1_tag2el_13,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext1_oms_13,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext1_13 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext1_tags_13,
	sizeof(asn_DEF_LTE_ext1_tags_13)
		/sizeof(asn_DEF_LTE_ext1_tags_13[0]) - 1, /* 1 */
	asn_DEF_LTE_ext1_tags_13,	/* Same as above */
	sizeof(asn_DEF_LTE_ext1_tags_13)
		/sizeof(asn_DEF_LTE_ext1_tags_13[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_ext1_13,
	1,	/* Elements count */
	&asn_SPC_LTE_ext1_specs_13	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext2_15[] = {
	{ ATF_POINTER, 3, offsetof(struct LTE_DRB_ToAddModSCG_r12__ext2, logicalChannelIdentitySCG_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LTE_logicalChannelIdentitySCG_r15_constr_16,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LTE_logicalChannelIdentitySCG_r15_constraint_15
		},
		0, 0, /* No default value */
		"logicalChannelIdentitySCG-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_DRB_ToAddModSCG_r12__ext2, rlc_Config_v1530),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_RLC_Config_v1530,
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
		"rlc-Config-v1530"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_DRB_ToAddModSCG_r12__ext2, rlc_BearerConfigSecondary_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_RLC_BearerConfig_r15,
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
		"rlc-BearerConfigSecondary-r15"
		},
};
static const int asn_MAP_LTE_ext2_oms_15[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_LTE_ext2_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext2_tag2el_15[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* logicalChannelIdentitySCG-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rlc-Config-v1530 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* rlc-BearerConfigSecondary-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext2_specs_15 = {
	sizeof(struct LTE_DRB_ToAddModSCG_r12__ext2),
	offsetof(struct LTE_DRB_ToAddModSCG_r12__ext2, _asn_ctx),
	asn_MAP_LTE_ext2_tag2el_15,
	3,	/* Count of tags in the map */
	asn_MAP_LTE_ext2_oms_15,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext2_15 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext2_tags_15,
	sizeof(asn_DEF_LTE_ext2_tags_15)
		/sizeof(asn_DEF_LTE_ext2_tags_15[0]) - 1, /* 1 */
	asn_DEF_LTE_ext2_tags_15,	/* Same as above */
	sizeof(asn_DEF_LTE_ext2_tags_15)
		/sizeof(asn_DEF_LTE_ext2_tags_15[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_ext2_15,
	3,	/* Elements count */
	&asn_SPC_LTE_ext2_specs_15	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext3_19[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_DRB_ToAddModSCG_r12__ext3, rlc_Config_v1560),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RLC_Config_v1510,
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
		"rlc-Config-v1560"
		},
};
static const int asn_MAP_LTE_ext3_oms_19[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext3_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext3_tag2el_19[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* rlc-Config-v1560 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext3_specs_19 = {
	sizeof(struct LTE_DRB_ToAddModSCG_r12__ext3),
	offsetof(struct LTE_DRB_ToAddModSCG_r12__ext3, _asn_ctx),
	asn_MAP_LTE_ext3_tag2el_19,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext3_oms_19,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext3_19 = {
	"ext3",
	"ext3",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext3_tags_19,
	sizeof(asn_DEF_LTE_ext3_tags_19)
		/sizeof(asn_DEF_LTE_ext3_tags_19[0]) - 1, /* 1 */
	asn_DEF_LTE_ext3_tags_19,	/* Same as above */
	sizeof(asn_DEF_LTE_ext3_tags_19)
		/sizeof(asn_DEF_LTE_ext3_tags_19[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_ext3_19,
	1,	/* Elements count */
	&asn_SPC_LTE_ext3_specs_19	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_DRB_ToAddModSCG_r12_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_DRB_ToAddModSCG_r12, drb_Identity_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_DRB_Identity,
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
		"drb-Identity-r12"
		},
	{ ATF_POINTER, 8, offsetof(struct LTE_DRB_ToAddModSCG_r12, drb_Type_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_drb_Type_r12_3,
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
		"drb-Type-r12"
		},
	{ ATF_POINTER, 7, offsetof(struct LTE_DRB_ToAddModSCG_r12, rlc_ConfigSCG_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_RLC_Config,
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
		"rlc-ConfigSCG-r12"
		},
	{ ATF_POINTER, 6, offsetof(struct LTE_DRB_ToAddModSCG_r12, rlc_Config_v1250),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RLC_Config_v1250,
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
		"rlc-Config-v1250"
		},
	{ ATF_POINTER, 5, offsetof(struct LTE_DRB_ToAddModSCG_r12, logicalChannelIdentitySCG_r12),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LTE_logicalChannelIdentitySCG_r12_constr_10,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LTE_logicalChannelIdentitySCG_r12_constraint_1
		},
		0, 0, /* No default value */
		"logicalChannelIdentitySCG-r12"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_DRB_ToAddModSCG_r12, logicalChannelConfigSCG_r12),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_LogicalChannelConfig,
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
		"logicalChannelConfigSCG-r12"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_DRB_ToAddModSCG_r12, ext1),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_LTE_ext1_13,
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
	{ ATF_POINTER, 2, offsetof(struct LTE_DRB_ToAddModSCG_r12, ext2),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		0,
		&asn_DEF_LTE_ext2_15,
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
	{ ATF_POINTER, 1, offsetof(struct LTE_DRB_ToAddModSCG_r12, ext3),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		0,
		&asn_DEF_LTE_ext3_19,
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
		"ext3"
		},
};
static const int asn_MAP_LTE_DRB_ToAddModSCG_r12_oms_1[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
static const ber_tlv_tag_t asn_DEF_LTE_DRB_ToAddModSCG_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_DRB_ToAddModSCG_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* drb-Identity-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* drb-Type-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rlc-ConfigSCG-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* rlc-Config-v1250 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* logicalChannelIdentitySCG-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* logicalChannelConfigSCG-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* ext2 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* ext3 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_DRB_ToAddModSCG_r12_specs_1 = {
	sizeof(struct LTE_DRB_ToAddModSCG_r12),
	offsetof(struct LTE_DRB_ToAddModSCG_r12, _asn_ctx),
	asn_MAP_LTE_DRB_ToAddModSCG_r12_tag2el_1,
	9,	/* Count of tags in the map */
	asn_MAP_LTE_DRB_ToAddModSCG_r12_oms_1,	/* Optional members */
	5, 3,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_DRB_ToAddModSCG_r12 = {
	"DRB-ToAddModSCG-r12",
	"DRB-ToAddModSCG-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_DRB_ToAddModSCG_r12_tags_1,
	sizeof(asn_DEF_LTE_DRB_ToAddModSCG_r12_tags_1)
		/sizeof(asn_DEF_LTE_DRB_ToAddModSCG_r12_tags_1[0]), /* 1 */
	asn_DEF_LTE_DRB_ToAddModSCG_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_DRB_ToAddModSCG_r12_tags_1)
		/sizeof(asn_DEF_LTE_DRB_ToAddModSCG_r12_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_DRB_ToAddModSCG_r12_1,
	9,	/* Elements count */
	&asn_SPC_LTE_DRB_ToAddModSCG_r12_specs_1	/* Additional specs */
};

