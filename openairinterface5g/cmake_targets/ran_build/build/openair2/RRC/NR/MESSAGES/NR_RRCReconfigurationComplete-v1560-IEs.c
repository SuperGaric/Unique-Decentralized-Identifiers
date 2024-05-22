/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_RRCReconfigurationComplete-v1560-IEs.h"

static int
memb_NR_nr_SCG_Response_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
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
static asn_per_constraints_t asn_PER_memb_NR_nr_SCG_Response_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_scg_Response_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_NR_scg_Response_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_RRCReconfigurationComplete_v1560_IEs__scg_Response, choice.nr_SCG_Response),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_nr_SCG_Response_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_nr_SCG_Response_constraint_2
		},
		0, 0, /* No default value */
		"nr-SCG-Response"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_RRCReconfigurationComplete_v1560_IEs__scg_Response, choice.eutra_SCG_Response),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
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
		"eutra-SCG-Response"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NR_scg_Response_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nr-SCG-Response */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* eutra-SCG-Response */
};
static asn_CHOICE_specifics_t asn_SPC_NR_scg_Response_specs_2 = {
	sizeof(struct NR_RRCReconfigurationComplete_v1560_IEs__scg_Response),
	offsetof(struct NR_RRCReconfigurationComplete_v1560_IEs__scg_Response, _asn_ctx),
	offsetof(struct NR_RRCReconfigurationComplete_v1560_IEs__scg_Response, present),
	sizeof(((struct NR_RRCReconfigurationComplete_v1560_IEs__scg_Response *)0)->present),
	asn_MAP_NR_scg_Response_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_scg_Response_2 = {
	"scg-Response",
	"scg-Response",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_scg_Response_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_NR_scg_Response_2,
	2,	/* Elements count */
	&asn_SPC_NR_scg_Response_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_RRCReconfigurationComplete_v1560_IEs_1[] = {
	{ ATF_POINTER, 2, offsetof(struct NR_RRCReconfigurationComplete_v1560_IEs, scg_Response),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_scg_Response_2,
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
		"scg-Response"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_RRCReconfigurationComplete_v1560_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_RRCReconfigurationComplete_v1610_IEs,
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
static const int asn_MAP_NR_RRCReconfigurationComplete_v1560_IEs_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_NR_RRCReconfigurationComplete_v1560_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_RRCReconfigurationComplete_v1560_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* scg-Response */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_RRCReconfigurationComplete_v1560_IEs_specs_1 = {
	sizeof(struct NR_RRCReconfigurationComplete_v1560_IEs),
	offsetof(struct NR_RRCReconfigurationComplete_v1560_IEs, _asn_ctx),
	asn_MAP_NR_RRCReconfigurationComplete_v1560_IEs_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_NR_RRCReconfigurationComplete_v1560_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_RRCReconfigurationComplete_v1560_IEs = {
	"RRCReconfigurationComplete-v1560-IEs",
	"RRCReconfigurationComplete-v1560-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_RRCReconfigurationComplete_v1560_IEs_tags_1,
	sizeof(asn_DEF_NR_RRCReconfigurationComplete_v1560_IEs_tags_1)
		/sizeof(asn_DEF_NR_RRCReconfigurationComplete_v1560_IEs_tags_1[0]), /* 1 */
	asn_DEF_NR_RRCReconfigurationComplete_v1560_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_RRCReconfigurationComplete_v1560_IEs_tags_1)
		/sizeof(asn_DEF_NR_RRCReconfigurationComplete_v1560_IEs_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_RRCReconfigurationComplete_v1560_IEs_1,
	2,	/* Elements count */
	&asn_SPC_NR_RRCReconfigurationComplete_v1560_IEs_specs_1	/* Additional specs */
};

