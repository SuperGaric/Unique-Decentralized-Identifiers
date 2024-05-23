/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_BandParametersSidelinkEUTRA-NR-r16.h"

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_NR_BandParametersSidelinkEUTRA_NR_r16_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_NR_eutra_2[] = {
	{ ATF_POINTER, 2, offsetof(struct NR_BandParametersSidelinkEUTRA_NR_r16__eutra, bandParametersSidelinkEUTRA1_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
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
		"bandParametersSidelinkEUTRA1-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_BandParametersSidelinkEUTRA_NR_r16__eutra, bandParametersSidelinkEUTRA2_r16),
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
		"bandParametersSidelinkEUTRA2-r16"
		},
};
static const int asn_MAP_NR_eutra_oms_2[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_NR_eutra_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_eutra_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bandParametersSidelinkEUTRA1-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* bandParametersSidelinkEUTRA2-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_eutra_specs_2 = {
	sizeof(struct NR_BandParametersSidelinkEUTRA_NR_r16__eutra),
	offsetof(struct NR_BandParametersSidelinkEUTRA_NR_r16__eutra, _asn_ctx),
	asn_MAP_NR_eutra_tag2el_2,
	2,	/* Count of tags in the map */
	asn_MAP_NR_eutra_oms_2,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_eutra_2 = {
	"eutra",
	"eutra",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_eutra_tags_2,
	sizeof(asn_DEF_NR_eutra_tags_2)
		/sizeof(asn_DEF_NR_eutra_tags_2[0]) - 1, /* 1 */
	asn_DEF_NR_eutra_tags_2,	/* Same as above */
	sizeof(asn_DEF_NR_eutra_tags_2)
		/sizeof(asn_DEF_NR_eutra_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_eutra_2,
	2,	/* Elements count */
	&asn_SPC_NR_eutra_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_nr_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_BandParametersSidelinkEUTRA_NR_r16__nr, bandParametersSidelinkNR_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_BandParametersSidelink_r16,
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
		"bandParametersSidelinkNR-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_nr_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_nr_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* bandParametersSidelinkNR-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_nr_specs_5 = {
	sizeof(struct NR_BandParametersSidelinkEUTRA_NR_r16__nr),
	offsetof(struct NR_BandParametersSidelinkEUTRA_NR_r16__nr, _asn_ctx),
	asn_MAP_NR_nr_tag2el_5,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_nr_5 = {
	"nr",
	"nr",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_nr_tags_5,
	sizeof(asn_DEF_NR_nr_tags_5)
		/sizeof(asn_DEF_NR_nr_tags_5[0]) - 1, /* 1 */
	asn_DEF_NR_nr_tags_5,	/* Same as above */
	sizeof(asn_DEF_NR_nr_tags_5)
		/sizeof(asn_DEF_NR_nr_tags_5[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_nr_5,
	1,	/* Elements count */
	&asn_SPC_NR_nr_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_BandParametersSidelinkEUTRA_NR_r16_1[] = {
	{ ATF_POINTER, 0, offsetof(struct NR_BandParametersSidelinkEUTRA_NR_r16, choice.eutra),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_NR_eutra_2,
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
		"eutra"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_BandParametersSidelinkEUTRA_NR_r16, choice.nr),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_NR_nr_5,
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
		"nr"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NR_BandParametersSidelinkEUTRA_NR_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eutra */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nr */
};
asn_CHOICE_specifics_t asn_SPC_NR_BandParametersSidelinkEUTRA_NR_r16_specs_1 = {
	sizeof(struct NR_BandParametersSidelinkEUTRA_NR_r16),
	offsetof(struct NR_BandParametersSidelinkEUTRA_NR_r16, _asn_ctx),
	offsetof(struct NR_BandParametersSidelinkEUTRA_NR_r16, present),
	sizeof(((struct NR_BandParametersSidelinkEUTRA_NR_r16 *)0)->present),
	asn_MAP_NR_BandParametersSidelinkEUTRA_NR_r16_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_NR_BandParametersSidelinkEUTRA_NR_r16 = {
	"BandParametersSidelinkEUTRA-NR-r16",
	"BandParametersSidelinkEUTRA-NR-r16",
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
		&asn_PER_type_NR_BandParametersSidelinkEUTRA_NR_r16_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_NR_BandParametersSidelinkEUTRA_NR_r16_1,
	2,	/* Elements count */
	&asn_SPC_NR_BandParametersSidelinkEUTRA_NR_r16_specs_1	/* Additional specs */
};

