/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_PerRACSI-RSInfo-v1660.h"

static int
memb_NR_csi_RS_Index_v1660_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1L && value <= 96L)) {
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
static asn_per_constraints_t asn_PER_memb_NR_csi_RS_Index_v1660_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  1,  96 }	/* (1..96) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_NR_PerRACSI_RSInfo_v1660_1[] = {
	{ ATF_POINTER, 1, offsetof(struct NR_PerRACSI_RSInfo_v1660, csi_RS_Index_v1660),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_csi_RS_Index_v1660_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_csi_RS_Index_v1660_constraint_1
		},
		0, 0, /* No default value */
		"csi-RS-Index-v1660"
		},
};
static const int asn_MAP_NR_PerRACSI_RSInfo_v1660_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_NR_PerRACSI_RSInfo_v1660_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_PerRACSI_RSInfo_v1660_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* csi-RS-Index-v1660 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_PerRACSI_RSInfo_v1660_specs_1 = {
	sizeof(struct NR_PerRACSI_RSInfo_v1660),
	offsetof(struct NR_PerRACSI_RSInfo_v1660, _asn_ctx),
	asn_MAP_NR_PerRACSI_RSInfo_v1660_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_NR_PerRACSI_RSInfo_v1660_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_PerRACSI_RSInfo_v1660 = {
	"PerRACSI-RSInfo-v1660",
	"PerRACSI-RSInfo-v1660",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_PerRACSI_RSInfo_v1660_tags_1,
	sizeof(asn_DEF_NR_PerRACSI_RSInfo_v1660_tags_1)
		/sizeof(asn_DEF_NR_PerRACSI_RSInfo_v1660_tags_1[0]), /* 1 */
	asn_DEF_NR_PerRACSI_RSInfo_v1660_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_PerRACSI_RSInfo_v1660_tags_1)
		/sizeof(asn_DEF_NR_PerRACSI_RSInfo_v1660_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_PerRACSI_RSInfo_v1660_1,
	1,	/* Elements count */
	&asn_SPC_NR_PerRACSI_RSInfo_v1660_specs_1	/* Additional specs */
};
