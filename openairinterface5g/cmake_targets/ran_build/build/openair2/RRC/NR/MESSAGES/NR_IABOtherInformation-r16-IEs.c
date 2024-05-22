/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_IABOtherInformation-r16-IEs.h"

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_iab_IPv6_AddressReq_r16_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_iab_IPv6_Report_r16_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NR_ip_InfoType_r16_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_NR_iab_IPv6_AddressReq_r16_5[] = {
	{ ATF_POINTER, 0, offsetof(struct NR_IABOtherInformation_r16_IEs__ip_InfoType_r16__iab_IP_Request_r16__iab_IPv6_AddressReq_r16, choice.iab_IPv6_AddressNumReq_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_IAB_IP_AddressNumReq_r16,
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
		"iab-IPv6-AddressNumReq-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_IABOtherInformation_r16_IEs__ip_InfoType_r16__iab_IP_Request_r16__iab_IPv6_AddressReq_r16, choice.iab_IPv6_AddressPrefixReq_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_IAB_IP_AddressPrefixReq_r16,
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
		"iab-IPv6-AddressPrefixReq-r16"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NR_iab_IPv6_AddressReq_r16_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* iab-IPv6-AddressNumReq-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* iab-IPv6-AddressPrefixReq-r16 */
};
static asn_CHOICE_specifics_t asn_SPC_NR_iab_IPv6_AddressReq_r16_specs_5 = {
	sizeof(struct NR_IABOtherInformation_r16_IEs__ip_InfoType_r16__iab_IP_Request_r16__iab_IPv6_AddressReq_r16),
	offsetof(struct NR_IABOtherInformation_r16_IEs__ip_InfoType_r16__iab_IP_Request_r16__iab_IPv6_AddressReq_r16, _asn_ctx),
	offsetof(struct NR_IABOtherInformation_r16_IEs__ip_InfoType_r16__iab_IP_Request_r16__iab_IPv6_AddressReq_r16, present),
	sizeof(((struct NR_IABOtherInformation_r16_IEs__ip_InfoType_r16__iab_IP_Request_r16__iab_IPv6_AddressReq_r16 *)0)->present),
	asn_MAP_NR_iab_IPv6_AddressReq_r16_tag2el_5,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_iab_IPv6_AddressReq_r16_5 = {
	"iab-IPv6-AddressReq-r16",
	"iab-IPv6-AddressReq-r16",
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
		&asn_PER_type_NR_iab_IPv6_AddressReq_r16_constr_5,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_NR_iab_IPv6_AddressReq_r16_5,
	2,	/* Elements count */
	&asn_SPC_NR_iab_IPv6_AddressReq_r16_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_iab_IP_Request_r16_3[] = {
	{ ATF_POINTER, 2, offsetof(struct NR_IABOtherInformation_r16_IEs__ip_InfoType_r16__iab_IP_Request_r16, iab_IPv4_AddressNumReq_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_IAB_IP_AddressNumReq_r16,
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
		"iab-IPv4-AddressNumReq-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_IABOtherInformation_r16_IEs__ip_InfoType_r16__iab_IP_Request_r16, iab_IPv6_AddressReq_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_iab_IPv6_AddressReq_r16_5,
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
		"iab-IPv6-AddressReq-r16"
		},
};
static const int asn_MAP_NR_iab_IP_Request_r16_oms_3[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_NR_iab_IP_Request_r16_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_iab_IP_Request_r16_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* iab-IPv4-AddressNumReq-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* iab-IPv6-AddressReq-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_iab_IP_Request_r16_specs_3 = {
	sizeof(struct NR_IABOtherInformation_r16_IEs__ip_InfoType_r16__iab_IP_Request_r16),
	offsetof(struct NR_IABOtherInformation_r16_IEs__ip_InfoType_r16__iab_IP_Request_r16, _asn_ctx),
	asn_MAP_NR_iab_IP_Request_r16_tag2el_3,
	2,	/* Count of tags in the map */
	asn_MAP_NR_iab_IP_Request_r16_oms_3,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_iab_IP_Request_r16_3 = {
	"iab-IP-Request-r16",
	"iab-IP-Request-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_iab_IP_Request_r16_tags_3,
	sizeof(asn_DEF_NR_iab_IP_Request_r16_tags_3)
		/sizeof(asn_DEF_NR_iab_IP_Request_r16_tags_3[0]) - 1, /* 1 */
	asn_DEF_NR_iab_IP_Request_r16_tags_3,	/* Same as above */
	sizeof(asn_DEF_NR_iab_IP_Request_r16_tags_3)
		/sizeof(asn_DEF_NR_iab_IP_Request_r16_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_iab_IP_Request_r16_3,
	2,	/* Elements count */
	&asn_SPC_NR_iab_IP_Request_r16_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_iab_IPv6_Report_r16_11[] = {
	{ ATF_POINTER, 0, offsetof(struct NR_IABOtherInformation_r16_IEs__ip_InfoType_r16__iab_IP_Report_r16__iab_IPv6_Report_r16, choice.iab_IPv6_AddressReport_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_IAB_IP_AddressAndTraffic_r16,
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
		"iab-IPv6-AddressReport-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_IABOtherInformation_r16_IEs__ip_InfoType_r16__iab_IP_Report_r16__iab_IPv6_Report_r16, choice.iab_IPv6_PrefixReport_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_IAB_IP_PrefixAndTraffic_r16,
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
		"iab-IPv6-PrefixReport-r16"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NR_iab_IPv6_Report_r16_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* iab-IPv6-AddressReport-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* iab-IPv6-PrefixReport-r16 */
};
static asn_CHOICE_specifics_t asn_SPC_NR_iab_IPv6_Report_r16_specs_11 = {
	sizeof(struct NR_IABOtherInformation_r16_IEs__ip_InfoType_r16__iab_IP_Report_r16__iab_IPv6_Report_r16),
	offsetof(struct NR_IABOtherInformation_r16_IEs__ip_InfoType_r16__iab_IP_Report_r16__iab_IPv6_Report_r16, _asn_ctx),
	offsetof(struct NR_IABOtherInformation_r16_IEs__ip_InfoType_r16__iab_IP_Report_r16__iab_IPv6_Report_r16, present),
	sizeof(((struct NR_IABOtherInformation_r16_IEs__ip_InfoType_r16__iab_IP_Report_r16__iab_IPv6_Report_r16 *)0)->present),
	asn_MAP_NR_iab_IPv6_Report_r16_tag2el_11,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_iab_IPv6_Report_r16_11 = {
	"iab-IPv6-Report-r16",
	"iab-IPv6-Report-r16",
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
		&asn_PER_type_NR_iab_IPv6_Report_r16_constr_11,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_NR_iab_IPv6_Report_r16_11,
	2,	/* Elements count */
	&asn_SPC_NR_iab_IPv6_Report_r16_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_iab_IP_Report_r16_9[] = {
	{ ATF_POINTER, 2, offsetof(struct NR_IABOtherInformation_r16_IEs__ip_InfoType_r16__iab_IP_Report_r16, iab_IPv4_AddressReport_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_IAB_IP_AddressAndTraffic_r16,
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
		"iab-IPv4-AddressReport-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_IABOtherInformation_r16_IEs__ip_InfoType_r16__iab_IP_Report_r16, iab_IPv6_Report_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_iab_IPv6_Report_r16_11,
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
		"iab-IPv6-Report-r16"
		},
};
static const int asn_MAP_NR_iab_IP_Report_r16_oms_9[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_NR_iab_IP_Report_r16_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_iab_IP_Report_r16_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* iab-IPv4-AddressReport-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* iab-IPv6-Report-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_iab_IP_Report_r16_specs_9 = {
	sizeof(struct NR_IABOtherInformation_r16_IEs__ip_InfoType_r16__iab_IP_Report_r16),
	offsetof(struct NR_IABOtherInformation_r16_IEs__ip_InfoType_r16__iab_IP_Report_r16, _asn_ctx),
	asn_MAP_NR_iab_IP_Report_r16_tag2el_9,
	2,	/* Count of tags in the map */
	asn_MAP_NR_iab_IP_Report_r16_oms_9,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_iab_IP_Report_r16_9 = {
	"iab-IP-Report-r16",
	"iab-IP-Report-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_iab_IP_Report_r16_tags_9,
	sizeof(asn_DEF_NR_iab_IP_Report_r16_tags_9)
		/sizeof(asn_DEF_NR_iab_IP_Report_r16_tags_9[0]) - 1, /* 1 */
	asn_DEF_NR_iab_IP_Report_r16_tags_9,	/* Same as above */
	sizeof(asn_DEF_NR_iab_IP_Report_r16_tags_9)
		/sizeof(asn_DEF_NR_iab_IP_Report_r16_tags_9[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_iab_IP_Report_r16_9,
	2,	/* Elements count */
	&asn_SPC_NR_iab_IP_Report_r16_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_ip_InfoType_r16_2[] = {
	{ ATF_POINTER, 0, offsetof(struct NR_IABOtherInformation_r16_IEs__ip_InfoType_r16, choice.iab_IP_Request_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_NR_iab_IP_Request_r16_3,
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
		"iab-IP-Request-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_IABOtherInformation_r16_IEs__ip_InfoType_r16, choice.iab_IP_Report_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_NR_iab_IP_Report_r16_9,
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
		"iab-IP-Report-r16"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NR_ip_InfoType_r16_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* iab-IP-Request-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* iab-IP-Report-r16 */
};
static asn_CHOICE_specifics_t asn_SPC_NR_ip_InfoType_r16_specs_2 = {
	sizeof(struct NR_IABOtherInformation_r16_IEs__ip_InfoType_r16),
	offsetof(struct NR_IABOtherInformation_r16_IEs__ip_InfoType_r16, _asn_ctx),
	offsetof(struct NR_IABOtherInformation_r16_IEs__ip_InfoType_r16, present),
	sizeof(((struct NR_IABOtherInformation_r16_IEs__ip_InfoType_r16 *)0)->present),
	asn_MAP_NR_ip_InfoType_r16_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ip_InfoType_r16_2 = {
	"ip-InfoType-r16",
	"ip-InfoType-r16",
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
		&asn_PER_type_NR_ip_InfoType_r16_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_NR_ip_InfoType_r16_2,
	2,	/* Elements count */
	&asn_SPC_NR_ip_InfoType_r16_specs_2	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_NR_nonCriticalExtension_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_nonCriticalExtension_specs_17 = {
	sizeof(struct NR_IABOtherInformation_r16_IEs__nonCriticalExtension),
	offsetof(struct NR_IABOtherInformation_r16_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_nonCriticalExtension_17 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_nonCriticalExtension_tags_17,
	sizeof(asn_DEF_NR_nonCriticalExtension_tags_17)
		/sizeof(asn_DEF_NR_nonCriticalExtension_tags_17[0]) - 1, /* 1 */
	asn_DEF_NR_nonCriticalExtension_tags_17,	/* Same as above */
	sizeof(asn_DEF_NR_nonCriticalExtension_tags_17)
		/sizeof(asn_DEF_NR_nonCriticalExtension_tags_17[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	0, 0,	/* No members */
	&asn_SPC_NR_nonCriticalExtension_specs_17	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_IABOtherInformation_r16_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_IABOtherInformation_r16_IEs, ip_InfoType_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_ip_InfoType_r16_2,
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
		"ip-InfoType-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_IABOtherInformation_r16_IEs, lateNonCriticalExtension),
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
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_IABOtherInformation_r16_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_NR_nonCriticalExtension_17,
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
static const int asn_MAP_NR_IABOtherInformation_r16_IEs_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_NR_IABOtherInformation_r16_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_IABOtherInformation_r16_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ip-InfoType-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_IABOtherInformation_r16_IEs_specs_1 = {
	sizeof(struct NR_IABOtherInformation_r16_IEs),
	offsetof(struct NR_IABOtherInformation_r16_IEs, _asn_ctx),
	asn_MAP_NR_IABOtherInformation_r16_IEs_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_NR_IABOtherInformation_r16_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_IABOtherInformation_r16_IEs = {
	"IABOtherInformation-r16-IEs",
	"IABOtherInformation-r16-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_IABOtherInformation_r16_IEs_tags_1,
	sizeof(asn_DEF_NR_IABOtherInformation_r16_IEs_tags_1)
		/sizeof(asn_DEF_NR_IABOtherInformation_r16_IEs_tags_1[0]), /* 1 */
	asn_DEF_NR_IABOtherInformation_r16_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_IABOtherInformation_r16_IEs_tags_1)
		/sizeof(asn_DEF_NR_IABOtherInformation_r16_IEs_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_IABOtherInformation_r16_IEs_1,
	3,	/* Elements count */
	&asn_SPC_NR_IABOtherInformation_r16_IEs_specs_1	/* Additional specs */
};

