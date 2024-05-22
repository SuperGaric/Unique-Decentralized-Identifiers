/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_SRS-TPC-PDCCH-Config.h"

static int
memb_NR_srs_CC_SetIndexlist_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1UL && size <= 4UL)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_srs_CC_SetIndexlist_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_srs_CC_SetIndexlist_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_NR_srs_CC_SetIndexlist_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NR_SRS_CC_SetIndex,
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
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_srs_CC_SetIndexlist_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_srs_CC_SetIndexlist_specs_2 = {
	sizeof(struct NR_SRS_TPC_PDCCH_Config__srs_CC_SetIndexlist),
	offsetof(struct NR_SRS_TPC_PDCCH_Config__srs_CC_SetIndexlist, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_srs_CC_SetIndexlist_2 = {
	"srs-CC-SetIndexlist",
	"srs-CC-SetIndexlist",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_srs_CC_SetIndexlist_tags_2,
	sizeof(asn_DEF_NR_srs_CC_SetIndexlist_tags_2)
		/sizeof(asn_DEF_NR_srs_CC_SetIndexlist_tags_2[0]) - 1, /* 1 */
	asn_DEF_NR_srs_CC_SetIndexlist_tags_2,	/* Same as above */
	sizeof(asn_DEF_NR_srs_CC_SetIndexlist_tags_2)
		/sizeof(asn_DEF_NR_srs_CC_SetIndexlist_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_srs_CC_SetIndexlist_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_NR_srs_CC_SetIndexlist_2,
	1,	/* Single element */
	&asn_SPC_NR_srs_CC_SetIndexlist_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_SRS_TPC_PDCCH_Config_1[] = {
	{ ATF_POINTER, 1, offsetof(struct NR_SRS_TPC_PDCCH_Config, srs_CC_SetIndexlist),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_NR_srs_CC_SetIndexlist_2,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_srs_CC_SetIndexlist_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_srs_CC_SetIndexlist_constraint_1
		},
		0, 0, /* No default value */
		"srs-CC-SetIndexlist"
		},
};
static const int asn_MAP_NR_SRS_TPC_PDCCH_Config_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_NR_SRS_TPC_PDCCH_Config_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_SRS_TPC_PDCCH_Config_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* srs-CC-SetIndexlist */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_SRS_TPC_PDCCH_Config_specs_1 = {
	sizeof(struct NR_SRS_TPC_PDCCH_Config),
	offsetof(struct NR_SRS_TPC_PDCCH_Config, _asn_ctx),
	asn_MAP_NR_SRS_TPC_PDCCH_Config_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_NR_SRS_TPC_PDCCH_Config_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_SRS_TPC_PDCCH_Config = {
	"SRS-TPC-PDCCH-Config",
	"SRS-TPC-PDCCH-Config",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_SRS_TPC_PDCCH_Config_tags_1,
	sizeof(asn_DEF_NR_SRS_TPC_PDCCH_Config_tags_1)
		/sizeof(asn_DEF_NR_SRS_TPC_PDCCH_Config_tags_1[0]), /* 1 */
	asn_DEF_NR_SRS_TPC_PDCCH_Config_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_SRS_TPC_PDCCH_Config_tags_1)
		/sizeof(asn_DEF_NR_SRS_TPC_PDCCH_Config_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_SRS_TPC_PDCCH_Config_1,
	1,	/* Elements count */
	&asn_SPC_NR_SRS_TPC_PDCCH_Config_specs_1	/* Additional specs */
};
