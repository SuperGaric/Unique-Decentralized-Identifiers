/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#include "LTE_FreqPriorityEUTRA-r12.h"

asn_TYPE_member_t asn_MBR_LTE_FreqPriorityEUTRA_r12_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_FreqPriorityEUTRA_r12, carrierFreq_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ARFCN_ValueEUTRA_r9,
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
		"carrierFreq-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_FreqPriorityEUTRA_r12, cellReselectionPriority_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_CellReselectionPriority,
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
		"cellReselectionPriority-r12"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_FreqPriorityEUTRA_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_FreqPriorityEUTRA_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierFreq-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* cellReselectionPriority-r12 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_FreqPriorityEUTRA_r12_specs_1 = {
	sizeof(struct LTE_FreqPriorityEUTRA_r12),
	offsetof(struct LTE_FreqPriorityEUTRA_r12, _asn_ctx),
	asn_MAP_LTE_FreqPriorityEUTRA_r12_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_FreqPriorityEUTRA_r12 = {
	"FreqPriorityEUTRA-r12",
	"FreqPriorityEUTRA-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_FreqPriorityEUTRA_r12_tags_1,
	sizeof(asn_DEF_LTE_FreqPriorityEUTRA_r12_tags_1)
		/sizeof(asn_DEF_LTE_FreqPriorityEUTRA_r12_tags_1[0]), /* 1 */
	asn_DEF_LTE_FreqPriorityEUTRA_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_FreqPriorityEUTRA_r12_tags_1)
		/sizeof(asn_DEF_LTE_FreqPriorityEUTRA_r12_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LTE_FreqPriorityEUTRA_r12_1,
	2,	/* Elements count */
	&asn_SPC_LTE_FreqPriorityEUTRA_r12_specs_1	/* Additional specs */
};

