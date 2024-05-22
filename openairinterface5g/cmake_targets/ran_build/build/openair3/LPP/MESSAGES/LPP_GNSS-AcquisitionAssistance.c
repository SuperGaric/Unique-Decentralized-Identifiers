/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#include "LPP_GNSS-AcquisitionAssistance.h"

static int
memb_LPP_confidence_r10_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 100L)) {
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
static asn_per_constraints_t asn_PER_memb_LPP_confidence_r10_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  100 }	/* (0..100) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_LPP_GNSS_AcquisitionAssistance_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_GNSS_AcquisitionAssistance, gnss_SignalID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_GNSS_SignalID,
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
		"gnss-SignalID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_GNSS_AcquisitionAssistance, gnss_AcquisitionAssistList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_GNSS_AcquisitionAssistList,
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
		"gnss-AcquisitionAssistList"
		},
	{ ATF_POINTER, 1, offsetof(struct LPP_GNSS_AcquisitionAssistance, confidence_r10),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LPP_confidence_r10_constr_5,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LPP_confidence_r10_constraint_1
		},
		0, 0, /* No default value */
		"confidence-r10"
		},
};
static const int asn_MAP_LPP_GNSS_AcquisitionAssistance_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_LPP_GNSS_AcquisitionAssistance_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LPP_GNSS_AcquisitionAssistance_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gnss-SignalID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* gnss-AcquisitionAssistList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* confidence-r10 */
};
asn_SEQUENCE_specifics_t asn_SPC_LPP_GNSS_AcquisitionAssistance_specs_1 = {
	sizeof(struct LPP_GNSS_AcquisitionAssistance),
	offsetof(struct LPP_GNSS_AcquisitionAssistance, _asn_ctx),
	asn_MAP_LPP_GNSS_AcquisitionAssistance_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_LPP_GNSS_AcquisitionAssistance_oms_1,	/* Optional members */
	0, 1,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LPP_GNSS_AcquisitionAssistance = {
	"GNSS-AcquisitionAssistance",
	"GNSS-AcquisitionAssistance",
	&asn_OP_SEQUENCE,
	asn_DEF_LPP_GNSS_AcquisitionAssistance_tags_1,
	sizeof(asn_DEF_LPP_GNSS_AcquisitionAssistance_tags_1)
		/sizeof(asn_DEF_LPP_GNSS_AcquisitionAssistance_tags_1[0]), /* 1 */
	asn_DEF_LPP_GNSS_AcquisitionAssistance_tags_1,	/* Same as above */
	sizeof(asn_DEF_LPP_GNSS_AcquisitionAssistance_tags_1)
		/sizeof(asn_DEF_LPP_GNSS_AcquisitionAssistance_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LPP_GNSS_AcquisitionAssistance_1,
	3,	/* Elements count */
	&asn_SPC_LPP_GNSS_AcquisitionAssistance_specs_1	/* Additional specs */
};

