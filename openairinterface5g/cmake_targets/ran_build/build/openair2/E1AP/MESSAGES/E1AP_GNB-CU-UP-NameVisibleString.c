/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair2/E1AP/MESSAGES/ASN.1/38463-g80.R16.78.0.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-JER -no-gen-BER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/E1AP/MESSAGES`
 */

#include "E1AP_GNB-CU-UP-NameVisibleString.h"

static int check_permitted_alphabet_1(const void *sptr) {
	/* The underlying type is VisibleString */
	const VisibleString_t *st = (const VisibleString_t *)sptr;
	const uint8_t *ch = st->buf;
	const uint8_t *end = ch + st->size;
	
	for(; ch < end; ch++) {
		uint8_t cv = *ch;
		if(!(cv >= 32UL && cv <= 126UL)) return -1;
	}
	return 0;
}

int
E1AP_GNB_CU_UP_NameVisibleString_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const VisibleString_t *st = (const VisibleString_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size >= 1UL && size <= 150UL)
		 && !check_permitted_alphabet_1(st)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using VisibleString,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_E1AP_GNB_CU_UP_NameVisibleString_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  32,  126 }	/* (32..126) */,
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  8,  8,  1,  150 }	/* (SIZE(1..150,...)) */,
	0, 0	/* No PER character map necessary */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const ber_tlv_tag_t asn_DEF_E1AP_GNB_CU_UP_NameVisibleString_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (26 << 2))
};
asn_TYPE_descriptor_t asn_DEF_E1AP_GNB_CU_UP_NameVisibleString = {
	"GNB-CU-UP-NameVisibleString",
	"GNB-CU-UP-NameVisibleString",
	&asn_OP_VisibleString,
	asn_DEF_E1AP_GNB_CU_UP_NameVisibleString_tags_1,
	sizeof(asn_DEF_E1AP_GNB_CU_UP_NameVisibleString_tags_1)
		/sizeof(asn_DEF_E1AP_GNB_CU_UP_NameVisibleString_tags_1[0]), /* 1 */
	asn_DEF_E1AP_GNB_CU_UP_NameVisibleString_tags_1,	/* Same as above */
	sizeof(asn_DEF_E1AP_GNB_CU_UP_NameVisibleString_tags_1)
		/sizeof(asn_DEF_E1AP_GNB_CU_UP_NameVisibleString_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_E1AP_GNB_CU_UP_NameVisibleString_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		E1AP_GNB_CU_UP_NameVisibleString_constraint
	},
	0, 0,	/* No members */
	0	/* No specifics */
};
