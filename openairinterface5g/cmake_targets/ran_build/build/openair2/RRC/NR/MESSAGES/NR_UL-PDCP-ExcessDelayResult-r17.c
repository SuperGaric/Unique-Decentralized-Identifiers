/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_UL-PDCP-ExcessDelayResult-r17.h"

static int
memb_NR_excessDelay_r17_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 31L)) {
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
static asn_per_constraints_t asn_PER_memb_NR_excessDelay_r17_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_NR_UL_PDCP_ExcessDelayResult_r17_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_UL_PDCP_ExcessDelayResult_r17, drb_Id_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_DRB_Identity,
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
		"drb-Id-r17"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_UL_PDCP_ExcessDelayResult_r17, excessDelay_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_excessDelay_r17_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_excessDelay_r17_constraint_1
		},
		0, 0, /* No default value */
		"excessDelay-r17"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_UL_PDCP_ExcessDelayResult_r17_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_UL_PDCP_ExcessDelayResult_r17_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* drb-Id-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* excessDelay-r17 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_UL_PDCP_ExcessDelayResult_r17_specs_1 = {
	sizeof(struct NR_UL_PDCP_ExcessDelayResult_r17),
	offsetof(struct NR_UL_PDCP_ExcessDelayResult_r17, _asn_ctx),
	asn_MAP_NR_UL_PDCP_ExcessDelayResult_r17_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_UL_PDCP_ExcessDelayResult_r17 = {
	"UL-PDCP-ExcessDelayResult-r17",
	"UL-PDCP-ExcessDelayResult-r17",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_UL_PDCP_ExcessDelayResult_r17_tags_1,
	sizeof(asn_DEF_NR_UL_PDCP_ExcessDelayResult_r17_tags_1)
		/sizeof(asn_DEF_NR_UL_PDCP_ExcessDelayResult_r17_tags_1[0]), /* 1 */
	asn_DEF_NR_UL_PDCP_ExcessDelayResult_r17_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_UL_PDCP_ExcessDelayResult_r17_tags_1)
		/sizeof(asn_DEF_NR_UL_PDCP_ExcessDelayResult_r17_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_UL_PDCP_ExcessDelayResult_r17_1,
	2,	/* Elements count */
	&asn_SPC_NR_UL_PDCP_ExcessDelayResult_r17_specs_1	/* Additional specs */
};

