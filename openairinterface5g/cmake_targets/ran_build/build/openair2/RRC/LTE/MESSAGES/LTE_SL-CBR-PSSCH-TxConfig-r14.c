/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_SL-CBR-PSSCH-TxConfig-r14.h"

static int
memb_LTE_cr_Limit_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 10000L)) {
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
static asn_per_constraints_t asn_PER_memb_LTE_cr_Limit_r14_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 14,  14,  0,  10000 }	/* (0..10000) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_LTE_SL_CBR_PSSCH_TxConfig_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_CBR_PSSCH_TxConfig_r14, cr_Limit_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LTE_cr_Limit_r14_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LTE_cr_Limit_r14_constraint_1
		},
		0, 0, /* No default value */
		"cr-Limit-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SL_CBR_PSSCH_TxConfig_r14, tx_Parameters_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SL_PSSCH_TxParameters_r14,
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
		"tx-Parameters-r14"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_SL_CBR_PSSCH_TxConfig_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SL_CBR_PSSCH_TxConfig_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cr-Limit-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tx-Parameters-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_SL_CBR_PSSCH_TxConfig_r14_specs_1 = {
	sizeof(struct LTE_SL_CBR_PSSCH_TxConfig_r14),
	offsetof(struct LTE_SL_CBR_PSSCH_TxConfig_r14, _asn_ctx),
	asn_MAP_LTE_SL_CBR_PSSCH_TxConfig_r14_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SL_CBR_PSSCH_TxConfig_r14 = {
	"SL-CBR-PSSCH-TxConfig-r14",
	"SL-CBR-PSSCH-TxConfig-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_SL_CBR_PSSCH_TxConfig_r14_tags_1,
	sizeof(asn_DEF_LTE_SL_CBR_PSSCH_TxConfig_r14_tags_1)
		/sizeof(asn_DEF_LTE_SL_CBR_PSSCH_TxConfig_r14_tags_1[0]), /* 1 */
	asn_DEF_LTE_SL_CBR_PSSCH_TxConfig_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SL_CBR_PSSCH_TxConfig_r14_tags_1)
		/sizeof(asn_DEF_LTE_SL_CBR_PSSCH_TxConfig_r14_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_SL_CBR_PSSCH_TxConfig_r14_1,
	2,	/* Elements count */
	&asn_SPC_LTE_SL_CBR_PSSCH_TxConfig_r14_specs_1	/* Additional specs */
};

