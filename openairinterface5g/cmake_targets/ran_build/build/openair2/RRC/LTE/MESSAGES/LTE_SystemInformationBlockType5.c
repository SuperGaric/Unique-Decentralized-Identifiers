/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_SystemInformationBlockType5.h"

static int
memb_LTE_scptm_FreqOffset_r14_constraint_18(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1L && value <= 8L)) {
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
memb_LTE_lateNonCriticalExtension_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		(void)st; /* Unused variable */
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LTE_scptm_FreqOffset_r14_constr_19 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LTE_lateNonCriticalExtension_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_LTE_ext1_5[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_SystemInformationBlockType5__ext1, interFreqCarrierFreqList_v1250),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_InterFreqCarrierFreqList_v1250,
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
		"interFreqCarrierFreqList-v1250"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SystemInformationBlockType5__ext1, interFreqCarrierFreqListExt_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_InterFreqCarrierFreqListExt_r12,
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
		"interFreqCarrierFreqListExt-r12"
		},
};
static const int asn_MAP_LTE_ext1_oms_5[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_ext1_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext1_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* interFreqCarrierFreqList-v1250 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* interFreqCarrierFreqListExt-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext1_specs_5 = {
	sizeof(struct LTE_SystemInformationBlockType5__ext1),
	offsetof(struct LTE_SystemInformationBlockType5__ext1, _asn_ctx),
	asn_MAP_LTE_ext1_tag2el_5,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_ext1_oms_5,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext1_5 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext1_tags_5,
	sizeof(asn_DEF_LTE_ext1_tags_5)
		/sizeof(asn_DEF_LTE_ext1_tags_5[0]) - 1, /* 1 */
	asn_DEF_LTE_ext1_tags_5,	/* Same as above */
	sizeof(asn_DEF_LTE_ext1_tags_5)
		/sizeof(asn_DEF_LTE_ext1_tags_5[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_ext1_5,
	2,	/* Elements count */
	&asn_SPC_LTE_ext1_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext2_8[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_SystemInformationBlockType5__ext2, interFreqCarrierFreqListExt_v1280),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_InterFreqCarrierFreqListExt_v1280,
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
		"interFreqCarrierFreqListExt-v1280"
		},
};
static const int asn_MAP_LTE_ext2_oms_8[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext2_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext2_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* interFreqCarrierFreqListExt-v1280 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext2_specs_8 = {
	sizeof(struct LTE_SystemInformationBlockType5__ext2),
	offsetof(struct LTE_SystemInformationBlockType5__ext2, _asn_ctx),
	asn_MAP_LTE_ext2_tag2el_8,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext2_oms_8,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext2_8 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext2_tags_8,
	sizeof(asn_DEF_LTE_ext2_tags_8)
		/sizeof(asn_DEF_LTE_ext2_tags_8[0]) - 1, /* 1 */
	asn_DEF_LTE_ext2_tags_8,	/* Same as above */
	sizeof(asn_DEF_LTE_ext2_tags_8)
		/sizeof(asn_DEF_LTE_ext2_tags_8[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_ext2_8,
	1,	/* Elements count */
	&asn_SPC_LTE_ext2_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext3_10[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_SystemInformationBlockType5__ext3, interFreqCarrierFreqList_v1310),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_InterFreqCarrierFreqList_v1310,
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
		"interFreqCarrierFreqList-v1310"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SystemInformationBlockType5__ext3, interFreqCarrierFreqListExt_v1310),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_InterFreqCarrierFreqListExt_v1310,
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
		"interFreqCarrierFreqListExt-v1310"
		},
};
static const int asn_MAP_LTE_ext3_oms_10[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_ext3_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext3_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* interFreqCarrierFreqList-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* interFreqCarrierFreqListExt-v1310 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext3_specs_10 = {
	sizeof(struct LTE_SystemInformationBlockType5__ext3),
	offsetof(struct LTE_SystemInformationBlockType5__ext3, _asn_ctx),
	asn_MAP_LTE_ext3_tag2el_10,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_ext3_oms_10,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext3_10 = {
	"ext3",
	"ext3",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext3_tags_10,
	sizeof(asn_DEF_LTE_ext3_tags_10)
		/sizeof(asn_DEF_LTE_ext3_tags_10[0]) - 1, /* 1 */
	asn_DEF_LTE_ext3_tags_10,	/* Same as above */
	sizeof(asn_DEF_LTE_ext3_tags_10)
		/sizeof(asn_DEF_LTE_ext3_tags_10[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_ext3_10,
	2,	/* Elements count */
	&asn_SPC_LTE_ext3_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext4_13[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_SystemInformationBlockType5__ext4, interFreqCarrierFreqList_v1350),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_InterFreqCarrierFreqList_v1350,
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
		"interFreqCarrierFreqList-v1350"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SystemInformationBlockType5__ext4, interFreqCarrierFreqListExt_v1350),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_InterFreqCarrierFreqListExt_v1350,
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
		"interFreqCarrierFreqListExt-v1350"
		},
};
static const int asn_MAP_LTE_ext4_oms_13[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_ext4_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext4_tag2el_13[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* interFreqCarrierFreqList-v1350 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* interFreqCarrierFreqListExt-v1350 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext4_specs_13 = {
	sizeof(struct LTE_SystemInformationBlockType5__ext4),
	offsetof(struct LTE_SystemInformationBlockType5__ext4, _asn_ctx),
	asn_MAP_LTE_ext4_tag2el_13,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_ext4_oms_13,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext4_13 = {
	"ext4",
	"ext4",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext4_tags_13,
	sizeof(asn_DEF_LTE_ext4_tags_13)
		/sizeof(asn_DEF_LTE_ext4_tags_13[0]) - 1, /* 1 */
	asn_DEF_LTE_ext4_tags_13,	/* Same as above */
	sizeof(asn_DEF_LTE_ext4_tags_13)
		/sizeof(asn_DEF_LTE_ext4_tags_13[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_ext4_13,
	2,	/* Elements count */
	&asn_SPC_LTE_ext4_specs_13	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext5_16[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_SystemInformationBlockType5__ext5, interFreqCarrierFreqListExt_v1360),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_InterFreqCarrierFreqListExt_v1360,
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
		"interFreqCarrierFreqListExt-v1360"
		},
};
static const int asn_MAP_LTE_ext5_oms_16[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext5_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext5_tag2el_16[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* interFreqCarrierFreqListExt-v1360 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext5_specs_16 = {
	sizeof(struct LTE_SystemInformationBlockType5__ext5),
	offsetof(struct LTE_SystemInformationBlockType5__ext5, _asn_ctx),
	asn_MAP_LTE_ext5_tag2el_16,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext5_oms_16,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext5_16 = {
	"ext5",
	"ext5",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext5_tags_16,
	sizeof(asn_DEF_LTE_ext5_tags_16)
		/sizeof(asn_DEF_LTE_ext5_tags_16[0]) - 1, /* 1 */
	asn_DEF_LTE_ext5_tags_16,	/* Same as above */
	sizeof(asn_DEF_LTE_ext5_tags_16)
		/sizeof(asn_DEF_LTE_ext5_tags_16[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_ext5_16,
	1,	/* Elements count */
	&asn_SPC_LTE_ext5_specs_16	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext6_18[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_SystemInformationBlockType5__ext6, scptm_FreqOffset_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LTE_scptm_FreqOffset_r14_constr_19,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LTE_scptm_FreqOffset_r14_constraint_18
		},
		0, 0, /* No default value */
		"scptm-FreqOffset-r14"
		},
};
static const int asn_MAP_LTE_ext6_oms_18[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext6_tags_18[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext6_tag2el_18[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* scptm-FreqOffset-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext6_specs_18 = {
	sizeof(struct LTE_SystemInformationBlockType5__ext6),
	offsetof(struct LTE_SystemInformationBlockType5__ext6, _asn_ctx),
	asn_MAP_LTE_ext6_tag2el_18,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext6_oms_18,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext6_18 = {
	"ext6",
	"ext6",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext6_tags_18,
	sizeof(asn_DEF_LTE_ext6_tags_18)
		/sizeof(asn_DEF_LTE_ext6_tags_18[0]) - 1, /* 1 */
	asn_DEF_LTE_ext6_tags_18,	/* Same as above */
	sizeof(asn_DEF_LTE_ext6_tags_18)
		/sizeof(asn_DEF_LTE_ext6_tags_18[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_ext6_18,
	1,	/* Elements count */
	&asn_SPC_LTE_ext6_specs_18	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext7_20[] = {
	{ ATF_POINTER, 3, offsetof(struct LTE_SystemInformationBlockType5__ext7, interFreqCarrierFreqList_v1530),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_InterFreqCarrierFreqList_v1530,
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
		"interFreqCarrierFreqList-v1530"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_SystemInformationBlockType5__ext7, interFreqCarrierFreqListExt_v1530),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_InterFreqCarrierFreqListExt_v1530,
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
		"interFreqCarrierFreqListExt-v1530"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SystemInformationBlockType5__ext7, measIdleConfigSIB_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MeasIdleConfigSIB_r15,
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
		"measIdleConfigSIB-r15"
		},
};
static const int asn_MAP_LTE_ext7_oms_20[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_LTE_ext7_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext7_tag2el_20[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* interFreqCarrierFreqList-v1530 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* interFreqCarrierFreqListExt-v1530 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* measIdleConfigSIB-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext7_specs_20 = {
	sizeof(struct LTE_SystemInformationBlockType5__ext7),
	offsetof(struct LTE_SystemInformationBlockType5__ext7, _asn_ctx),
	asn_MAP_LTE_ext7_tag2el_20,
	3,	/* Count of tags in the map */
	asn_MAP_LTE_ext7_oms_20,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext7_20 = {
	"ext7",
	"ext7",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext7_tags_20,
	sizeof(asn_DEF_LTE_ext7_tags_20)
		/sizeof(asn_DEF_LTE_ext7_tags_20[0]) - 1, /* 1 */
	asn_DEF_LTE_ext7_tags_20,	/* Same as above */
	sizeof(asn_DEF_LTE_ext7_tags_20)
		/sizeof(asn_DEF_LTE_ext7_tags_20[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_ext7_20,
	3,	/* Elements count */
	&asn_SPC_LTE_ext7_specs_20	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext8_24[] = {
	{ ATF_POINTER, 3, offsetof(struct LTE_SystemInformationBlockType5__ext8, interFreqCarrierFreqList_v1610),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_InterFreqCarrierFreqList_v1610,
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
		"interFreqCarrierFreqList-v1610"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_SystemInformationBlockType5__ext8, interFreqCarrierFreqListExt_v1610),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_InterFreqCarrierFreqListExt_v1610,
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
		"interFreqCarrierFreqListExt-v1610"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SystemInformationBlockType5__ext8, measIdleConfigSIB_NR_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MeasIdleConfigSIB_NR_r16,
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
		"measIdleConfigSIB-NR-r16"
		},
};
static const int asn_MAP_LTE_ext8_oms_24[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_LTE_ext8_tags_24[] = {
	(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext8_tag2el_24[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* interFreqCarrierFreqList-v1610 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* interFreqCarrierFreqListExt-v1610 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* measIdleConfigSIB-NR-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext8_specs_24 = {
	sizeof(struct LTE_SystemInformationBlockType5__ext8),
	offsetof(struct LTE_SystemInformationBlockType5__ext8, _asn_ctx),
	asn_MAP_LTE_ext8_tag2el_24,
	3,	/* Count of tags in the map */
	asn_MAP_LTE_ext8_oms_24,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext8_24 = {
	"ext8",
	"ext8",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext8_tags_24,
	sizeof(asn_DEF_LTE_ext8_tags_24)
		/sizeof(asn_DEF_LTE_ext8_tags_24[0]) - 1, /* 1 */
	asn_DEF_LTE_ext8_tags_24,	/* Same as above */
	sizeof(asn_DEF_LTE_ext8_tags_24)
		/sizeof(asn_DEF_LTE_ext8_tags_24[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_ext8_24,
	3,	/* Elements count */
	&asn_SPC_LTE_ext8_specs_24	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_SystemInformationBlockType5_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SystemInformationBlockType5, interFreqCarrierFreqList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_InterFreqCarrierFreqList,
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
		"interFreqCarrierFreqList"
		},
	{ ATF_POINTER, 9, offsetof(struct LTE_SystemInformationBlockType5, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LTE_lateNonCriticalExtension_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LTE_lateNonCriticalExtension_constraint_1
		},
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 8, offsetof(struct LTE_SystemInformationBlockType5, ext1),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_LTE_ext1_5,
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
	{ ATF_POINTER, 7, offsetof(struct LTE_SystemInformationBlockType5, ext2),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_LTE_ext2_8,
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
	{ ATF_POINTER, 6, offsetof(struct LTE_SystemInformationBlockType5, ext3),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_LTE_ext3_10,
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
	{ ATF_POINTER, 5, offsetof(struct LTE_SystemInformationBlockType5, ext4),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_LTE_ext4_13,
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
		"ext4"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_SystemInformationBlockType5, ext5),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_LTE_ext5_16,
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
		"ext5"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_SystemInformationBlockType5, ext6),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		0,
		&asn_DEF_LTE_ext6_18,
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
		"ext6"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_SystemInformationBlockType5, ext7),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		0,
		&asn_DEF_LTE_ext7_20,
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
		"ext7"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SystemInformationBlockType5, ext8),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		0,
		&asn_DEF_LTE_ext8_24,
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
		"ext8"
		},
};
static const int asn_MAP_LTE_SystemInformationBlockType5_oms_1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
static const ber_tlv_tag_t asn_DEF_LTE_SystemInformationBlockType5_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SystemInformationBlockType5_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* interFreqCarrierFreqList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ext2 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* ext3 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* ext4 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* ext5 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* ext6 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* ext7 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 } /* ext8 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_SystemInformationBlockType5_specs_1 = {
	sizeof(struct LTE_SystemInformationBlockType5),
	offsetof(struct LTE_SystemInformationBlockType5, _asn_ctx),
	asn_MAP_LTE_SystemInformationBlockType5_tag2el_1,
	10,	/* Count of tags in the map */
	asn_MAP_LTE_SystemInformationBlockType5_oms_1,	/* Optional members */
	0, 9,	/* Root/Additions */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SystemInformationBlockType5 = {
	"SystemInformationBlockType5",
	"SystemInformationBlockType5",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_SystemInformationBlockType5_tags_1,
	sizeof(asn_DEF_LTE_SystemInformationBlockType5_tags_1)
		/sizeof(asn_DEF_LTE_SystemInformationBlockType5_tags_1[0]), /* 1 */
	asn_DEF_LTE_SystemInformationBlockType5_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SystemInformationBlockType5_tags_1)
		/sizeof(asn_DEF_LTE_SystemInformationBlockType5_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_SystemInformationBlockType5_1,
	10,	/* Elements count */
	&asn_SPC_LTE_SystemInformationBlockType5_specs_1	/* Additional specs */
};
