/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_InterFreqCarrierFreqInfo-v1610.h"

static int
memb_NR_interFreqCAG_CellList_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1UL && size <= 12UL)) {
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
static asn_per_constraints_t asn_PER_type_NR_interFreqCAG_CellList_r16_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  12 }	/* (SIZE(1..12)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_interFreqCAG_CellList_r16_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  12 }	/* (SIZE(1..12)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_NR_interFreqCAG_CellList_r16_6[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NR_InterFreqCAG_CellListPerPLMN_r16,
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
static const ber_tlv_tag_t asn_DEF_NR_interFreqCAG_CellList_r16_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_interFreqCAG_CellList_r16_specs_6 = {
	sizeof(struct NR_InterFreqCarrierFreqInfo_v1610__interFreqCAG_CellList_r16),
	offsetof(struct NR_InterFreqCarrierFreqInfo_v1610__interFreqCAG_CellList_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_interFreqCAG_CellList_r16_6 = {
	"interFreqCAG-CellList-r16",
	"interFreqCAG-CellList-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_interFreqCAG_CellList_r16_tags_6,
	sizeof(asn_DEF_NR_interFreqCAG_CellList_r16_tags_6)
		/sizeof(asn_DEF_NR_interFreqCAG_CellList_r16_tags_6[0]) - 1, /* 1 */
	asn_DEF_NR_interFreqCAG_CellList_r16_tags_6,	/* Same as above */
	sizeof(asn_DEF_NR_interFreqCAG_CellList_r16_tags_6)
		/sizeof(asn_DEF_NR_interFreqCAG_CellList_r16_tags_6[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_interFreqCAG_CellList_r16_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_NR_interFreqCAG_CellList_r16_6,
	1,	/* Single element */
	&asn_SPC_NR_interFreqCAG_CellList_r16_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_InterFreqCarrierFreqInfo_v1610_1[] = {
	{ ATF_POINTER, 5, offsetof(struct NR_InterFreqCarrierFreqInfo_v1610, interFreqNeighCellList_v1610),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_InterFreqNeighCellList_v1610,
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
		"interFreqNeighCellList-v1610"
		},
	{ ATF_POINTER, 4, offsetof(struct NR_InterFreqCarrierFreqInfo_v1610, smtc2_LP_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SSB_MTC2_LP_r16,
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
		"smtc2-LP-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_InterFreqCarrierFreqInfo_v1610, interFreqAllowedCellList_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_InterFreqAllowedCellList_r16,
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
		"interFreqAllowedCellList-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_InterFreqCarrierFreqInfo_v1610, ssb_PositionQCL_Common_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SSB_PositionQCL_Relation_r16,
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
		"ssb-PositionQCL-Common-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_InterFreqCarrierFreqInfo_v1610, interFreqCAG_CellList_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_NR_interFreqCAG_CellList_r16_6,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_interFreqCAG_CellList_r16_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_interFreqCAG_CellList_r16_constraint_1
		},
		0, 0, /* No default value */
		"interFreqCAG-CellList-r16"
		},
};
static const int asn_MAP_NR_InterFreqCarrierFreqInfo_v1610_oms_1[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_NR_InterFreqCarrierFreqInfo_v1610_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_InterFreqCarrierFreqInfo_v1610_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* interFreqNeighCellList-v1610 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* smtc2-LP-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* interFreqAllowedCellList-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ssb-PositionQCL-Common-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* interFreqCAG-CellList-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_InterFreqCarrierFreqInfo_v1610_specs_1 = {
	sizeof(struct NR_InterFreqCarrierFreqInfo_v1610),
	offsetof(struct NR_InterFreqCarrierFreqInfo_v1610, _asn_ctx),
	asn_MAP_NR_InterFreqCarrierFreqInfo_v1610_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_NR_InterFreqCarrierFreqInfo_v1610_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_InterFreqCarrierFreqInfo_v1610 = {
	"InterFreqCarrierFreqInfo-v1610",
	"InterFreqCarrierFreqInfo-v1610",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_InterFreqCarrierFreqInfo_v1610_tags_1,
	sizeof(asn_DEF_NR_InterFreqCarrierFreqInfo_v1610_tags_1)
		/sizeof(asn_DEF_NR_InterFreqCarrierFreqInfo_v1610_tags_1[0]), /* 1 */
	asn_DEF_NR_InterFreqCarrierFreqInfo_v1610_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_InterFreqCarrierFreqInfo_v1610_tags_1)
		/sizeof(asn_DEF_NR_InterFreqCarrierFreqInfo_v1610_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_InterFreqCarrierFreqInfo_v1610_1,
	5,	/* Elements count */
	&asn_SPC_NR_InterFreqCarrierFreqInfo_v1610_specs_1	/* Additional specs */
};

