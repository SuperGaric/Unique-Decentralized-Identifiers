/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair2/F1AP/MESSAGES/ASN1/R16.3.1/38473-g31.asn"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/F1AP/MESSAGES`
 */

#include "F1AP_ResourceTypePeriodic.h"

#include "F1AP_ProtocolExtensionContainer.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_F1AP_offset_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 2559L)) {
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
static asn_per_constraints_t asn_PER_type_F1AP_periodicity_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  5,  5,  0,  16 }	/* (0..16,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_F1AP_offset_constr_21 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  12,  12,  0,  2559 }	/* (0..2559,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_F1AP_periodicity_value2enum_2[] = {
	{ 0,	5,	"slot1" },
	{ 1,	5,	"slot2" },
	{ 2,	5,	"slot4" },
	{ 3,	5,	"slot5" },
	{ 4,	5,	"slot8" },
	{ 5,	6,	"slot10" },
	{ 6,	6,	"slot16" },
	{ 7,	6,	"slot20" },
	{ 8,	6,	"slot32" },
	{ 9,	6,	"slot40" },
	{ 10,	6,	"slot64" },
	{ 11,	6,	"slot80" },
	{ 12,	7,	"slot160" },
	{ 13,	7,	"slot320" },
	{ 14,	7,	"slot640" },
	{ 15,	8,	"slot1280" },
	{ 16,	8,	"slot2560" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_F1AP_periodicity_enum2value_2[] = {
	0,	/* slot1(0) */
	5,	/* slot10(5) */
	15,	/* slot1280(15) */
	6,	/* slot16(6) */
	12,	/* slot160(12) */
	1,	/* slot2(1) */
	7,	/* slot20(7) */
	16,	/* slot2560(16) */
	8,	/* slot32(8) */
	13,	/* slot320(13) */
	2,	/* slot4(2) */
	9,	/* slot40(9) */
	3,	/* slot5(3) */
	10,	/* slot64(10) */
	14,	/* slot640(14) */
	4,	/* slot8(4) */
	11	/* slot80(11) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_F1AP_periodicity_specs_2 = {
	asn_MAP_F1AP_periodicity_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_F1AP_periodicity_enum2value_2,	/* N => "tag"; sorted by N */
	17,	/* Number of elements in the maps */
	18,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_F1AP_periodicity_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_F1AP_periodicity_2 = {
	"periodicity",
	"periodicity",
	&asn_OP_NativeEnumerated,
	asn_DEF_F1AP_periodicity_tags_2,
	sizeof(asn_DEF_F1AP_periodicity_tags_2)
		/sizeof(asn_DEF_F1AP_periodicity_tags_2[0]) - 1, /* 1 */
	asn_DEF_F1AP_periodicity_tags_2,	/* Same as above */
	sizeof(asn_DEF_F1AP_periodicity_tags_2)
		/sizeof(asn_DEF_F1AP_periodicity_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_F1AP_periodicity_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_F1AP_periodicity_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_F1AP_ResourceTypePeriodic_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct F1AP_ResourceTypePeriodic, periodicity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_F1AP_periodicity_2,
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
		"periodicity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct F1AP_ResourceTypePeriodic, offset),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_F1AP_offset_constr_21,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_F1AP_offset_constraint_1
		},
		0, 0, /* No default value */
		"offset"
		},
	{ ATF_POINTER, 1, offsetof(struct F1AP_ResourceTypePeriodic, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_F1AP_ProtocolExtensionContainer_10696P216,
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
static const int asn_MAP_F1AP_ResourceTypePeriodic_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_F1AP_ResourceTypePeriodic_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_F1AP_ResourceTypePeriodic_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* periodicity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* offset */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_F1AP_ResourceTypePeriodic_specs_1 = {
	sizeof(struct F1AP_ResourceTypePeriodic),
	offsetof(struct F1AP_ResourceTypePeriodic, _asn_ctx),
	asn_MAP_F1AP_ResourceTypePeriodic_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_F1AP_ResourceTypePeriodic_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_F1AP_ResourceTypePeriodic = {
	"ResourceTypePeriodic",
	"ResourceTypePeriodic",
	&asn_OP_SEQUENCE,
	asn_DEF_F1AP_ResourceTypePeriodic_tags_1,
	sizeof(asn_DEF_F1AP_ResourceTypePeriodic_tags_1)
		/sizeof(asn_DEF_F1AP_ResourceTypePeriodic_tags_1[0]), /* 1 */
	asn_DEF_F1AP_ResourceTypePeriodic_tags_1,	/* Same as above */
	sizeof(asn_DEF_F1AP_ResourceTypePeriodic_tags_1)
		/sizeof(asn_DEF_F1AP_ResourceTypePeriodic_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_F1AP_ResourceTypePeriodic_1,
	3,	/* Elements count */
	&asn_SPC_F1AP_ResourceTypePeriodic_specs_1	/* Additional specs */
};
