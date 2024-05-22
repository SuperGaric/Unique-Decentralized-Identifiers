/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_NeighCellsPerBandclassCDMA2000-r11.h"

static int
memb_LTE_physCellIdList_r11_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1UL && size <= 40UL)) {
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
static asn_per_constraints_t asn_PER_type_LTE_physCellIdList_r11_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  40 }	/* (SIZE(1..40)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LTE_physCellIdList_r11_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  40 }	/* (SIZE(1..40)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_LTE_physCellIdList_r11_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_LTE_PhysCellIdCDMA2000,
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
static const ber_tlv_tag_t asn_DEF_LTE_physCellIdList_r11_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_LTE_physCellIdList_r11_specs_3 = {
	sizeof(struct LTE_NeighCellsPerBandclassCDMA2000_r11__physCellIdList_r11),
	offsetof(struct LTE_NeighCellsPerBandclassCDMA2000_r11__physCellIdList_r11, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_physCellIdList_r11_3 = {
	"physCellIdList-r11",
	"physCellIdList-r11",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_LTE_physCellIdList_r11_tags_3,
	sizeof(asn_DEF_LTE_physCellIdList_r11_tags_3)
		/sizeof(asn_DEF_LTE_physCellIdList_r11_tags_3[0]) - 1, /* 1 */
	asn_DEF_LTE_physCellIdList_r11_tags_3,	/* Same as above */
	sizeof(asn_DEF_LTE_physCellIdList_r11_tags_3)
		/sizeof(asn_DEF_LTE_physCellIdList_r11_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_physCellIdList_r11_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_LTE_physCellIdList_r11_3,
	1,	/* Single element */
	&asn_SPC_LTE_physCellIdList_r11_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_NeighCellsPerBandclassCDMA2000_r11_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_NeighCellsPerBandclassCDMA2000_r11, arfcn),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ARFCN_ValueCDMA2000,
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
		"arfcn"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_NeighCellsPerBandclassCDMA2000_r11, physCellIdList_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_physCellIdList_r11_3,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LTE_physCellIdList_r11_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LTE_physCellIdList_r11_constraint_1
		},
		0, 0, /* No default value */
		"physCellIdList-r11"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_NeighCellsPerBandclassCDMA2000_r11_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_NeighCellsPerBandclassCDMA2000_r11_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* arfcn */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* physCellIdList-r11 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_NeighCellsPerBandclassCDMA2000_r11_specs_1 = {
	sizeof(struct LTE_NeighCellsPerBandclassCDMA2000_r11),
	offsetof(struct LTE_NeighCellsPerBandclassCDMA2000_r11, _asn_ctx),
	asn_MAP_LTE_NeighCellsPerBandclassCDMA2000_r11_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_NeighCellsPerBandclassCDMA2000_r11 = {
	"NeighCellsPerBandclassCDMA2000-r11",
	"NeighCellsPerBandclassCDMA2000-r11",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_NeighCellsPerBandclassCDMA2000_r11_tags_1,
	sizeof(asn_DEF_LTE_NeighCellsPerBandclassCDMA2000_r11_tags_1)
		/sizeof(asn_DEF_LTE_NeighCellsPerBandclassCDMA2000_r11_tags_1[0]), /* 1 */
	asn_DEF_LTE_NeighCellsPerBandclassCDMA2000_r11_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_NeighCellsPerBandclassCDMA2000_r11_tags_1)
		/sizeof(asn_DEF_LTE_NeighCellsPerBandclassCDMA2000_r11_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_NeighCellsPerBandclassCDMA2000_r11_1,
	2,	/* Elements count */
	&asn_SPC_LTE_NeighCellsPerBandclassCDMA2000_r11_specs_1	/* Additional specs */
};

