/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_SL-TxResourceReqL2U2N-Relay-r17.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_NR_sl_TypeTxSyncListL2U2N_r17_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1UL && size <= 8UL)) {
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
static asn_per_constraints_t asn_PER_type_NR_sl_TypeTxSyncListL2U2N_r17_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_sl_LocalID_Request_r17_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NR_sl_TypeTxSyncListL2U2N_r17_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_NR_sl_TypeTxSyncListL2U2N_r17_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_NR_SL_TypeTxSync_r16,
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
static const ber_tlv_tag_t asn_DEF_NR_sl_TypeTxSyncListL2U2N_r17_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_sl_TypeTxSyncListL2U2N_r17_specs_4 = {
	sizeof(struct NR_SL_TxResourceReqL2U2N_Relay_r17__sl_TypeTxSyncListL2U2N_r17),
	offsetof(struct NR_SL_TxResourceReqL2U2N_Relay_r17__sl_TypeTxSyncListL2U2N_r17, _asn_ctx),
	1,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_sl_TypeTxSyncListL2U2N_r17_4 = {
	"sl-TypeTxSyncListL2U2N-r17",
	"sl-TypeTxSyncListL2U2N-r17",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_sl_TypeTxSyncListL2U2N_r17_tags_4,
	sizeof(asn_DEF_NR_sl_TypeTxSyncListL2U2N_r17_tags_4)
		/sizeof(asn_DEF_NR_sl_TypeTxSyncListL2U2N_r17_tags_4[0]) - 1, /* 1 */
	asn_DEF_NR_sl_TypeTxSyncListL2U2N_r17_tags_4,	/* Same as above */
	sizeof(asn_DEF_NR_sl_TypeTxSyncListL2U2N_r17_tags_4)
		/sizeof(asn_DEF_NR_sl_TypeTxSyncListL2U2N_r17_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_sl_TypeTxSyncListL2U2N_r17_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_NR_sl_TypeTxSyncListL2U2N_r17_4,
	1,	/* Single element */
	&asn_SPC_NR_sl_TypeTxSyncListL2U2N_r17_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_sl_LocalID_Request_r17_value2enum_6[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_NR_sl_LocalID_Request_r17_enum2value_6[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_sl_LocalID_Request_r17_specs_6 = {
	asn_MAP_NR_sl_LocalID_Request_r17_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_sl_LocalID_Request_r17_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_sl_LocalID_Request_r17_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_sl_LocalID_Request_r17_6 = {
	"sl-LocalID-Request-r17",
	"sl-LocalID-Request-r17",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_sl_LocalID_Request_r17_tags_6,
	sizeof(asn_DEF_NR_sl_LocalID_Request_r17_tags_6)
		/sizeof(asn_DEF_NR_sl_LocalID_Request_r17_tags_6[0]) - 1, /* 1 */
	asn_DEF_NR_sl_LocalID_Request_r17_tags_6,	/* Same as above */
	sizeof(asn_DEF_NR_sl_LocalID_Request_r17_tags_6)
		/sizeof(asn_DEF_NR_sl_LocalID_Request_r17_tags_6[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NR_sl_LocalID_Request_r17_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_sl_LocalID_Request_r17_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_SL_TxResourceReqL2U2N_Relay_r17_1[] = {
	{ ATF_POINTER, 1, offsetof(struct NR_SL_TxResourceReqL2U2N_Relay_r17, sl_DestinationIdentityL2U2N_r17),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SL_DestinationIdentity_r16,
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
		"sl-DestinationIdentityL2U2N-r17"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SL_TxResourceReqL2U2N_Relay_r17, sl_TxInterestedFreqListL2U2N_r17),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SL_TxInterestedFreqList_r16,
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
		"sl-TxInterestedFreqListL2U2N-r17"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SL_TxResourceReqL2U2N_Relay_r17, sl_TypeTxSyncListL2U2N_r17),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_NR_sl_TypeTxSyncListL2U2N_r17_4,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NR_sl_TypeTxSyncListL2U2N_r17_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NR_sl_TypeTxSyncListL2U2N_r17_constraint_1
		},
		0, 0, /* No default value */
		"sl-TypeTxSyncListL2U2N-r17"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_SL_TxResourceReqL2U2N_Relay_r17, sl_LocalID_Request_r17),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_sl_LocalID_Request_r17_6,
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
		"sl-LocalID-Request-r17"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_SL_TxResourceReqL2U2N_Relay_r17, sl_PagingIdentityRemoteUE_r17),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SL_PagingIdentityRemoteUE_r17,
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
		"sl-PagingIdentityRemoteUE-r17"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_SL_TxResourceReqL2U2N_Relay_r17, sl_CapabilityInformationSidelink_r17),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
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
		"sl-CapabilityInformationSidelink-r17"
		},
};
static const int asn_MAP_NR_SL_TxResourceReqL2U2N_Relay_r17_oms_1[] = { 0, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_NR_SL_TxResourceReqL2U2N_Relay_r17_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_SL_TxResourceReqL2U2N_Relay_r17_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sl-DestinationIdentityL2U2N-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sl-TxInterestedFreqListL2U2N-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sl-TypeTxSyncListL2U2N-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sl-LocalID-Request-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* sl-PagingIdentityRemoteUE-r17 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* sl-CapabilityInformationSidelink-r17 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_SL_TxResourceReqL2U2N_Relay_r17_specs_1 = {
	sizeof(struct NR_SL_TxResourceReqL2U2N_Relay_r17),
	offsetof(struct NR_SL_TxResourceReqL2U2N_Relay_r17, _asn_ctx),
	asn_MAP_NR_SL_TxResourceReqL2U2N_Relay_r17_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_NR_SL_TxResourceReqL2U2N_Relay_r17_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_SL_TxResourceReqL2U2N_Relay_r17 = {
	"SL-TxResourceReqL2U2N-Relay-r17",
	"SL-TxResourceReqL2U2N-Relay-r17",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_SL_TxResourceReqL2U2N_Relay_r17_tags_1,
	sizeof(asn_DEF_NR_SL_TxResourceReqL2U2N_Relay_r17_tags_1)
		/sizeof(asn_DEF_NR_SL_TxResourceReqL2U2N_Relay_r17_tags_1[0]), /* 1 */
	asn_DEF_NR_SL_TxResourceReqL2U2N_Relay_r17_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_SL_TxResourceReqL2U2N_Relay_r17_tags_1)
		/sizeof(asn_DEF_NR_SL_TxResourceReqL2U2N_Relay_r17_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_SL_TxResourceReqL2U2N_Relay_r17_1,
	6,	/* Elements count */
	&asn_SPC_NR_SL_TxResourceReqL2U2N_Relay_r17_specs_1	/* Additional specs */
};

