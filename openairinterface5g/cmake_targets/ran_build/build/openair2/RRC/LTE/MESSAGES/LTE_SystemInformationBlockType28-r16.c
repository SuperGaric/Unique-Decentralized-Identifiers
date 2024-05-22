/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_SystemInformationBlockType28-r16.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_LTE_segmentNumber_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 63L)) {
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
static asn_per_constraints_t asn_PER_type_LTE_segmentType_r16_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LTE_segmentNumber_r16_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  63 }	/* (0..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LTE_segmentType_r16_value2enum_3[] = {
	{ 0,	14,	"notLastSegment" },
	{ 1,	11,	"lastSegment" }
};
static const unsigned int asn_MAP_LTE_segmentType_r16_enum2value_3[] = {
	1,	/* lastSegment(1) */
	0	/* notLastSegment(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_segmentType_r16_specs_3 = {
	asn_MAP_LTE_segmentType_r16_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_segmentType_r16_enum2value_3,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_segmentType_r16_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_segmentType_r16_3 = {
	"segmentType-r16",
	"segmentType-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_segmentType_r16_tags_3,
	sizeof(asn_DEF_LTE_segmentType_r16_tags_3)
		/sizeof(asn_DEF_LTE_segmentType_r16_tags_3[0]) - 1, /* 1 */
	asn_DEF_LTE_segmentType_r16_tags_3,	/* Same as above */
	sizeof(asn_DEF_LTE_segmentType_r16_tags_3)
		/sizeof(asn_DEF_LTE_segmentType_r16_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LTE_segmentType_r16_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_segmentType_r16_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_SystemInformationBlockType28_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SystemInformationBlockType28_r16, segmentNumber_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LTE_segmentNumber_r16_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LTE_segmentNumber_r16_constraint_1
		},
		0, 0, /* No default value */
		"segmentNumber-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SystemInformationBlockType28_r16, segmentType_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_segmentType_r16_3,
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
		"segmentType-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SystemInformationBlockType28_r16, segmentContainer_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
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
		"segmentContainer-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SystemInformationBlockType28_r16, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
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
		"lateNonCriticalExtension"
		},
};
static const int asn_MAP_LTE_SystemInformationBlockType28_r16_oms_1[] = { 3 };
static const ber_tlv_tag_t asn_DEF_LTE_SystemInformationBlockType28_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SystemInformationBlockType28_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* segmentNumber-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* segmentType-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* segmentContainer-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* lateNonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_SystemInformationBlockType28_r16_specs_1 = {
	sizeof(struct LTE_SystemInformationBlockType28_r16),
	offsetof(struct LTE_SystemInformationBlockType28_r16, _asn_ctx),
	asn_MAP_LTE_SystemInformationBlockType28_r16_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_LTE_SystemInformationBlockType28_r16_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SystemInformationBlockType28_r16 = {
	"SystemInformationBlockType28-r16",
	"SystemInformationBlockType28-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_SystemInformationBlockType28_r16_tags_1,
	sizeof(asn_DEF_LTE_SystemInformationBlockType28_r16_tags_1)
		/sizeof(asn_DEF_LTE_SystemInformationBlockType28_r16_tags_1[0]), /* 1 */
	asn_DEF_LTE_SystemInformationBlockType28_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SystemInformationBlockType28_r16_tags_1)
		/sizeof(asn_DEF_LTE_SystemInformationBlockType28_r16_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_SystemInformationBlockType28_r16_1,
	4,	/* Elements count */
	&asn_SPC_LTE_SystemInformationBlockType28_r16_specs_1	/* Additional specs */
};

