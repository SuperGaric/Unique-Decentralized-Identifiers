/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair2/E1AP/MESSAGES/ASN.1/38463-g80.R16.78.0.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-JER -no-gen-BER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/E1AP/MESSAGES`
 */

#include "E1AP_AlternativeQoSParaSetItem.h"

#include "E1AP_PacketErrorRate.h"
#include "E1AP_ProtocolExtensionContainer.h"
static int
memb_E1AP_alternativeQoSParameterIndex_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1L && value <= 8L)) {
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
static asn_per_constraints_t asn_PER_memb_E1AP_alternativeQoSParameterIndex_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  1,  8 }	/* (1..8,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_E1AP_AlternativeQoSParaSetItem_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E1AP_AlternativeQoSParaSetItem, alternativeQoSParameterIndex),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_E1AP_alternativeQoSParameterIndex_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_E1AP_alternativeQoSParameterIndex_constraint_1
		},
		0, 0, /* No default value */
		"alternativeQoSParameterIndex"
		},
	{ ATF_POINTER, 5, offsetof(struct E1AP_AlternativeQoSParaSetItem, guaranteedFlowBitRateDL),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E1AP_BitRate,
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
		"guaranteedFlowBitRateDL"
		},
	{ ATF_POINTER, 4, offsetof(struct E1AP_AlternativeQoSParaSetItem, guaranteedFlowBitRateUL),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E1AP_BitRate,
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
		"guaranteedFlowBitRateUL"
		},
	{ ATF_POINTER, 3, offsetof(struct E1AP_AlternativeQoSParaSetItem, packetDelayBudget),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E1AP_PacketDelayBudget,
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
		"packetDelayBudget"
		},
	{ ATF_POINTER, 2, offsetof(struct E1AP_AlternativeQoSParaSetItem, packetErrorRate),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E1AP_PacketErrorRate,
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
		"packetErrorRate"
		},
	{ ATF_POINTER, 1, offsetof(struct E1AP_AlternativeQoSParaSetItem, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E1AP_ProtocolExtensionContainer_4961P1,
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
		"iE-Extensions"
		},
};
static const int asn_MAP_E1AP_AlternativeQoSParaSetItem_oms_1[] = { 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_E1AP_AlternativeQoSParaSetItem_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E1AP_AlternativeQoSParaSetItem_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* alternativeQoSParameterIndex */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* guaranteedFlowBitRateDL */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* guaranteedFlowBitRateUL */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* packetDelayBudget */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* packetErrorRate */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_E1AP_AlternativeQoSParaSetItem_specs_1 = {
	sizeof(struct E1AP_AlternativeQoSParaSetItem),
	offsetof(struct E1AP_AlternativeQoSParaSetItem, _asn_ctx),
	asn_MAP_E1AP_AlternativeQoSParaSetItem_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_E1AP_AlternativeQoSParaSetItem_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E1AP_AlternativeQoSParaSetItem = {
	"AlternativeQoSParaSetItem",
	"AlternativeQoSParaSetItem",
	&asn_OP_SEQUENCE,
	asn_DEF_E1AP_AlternativeQoSParaSetItem_tags_1,
	sizeof(asn_DEF_E1AP_AlternativeQoSParaSetItem_tags_1)
		/sizeof(asn_DEF_E1AP_AlternativeQoSParaSetItem_tags_1[0]), /* 1 */
	asn_DEF_E1AP_AlternativeQoSParaSetItem_tags_1,	/* Same as above */
	sizeof(asn_DEF_E1AP_AlternativeQoSParaSetItem_tags_1)
		/sizeof(asn_DEF_E1AP_AlternativeQoSParaSetItem_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_E1AP_AlternativeQoSParaSetItem_1,
	6,	/* Elements count */
	&asn_SPC_E1AP_AlternativeQoSParaSetItem_specs_1	/* Additional specs */
};

