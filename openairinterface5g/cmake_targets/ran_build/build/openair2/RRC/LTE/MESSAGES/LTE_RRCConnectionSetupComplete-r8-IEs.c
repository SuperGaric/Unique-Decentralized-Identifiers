/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_RRCConnectionSetupComplete-r8-IEs.h"

static int
memb_LTE_selectedPLMN_Identity_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1L && value <= 6L)) {
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
static asn_per_constraints_t asn_PER_memb_LTE_selectedPLMN_Identity_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  6 }	/* (1..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_LTE_RRCConnectionSetupComplete_r8_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RRCConnectionSetupComplete_r8_IEs, selectedPLMN_Identity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LTE_selectedPLMN_Identity_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LTE_selectedPLMN_Identity_constraint_1
		},
		0, 0, /* No default value */
		"selectedPLMN-Identity"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_RRCConnectionSetupComplete_r8_IEs, registeredMME),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RegisteredMME,
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
		"registeredMME"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RRCConnectionSetupComplete_r8_IEs, dedicatedInfoNAS),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_DedicatedInfoNAS,
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
		"dedicatedInfoNAS"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_RRCConnectionSetupComplete_r8_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RRCConnectionSetupComplete_v8a0_IEs,
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
static const int asn_MAP_LTE_RRCConnectionSetupComplete_r8_IEs_oms_1[] = { 1, 3 };
static const ber_tlv_tag_t asn_DEF_LTE_RRCConnectionSetupComplete_r8_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_RRCConnectionSetupComplete_r8_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* selectedPLMN-Identity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* registeredMME */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* dedicatedInfoNAS */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_RRCConnectionSetupComplete_r8_IEs_specs_1 = {
	sizeof(struct LTE_RRCConnectionSetupComplete_r8_IEs),
	offsetof(struct LTE_RRCConnectionSetupComplete_r8_IEs, _asn_ctx),
	asn_MAP_LTE_RRCConnectionSetupComplete_r8_IEs_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_LTE_RRCConnectionSetupComplete_r8_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_RRCConnectionSetupComplete_r8_IEs = {
	"RRCConnectionSetupComplete-r8-IEs",
	"RRCConnectionSetupComplete-r8-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_RRCConnectionSetupComplete_r8_IEs_tags_1,
	sizeof(asn_DEF_LTE_RRCConnectionSetupComplete_r8_IEs_tags_1)
		/sizeof(asn_DEF_LTE_RRCConnectionSetupComplete_r8_IEs_tags_1[0]), /* 1 */
	asn_DEF_LTE_RRCConnectionSetupComplete_r8_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_RRCConnectionSetupComplete_r8_IEs_tags_1)
		/sizeof(asn_DEF_LTE_RRCConnectionSetupComplete_r8_IEs_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_RRCConnectionSetupComplete_r8_IEs_1,
	4,	/* Elements count */
	&asn_SPC_LTE_RRCConnectionSetupComplete_r8_IEs_specs_1	/* Additional specs */
};

