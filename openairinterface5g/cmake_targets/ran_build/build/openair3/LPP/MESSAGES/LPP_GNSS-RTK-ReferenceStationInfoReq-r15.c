/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#include "LPP_GNSS-RTK-ReferenceStationInfoReq-r15.h"

#include "LPP_GNSS-ReferenceStationID-r15.h"
asn_TYPE_member_t asn_MBR_LPP_GNSS_RTK_ReferenceStationInfoReq_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_GNSS_RTK_ReferenceStationInfoReq_r15, antennaDescriptionReq_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
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
		"antennaDescriptionReq-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_GNSS_RTK_ReferenceStationInfoReq_r15, antennaHeightReq_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
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
		"antennaHeightReq-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_GNSS_RTK_ReferenceStationInfoReq_r15, physicalReferenceStationReq_r15),
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
		"physicalReferenceStationReq-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct LPP_GNSS_RTK_ReferenceStationInfoReq_r15, stationID_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_GNSS_ReferenceStationID_r15,
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
		"stationID-r15"
		},
};
static const int asn_MAP_LPP_GNSS_RTK_ReferenceStationInfoReq_r15_oms_1[] = { 3 };
static const ber_tlv_tag_t asn_DEF_LPP_GNSS_RTK_ReferenceStationInfoReq_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LPP_GNSS_RTK_ReferenceStationInfoReq_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* antennaDescriptionReq-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* antennaHeightReq-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* physicalReferenceStationReq-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* stationID-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_LPP_GNSS_RTK_ReferenceStationInfoReq_r15_specs_1 = {
	sizeof(struct LPP_GNSS_RTK_ReferenceStationInfoReq_r15),
	offsetof(struct LPP_GNSS_RTK_ReferenceStationInfoReq_r15, _asn_ctx),
	asn_MAP_LPP_GNSS_RTK_ReferenceStationInfoReq_r15_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_LPP_GNSS_RTK_ReferenceStationInfoReq_r15_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LPP_GNSS_RTK_ReferenceStationInfoReq_r15 = {
	"GNSS-RTK-ReferenceStationInfoReq-r15",
	"GNSS-RTK-ReferenceStationInfoReq-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_LPP_GNSS_RTK_ReferenceStationInfoReq_r15_tags_1,
	sizeof(asn_DEF_LPP_GNSS_RTK_ReferenceStationInfoReq_r15_tags_1)
		/sizeof(asn_DEF_LPP_GNSS_RTK_ReferenceStationInfoReq_r15_tags_1[0]), /* 1 */
	asn_DEF_LPP_GNSS_RTK_ReferenceStationInfoReq_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_LPP_GNSS_RTK_ReferenceStationInfoReq_r15_tags_1)
		/sizeof(asn_DEF_LPP_GNSS_RTK_ReferenceStationInfoReq_r15_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LPP_GNSS_RTK_ReferenceStationInfoReq_r15_1,
	4,	/* Elements count */
	&asn_SPC_LPP_GNSS_RTK_ReferenceStationInfoReq_r15_specs_1	/* Additional specs */
};

