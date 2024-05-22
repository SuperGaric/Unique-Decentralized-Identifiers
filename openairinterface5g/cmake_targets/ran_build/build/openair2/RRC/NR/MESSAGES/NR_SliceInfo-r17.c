/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_SliceInfo-r17.h"

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_sliceCellListNR_r17_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_NR_sliceCellListNR_r17_5[] = {
	{ ATF_POINTER, 0, offsetof(struct NR_SliceInfo_r17__sliceCellListNR_r17, choice.sliceAllowedCellListNR_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SliceCellListNR_r17,
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
		"sliceAllowedCellListNR-r17"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_SliceInfo_r17__sliceCellListNR_r17, choice.sliceExcludedCellListNR_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SliceCellListNR_r17,
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
		"sliceExcludedCellListNR-r17"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NR_sliceCellListNR_r17_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sliceAllowedCellListNR-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* sliceExcludedCellListNR-r17 */
};
static asn_CHOICE_specifics_t asn_SPC_NR_sliceCellListNR_r17_specs_5 = {
	sizeof(struct NR_SliceInfo_r17__sliceCellListNR_r17),
	offsetof(struct NR_SliceInfo_r17__sliceCellListNR_r17, _asn_ctx),
	offsetof(struct NR_SliceInfo_r17__sliceCellListNR_r17, present),
	sizeof(((struct NR_SliceInfo_r17__sliceCellListNR_r17 *)0)->present),
	asn_MAP_NR_sliceCellListNR_r17_tag2el_5,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_sliceCellListNR_r17_5 = {
	"sliceCellListNR-r17",
	"sliceCellListNR-r17",
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
		&asn_PER_type_NR_sliceCellListNR_r17_constr_5,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_NR_sliceCellListNR_r17_5,
	2,	/* Elements count */
	&asn_SPC_NR_sliceCellListNR_r17_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_SliceInfo_r17_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SliceInfo_r17, nsag_IdentityInfo_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_NSAG_IdentityInfo_r17,
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
		"nsag-IdentityInfo-r17"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_SliceInfo_r17, nsag_CellReselectionPriority_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_CellReselectionPriority,
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
		"nsag-CellReselectionPriority-r17"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_SliceInfo_r17, nsag_CellReselectionSubPriority_r17),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_CellReselectionSubPriority,
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
		"nsag-CellReselectionSubPriority-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_SliceInfo_r17, sliceCellListNR_r17),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_sliceCellListNR_r17_5,
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
		"sliceCellListNR-r17"
		},
};
static const int asn_MAP_NR_SliceInfo_r17_oms_1[] = { 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_NR_SliceInfo_r17_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_SliceInfo_r17_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nsag-IdentityInfo-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nsag-CellReselectionPriority-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* nsag-CellReselectionSubPriority-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* sliceCellListNR-r17 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_SliceInfo_r17_specs_1 = {
	sizeof(struct NR_SliceInfo_r17),
	offsetof(struct NR_SliceInfo_r17, _asn_ctx),
	asn_MAP_NR_SliceInfo_r17_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_NR_SliceInfo_r17_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_SliceInfo_r17 = {
	"SliceInfo-r17",
	"SliceInfo-r17",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_SliceInfo_r17_tags_1,
	sizeof(asn_DEF_NR_SliceInfo_r17_tags_1)
		/sizeof(asn_DEF_NR_SliceInfo_r17_tags_1[0]), /* 1 */
	asn_DEF_NR_SliceInfo_r17_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_SliceInfo_r17_tags_1)
		/sizeof(asn_DEF_NR_SliceInfo_r17_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_SliceInfo_r17_1,
	4,	/* Elements count */
	&asn_SPC_NR_SliceInfo_r17_specs_1	/* Additional specs */
};
