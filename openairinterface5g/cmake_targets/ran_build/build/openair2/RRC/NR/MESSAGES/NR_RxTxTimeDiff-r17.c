/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_RxTxTimeDiff-r17.h"

static int
memb_NR_result_k5_r17_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 61565L)) {
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
static asn_per_constraints_t asn_PER_memb_NR_result_k5_r17_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16,  0,  61565 }	/* (0..61565) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_NR_RxTxTimeDiff_r17_1[] = {
	{ ATF_POINTER, 1, offsetof(struct NR_RxTxTimeDiff_r17, result_k5_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_result_k5_r17_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_result_k5_r17_constraint_1
		},
		0, 0, /* No default value */
		"result-k5-r17"
		},
};
static const int asn_MAP_NR_RxTxTimeDiff_r17_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_NR_RxTxTimeDiff_r17_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_RxTxTimeDiff_r17_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* result-k5-r17 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_RxTxTimeDiff_r17_specs_1 = {
	sizeof(struct NR_RxTxTimeDiff_r17),
	offsetof(struct NR_RxTxTimeDiff_r17, _asn_ctx),
	asn_MAP_NR_RxTxTimeDiff_r17_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_NR_RxTxTimeDiff_r17_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_RxTxTimeDiff_r17 = {
	"RxTxTimeDiff-r17",
	"RxTxTimeDiff-r17",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_RxTxTimeDiff_r17_tags_1,
	sizeof(asn_DEF_NR_RxTxTimeDiff_r17_tags_1)
		/sizeof(asn_DEF_NR_RxTxTimeDiff_r17_tags_1[0]), /* 1 */
	asn_DEF_NR_RxTxTimeDiff_r17_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_RxTxTimeDiff_r17_tags_1)
		/sizeof(asn_DEF_NR_RxTxTimeDiff_r17_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_RxTxTimeDiff_r17_1,
	1,	/* Elements count */
	&asn_SPC_NR_RxTxTimeDiff_r17_specs_1	/* Additional specs */
};

