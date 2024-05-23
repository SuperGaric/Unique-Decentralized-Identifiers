/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_UERadioPagingInformation-r12-IEs.h"

static int
memb_LTE_ue_RadioPagingInfo_r12_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		(void)st; /* Unused variable */
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LTE_ue_RadioPagingInfo_r12_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_LTE_UERadioPagingInformation_r12_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_UERadioPagingInformation_r12_IEs, ue_RadioPagingInfo_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LTE_ue_RadioPagingInfo_r12_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LTE_ue_RadioPagingInfo_r12_constraint_1
		},
		0, 0, /* No default value */
		"ue-RadioPagingInfo-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_UERadioPagingInformation_r12_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_UERadioPagingInformation_v1310_IEs,
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
		"nonCriticalExtension"
		},
};
static const int asn_MAP_LTE_UERadioPagingInformation_r12_IEs_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_LTE_UERadioPagingInformation_r12_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_UERadioPagingInformation_r12_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ue-RadioPagingInfo-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_UERadioPagingInformation_r12_IEs_specs_1 = {
	sizeof(struct LTE_UERadioPagingInformation_r12_IEs),
	offsetof(struct LTE_UERadioPagingInformation_r12_IEs, _asn_ctx),
	asn_MAP_LTE_UERadioPagingInformation_r12_IEs_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_UERadioPagingInformation_r12_IEs_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_UERadioPagingInformation_r12_IEs = {
	"UERadioPagingInformation-r12-IEs",
	"UERadioPagingInformation-r12-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_UERadioPagingInformation_r12_IEs_tags_1,
	sizeof(asn_DEF_LTE_UERadioPagingInformation_r12_IEs_tags_1)
		/sizeof(asn_DEF_LTE_UERadioPagingInformation_r12_IEs_tags_1[0]), /* 1 */
	asn_DEF_LTE_UERadioPagingInformation_r12_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_UERadioPagingInformation_r12_IEs_tags_1)
		/sizeof(asn_DEF_LTE_UERadioPagingInformation_r12_IEs_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_UERadioPagingInformation_r12_IEs_1,
	2,	/* Elements count */
	&asn_SPC_LTE_UERadioPagingInformation_r12_IEs_specs_1	/* Additional specs */
};

