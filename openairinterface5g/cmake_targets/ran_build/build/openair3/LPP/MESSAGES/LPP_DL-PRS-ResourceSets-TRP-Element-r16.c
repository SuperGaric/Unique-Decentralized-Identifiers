/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#include "LPP_DL-PRS-ResourceSets-TRP-Element-r16.h"

#include "LPP_RelativeLocation-r16.h"
#include "LPP_DL-PRS-Resource-ARP-Element-r16.h"
static int
memb_LPP_dl_PRS_Resource_ARP_List_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1UL && size <= 64UL)) {
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
static asn_per_constraints_t asn_PER_type_LPP_dl_PRS_Resource_ARP_List_r16_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LPP_dl_PRS_Resource_ARP_List_r16_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_LPP_dl_PRS_Resource_ARP_List_r16_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_LPP_DL_PRS_Resource_ARP_Element_r16,
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
static const ber_tlv_tag_t asn_DEF_LPP_dl_PRS_Resource_ARP_List_r16_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_LPP_dl_PRS_Resource_ARP_List_r16_specs_3 = {
	sizeof(struct LPP_DL_PRS_ResourceSets_TRP_Element_r16__dl_PRS_Resource_ARP_List_r16),
	offsetof(struct LPP_DL_PRS_ResourceSets_TRP_Element_r16__dl_PRS_Resource_ARP_List_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LPP_dl_PRS_Resource_ARP_List_r16_3 = {
	"dl-PRS-Resource-ARP-List-r16",
	"dl-PRS-Resource-ARP-List-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_LPP_dl_PRS_Resource_ARP_List_r16_tags_3,
	sizeof(asn_DEF_LPP_dl_PRS_Resource_ARP_List_r16_tags_3)
		/sizeof(asn_DEF_LPP_dl_PRS_Resource_ARP_List_r16_tags_3[0]) - 1, /* 1 */
	asn_DEF_LPP_dl_PRS_Resource_ARP_List_r16_tags_3,	/* Same as above */
	sizeof(asn_DEF_LPP_dl_PRS_Resource_ARP_List_r16_tags_3)
		/sizeof(asn_DEF_LPP_dl_PRS_Resource_ARP_List_r16_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LPP_dl_PRS_Resource_ARP_List_r16_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_LPP_dl_PRS_Resource_ARP_List_r16_3,
	1,	/* Single element */
	&asn_SPC_LPP_dl_PRS_Resource_ARP_List_r16_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LPP_DL_PRS_ResourceSets_TRP_Element_r16_1[] = {
	{ ATF_POINTER, 2, offsetof(struct LPP_DL_PRS_ResourceSets_TRP_Element_r16, dl_PRS_ResourceSetARP_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_RelativeLocation_r16,
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
		"dl-PRS-ResourceSetARP-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct LPP_DL_PRS_ResourceSets_TRP_Element_r16, dl_PRS_Resource_ARP_List_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LPP_dl_PRS_Resource_ARP_List_r16_3,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LPP_dl_PRS_Resource_ARP_List_r16_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LPP_dl_PRS_Resource_ARP_List_r16_constraint_1
		},
		0, 0, /* No default value */
		"dl-PRS-Resource-ARP-List-r16"
		},
};
static const int asn_MAP_LPP_DL_PRS_ResourceSets_TRP_Element_r16_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LPP_DL_PRS_ResourceSets_TRP_Element_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LPP_DL_PRS_ResourceSets_TRP_Element_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dl-PRS-ResourceSetARP-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* dl-PRS-Resource-ARP-List-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_LPP_DL_PRS_ResourceSets_TRP_Element_r16_specs_1 = {
	sizeof(struct LPP_DL_PRS_ResourceSets_TRP_Element_r16),
	offsetof(struct LPP_DL_PRS_ResourceSets_TRP_Element_r16, _asn_ctx),
	asn_MAP_LPP_DL_PRS_ResourceSets_TRP_Element_r16_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_LPP_DL_PRS_ResourceSets_TRP_Element_r16_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LPP_DL_PRS_ResourceSets_TRP_Element_r16 = {
	"DL-PRS-ResourceSets-TRP-Element-r16",
	"DL-PRS-ResourceSets-TRP-Element-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_LPP_DL_PRS_ResourceSets_TRP_Element_r16_tags_1,
	sizeof(asn_DEF_LPP_DL_PRS_ResourceSets_TRP_Element_r16_tags_1)
		/sizeof(asn_DEF_LPP_DL_PRS_ResourceSets_TRP_Element_r16_tags_1[0]), /* 1 */
	asn_DEF_LPP_DL_PRS_ResourceSets_TRP_Element_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_LPP_DL_PRS_ResourceSets_TRP_Element_r16_tags_1)
		/sizeof(asn_DEF_LPP_DL_PRS_ResourceSets_TRP_Element_r16_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LPP_DL_PRS_ResourceSets_TRP_Element_r16_1,
	2,	/* Elements count */
	&asn_SPC_LPP_DL_PRS_ResourceSets_TRP_Element_r16_specs_1	/* Additional specs */
};

