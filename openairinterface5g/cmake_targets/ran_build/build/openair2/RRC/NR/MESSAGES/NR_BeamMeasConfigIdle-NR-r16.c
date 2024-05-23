/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_BeamMeasConfigIdle-NR-r16.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_NR_maxNrofRS_IndexesToReport_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1L && value <= 32L)) {
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
static asn_per_constraints_t asn_PER_type_NR_reportQuantityRS_Indexes_r16_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_maxNrofRS_IndexesToReport_r16_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (1..32) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_NR_reportQuantityRS_Indexes_r16_value2enum_2[] = {
	{ 0,	4,	"rsrp" },
	{ 1,	4,	"rsrq" },
	{ 2,	4,	"both" }
};
static const unsigned int asn_MAP_NR_reportQuantityRS_Indexes_r16_enum2value_2[] = {
	2,	/* both(2) */
	0,	/* rsrp(0) */
	1	/* rsrq(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_reportQuantityRS_Indexes_r16_specs_2 = {
	asn_MAP_NR_reportQuantityRS_Indexes_r16_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_reportQuantityRS_Indexes_r16_enum2value_2,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_reportQuantityRS_Indexes_r16_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_reportQuantityRS_Indexes_r16_2 = {
	"reportQuantityRS-Indexes-r16",
	"reportQuantityRS-Indexes-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_reportQuantityRS_Indexes_r16_tags_2,
	sizeof(asn_DEF_NR_reportQuantityRS_Indexes_r16_tags_2)
		/sizeof(asn_DEF_NR_reportQuantityRS_Indexes_r16_tags_2[0]) - 1, /* 1 */
	asn_DEF_NR_reportQuantityRS_Indexes_r16_tags_2,	/* Same as above */
	sizeof(asn_DEF_NR_reportQuantityRS_Indexes_r16_tags_2)
		/sizeof(asn_DEF_NR_reportQuantityRS_Indexes_r16_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_reportQuantityRS_Indexes_r16_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_reportQuantityRS_Indexes_r16_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_BeamMeasConfigIdle_NR_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_BeamMeasConfigIdle_NR_r16, reportQuantityRS_Indexes_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_reportQuantityRS_Indexes_r16_2,
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
		"reportQuantityRS-Indexes-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_BeamMeasConfigIdle_NR_r16, maxNrofRS_IndexesToReport_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_maxNrofRS_IndexesToReport_r16_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_maxNrofRS_IndexesToReport_r16_constraint_1
		},
		0, 0, /* No default value */
		"maxNrofRS-IndexesToReport-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_BeamMeasConfigIdle_NR_r16, includeBeamMeasurements_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
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
		"includeBeamMeasurements-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_BeamMeasConfigIdle_NR_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_BeamMeasConfigIdle_NR_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* reportQuantityRS-Indexes-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* maxNrofRS-IndexesToReport-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* includeBeamMeasurements-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_BeamMeasConfigIdle_NR_r16_specs_1 = {
	sizeof(struct NR_BeamMeasConfigIdle_NR_r16),
	offsetof(struct NR_BeamMeasConfigIdle_NR_r16, _asn_ctx),
	asn_MAP_NR_BeamMeasConfigIdle_NR_r16_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_BeamMeasConfigIdle_NR_r16 = {
	"BeamMeasConfigIdle-NR-r16",
	"BeamMeasConfigIdle-NR-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_BeamMeasConfigIdle_NR_r16_tags_1,
	sizeof(asn_DEF_NR_BeamMeasConfigIdle_NR_r16_tags_1)
		/sizeof(asn_DEF_NR_BeamMeasConfigIdle_NR_r16_tags_1[0]), /* 1 */
	asn_DEF_NR_BeamMeasConfigIdle_NR_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_BeamMeasConfigIdle_NR_r16_tags_1)
		/sizeof(asn_DEF_NR_BeamMeasConfigIdle_NR_r16_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_BeamMeasConfigIdle_NR_r16_1,
	3,	/* Elements count */
	&asn_SPC_NR_BeamMeasConfigIdle_NR_r16_specs_1	/* Additional specs */
};

