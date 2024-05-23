/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_SupportedOperatorDic-r15.h"

static int
memb_LTE_versionOfDictionary_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 15L)) {
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
static asn_per_constraints_t asn_PER_memb_LTE_versionOfDictionary_r15_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_LTE_SupportedOperatorDic_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SupportedOperatorDic_r15, versionOfDictionary_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LTE_versionOfDictionary_r15_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LTE_versionOfDictionary_r15_constraint_1
		},
		0, 0, /* No default value */
		"versionOfDictionary-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SupportedOperatorDic_r15, associatedPLMN_ID_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PLMN_Identity,
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
		"associatedPLMN-ID-r15"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_SupportedOperatorDic_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SupportedOperatorDic_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* versionOfDictionary-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* associatedPLMN-ID-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_SupportedOperatorDic_r15_specs_1 = {
	sizeof(struct LTE_SupportedOperatorDic_r15),
	offsetof(struct LTE_SupportedOperatorDic_r15, _asn_ctx),
	asn_MAP_LTE_SupportedOperatorDic_r15_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SupportedOperatorDic_r15 = {
	"SupportedOperatorDic-r15",
	"SupportedOperatorDic-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_SupportedOperatorDic_r15_tags_1,
	sizeof(asn_DEF_LTE_SupportedOperatorDic_r15_tags_1)
		/sizeof(asn_DEF_LTE_SupportedOperatorDic_r15_tags_1[0]), /* 1 */
	asn_DEF_LTE_SupportedOperatorDic_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SupportedOperatorDic_r15_tags_1)
		/sizeof(asn_DEF_LTE_SupportedOperatorDic_r15_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_SupportedOperatorDic_r15_1,
	2,	/* Elements count */
	&asn_SPC_LTE_SupportedOperatorDic_r15_specs_1	/* Additional specs */
};

