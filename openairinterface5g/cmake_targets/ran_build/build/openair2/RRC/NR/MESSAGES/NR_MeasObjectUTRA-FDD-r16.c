/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#include "NR_MeasObjectUTRA-FDD-r16.h"

asn_TYPE_member_t asn_MBR_NR_MeasObjectUTRA_FDD_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_MeasObjectUTRA_FDD_r16, carrierFreq_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_ARFCN_ValueUTRA_FDD_r16,
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
		"carrierFreq-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_MeasObjectUTRA_FDD_r16, utra_FDD_Q_OffsetRange_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_UTRA_FDD_Q_OffsetRange_r16,
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
		"utra-FDD-Q-OffsetRange-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_MeasObjectUTRA_FDD_r16, cellsToRemoveList_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_UTRA_FDD_CellIndexList_r16,
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
		"cellsToRemoveList-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_MeasObjectUTRA_FDD_r16, cellsToAddModList_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_CellsToAddModListUTRA_FDD_r16,
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
		"cellsToAddModList-r16"
		},
};
static const int asn_MAP_NR_MeasObjectUTRA_FDD_r16_oms_1[] = { 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_NR_MeasObjectUTRA_FDD_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_MeasObjectUTRA_FDD_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierFreq-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* utra-FDD-Q-OffsetRange-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* cellsToRemoveList-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* cellsToAddModList-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_MeasObjectUTRA_FDD_r16_specs_1 = {
	sizeof(struct NR_MeasObjectUTRA_FDD_r16),
	offsetof(struct NR_MeasObjectUTRA_FDD_r16, _asn_ctx),
	asn_MAP_NR_MeasObjectUTRA_FDD_r16_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_NR_MeasObjectUTRA_FDD_r16_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_MeasObjectUTRA_FDD_r16 = {
	"MeasObjectUTRA-FDD-r16",
	"MeasObjectUTRA-FDD-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_MeasObjectUTRA_FDD_r16_tags_1,
	sizeof(asn_DEF_NR_MeasObjectUTRA_FDD_r16_tags_1)
		/sizeof(asn_DEF_NR_MeasObjectUTRA_FDD_r16_tags_1[0]), /* 1 */
	asn_DEF_NR_MeasObjectUTRA_FDD_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_MeasObjectUTRA_FDD_r16_tags_1)
		/sizeof(asn_DEF_NR_MeasObjectUTRA_FDD_r16_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NR_MeasObjectUTRA_FDD_r16_1,
	4,	/* Elements count */
	&asn_SPC_NR_MeasObjectUTRA_FDD_r16_specs_1	/* Additional specs */
};

