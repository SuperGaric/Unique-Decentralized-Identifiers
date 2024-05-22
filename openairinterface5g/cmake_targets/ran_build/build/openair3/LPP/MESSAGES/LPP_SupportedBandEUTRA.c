/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#include "LPP_SupportedBandEUTRA.h"

static int
memb_LPP_bandEUTRA_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1L && value <= 64L)) {
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
static asn_per_constraints_t asn_PER_memb_LPP_bandEUTRA_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (1..64) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_LPP_SupportedBandEUTRA_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_SupportedBandEUTRA, bandEUTRA),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LPP_bandEUTRA_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LPP_bandEUTRA_constraint_1
		},
		0, 0, /* No default value */
		"bandEUTRA"
		},
};
static const ber_tlv_tag_t asn_DEF_LPP_SupportedBandEUTRA_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LPP_SupportedBandEUTRA_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* bandEUTRA */
};
asn_SEQUENCE_specifics_t asn_SPC_LPP_SupportedBandEUTRA_specs_1 = {
	sizeof(struct LPP_SupportedBandEUTRA),
	offsetof(struct LPP_SupportedBandEUTRA, _asn_ctx),
	asn_MAP_LPP_SupportedBandEUTRA_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LPP_SupportedBandEUTRA = {
	"SupportedBandEUTRA",
	"SupportedBandEUTRA",
	&asn_OP_SEQUENCE,
	asn_DEF_LPP_SupportedBandEUTRA_tags_1,
	sizeof(asn_DEF_LPP_SupportedBandEUTRA_tags_1)
		/sizeof(asn_DEF_LPP_SupportedBandEUTRA_tags_1[0]), /* 1 */
	asn_DEF_LPP_SupportedBandEUTRA_tags_1,	/* Same as above */
	sizeof(asn_DEF_LPP_SupportedBandEUTRA_tags_1)
		/sizeof(asn_DEF_LPP_SupportedBandEUTRA_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LPP_SupportedBandEUTRA_1,
	1,	/* Elements count */
	&asn_SPC_LPP_SupportedBandEUTRA_specs_1	/* Additional specs */
};

