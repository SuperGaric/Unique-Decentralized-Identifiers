/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_BAP-Config-r16.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_NR_bap_Address_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 10UL)) {
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
static asn_per_constraints_t asn_PER_type_NR_flowControlFeedbackType_r16_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_bap_Address_r16_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  10,  10 }	/* (SIZE(10..10)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_NR_flowControlFeedbackType_r16_value2enum_5[] = {
	{ 0,	17,	"perBH-RLC-Channel" },
	{ 1,	12,	"perRoutingID" },
	{ 2,	4,	"both" }
};
static const unsigned int asn_MAP_NR_flowControlFeedbackType_r16_enum2value_5[] = {
	2,	/* both(2) */
	0,	/* perBH-RLC-Channel(0) */
	1	/* perRoutingID(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_flowControlFeedbackType_r16_specs_5 = {
	asn_MAP_NR_flowControlFeedbackType_r16_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_flowControlFeedbackType_r16_enum2value_5,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_flowControlFeedbackType_r16_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_flowControlFeedbackType_r16_5 = {
	"flowControlFeedbackType-r16",
	"flowControlFeedbackType-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_flowControlFeedbackType_r16_tags_5,
	sizeof(asn_DEF_NR_flowControlFeedbackType_r16_tags_5)
		/sizeof(asn_DEF_NR_flowControlFeedbackType_r16_tags_5[0]) - 1, /* 1 */
	asn_DEF_NR_flowControlFeedbackType_r16_tags_5,	/* Same as above */
	sizeof(asn_DEF_NR_flowControlFeedbackType_r16_tags_5)
		/sizeof(asn_DEF_NR_flowControlFeedbackType_r16_tags_5[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_flowControlFeedbackType_r16_constr_5,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_flowControlFeedbackType_r16_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_BAP_Config_r16_1[] = {
	{ ATF_POINTER, 4, offsetof(struct NR_BAP_Config_r16, bap_Address_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_bap_Address_r16_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_bap_Address_r16_constraint_1
		},
		0, 0, /* No default value */
		"bap-Address-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_BAP_Config_r16, defaultUL_BAP_RoutingID_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_BAP_RoutingID_r16,
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
		"defaultUL-BAP-RoutingID-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_BAP_Config_r16, defaultUL_BH_RLC_Channel_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_BH_RLC_ChannelID_r16,
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
		"defaultUL-BH-RLC-Channel-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_BAP_Config_r16, flowControlFeedbackType_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_flowControlFeedbackType_r16_5,
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
		"flowControlFeedbackType-r16"
		},
};
static const int asn_MAP_NR_BAP_Config_r16_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_NR_BAP_Config_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_BAP_Config_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bap-Address-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* defaultUL-BAP-RoutingID-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* defaultUL-BH-RLC-Channel-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* flowControlFeedbackType-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_BAP_Config_r16_specs_1 = {
	sizeof(struct NR_BAP_Config_r16),
	offsetof(struct NR_BAP_Config_r16, _asn_ctx),
	asn_MAP_NR_BAP_Config_r16_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_NR_BAP_Config_r16_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_BAP_Config_r16 = {
	"BAP-Config-r16",
	"BAP-Config-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_BAP_Config_r16_tags_1,
	sizeof(asn_DEF_NR_BAP_Config_r16_tags_1)
		/sizeof(asn_DEF_NR_BAP_Config_r16_tags_1[0]), /* 1 */
	asn_DEF_NR_BAP_Config_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_BAP_Config_r16_tags_1)
		/sizeof(asn_DEF_NR_BAP_Config_r16_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_BAP_Config_r16_1,
	4,	/* Elements count */
	&asn_SPC_NR_BAP_Config_r16_specs_1	/* Additional specs */
};
