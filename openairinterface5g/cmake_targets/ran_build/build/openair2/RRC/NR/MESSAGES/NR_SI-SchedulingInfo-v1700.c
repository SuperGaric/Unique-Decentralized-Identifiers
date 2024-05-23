/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_SI-SchedulingInfo-v1700.h"

static int
memb_NR_schedulingInfoList2_r17_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1UL && size <= 32UL)) {
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
static asn_per_constraints_t asn_PER_type_NR_schedulingInfoList2_r17_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_schedulingInfoList2_r17_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_NR_schedulingInfoList2_r17_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NR_SchedulingInfo2_r17,
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
static const ber_tlv_tag_t asn_DEF_NR_schedulingInfoList2_r17_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_schedulingInfoList2_r17_specs_2 = {
	sizeof(struct NR_SI_SchedulingInfo_v1700__schedulingInfoList2_r17),
	offsetof(struct NR_SI_SchedulingInfo_v1700__schedulingInfoList2_r17, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_schedulingInfoList2_r17_2 = {
	"schedulingInfoList2-r17",
	"schedulingInfoList2-r17",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_schedulingInfoList2_r17_tags_2,
	sizeof(asn_DEF_NR_schedulingInfoList2_r17_tags_2)
		/sizeof(asn_DEF_NR_schedulingInfoList2_r17_tags_2[0]) - 1, /* 1 */
	asn_DEF_NR_schedulingInfoList2_r17_tags_2,	/* Same as above */
	sizeof(asn_DEF_NR_schedulingInfoList2_r17_tags_2)
		/sizeof(asn_DEF_NR_schedulingInfoList2_r17_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_schedulingInfoList2_r17_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_NR_schedulingInfoList2_r17_2,
	1,	/* Single element */
	&asn_SPC_NR_schedulingInfoList2_r17_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_SI_SchedulingInfo_v1700_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SI_SchedulingInfo_v1700, schedulingInfoList2_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_NR_schedulingInfoList2_r17_2,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_schedulingInfoList2_r17_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_schedulingInfoList2_r17_constraint_1
		},
		0, 0, /* No default value */
		"schedulingInfoList2-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_SI_SchedulingInfo_v1700, si_RequestConfigRedCap_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SI_RequestConfig,
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
		"si-RequestConfigRedCap-r17"
		},
};
static const int asn_MAP_NR_SI_SchedulingInfo_v1700_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_NR_SI_SchedulingInfo_v1700_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_SI_SchedulingInfo_v1700_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* schedulingInfoList2-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* si-RequestConfigRedCap-r17 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_SI_SchedulingInfo_v1700_specs_1 = {
	sizeof(struct NR_SI_SchedulingInfo_v1700),
	offsetof(struct NR_SI_SchedulingInfo_v1700, _asn_ctx),
	asn_MAP_NR_SI_SchedulingInfo_v1700_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_NR_SI_SchedulingInfo_v1700_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_SI_SchedulingInfo_v1700 = {
	"SI-SchedulingInfo-v1700",
	"SI-SchedulingInfo-v1700",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_SI_SchedulingInfo_v1700_tags_1,
	sizeof(asn_DEF_NR_SI_SchedulingInfo_v1700_tags_1)
		/sizeof(asn_DEF_NR_SI_SchedulingInfo_v1700_tags_1[0]), /* 1 */
	asn_DEF_NR_SI_SchedulingInfo_v1700_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_SI_SchedulingInfo_v1700_tags_1)
		/sizeof(asn_DEF_NR_SI_SchedulingInfo_v1700_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_SI_SchedulingInfo_v1700_1,
	2,	/* Elements count */
	&asn_SPC_NR_SI_SchedulingInfo_v1700_specs_1	/* Additional specs */
};

