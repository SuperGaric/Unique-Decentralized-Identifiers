/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair2/E1AP/MESSAGES/ASN.1/38463-g80.R16.78.0.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-JER -no-gen-BER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/E1AP/MESSAGES`
 */

#include "E1AP_Data-Usage-per-PDU-Session-Report.h"

#include "E1AP_ProtocolExtensionContainer.h"
#include "E1AP_MRDC-Data-Usage-Report-Item.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_E1AP_pDU_session_Timed_Report_List_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1UL && size <= 2UL)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_E1AP_secondaryRATType_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_E1AP_pDU_session_Timed_Report_List_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (SIZE(1..2)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_E1AP_pDU_session_Timed_Report_List_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (SIZE(1..2)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_E1AP_secondaryRATType_value2enum_2[] = {
	{ 0,	2,	"nR" },
	{ 1,	6,	"e-UTRA" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_E1AP_secondaryRATType_enum2value_2[] = {
	1,	/* e-UTRA(1) */
	0	/* nR(0) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_E1AP_secondaryRATType_specs_2 = {
	asn_MAP_E1AP_secondaryRATType_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_E1AP_secondaryRATType_enum2value_2,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	3,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_E1AP_secondaryRATType_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_E1AP_secondaryRATType_2 = {
	"secondaryRATType",
	"secondaryRATType",
	&asn_OP_NativeEnumerated,
	asn_DEF_E1AP_secondaryRATType_tags_2,
	sizeof(asn_DEF_E1AP_secondaryRATType_tags_2)
		/sizeof(asn_DEF_E1AP_secondaryRATType_tags_2[0]) - 1, /* 1 */
	asn_DEF_E1AP_secondaryRATType_tags_2,	/* Same as above */
	sizeof(asn_DEF_E1AP_secondaryRATType_tags_2)
		/sizeof(asn_DEF_E1AP_secondaryRATType_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_E1AP_secondaryRATType_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_E1AP_secondaryRATType_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_E1AP_pDU_session_Timed_Report_List_6[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_E1AP_MRDC_Data_Usage_Report_Item,
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
		""
		},
};
static const ber_tlv_tag_t asn_DEF_E1AP_pDU_session_Timed_Report_List_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_E1AP_pDU_session_Timed_Report_List_specs_6 = {
	sizeof(struct E1AP_Data_Usage_per_PDU_Session_Report__pDU_session_Timed_Report_List),
	offsetof(struct E1AP_Data_Usage_per_PDU_Session_Report__pDU_session_Timed_Report_List, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_E1AP_pDU_session_Timed_Report_List_6 = {
	"pDU-session-Timed-Report-List",
	"pDU-session-Timed-Report-List",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_E1AP_pDU_session_Timed_Report_List_tags_6,
	sizeof(asn_DEF_E1AP_pDU_session_Timed_Report_List_tags_6)
		/sizeof(asn_DEF_E1AP_pDU_session_Timed_Report_List_tags_6[0]) - 1, /* 1 */
	asn_DEF_E1AP_pDU_session_Timed_Report_List_tags_6,	/* Same as above */
	sizeof(asn_DEF_E1AP_pDU_session_Timed_Report_List_tags_6)
		/sizeof(asn_DEF_E1AP_pDU_session_Timed_Report_List_tags_6[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_E1AP_pDU_session_Timed_Report_List_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_E1AP_pDU_session_Timed_Report_List_6,
	1,	/* Single element */
	&asn_SPC_E1AP_pDU_session_Timed_Report_List_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_E1AP_Data_Usage_per_PDU_Session_Report_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E1AP_Data_Usage_per_PDU_Session_Report, secondaryRATType),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E1AP_secondaryRATType_2,
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
		"secondaryRATType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E1AP_Data_Usage_per_PDU_Session_Report, pDU_session_Timed_Report_List),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_E1AP_pDU_session_Timed_Report_List_6,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_E1AP_pDU_session_Timed_Report_List_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_E1AP_pDU_session_Timed_Report_List_constraint_1
		},
		0, 0, /* No default value */
		"pDU-session-Timed-Report-List"
		},
	{ ATF_POINTER, 1, offsetof(struct E1AP_Data_Usage_per_PDU_Session_Report, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E1AP_ProtocolExtensionContainer_4961P9,
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
static const int asn_MAP_E1AP_Data_Usage_per_PDU_Session_Report_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_E1AP_Data_Usage_per_PDU_Session_Report_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E1AP_Data_Usage_per_PDU_Session_Report_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* secondaryRATType */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pDU-session-Timed-Report-List */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_E1AP_Data_Usage_per_PDU_Session_Report_specs_1 = {
	sizeof(struct E1AP_Data_Usage_per_PDU_Session_Report),
	offsetof(struct E1AP_Data_Usage_per_PDU_Session_Report, _asn_ctx),
	asn_MAP_E1AP_Data_Usage_per_PDU_Session_Report_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_E1AP_Data_Usage_per_PDU_Session_Report_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E1AP_Data_Usage_per_PDU_Session_Report = {
	"Data-Usage-per-PDU-Session-Report",
	"Data-Usage-per-PDU-Session-Report",
	&asn_OP_SEQUENCE,
	asn_DEF_E1AP_Data_Usage_per_PDU_Session_Report_tags_1,
	sizeof(asn_DEF_E1AP_Data_Usage_per_PDU_Session_Report_tags_1)
		/sizeof(asn_DEF_E1AP_Data_Usage_per_PDU_Session_Report_tags_1[0]), /* 1 */
	asn_DEF_E1AP_Data_Usage_per_PDU_Session_Report_tags_1,	/* Same as above */
	sizeof(asn_DEF_E1AP_Data_Usage_per_PDU_Session_Report_tags_1)
		/sizeof(asn_DEF_E1AP_Data_Usage_per_PDU_Session_Report_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_E1AP_Data_Usage_per_PDU_Session_Report_1,
	3,	/* Elements count */
	&asn_SPC_E1AP_Data_Usage_per_PDU_Session_Report_specs_1	/* Additional specs */
};

