/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_RRCConnectionReestablishmentRequest-5GC-NB-r16-IEs.h"

static int
memb_LTE_spare_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 1UL)) {
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
static asn_per_constraints_t asn_PER_memb_LTE_spare_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  1,  1 }	/* (SIZE(1..1)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_LTE_RRCConnectionReestablishmentRequest_5GC_NB_r16_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RRCConnectionReestablishmentRequest_5GC_NB_r16_IEs, ue_Identity_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ReestabUE_Identity_CP_5GC_NB_r16,
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
		"ue-Identity-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RRCConnectionReestablishmentRequest_5GC_NB_r16_IEs, reestablishmentCause_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ReestablishmentCause_NB_r13,
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
		"reestablishmentCause-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RRCConnectionReestablishmentRequest_5GC_NB_r16_IEs, cqi_NPDCCH_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_CQI_NPDCCH_Short_NB_r14,
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
		"cqi-NPDCCH-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RRCConnectionReestablishmentRequest_5GC_NB_r16_IEs, spare),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LTE_spare_constr_5,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LTE_spare_constraint_1
		},
		0, 0, /* No default value */
		"spare"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_RRCConnectionReestablishmentRequest_5GC_NB_r16_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_RRCConnectionReestablishmentRequest_5GC_NB_r16_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ue-Identity-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* reestablishmentCause-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* cqi-NPDCCH-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* spare */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_RRCConnectionReestablishmentRequest_5GC_NB_r16_IEs_specs_1 = {
	sizeof(struct LTE_RRCConnectionReestablishmentRequest_5GC_NB_r16_IEs),
	offsetof(struct LTE_RRCConnectionReestablishmentRequest_5GC_NB_r16_IEs, _asn_ctx),
	asn_MAP_LTE_RRCConnectionReestablishmentRequest_5GC_NB_r16_IEs_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_RRCConnectionReestablishmentRequest_5GC_NB_r16_IEs = {
	"RRCConnectionReestablishmentRequest-5GC-NB-r16-IEs",
	"RRCConnectionReestablishmentRequest-5GC-NB-r16-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_RRCConnectionReestablishmentRequest_5GC_NB_r16_IEs_tags_1,
	sizeof(asn_DEF_LTE_RRCConnectionReestablishmentRequest_5GC_NB_r16_IEs_tags_1)
		/sizeof(asn_DEF_LTE_RRCConnectionReestablishmentRequest_5GC_NB_r16_IEs_tags_1[0]), /* 1 */
	asn_DEF_LTE_RRCConnectionReestablishmentRequest_5GC_NB_r16_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_RRCConnectionReestablishmentRequest_5GC_NB_r16_IEs_tags_1)
		/sizeof(asn_DEF_LTE_RRCConnectionReestablishmentRequest_5GC_NB_r16_IEs_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_RRCConnectionReestablishmentRequest_5GC_NB_r16_IEs_1,
	4,	/* Elements count */
	&asn_SPC_LTE_RRCConnectionReestablishmentRequest_5GC_NB_r16_IEs_specs_1	/* Additional specs */
};

