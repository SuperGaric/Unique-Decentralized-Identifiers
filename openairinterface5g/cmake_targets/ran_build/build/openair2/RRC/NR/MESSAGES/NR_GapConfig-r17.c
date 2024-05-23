/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_GapConfig-r17.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_NR_gapOffset_r17_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 159L)) {
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
static asn_per_constraints_t asn_PER_type_NR_gapType_r17_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_mgl_r17_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  10 }	/* (0..10) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_mgrp_r17_constr_20 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_mgta_r17_constr_25 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_refServCellIndicator_r17_constr_30 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_preConfigInd_r17_constr_35 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_ncsgInd_r17_constr_37 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_gapAssociationPRS_r17_constr_39 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_gapOffset_r17_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  159 }	/* (0..159) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_NR_gapType_r17_value2enum_3[] = {
	{ 0,	5,	"perUE" },
	{ 1,	6,	"perFR1" },
	{ 2,	6,	"perFR2" }
};
static const unsigned int asn_MAP_NR_gapType_r17_enum2value_3[] = {
	1,	/* perFR1(1) */
	2,	/* perFR2(2) */
	0	/* perUE(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_gapType_r17_specs_3 = {
	asn_MAP_NR_gapType_r17_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_gapType_r17_enum2value_3,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_gapType_r17_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_gapType_r17_3 = {
	"gapType-r17",
	"gapType-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_gapType_r17_tags_3,
	sizeof(asn_DEF_NR_gapType_r17_tags_3)
		/sizeof(asn_DEF_NR_gapType_r17_tags_3[0]) - 1, /* 1 */
	asn_DEF_NR_gapType_r17_tags_3,	/* Same as above */
	sizeof(asn_DEF_NR_gapType_r17_tags_3)
		/sizeof(asn_DEF_NR_gapType_r17_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_gapType_r17_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_gapType_r17_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_mgl_r17_value2enum_8[] = {
	{ 0,	3,	"ms1" },
	{ 1,	7,	"ms1dot5" },
	{ 2,	3,	"ms2" },
	{ 3,	3,	"ms3" },
	{ 4,	7,	"ms3dot5" },
	{ 5,	3,	"ms4" },
	{ 6,	3,	"ms5" },
	{ 7,	7,	"ms5dot5" },
	{ 8,	3,	"ms6" },
	{ 9,	4,	"ms10" },
	{ 10,	4,	"ms20" }
};
static const unsigned int asn_MAP_NR_mgl_r17_enum2value_8[] = {
	0,	/* ms1(0) */
	9,	/* ms10(9) */
	1,	/* ms1dot5(1) */
	2,	/* ms2(2) */
	10,	/* ms20(10) */
	3,	/* ms3(3) */
	4,	/* ms3dot5(4) */
	5,	/* ms4(5) */
	6,	/* ms5(6) */
	7,	/* ms5dot5(7) */
	8	/* ms6(8) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_mgl_r17_specs_8 = {
	asn_MAP_NR_mgl_r17_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_mgl_r17_enum2value_8,	/* N => "tag"; sorted by N */
	11,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_mgl_r17_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_mgl_r17_8 = {
	"mgl-r17",
	"mgl-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_mgl_r17_tags_8,
	sizeof(asn_DEF_NR_mgl_r17_tags_8)
		/sizeof(asn_DEF_NR_mgl_r17_tags_8[0]) - 1, /* 1 */
	asn_DEF_NR_mgl_r17_tags_8,	/* Same as above */
	sizeof(asn_DEF_NR_mgl_r17_tags_8)
		/sizeof(asn_DEF_NR_mgl_r17_tags_8[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_mgl_r17_constr_8,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_mgl_r17_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_mgrp_r17_value2enum_20[] = {
	{ 0,	4,	"ms20" },
	{ 1,	4,	"ms40" },
	{ 2,	4,	"ms80" },
	{ 3,	5,	"ms160" }
};
static const unsigned int asn_MAP_NR_mgrp_r17_enum2value_20[] = {
	3,	/* ms160(3) */
	0,	/* ms20(0) */
	1,	/* ms40(1) */
	2	/* ms80(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_mgrp_r17_specs_20 = {
	asn_MAP_NR_mgrp_r17_value2enum_20,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_mgrp_r17_enum2value_20,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_mgrp_r17_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_mgrp_r17_20 = {
	"mgrp-r17",
	"mgrp-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_mgrp_r17_tags_20,
	sizeof(asn_DEF_NR_mgrp_r17_tags_20)
		/sizeof(asn_DEF_NR_mgrp_r17_tags_20[0]) - 1, /* 1 */
	asn_DEF_NR_mgrp_r17_tags_20,	/* Same as above */
	sizeof(asn_DEF_NR_mgrp_r17_tags_20)
		/sizeof(asn_DEF_NR_mgrp_r17_tags_20[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_mgrp_r17_constr_20,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_mgrp_r17_specs_20	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_mgta_r17_value2enum_25[] = {
	{ 0,	3,	"ms0" },
	{ 1,	8,	"ms0dot25" },
	{ 2,	7,	"ms0dot5" },
	{ 3,	8,	"ms0dot75" }
};
static const unsigned int asn_MAP_NR_mgta_r17_enum2value_25[] = {
	0,	/* ms0(0) */
	1,	/* ms0dot25(1) */
	2,	/* ms0dot5(2) */
	3	/* ms0dot75(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_mgta_r17_specs_25 = {
	asn_MAP_NR_mgta_r17_value2enum_25,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_mgta_r17_enum2value_25,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_mgta_r17_tags_25[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_mgta_r17_25 = {
	"mgta-r17",
	"mgta-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_mgta_r17_tags_25,
	sizeof(asn_DEF_NR_mgta_r17_tags_25)
		/sizeof(asn_DEF_NR_mgta_r17_tags_25[0]) - 1, /* 1 */
	asn_DEF_NR_mgta_r17_tags_25,	/* Same as above */
	sizeof(asn_DEF_NR_mgta_r17_tags_25)
		/sizeof(asn_DEF_NR_mgta_r17_tags_25[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_mgta_r17_constr_25,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_mgta_r17_specs_25	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_refServCellIndicator_r17_value2enum_30[] = {
	{ 0,	5,	"pCell" },
	{ 1,	6,	"pSCell" },
	{ 2,	7,	"mcg-FR2" }
};
static const unsigned int asn_MAP_NR_refServCellIndicator_r17_enum2value_30[] = {
	2,	/* mcg-FR2(2) */
	0,	/* pCell(0) */
	1	/* pSCell(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_refServCellIndicator_r17_specs_30 = {
	asn_MAP_NR_refServCellIndicator_r17_value2enum_30,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_refServCellIndicator_r17_enum2value_30,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_refServCellIndicator_r17_tags_30[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_refServCellIndicator_r17_30 = {
	"refServCellIndicator-r17",
	"refServCellIndicator-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_refServCellIndicator_r17_tags_30,
	sizeof(asn_DEF_NR_refServCellIndicator_r17_tags_30)
		/sizeof(asn_DEF_NR_refServCellIndicator_r17_tags_30[0]) - 1, /* 1 */
	asn_DEF_NR_refServCellIndicator_r17_tags_30,	/* Same as above */
	sizeof(asn_DEF_NR_refServCellIndicator_r17_tags_30)
		/sizeof(asn_DEF_NR_refServCellIndicator_r17_tags_30[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_refServCellIndicator_r17_constr_30,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_refServCellIndicator_r17_specs_30	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_preConfigInd_r17_value2enum_35[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_NR_preConfigInd_r17_enum2value_35[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_preConfigInd_r17_specs_35 = {
	asn_MAP_NR_preConfigInd_r17_value2enum_35,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_preConfigInd_r17_enum2value_35,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_preConfigInd_r17_tags_35[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_preConfigInd_r17_35 = {
	"preConfigInd-r17",
	"preConfigInd-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_preConfigInd_r17_tags_35,
	sizeof(asn_DEF_NR_preConfigInd_r17_tags_35)
		/sizeof(asn_DEF_NR_preConfigInd_r17_tags_35[0]) - 1, /* 1 */
	asn_DEF_NR_preConfigInd_r17_tags_35,	/* Same as above */
	sizeof(asn_DEF_NR_preConfigInd_r17_tags_35)
		/sizeof(asn_DEF_NR_preConfigInd_r17_tags_35[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_preConfigInd_r17_constr_35,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_preConfigInd_r17_specs_35	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_ncsgInd_r17_value2enum_37[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_NR_ncsgInd_r17_enum2value_37[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_ncsgInd_r17_specs_37 = {
	asn_MAP_NR_ncsgInd_r17_value2enum_37,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_ncsgInd_r17_enum2value_37,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_ncsgInd_r17_tags_37[] = {
	(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ncsgInd_r17_37 = {
	"ncsgInd-r17",
	"ncsgInd-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_ncsgInd_r17_tags_37,
	sizeof(asn_DEF_NR_ncsgInd_r17_tags_37)
		/sizeof(asn_DEF_NR_ncsgInd_r17_tags_37[0]) - 1, /* 1 */
	asn_DEF_NR_ncsgInd_r17_tags_37,	/* Same as above */
	sizeof(asn_DEF_NR_ncsgInd_r17_tags_37)
		/sizeof(asn_DEF_NR_ncsgInd_r17_tags_37[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_ncsgInd_r17_constr_37,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_ncsgInd_r17_specs_37	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_gapAssociationPRS_r17_value2enum_39[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_NR_gapAssociationPRS_r17_enum2value_39[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_gapAssociationPRS_r17_specs_39 = {
	asn_MAP_NR_gapAssociationPRS_r17_value2enum_39,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_gapAssociationPRS_r17_enum2value_39,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_gapAssociationPRS_r17_tags_39[] = {
	(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_gapAssociationPRS_r17_39 = {
	"gapAssociationPRS-r17",
	"gapAssociationPRS-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_gapAssociationPRS_r17_tags_39,
	sizeof(asn_DEF_NR_gapAssociationPRS_r17_tags_39)
		/sizeof(asn_DEF_NR_gapAssociationPRS_r17_tags_39[0]) - 1, /* 1 */
	asn_DEF_NR_gapAssociationPRS_r17_tags_39,	/* Same as above */
	sizeof(asn_DEF_NR_gapAssociationPRS_r17_tags_39)
		/sizeof(asn_DEF_NR_gapAssociationPRS_r17_tags_39[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_gapAssociationPRS_r17_constr_39,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_gapAssociationPRS_r17_specs_39	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_GapConfig_r17_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_GapConfig_r17, measGapId_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_MeasGapId_r17,
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
		"measGapId-r17"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_GapConfig_r17, gapType_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_gapType_r17_3,
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
		"gapType-r17"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_GapConfig_r17, gapOffset_r17),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_gapOffset_r17_constr_7,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_gapOffset_r17_constraint_1
		},
		0, 0, /* No default value */
		"gapOffset-r17"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_GapConfig_r17, mgl_r17),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_mgl_r17_8,
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
		"mgl-r17"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_GapConfig_r17, mgrp_r17),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_mgrp_r17_20,
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
		"mgrp-r17"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_GapConfig_r17, mgta_r17),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_mgta_r17_25,
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
		"mgta-r17"
		},
	{ ATF_POINTER, 7, offsetof(struct NR_GapConfig_r17, refServCellIndicator_r17),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_refServCellIndicator_r17_30,
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
		"refServCellIndicator-r17"
		},
	{ ATF_POINTER, 6, offsetof(struct NR_GapConfig_r17, refFR2_ServCellAsyncCA_r17),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_ServCellIndex,
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
		"refFR2-ServCellAsyncCA-r17"
		},
	{ ATF_POINTER, 5, offsetof(struct NR_GapConfig_r17, preConfigInd_r17),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_preConfigInd_r17_35,
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
		"preConfigInd-r17"
		},
	{ ATF_POINTER, 4, offsetof(struct NR_GapConfig_r17, ncsgInd_r17),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_ncsgInd_r17_37,
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
		"ncsgInd-r17"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_GapConfig_r17, gapAssociationPRS_r17),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_gapAssociationPRS_r17_39,
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
		"gapAssociationPRS-r17"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_GapConfig_r17, gapSharing_r17),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_MeasGapSharingScheme,
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
		"gapSharing-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_GapConfig_r17, gapPriority_r17),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_GapPriority_r17,
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
		"gapPriority-r17"
		},
};
static const int asn_MAP_NR_GapConfig_r17_oms_1[] = { 6, 7, 8, 9, 10, 11, 12 };
static const ber_tlv_tag_t asn_DEF_NR_GapConfig_r17_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_GapConfig_r17_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measGapId-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* gapType-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* gapOffset-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* mgl-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* mgrp-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* mgta-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* refServCellIndicator-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* refFR2-ServCellAsyncCA-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* preConfigInd-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* ncsgInd-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* gapAssociationPRS-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* gapSharing-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 } /* gapPriority-r17 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_GapConfig_r17_specs_1 = {
	sizeof(struct NR_GapConfig_r17),
	offsetof(struct NR_GapConfig_r17, _asn_ctx),
	asn_MAP_NR_GapConfig_r17_tag2el_1,
	13,	/* Count of tags in the map */
	asn_MAP_NR_GapConfig_r17_oms_1,	/* Optional members */
	7, 0,	/* Root/Additions */
	13,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_GapConfig_r17 = {
	"GapConfig-r17",
	"GapConfig-r17",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_GapConfig_r17_tags_1,
	sizeof(asn_DEF_NR_GapConfig_r17_tags_1)
		/sizeof(asn_DEF_NR_GapConfig_r17_tags_1[0]), /* 1 */
	asn_DEF_NR_GapConfig_r17_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_GapConfig_r17_tags_1)
		/sizeof(asn_DEF_NR_GapConfig_r17_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_GapConfig_r17_1,
	13,	/* Elements count */
	&asn_SPC_NR_GapConfig_r17_specs_1	/* Additional specs */
};

