/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PC5-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_RRCReconfigurationSidelink-v1700-IEs.h"

static int
memb_NR_sl_RLC_ChannelToReleaseListPC5_r17_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1UL && size <= 512UL)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_NR_sl_RLC_ChannelToAddModListPC5_r17_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1UL && size <= 512UL)) {
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
static asn_per_constraints_t asn_PER_type_NR_sl_RLC_ChannelToReleaseListPC5_r17_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 9,  9,  1,  512 }	/* (SIZE(1..512)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_sl_RLC_ChannelToAddModListPC5_r17_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 9,  9,  1,  512 }	/* (SIZE(1..512)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_sl_RLC_ChannelToReleaseListPC5_r17_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 9,  9,  1,  512 }	/* (SIZE(1..512)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_sl_RLC_ChannelToAddModListPC5_r17_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 9,  9,  1,  512 }	/* (SIZE(1..512)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_NR_sl_RLC_ChannelToReleaseListPC5_r17_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NR_SL_RLC_ChannelID_r17,
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
static const ber_tlv_tag_t asn_DEF_NR_sl_RLC_ChannelToReleaseListPC5_r17_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_sl_RLC_ChannelToReleaseListPC5_r17_specs_4 = {
	sizeof(struct NR_RRCReconfigurationSidelink_v1700_IEs__sl_RLC_ChannelToReleaseListPC5_r17),
	offsetof(struct NR_RRCReconfigurationSidelink_v1700_IEs__sl_RLC_ChannelToReleaseListPC5_r17, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_sl_RLC_ChannelToReleaseListPC5_r17_4 = {
	"sl-RLC-ChannelToReleaseListPC5-r17",
	"sl-RLC-ChannelToReleaseListPC5-r17",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_sl_RLC_ChannelToReleaseListPC5_r17_tags_4,
	sizeof(asn_DEF_NR_sl_RLC_ChannelToReleaseListPC5_r17_tags_4)
		/sizeof(asn_DEF_NR_sl_RLC_ChannelToReleaseListPC5_r17_tags_4[0]) - 1, /* 1 */
	asn_DEF_NR_sl_RLC_ChannelToReleaseListPC5_r17_tags_4,	/* Same as above */
	sizeof(asn_DEF_NR_sl_RLC_ChannelToReleaseListPC5_r17_tags_4)
		/sizeof(asn_DEF_NR_sl_RLC_ChannelToReleaseListPC5_r17_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_sl_RLC_ChannelToReleaseListPC5_r17_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_NR_sl_RLC_ChannelToReleaseListPC5_r17_4,
	1,	/* Single element */
	&asn_SPC_NR_sl_RLC_ChannelToReleaseListPC5_r17_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_sl_RLC_ChannelToAddModListPC5_r17_6[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NR_SL_RLC_ChannelConfigPC5_r17,
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
static const ber_tlv_tag_t asn_DEF_NR_sl_RLC_ChannelToAddModListPC5_r17_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_sl_RLC_ChannelToAddModListPC5_r17_specs_6 = {
	sizeof(struct NR_RRCReconfigurationSidelink_v1700_IEs__sl_RLC_ChannelToAddModListPC5_r17),
	offsetof(struct NR_RRCReconfigurationSidelink_v1700_IEs__sl_RLC_ChannelToAddModListPC5_r17, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_sl_RLC_ChannelToAddModListPC5_r17_6 = {
	"sl-RLC-ChannelToAddModListPC5-r17",
	"sl-RLC-ChannelToAddModListPC5-r17",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_sl_RLC_ChannelToAddModListPC5_r17_tags_6,
	sizeof(asn_DEF_NR_sl_RLC_ChannelToAddModListPC5_r17_tags_6)
		/sizeof(asn_DEF_NR_sl_RLC_ChannelToAddModListPC5_r17_tags_6[0]) - 1, /* 1 */
	asn_DEF_NR_sl_RLC_ChannelToAddModListPC5_r17_tags_6,	/* Same as above */
	sizeof(asn_DEF_NR_sl_RLC_ChannelToAddModListPC5_r17_tags_6)
		/sizeof(asn_DEF_NR_sl_RLC_ChannelToAddModListPC5_r17_tags_6[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_sl_RLC_ChannelToAddModListPC5_r17_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_NR_sl_RLC_ChannelToAddModListPC5_r17_6,
	1,	/* Single element */
	&asn_SPC_NR_sl_RLC_ChannelToAddModListPC5_r17_specs_6	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_NR_nonCriticalExtension_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_nonCriticalExtension_specs_8 = {
	sizeof(struct NR_RRCReconfigurationSidelink_v1700_IEs__nonCriticalExtension),
	offsetof(struct NR_RRCReconfigurationSidelink_v1700_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_nonCriticalExtension_8 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_nonCriticalExtension_tags_8,
	sizeof(asn_DEF_NR_nonCriticalExtension_tags_8)
		/sizeof(asn_DEF_NR_nonCriticalExtension_tags_8[0]) - 1, /* 1 */
	asn_DEF_NR_nonCriticalExtension_tags_8,	/* Same as above */
	sizeof(asn_DEF_NR_nonCriticalExtension_tags_8)
		/sizeof(asn_DEF_NR_nonCriticalExtension_tags_8[0]), /* 2 */
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
	&asn_SPC_NR_nonCriticalExtension_specs_8	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_RRCReconfigurationSidelink_v1700_IEs_1[] = {
	{ ATF_POINTER, 5, offsetof(struct NR_RRCReconfigurationSidelink_v1700_IEs, sl_DRX_ConfigUC_PC5_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_SetupRelease_SL_DRX_ConfigUC_r17,
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
		"sl-DRX-ConfigUC-PC5-r17"
		},
	{ ATF_POINTER, 4, offsetof(struct NR_RRCReconfigurationSidelink_v1700_IEs, sl_LatencyBoundIUC_Report_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_SetupRelease_SL_LatencyBoundIUC_Report_r17,
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
		"sl-LatencyBoundIUC-Report-r17"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_RRCReconfigurationSidelink_v1700_IEs, sl_RLC_ChannelToReleaseListPC5_r17),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_NR_sl_RLC_ChannelToReleaseListPC5_r17_4,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_sl_RLC_ChannelToReleaseListPC5_r17_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_sl_RLC_ChannelToReleaseListPC5_r17_constraint_1
		},
		0, 0, /* No default value */
		"sl-RLC-ChannelToReleaseListPC5-r17"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_RRCReconfigurationSidelink_v1700_IEs, sl_RLC_ChannelToAddModListPC5_r17),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_NR_sl_RLC_ChannelToAddModListPC5_r17_6,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_sl_RLC_ChannelToAddModListPC5_r17_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_sl_RLC_ChannelToAddModListPC5_r17_constraint_1
		},
		0, 0, /* No default value */
		"sl-RLC-ChannelToAddModListPC5-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_RRCReconfigurationSidelink_v1700_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_NR_nonCriticalExtension_8,
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
static const int asn_MAP_NR_RRCReconfigurationSidelink_v1700_IEs_oms_1[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_NR_RRCReconfigurationSidelink_v1700_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_RRCReconfigurationSidelink_v1700_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sl-DRX-ConfigUC-PC5-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sl-LatencyBoundIUC-Report-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sl-RLC-ChannelToReleaseListPC5-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sl-RLC-ChannelToAddModListPC5-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_RRCReconfigurationSidelink_v1700_IEs_specs_1 = {
	sizeof(struct NR_RRCReconfigurationSidelink_v1700_IEs),
	offsetof(struct NR_RRCReconfigurationSidelink_v1700_IEs, _asn_ctx),
	asn_MAP_NR_RRCReconfigurationSidelink_v1700_IEs_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_NR_RRCReconfigurationSidelink_v1700_IEs_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_RRCReconfigurationSidelink_v1700_IEs = {
	"RRCReconfigurationSidelink-v1700-IEs",
	"RRCReconfigurationSidelink-v1700-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_RRCReconfigurationSidelink_v1700_IEs_tags_1,
	sizeof(asn_DEF_NR_RRCReconfigurationSidelink_v1700_IEs_tags_1)
		/sizeof(asn_DEF_NR_RRCReconfigurationSidelink_v1700_IEs_tags_1[0]), /* 1 */
	asn_DEF_NR_RRCReconfigurationSidelink_v1700_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_RRCReconfigurationSidelink_v1700_IEs_tags_1)
		/sizeof(asn_DEF_NR_RRCReconfigurationSidelink_v1700_IEs_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_RRCReconfigurationSidelink_v1700_IEs_1,
	5,	/* Elements count */
	&asn_SPC_NR_RRCReconfigurationSidelink_v1700_IEs_specs_1	/* Additional specs */
};

