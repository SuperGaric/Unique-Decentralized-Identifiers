/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#include "LPP_ResponseTimeNB-r14.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_LPP_timeNB_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1L && value <= 512L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_LPP_responseTimeEarlyFixNB_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1L && value <= 512L)) {
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
static asn_per_constraints_t asn_PER_type_LPP_unitNB_r15_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  0,  0,  0,  0 }	/* (0..0,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LPP_timeNB_r14_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  1,  512 }	/* (1..512) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_LPP_responseTimeEarlyFixNB_r14_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  1,  512 }	/* (1..512) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_LPP_unitNB_r15_value2enum_6[] = {
	{ 0,	11,	"ten-seconds" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_LPP_unitNB_r15_enum2value_6[] = {
	0	/* ten-seconds(0) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_LPP_unitNB_r15_specs_6 = {
	asn_MAP_LPP_unitNB_r15_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_LPP_unitNB_r15_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	2,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LPP_unitNB_r15_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LPP_unitNB_r15_6 = {
	"unitNB-r15",
	"unitNB-r15",
	&asn_OP_NativeEnumerated,
	asn_DEF_LPP_unitNB_r15_tags_6,
	sizeof(asn_DEF_LPP_unitNB_r15_tags_6)
		/sizeof(asn_DEF_LPP_unitNB_r15_tags_6[0]) - 1, /* 1 */
	asn_DEF_LPP_unitNB_r15_tags_6,	/* Same as above */
	sizeof(asn_DEF_LPP_unitNB_r15_tags_6)
		/sizeof(asn_DEF_LPP_unitNB_r15_tags_6[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_LPP_unitNB_r15_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LPP_unitNB_r15_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LPP_ext1_5[] = {
	{ ATF_POINTER, 1, offsetof(struct LPP_ResponseTimeNB_r14__ext1, unitNB_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_unitNB_r15_6,
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
		"unitNB-r15"
		},
};
static const int asn_MAP_LPP_ext1_oms_5[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LPP_ext1_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LPP_ext1_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* unitNB-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LPP_ext1_specs_5 = {
	sizeof(struct LPP_ResponseTimeNB_r14__ext1),
	offsetof(struct LPP_ResponseTimeNB_r14__ext1, _asn_ctx),
	asn_MAP_LPP_ext1_tag2el_5,
	1,	/* Count of tags in the map */
	asn_MAP_LPP_ext1_oms_5,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LPP_ext1_5 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_LPP_ext1_tags_5,
	sizeof(asn_DEF_LPP_ext1_tags_5)
		/sizeof(asn_DEF_LPP_ext1_tags_5[0]) - 1, /* 1 */
	asn_DEF_LPP_ext1_tags_5,	/* Same as above */
	sizeof(asn_DEF_LPP_ext1_tags_5)
		/sizeof(asn_DEF_LPP_ext1_tags_5[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LPP_ext1_5,
	1,	/* Elements count */
	&asn_SPC_LPP_ext1_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LPP_ResponseTimeNB_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_ResponseTimeNB_r14, timeNB_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LPP_timeNB_r14_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LPP_timeNB_r14_constraint_1
		},
		0, 0, /* No default value */
		"timeNB-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct LPP_ResponseTimeNB_r14, responseTimeEarlyFixNB_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LPP_responseTimeEarlyFixNB_r14_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LPP_responseTimeEarlyFixNB_r14_constraint_1
		},
		0, 0, /* No default value */
		"responseTimeEarlyFixNB-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct LPP_ResponseTimeNB_r14, ext1),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_LPP_ext1_5,
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
		"ext1"
		},
};
static const int asn_MAP_LPP_ResponseTimeNB_r14_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_LPP_ResponseTimeNB_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LPP_ResponseTimeNB_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* timeNB-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* responseTimeEarlyFixNB-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_LPP_ResponseTimeNB_r14_specs_1 = {
	sizeof(struct LPP_ResponseTimeNB_r14),
	offsetof(struct LPP_ResponseTimeNB_r14, _asn_ctx),
	asn_MAP_LPP_ResponseTimeNB_r14_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_LPP_ResponseTimeNB_r14_oms_1,	/* Optional members */
	1, 1,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LPP_ResponseTimeNB_r14 = {
	"ResponseTimeNB-r14",
	"ResponseTimeNB-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_LPP_ResponseTimeNB_r14_tags_1,
	sizeof(asn_DEF_LPP_ResponseTimeNB_r14_tags_1)
		/sizeof(asn_DEF_LPP_ResponseTimeNB_r14_tags_1[0]), /* 1 */
	asn_DEF_LPP_ResponseTimeNB_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_LPP_ResponseTimeNB_r14_tags_1)
		/sizeof(asn_DEF_LPP_ResponseTimeNB_r14_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LPP_ResponseTimeNB_r14_1,
	3,	/* Elements count */
	&asn_SPC_LPP_ResponseTimeNB_r14_specs_1	/* Additional specs */
};

