/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#include "LPP_GNSS-IonosphericModelReq.h"

static int
memb_LPP_klobucharModelReq_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 2UL)) {
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
static asn_per_constraints_t asn_PER_memb_LPP_klobucharModelReq_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  2,  2 }	/* (SIZE(2..2)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_LPP_ext1_5[] = {
	{ ATF_POINTER, 1, offsetof(struct LPP_GNSS_IonosphericModelReq__ext1, klobucharModel2Req_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
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
		"klobucharModel2Req-r16"
		},
};
static const int asn_MAP_LPP_ext1_oms_5[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LPP_ext1_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LPP_ext1_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* klobucharModel2Req-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LPP_ext1_specs_5 = {
	sizeof(struct LPP_GNSS_IonosphericModelReq__ext1),
	offsetof(struct LPP_GNSS_IonosphericModelReq__ext1, _asn_ctx),
	asn_MAP_LPP_ext1_tag2el_5,
	1,	/* Count of tags in the map */
	asn_MAP_LPP_ext1_oms_5,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LPP_ext1_5 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_LPP_ext1_tags_5,
	sizeof(asn_DEF_LPP_ext1_tags_5)
		/sizeof(asn_DEF_LPP_ext1_tags_5[0]) - 1, /* 1 */
	asn_DEF_LPP_ext1_tags_5,	/* Same as above */
	sizeof(asn_DEF_LPP_ext1_tags_5)
		/sizeof(asn_DEF_LPP_ext1_tags_5[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LPP_ext1_5,
	1,	/* Elements count */
	&asn_SPC_LPP_ext1_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LPP_GNSS_IonosphericModelReq_1[] = {
	{ ATF_POINTER, 3, offsetof(struct LPP_GNSS_IonosphericModelReq, klobucharModelReq),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LPP_klobucharModelReq_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LPP_klobucharModelReq_constraint_1
		},
		0, 0, /* No default value */
		"klobucharModelReq"
		},
	{ ATF_POINTER, 2, offsetof(struct LPP_GNSS_IonosphericModelReq, neQuickModelReq),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
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
		"neQuickModelReq"
		},
	{ ATF_POINTER, 1, offsetof(struct LPP_GNSS_IonosphericModelReq, ext1),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_LPP_ext1_5,
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
		"ext1"
		},
};
static const int asn_MAP_LPP_GNSS_IonosphericModelReq_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_LPP_GNSS_IonosphericModelReq_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LPP_GNSS_IonosphericModelReq_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* klobucharModelReq */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* neQuickModelReq */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_LPP_GNSS_IonosphericModelReq_specs_1 = {
	sizeof(struct LPP_GNSS_IonosphericModelReq),
	offsetof(struct LPP_GNSS_IonosphericModelReq, _asn_ctx),
	asn_MAP_LPP_GNSS_IonosphericModelReq_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_LPP_GNSS_IonosphericModelReq_oms_1,	/* Optional members */
	2, 1,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LPP_GNSS_IonosphericModelReq = {
	"GNSS-IonosphericModelReq",
	"GNSS-IonosphericModelReq",
	&asn_OP_SEQUENCE,
	asn_DEF_LPP_GNSS_IonosphericModelReq_tags_1,
	sizeof(asn_DEF_LPP_GNSS_IonosphericModelReq_tags_1)
		/sizeof(asn_DEF_LPP_GNSS_IonosphericModelReq_tags_1[0]), /* 1 */
	asn_DEF_LPP_GNSS_IonosphericModelReq_tags_1,	/* Same as above */
	sizeof(asn_DEF_LPP_GNSS_IonosphericModelReq_tags_1)
		/sizeof(asn_DEF_LPP_GNSS_IonosphericModelReq_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LPP_GNSS_IonosphericModelReq_1,
	3,	/* Elements count */
	&asn_SPC_LPP_GNSS_IonosphericModelReq_specs_1	/* Additional specs */
};

