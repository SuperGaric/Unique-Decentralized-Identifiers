/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_BandCombinationParameters-v1630.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_LTE_v2x_SupportedTxBandCombListPerBC_v1630_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1UL && size <= 512UL)) {
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
memb_LTE_v2x_SupportedRxBandCombListPerBC_v1630_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1UL && size <= 512UL)) {
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
memb_LTE_scalingFactorTxSidelink_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
memb_LTE_scalingFactorRxSidelink_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
static asn_per_constraints_t asn_PER_type_LTE_scalingFactorTxSidelink_r16_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 9,  9,  1,  512 }	/* (SIZE(1..512)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_scalingFactorRxSidelink_r16_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 9,  9,  1,  512 }	/* (SIZE(1..512)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_interBandPowerSharingSyncDAPS_r16_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_interBandPowerSharingAsyncDAPS_r16_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LTE_v2x_SupportedTxBandCombListPerBC_v1630_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 9,  9,  1,  512 }	/* (SIZE(1..512)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LTE_v2x_SupportedRxBandCombListPerBC_v1630_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 9,  9,  1,  512 }	/* (SIZE(1..512)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LTE_scalingFactorTxSidelink_r16_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 9,  9,  1,  512 }	/* (SIZE(1..512)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LTE_scalingFactorRxSidelink_r16_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 9,  9,  1,  512 }	/* (SIZE(1..512)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_LTE_scalingFactorTxSidelink_r16_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_LTE_ScalingFactorSidelink_r16,
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
static const ber_tlv_tag_t asn_DEF_LTE_scalingFactorTxSidelink_r16_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_LTE_scalingFactorTxSidelink_r16_specs_4 = {
	sizeof(struct LTE_BandCombinationParameters_v1630__scalingFactorTxSidelink_r16),
	offsetof(struct LTE_BandCombinationParameters_v1630__scalingFactorTxSidelink_r16, _asn_ctx),
	1,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_scalingFactorTxSidelink_r16_4 = {
	"scalingFactorTxSidelink-r16",
	"scalingFactorTxSidelink-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_LTE_scalingFactorTxSidelink_r16_tags_4,
	sizeof(asn_DEF_LTE_scalingFactorTxSidelink_r16_tags_4)
		/sizeof(asn_DEF_LTE_scalingFactorTxSidelink_r16_tags_4[0]) - 1, /* 1 */
	asn_DEF_LTE_scalingFactorTxSidelink_r16_tags_4,	/* Same as above */
	sizeof(asn_DEF_LTE_scalingFactorTxSidelink_r16_tags_4)
		/sizeof(asn_DEF_LTE_scalingFactorTxSidelink_r16_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_scalingFactorTxSidelink_r16_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_LTE_scalingFactorTxSidelink_r16_4,
	1,	/* Single element */
	&asn_SPC_LTE_scalingFactorTxSidelink_r16_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_scalingFactorRxSidelink_r16_6[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_LTE_ScalingFactorSidelink_r16,
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
static const ber_tlv_tag_t asn_DEF_LTE_scalingFactorRxSidelink_r16_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_LTE_scalingFactorRxSidelink_r16_specs_6 = {
	sizeof(struct LTE_BandCombinationParameters_v1630__scalingFactorRxSidelink_r16),
	offsetof(struct LTE_BandCombinationParameters_v1630__scalingFactorRxSidelink_r16, _asn_ctx),
	1,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_scalingFactorRxSidelink_r16_6 = {
	"scalingFactorRxSidelink-r16",
	"scalingFactorRxSidelink-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_LTE_scalingFactorRxSidelink_r16_tags_6,
	sizeof(asn_DEF_LTE_scalingFactorRxSidelink_r16_tags_6)
		/sizeof(asn_DEF_LTE_scalingFactorRxSidelink_r16_tags_6[0]) - 1, /* 1 */
	asn_DEF_LTE_scalingFactorRxSidelink_r16_tags_6,	/* Same as above */
	sizeof(asn_DEF_LTE_scalingFactorRxSidelink_r16_tags_6)
		/sizeof(asn_DEF_LTE_scalingFactorRxSidelink_r16_tags_6[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_scalingFactorRxSidelink_r16_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_LTE_scalingFactorRxSidelink_r16_6,
	1,	/* Single element */
	&asn_SPC_LTE_scalingFactorRxSidelink_r16_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_interBandPowerSharingSyncDAPS_r16_value2enum_8[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_interBandPowerSharingSyncDAPS_r16_enum2value_8[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_interBandPowerSharingSyncDAPS_r16_specs_8 = {
	asn_MAP_LTE_interBandPowerSharingSyncDAPS_r16_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_interBandPowerSharingSyncDAPS_r16_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_interBandPowerSharingSyncDAPS_r16_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_interBandPowerSharingSyncDAPS_r16_8 = {
	"interBandPowerSharingSyncDAPS-r16",
	"interBandPowerSharingSyncDAPS-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_interBandPowerSharingSyncDAPS_r16_tags_8,
	sizeof(asn_DEF_LTE_interBandPowerSharingSyncDAPS_r16_tags_8)
		/sizeof(asn_DEF_LTE_interBandPowerSharingSyncDAPS_r16_tags_8[0]) - 1, /* 1 */
	asn_DEF_LTE_interBandPowerSharingSyncDAPS_r16_tags_8,	/* Same as above */
	sizeof(asn_DEF_LTE_interBandPowerSharingSyncDAPS_r16_tags_8)
		/sizeof(asn_DEF_LTE_interBandPowerSharingSyncDAPS_r16_tags_8[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_interBandPowerSharingSyncDAPS_r16_constr_8,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_interBandPowerSharingSyncDAPS_r16_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_interBandPowerSharingAsyncDAPS_r16_value2enum_10[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_interBandPowerSharingAsyncDAPS_r16_enum2value_10[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_interBandPowerSharingAsyncDAPS_r16_specs_10 = {
	asn_MAP_LTE_interBandPowerSharingAsyncDAPS_r16_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_interBandPowerSharingAsyncDAPS_r16_enum2value_10,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_interBandPowerSharingAsyncDAPS_r16_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_interBandPowerSharingAsyncDAPS_r16_10 = {
	"interBandPowerSharingAsyncDAPS-r16",
	"interBandPowerSharingAsyncDAPS-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_interBandPowerSharingAsyncDAPS_r16_tags_10,
	sizeof(asn_DEF_LTE_interBandPowerSharingAsyncDAPS_r16_tags_10)
		/sizeof(asn_DEF_LTE_interBandPowerSharingAsyncDAPS_r16_tags_10[0]) - 1, /* 1 */
	asn_DEF_LTE_interBandPowerSharingAsyncDAPS_r16_tags_10,	/* Same as above */
	sizeof(asn_DEF_LTE_interBandPowerSharingAsyncDAPS_r16_tags_10)
		/sizeof(asn_DEF_LTE_interBandPowerSharingAsyncDAPS_r16_tags_10[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_interBandPowerSharingAsyncDAPS_r16_constr_10,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_interBandPowerSharingAsyncDAPS_r16_specs_10	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_BandCombinationParameters_v1630_1[] = {
	{ ATF_POINTER, 6, offsetof(struct LTE_BandCombinationParameters_v1630, v2x_SupportedTxBandCombListPerBC_v1630),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LTE_v2x_SupportedTxBandCombListPerBC_v1630_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LTE_v2x_SupportedTxBandCombListPerBC_v1630_constraint_1
		},
		0, 0, /* No default value */
		"v2x-SupportedTxBandCombListPerBC-v1630"
		},
	{ ATF_POINTER, 5, offsetof(struct LTE_BandCombinationParameters_v1630, v2x_SupportedRxBandCombListPerBC_v1630),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LTE_v2x_SupportedRxBandCombListPerBC_v1630_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LTE_v2x_SupportedRxBandCombListPerBC_v1630_constraint_1
		},
		0, 0, /* No default value */
		"v2x-SupportedRxBandCombListPerBC-v1630"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_BandCombinationParameters_v1630, scalingFactorTxSidelink_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_LTE_scalingFactorTxSidelink_r16_4,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LTE_scalingFactorTxSidelink_r16_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LTE_scalingFactorTxSidelink_r16_constraint_1
		},
		0, 0, /* No default value */
		"scalingFactorTxSidelink-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_BandCombinationParameters_v1630, scalingFactorRxSidelink_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_LTE_scalingFactorRxSidelink_r16_6,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LTE_scalingFactorRxSidelink_r16_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LTE_scalingFactorRxSidelink_r16_constraint_1
		},
		0, 0, /* No default value */
		"scalingFactorRxSidelink-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_BandCombinationParameters_v1630, interBandPowerSharingSyncDAPS_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_interBandPowerSharingSyncDAPS_r16_8,
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
		"interBandPowerSharingSyncDAPS-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_BandCombinationParameters_v1630, interBandPowerSharingAsyncDAPS_r16),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_interBandPowerSharingAsyncDAPS_r16_10,
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
		"interBandPowerSharingAsyncDAPS-r16"
		},
};
static const int asn_MAP_LTE_BandCombinationParameters_v1630_oms_1[] = { 0, 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_LTE_BandCombinationParameters_v1630_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_BandCombinationParameters_v1630_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* v2x-SupportedTxBandCombListPerBC-v1630 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* v2x-SupportedRxBandCombListPerBC-v1630 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* scalingFactorTxSidelink-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* scalingFactorRxSidelink-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* interBandPowerSharingSyncDAPS-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* interBandPowerSharingAsyncDAPS-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_BandCombinationParameters_v1630_specs_1 = {
	sizeof(struct LTE_BandCombinationParameters_v1630),
	offsetof(struct LTE_BandCombinationParameters_v1630, _asn_ctx),
	asn_MAP_LTE_BandCombinationParameters_v1630_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_LTE_BandCombinationParameters_v1630_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_BandCombinationParameters_v1630 = {
	"BandCombinationParameters-v1630",
	"BandCombinationParameters-v1630",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_BandCombinationParameters_v1630_tags_1,
	sizeof(asn_DEF_LTE_BandCombinationParameters_v1630_tags_1)
		/sizeof(asn_DEF_LTE_BandCombinationParameters_v1630_tags_1[0]), /* 1 */
	asn_DEF_LTE_BandCombinationParameters_v1630_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_BandCombinationParameters_v1630_tags_1)
		/sizeof(asn_DEF_LTE_BandCombinationParameters_v1630_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_BandCombinationParameters_v1630_1,
	6,	/* Elements count */
	&asn_SPC_LTE_BandCombinationParameters_v1630_specs_1	/* Additional specs */
};

