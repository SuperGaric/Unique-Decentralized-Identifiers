/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-Broadcast-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#include "LPP_AssistanceDataSIBelement-r15.h"

#include "LPP_CipheringKeyData-r15.h"
#include "LPP_SegmentationInfo-r15.h"
static int
memb_LPP_valueTag_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
static asn_per_constraints_t asn_PER_memb_LPP_valueTag_r15_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  63 }	/* (0..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_LPP_AssistanceDataSIBelement_r15_1[] = {
	{ ATF_POINTER, 4, offsetof(struct LPP_AssistanceDataSIBelement_r15, valueTag_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_LPP_valueTag_r15_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_LPP_valueTag_r15_constraint_1
		},
		0, 0, /* No default value */
		"valueTag-r15"
		},
	{ ATF_POINTER, 3, offsetof(struct LPP_AssistanceDataSIBelement_r15, expirationTime_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UTCTime,
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
		"expirationTime-r15"
		},
	{ ATF_POINTER, 2, offsetof(struct LPP_AssistanceDataSIBelement_r15, cipheringKeyData_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_CipheringKeyData_r15,
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
		"cipheringKeyData-r15"
		},
	{ ATF_POINTER, 1, offsetof(struct LPP_AssistanceDataSIBelement_r15, segmentationInfo_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LPP_SegmentationInfo_r15,
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
		"segmentationInfo-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LPP_AssistanceDataSIBelement_r15, assistanceDataElement_r15),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
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
		"assistanceDataElement-r15"
		},
};
static const int asn_MAP_LPP_AssistanceDataSIBelement_r15_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_LPP_AssistanceDataSIBelement_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LPP_AssistanceDataSIBelement_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* valueTag-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* expirationTime-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* cipheringKeyData-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* segmentationInfo-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* assistanceDataElement-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LPP_AssistanceDataSIBelement_r15_specs_1 = {
	sizeof(struct LPP_AssistanceDataSIBelement_r15),
	offsetof(struct LPP_AssistanceDataSIBelement_r15, _asn_ctx),
	asn_MAP_LPP_AssistanceDataSIBelement_r15_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_LPP_AssistanceDataSIBelement_r15_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LPP_AssistanceDataSIBelement_r15 = {
	"AssistanceDataSIBelement-r15",
	"AssistanceDataSIBelement-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_LPP_AssistanceDataSIBelement_r15_tags_1,
	sizeof(asn_DEF_LPP_AssistanceDataSIBelement_r15_tags_1)
		/sizeof(asn_DEF_LPP_AssistanceDataSIBelement_r15_tags_1[0]), /* 1 */
	asn_DEF_LPP_AssistanceDataSIBelement_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_LPP_AssistanceDataSIBelement_r15_tags_1)
		/sizeof(asn_DEF_LPP_AssistanceDataSIBelement_r15_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_LPP_AssistanceDataSIBelement_r15_1,
	5,	/* Elements count */
	&asn_SPC_LPP_AssistanceDataSIBelement_r15_specs_1	/* Additional specs */
};

