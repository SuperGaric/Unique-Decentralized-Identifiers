/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_PUSCH-ConfigDedicatedScell-v1530.h"

static int
memb_LTE_betaOffsetAUL_r15_constraint_4(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 15L)) {
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
static asn_per_constraints_t asn_PER_memb_LTE_betaOffsetAUL_r15_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_LTE_uci_OnPUSCH_r15_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_LTE_setup_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PUSCH_ConfigDedicatedScell_v1530__uci_OnPUSCH_r15__setup, betaOffsetAUL_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LTE_betaOffsetAUL_r15_constr_5,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LTE_betaOffsetAUL_r15_constraint_4
		},
		0, 0, /* No default value */
		"betaOffsetAUL-r15"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_setup_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_setup_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* betaOffsetAUL-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_setup_specs_4 = {
	sizeof(struct LTE_PUSCH_ConfigDedicatedScell_v1530__uci_OnPUSCH_r15__setup),
	offsetof(struct LTE_PUSCH_ConfigDedicatedScell_v1530__uci_OnPUSCH_r15__setup, _asn_ctx),
	asn_MAP_LTE_setup_tag2el_4,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_setup_4 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_setup_tags_4,
	sizeof(asn_DEF_LTE_setup_tags_4)
		/sizeof(asn_DEF_LTE_setup_tags_4[0]) - 1, /* 1 */
	asn_DEF_LTE_setup_tags_4,	/* Same as above */
	sizeof(asn_DEF_LTE_setup_tags_4)
		/sizeof(asn_DEF_LTE_setup_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_setup_4,
	1,	/* Elements count */
	&asn_SPC_LTE_setup_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_uci_OnPUSCH_r15_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PUSCH_ConfigDedicatedScell_v1530__uci_OnPUSCH_r15, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
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
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PUSCH_ConfigDedicatedScell_v1530__uci_OnPUSCH_r15, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_setup_4,
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
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_uci_OnPUSCH_r15_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_uci_OnPUSCH_r15_specs_2 = {
	sizeof(struct LTE_PUSCH_ConfigDedicatedScell_v1530__uci_OnPUSCH_r15),
	offsetof(struct LTE_PUSCH_ConfigDedicatedScell_v1530__uci_OnPUSCH_r15, _asn_ctx),
	offsetof(struct LTE_PUSCH_ConfigDedicatedScell_v1530__uci_OnPUSCH_r15, present),
	sizeof(((struct LTE_PUSCH_ConfigDedicatedScell_v1530__uci_OnPUSCH_r15 *)0)->present),
	asn_MAP_LTE_uci_OnPUSCH_r15_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_uci_OnPUSCH_r15_2 = {
	"uci-OnPUSCH-r15",
	"uci-OnPUSCH-r15",
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
		&asn_PER_type_LTE_uci_OnPUSCH_r15_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_LTE_uci_OnPUSCH_r15_2,
	2,	/* Elements count */
	&asn_SPC_LTE_uci_OnPUSCH_r15_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_PUSCH_ConfigDedicatedScell_v1530_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PUSCH_ConfigDedicatedScell_v1530, uci_OnPUSCH_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_uci_OnPUSCH_r15_2,
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
		"uci-OnPUSCH-r15"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_PUSCH_ConfigDedicatedScell_v1530_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_PUSCH_ConfigDedicatedScell_v1530_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* uci-OnPUSCH-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_PUSCH_ConfigDedicatedScell_v1530_specs_1 = {
	sizeof(struct LTE_PUSCH_ConfigDedicatedScell_v1530),
	offsetof(struct LTE_PUSCH_ConfigDedicatedScell_v1530, _asn_ctx),
	asn_MAP_LTE_PUSCH_ConfigDedicatedScell_v1530_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_PUSCH_ConfigDedicatedScell_v1530 = {
	"PUSCH-ConfigDedicatedScell-v1530",
	"PUSCH-ConfigDedicatedScell-v1530",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_PUSCH_ConfigDedicatedScell_v1530_tags_1,
	sizeof(asn_DEF_LTE_PUSCH_ConfigDedicatedScell_v1530_tags_1)
		/sizeof(asn_DEF_LTE_PUSCH_ConfigDedicatedScell_v1530_tags_1[0]), /* 1 */
	asn_DEF_LTE_PUSCH_ConfigDedicatedScell_v1530_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_PUSCH_ConfigDedicatedScell_v1530_tags_1)
		/sizeof(asn_DEF_LTE_PUSCH_ConfigDedicatedScell_v1530_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_PUSCH_ConfigDedicatedScell_v1530_1,
	1,	/* Elements count */
	&asn_SPC_LTE_PUSCH_ConfigDedicatedScell_v1530_specs_1	/* Additional specs */
};

