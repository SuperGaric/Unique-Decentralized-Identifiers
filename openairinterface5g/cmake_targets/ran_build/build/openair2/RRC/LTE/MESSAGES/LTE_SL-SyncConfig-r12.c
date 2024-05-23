/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_SL-SyncConfig-r12.h"

static int
memb_LTE_syncInfoReserved_r12_constraint_5(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 19UL)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

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
static asn_per_constraints_t asn_PER_memb_LTE_syncInfoReserved_r12_constr_8 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  19,  19 }	/* (SIZE(19..19)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_discSyncWindow_r12_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_syncTxPeriodic_r13_constr_16 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_gnss_Sync_r14_constr_20 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_slss_TxDisabled_r15_constr_26 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_LTE_txParameters_r12_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_SyncConfig_r12__txParameters_r12, syncTxParameters_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_TxParameters_r12,
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
		"syncTxParameters-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_SyncConfig_r12__txParameters_r12, syncTxThreshIC_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RSRP_RangeSL_r12,
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
		"syncTxThreshIC-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SL_SyncConfig_r12__txParameters_r12, syncInfoReserved_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LTE_syncInfoReserved_r12_constr_8,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LTE_syncInfoReserved_r12_constraint_5
		},
		0, 0, /* No default value */
		"syncInfoReserved-r12"
		},
};
static const int asn_MAP_LTE_txParameters_r12_oms_5[] = { 2 };
static const ber_tlv_tag_t asn_DEF_LTE_txParameters_r12_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_txParameters_r12_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* syncTxParameters-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* syncTxThreshIC-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* syncInfoReserved-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_txParameters_r12_specs_5 = {
	sizeof(struct LTE_SL_SyncConfig_r12__txParameters_r12),
	offsetof(struct LTE_SL_SyncConfig_r12__txParameters_r12, _asn_ctx),
	asn_MAP_LTE_txParameters_r12_tag2el_5,
	3,	/* Count of tags in the map */
	asn_MAP_LTE_txParameters_r12_oms_5,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_txParameters_r12_5 = {
	"txParameters-r12",
	"txParameters-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_txParameters_r12_tags_5,
	sizeof(asn_DEF_LTE_txParameters_r12_tags_5)
		/sizeof(asn_DEF_LTE_txParameters_r12_tags_5[0]) - 1, /* 1 */
	asn_DEF_LTE_txParameters_r12_tags_5,	/* Same as above */
	sizeof(asn_DEF_LTE_txParameters_r12_tags_5)
		/sizeof(asn_DEF_LTE_txParameters_r12_tags_5[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_txParameters_r12_5,
	3,	/* Elements count */
	&asn_SPC_LTE_txParameters_r12_specs_5	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_discSyncWindow_r12_value2enum_11[] = {
	{ 0,	2,	"w1" },
	{ 1,	2,	"w2" }
};
static const unsigned int asn_MAP_LTE_discSyncWindow_r12_enum2value_11[] = {
	0,	/* w1(0) */
	1	/* w2(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_discSyncWindow_r12_specs_11 = {
	asn_MAP_LTE_discSyncWindow_r12_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_discSyncWindow_r12_enum2value_11,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_discSyncWindow_r12_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_discSyncWindow_r12_11 = {
	"discSyncWindow-r12",
	"discSyncWindow-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_discSyncWindow_r12_tags_11,
	sizeof(asn_DEF_LTE_discSyncWindow_r12_tags_11)
		/sizeof(asn_DEF_LTE_discSyncWindow_r12_tags_11[0]) - 1, /* 1 */
	asn_DEF_LTE_discSyncWindow_r12_tags_11,	/* Same as above */
	sizeof(asn_DEF_LTE_discSyncWindow_r12_tags_11)
		/sizeof(asn_DEF_LTE_discSyncWindow_r12_tags_11[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_discSyncWindow_r12_constr_11,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_discSyncWindow_r12_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_rxParamsNCell_r12_9[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_SyncConfig_r12__rxParamsNCell_r12, physCellId_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PhysCellId,
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
		"physCellId-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_SyncConfig_r12__rxParamsNCell_r12, discSyncWindow_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_discSyncWindow_r12_11,
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
		"discSyncWindow-r12"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_rxParamsNCell_r12_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_rxParamsNCell_r12_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* physCellId-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* discSyncWindow-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_rxParamsNCell_r12_specs_9 = {
	sizeof(struct LTE_SL_SyncConfig_r12__rxParamsNCell_r12),
	offsetof(struct LTE_SL_SyncConfig_r12__rxParamsNCell_r12, _asn_ctx),
	asn_MAP_LTE_rxParamsNCell_r12_tag2el_9,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_rxParamsNCell_r12_9 = {
	"rxParamsNCell-r12",
	"rxParamsNCell-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_rxParamsNCell_r12_tags_9,
	sizeof(asn_DEF_LTE_rxParamsNCell_r12_tags_9)
		/sizeof(asn_DEF_LTE_rxParamsNCell_r12_tags_9[0]) - 1, /* 1 */
	asn_DEF_LTE_rxParamsNCell_r12_tags_9,	/* Same as above */
	sizeof(asn_DEF_LTE_rxParamsNCell_r12_tags_9)
		/sizeof(asn_DEF_LTE_rxParamsNCell_r12_tags_9[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_rxParamsNCell_r12_9,
	2,	/* Elements count */
	&asn_SPC_LTE_rxParamsNCell_r12_specs_9	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_syncTxPeriodic_r13_value2enum_16[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_syncTxPeriodic_r13_enum2value_16[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_syncTxPeriodic_r13_specs_16 = {
	asn_MAP_LTE_syncTxPeriodic_r13_value2enum_16,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_syncTxPeriodic_r13_enum2value_16,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_syncTxPeriodic_r13_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_syncTxPeriodic_r13_16 = {
	"syncTxPeriodic-r13",
	"syncTxPeriodic-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_syncTxPeriodic_r13_tags_16,
	sizeof(asn_DEF_LTE_syncTxPeriodic_r13_tags_16)
		/sizeof(asn_DEF_LTE_syncTxPeriodic_r13_tags_16[0]) - 1, /* 1 */
	asn_DEF_LTE_syncTxPeriodic_r13_tags_16,	/* Same as above */
	sizeof(asn_DEF_LTE_syncTxPeriodic_r13_tags_16)
		/sizeof(asn_DEF_LTE_syncTxPeriodic_r13_tags_16[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_syncTxPeriodic_r13_constr_16,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_syncTxPeriodic_r13_specs_16	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext1_15[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_SL_SyncConfig_r12__ext1, syncTxPeriodic_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_syncTxPeriodic_r13_16,
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
		"syncTxPeriodic-r13"
		},
};
static const int asn_MAP_LTE_ext1_oms_15[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext1_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext1_tag2el_15[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* syncTxPeriodic-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext1_specs_15 = {
	sizeof(struct LTE_SL_SyncConfig_r12__ext1),
	offsetof(struct LTE_SL_SyncConfig_r12__ext1, _asn_ctx),
	asn_MAP_LTE_ext1_tag2el_15,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext1_oms_15,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext1_15 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext1_tags_15,
	sizeof(asn_DEF_LTE_ext1_tags_15)
		/sizeof(asn_DEF_LTE_ext1_tags_15[0]) - 1, /* 1 */
	asn_DEF_LTE_ext1_tags_15,	/* Same as above */
	sizeof(asn_DEF_LTE_ext1_tags_15)
		/sizeof(asn_DEF_LTE_ext1_tags_15[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_ext1_15,
	1,	/* Elements count */
	&asn_SPC_LTE_ext1_specs_15	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_gnss_Sync_r14_value2enum_20[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_gnss_Sync_r14_enum2value_20[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_gnss_Sync_r14_specs_20 = {
	asn_MAP_LTE_gnss_Sync_r14_value2enum_20,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_gnss_Sync_r14_enum2value_20,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_gnss_Sync_r14_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_gnss_Sync_r14_20 = {
	"gnss-Sync-r14",
	"gnss-Sync-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_gnss_Sync_r14_tags_20,
	sizeof(asn_DEF_LTE_gnss_Sync_r14_tags_20)
		/sizeof(asn_DEF_LTE_gnss_Sync_r14_tags_20[0]) - 1, /* 1 */
	asn_DEF_LTE_gnss_Sync_r14_tags_20,	/* Same as above */
	sizeof(asn_DEF_LTE_gnss_Sync_r14_tags_20)
		/sizeof(asn_DEF_LTE_gnss_Sync_r14_tags_20[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_gnss_Sync_r14_constr_20,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_gnss_Sync_r14_specs_20	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext2_18[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_SL_SyncConfig_r12__ext2, syncOffsetIndicator_v1430),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_OffsetIndicatorSync_v1430,
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
		"syncOffsetIndicator-v1430"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SL_SyncConfig_r12__ext2, gnss_Sync_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_gnss_Sync_r14_20,
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
		"gnss-Sync-r14"
		},
};
static const int asn_MAP_LTE_ext2_oms_18[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_ext2_tags_18[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext2_tag2el_18[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* syncOffsetIndicator-v1430 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* gnss-Sync-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext2_specs_18 = {
	sizeof(struct LTE_SL_SyncConfig_r12__ext2),
	offsetof(struct LTE_SL_SyncConfig_r12__ext2, _asn_ctx),
	asn_MAP_LTE_ext2_tag2el_18,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_ext2_oms_18,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext2_18 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext2_tags_18,
	sizeof(asn_DEF_LTE_ext2_tags_18)
		/sizeof(asn_DEF_LTE_ext2_tags_18[0]) - 1, /* 1 */
	asn_DEF_LTE_ext2_tags_18,	/* Same as above */
	sizeof(asn_DEF_LTE_ext2_tags_18)
		/sizeof(asn_DEF_LTE_ext2_tags_18[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_ext2_18,
	2,	/* Elements count */
	&asn_SPC_LTE_ext2_specs_18	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext3_22[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_SL_SyncConfig_r12__ext3, syncOffsetIndicator2_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_OffsetIndicatorSync_r14,
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
		"syncOffsetIndicator2-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SL_SyncConfig_r12__ext3, syncOffsetIndicator3_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_OffsetIndicatorSync_r14,
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
		"syncOffsetIndicator3-r14"
		},
};
static const int asn_MAP_LTE_ext3_oms_22[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_ext3_tags_22[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext3_tag2el_22[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* syncOffsetIndicator2-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* syncOffsetIndicator3-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext3_specs_22 = {
	sizeof(struct LTE_SL_SyncConfig_r12__ext3),
	offsetof(struct LTE_SL_SyncConfig_r12__ext3, _asn_ctx),
	asn_MAP_LTE_ext3_tag2el_22,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_ext3_oms_22,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext3_22 = {
	"ext3",
	"ext3",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext3_tags_22,
	sizeof(asn_DEF_LTE_ext3_tags_22)
		/sizeof(asn_DEF_LTE_ext3_tags_22[0]) - 1, /* 1 */
	asn_DEF_LTE_ext3_tags_22,	/* Same as above */
	sizeof(asn_DEF_LTE_ext3_tags_22)
		/sizeof(asn_DEF_LTE_ext3_tags_22[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_ext3_22,
	2,	/* Elements count */
	&asn_SPC_LTE_ext3_specs_22	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_slss_TxDisabled_r15_value2enum_26[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_slss_TxDisabled_r15_enum2value_26[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_slss_TxDisabled_r15_specs_26 = {
	asn_MAP_LTE_slss_TxDisabled_r15_value2enum_26,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_slss_TxDisabled_r15_enum2value_26,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_slss_TxDisabled_r15_tags_26[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_slss_TxDisabled_r15_26 = {
	"slss-TxDisabled-r15",
	"slss-TxDisabled-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_slss_TxDisabled_r15_tags_26,
	sizeof(asn_DEF_LTE_slss_TxDisabled_r15_tags_26)
		/sizeof(asn_DEF_LTE_slss_TxDisabled_r15_tags_26[0]) - 1, /* 1 */
	asn_DEF_LTE_slss_TxDisabled_r15_tags_26,	/* Same as above */
	sizeof(asn_DEF_LTE_slss_TxDisabled_r15_tags_26)
		/sizeof(asn_DEF_LTE_slss_TxDisabled_r15_tags_26[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_slss_TxDisabled_r15_constr_26,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_slss_TxDisabled_r15_specs_26	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext4_25[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_SL_SyncConfig_r12__ext4, slss_TxDisabled_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_slss_TxDisabled_r15_26,
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
		"slss-TxDisabled-r15"
		},
};
static const int asn_MAP_LTE_ext4_oms_25[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext4_tags_25[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext4_tag2el_25[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* slss-TxDisabled-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext4_specs_25 = {
	sizeof(struct LTE_SL_SyncConfig_r12__ext4),
	offsetof(struct LTE_SL_SyncConfig_r12__ext4, _asn_ctx),
	asn_MAP_LTE_ext4_tag2el_25,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext4_oms_25,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext4_25 = {
	"ext4",
	"ext4",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext4_tags_25,
	sizeof(asn_DEF_LTE_ext4_tags_25)
		/sizeof(asn_DEF_LTE_ext4_tags_25[0]) - 1, /* 1 */
	asn_DEF_LTE_ext4_tags_25,	/* Same as above */
	sizeof(asn_DEF_LTE_ext4_tags_25)
		/sizeof(asn_DEF_LTE_ext4_tags_25[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_ext4_25,
	1,	/* Elements count */
	&asn_SPC_LTE_ext4_specs_25	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_SL_SyncConfig_r12_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_SyncConfig_r12, syncCP_Len_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_CP_Len_r12,
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
		"syncCP-Len-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_SyncConfig_r12, syncOffsetIndicator_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_OffsetIndicatorSync_r12,
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
		"syncOffsetIndicator-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_SyncConfig_r12, slssid_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SLSSID_r12,
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
		"slssid-r12"
		},
	{ ATF_POINTER, 6, offsetof(struct LTE_SL_SyncConfig_r12, txParameters_r12),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_LTE_txParameters_r12_5,
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
		"txParameters-r12"
		},
	{ ATF_POINTER, 5, offsetof(struct LTE_SL_SyncConfig_r12, rxParamsNCell_r12),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_LTE_rxParamsNCell_r12_9,
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
		"rxParamsNCell-r12"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_SL_SyncConfig_r12, ext1),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_LTE_ext1_15,
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
	{ ATF_POINTER, 3, offsetof(struct LTE_SL_SyncConfig_r12, ext2),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_LTE_ext2_18,
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
	{ ATF_POINTER, 2, offsetof(struct LTE_SL_SyncConfig_r12, ext3),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		0,
		&asn_DEF_LTE_ext3_22,
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
	{ ATF_POINTER, 1, offsetof(struct LTE_SL_SyncConfig_r12, ext4),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		0,
		&asn_DEF_LTE_ext4_25,
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
};
static const int asn_MAP_LTE_SL_SyncConfig_r12_oms_1[] = { 3, 4, 5, 6, 7, 8 };
static const ber_tlv_tag_t asn_DEF_LTE_SL_SyncConfig_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SL_SyncConfig_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* syncCP-Len-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* syncOffsetIndicator-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* slssid-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* txParameters-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* rxParamsNCell-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* ext2 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* ext3 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* ext4 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_SL_SyncConfig_r12_specs_1 = {
	sizeof(struct LTE_SL_SyncConfig_r12),
	offsetof(struct LTE_SL_SyncConfig_r12, _asn_ctx),
	asn_MAP_LTE_SL_SyncConfig_r12_tag2el_1,
	9,	/* Count of tags in the map */
	asn_MAP_LTE_SL_SyncConfig_r12_oms_1,	/* Optional members */
	2, 4,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SL_SyncConfig_r12 = {
	"SL-SyncConfig-r12",
	"SL-SyncConfig-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_SL_SyncConfig_r12_tags_1,
	sizeof(asn_DEF_LTE_SL_SyncConfig_r12_tags_1)
		/sizeof(asn_DEF_LTE_SL_SyncConfig_r12_tags_1[0]), /* 1 */
	asn_DEF_LTE_SL_SyncConfig_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SL_SyncConfig_r12_tags_1)
		/sizeof(asn_DEF_LTE_SL_SyncConfig_r12_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_SL_SyncConfig_r12_1,
	9,	/* Elements count */
	&asn_SPC_LTE_SL_SyncConfig_r12_specs_1	/* Additional specs */
};

