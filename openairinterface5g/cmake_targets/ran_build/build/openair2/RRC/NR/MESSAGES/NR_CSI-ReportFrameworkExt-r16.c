/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_CSI-ReportFrameworkExt-r16.h"

static int
memb_NR_maxNumberAperiodicCSI_PerBWP_ForCSI_ReportExt_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 5L && value <= 8L)) {
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
static asn_per_constraints_t asn_PER_memb_NR_maxNumberAperiodicCSI_PerBWP_ForCSI_ReportExt_r16_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  5,  8 }	/* (5..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_NR_CSI_ReportFrameworkExt_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_CSI_ReportFrameworkExt_r16, maxNumberAperiodicCSI_PerBWP_ForCSI_ReportExt_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_maxNumberAperiodicCSI_PerBWP_ForCSI_ReportExt_r16_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_maxNumberAperiodicCSI_PerBWP_ForCSI_ReportExt_r16_constraint_1
		},
		0, 0, /* No default value */
		"maxNumberAperiodicCSI-PerBWP-ForCSI-ReportExt-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_CSI_ReportFrameworkExt_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_CSI_ReportFrameworkExt_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* maxNumberAperiodicCSI-PerBWP-ForCSI-ReportExt-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_CSI_ReportFrameworkExt_r16_specs_1 = {
	sizeof(struct NR_CSI_ReportFrameworkExt_r16),
	offsetof(struct NR_CSI_ReportFrameworkExt_r16, _asn_ctx),
	asn_MAP_NR_CSI_ReportFrameworkExt_r16_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_CSI_ReportFrameworkExt_r16 = {
	"CSI-ReportFrameworkExt-r16",
	"CSI-ReportFrameworkExt-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_CSI_ReportFrameworkExt_r16_tags_1,
	sizeof(asn_DEF_NR_CSI_ReportFrameworkExt_r16_tags_1)
		/sizeof(asn_DEF_NR_CSI_ReportFrameworkExt_r16_tags_1[0]), /* 1 */
	asn_DEF_NR_CSI_ReportFrameworkExt_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_CSI_ReportFrameworkExt_r16_tags_1)
		/sizeof(asn_DEF_NR_CSI_ReportFrameworkExt_r16_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_CSI_ReportFrameworkExt_r16_1,
	1,	/* Elements count */
	&asn_SPC_NR_CSI_ReportFrameworkExt_r16_specs_1	/* Additional specs */
};
