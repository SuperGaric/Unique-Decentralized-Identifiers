/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair3/NGAP/MESSAGES/ASN1/ngap-15.8.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -no-gen-example -fno-include-deps -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/NGAP/MESSAGES`
 */

#include "NGAP_PDUSessionResourceModifyConfirmTransfer.h"

#include "NGAP_UPTransportLayerInformationPairList.h"
#include "NGAP_QosFlowListWithCause.h"
#include "NGAP_ProtocolExtensionContainer.h"
static asn_TYPE_member_t asn_MBR_NGAP_PDUSessionResourceModifyConfirmTransfer_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NGAP_PDUSessionResourceModifyConfirmTransfer, qosFlowModifyConfirmList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_QosFlowModifyConfirmList,
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
		"qosFlowModifyConfirmList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NGAP_PDUSessionResourceModifyConfirmTransfer, uLNGU_UP_TNLInformation),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NGAP_UPTransportLayerInformation,
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
		"uLNGU-UP-TNLInformation"
		},
	{ ATF_POINTER, 3, offsetof(struct NGAP_PDUSessionResourceModifyConfirmTransfer, additionalNG_UUPTNLInformation),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_UPTransportLayerInformationPairList,
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
		"additionalNG-UUPTNLInformation"
		},
	{ ATF_POINTER, 2, offsetof(struct NGAP_PDUSessionResourceModifyConfirmTransfer, qosFlowFailedToModifyList),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_QosFlowListWithCause,
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
		"qosFlowFailedToModifyList"
		},
	{ ATF_POINTER, 1, offsetof(struct NGAP_PDUSessionResourceModifyConfirmTransfer, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_ProtocolExtensionContainer_6861P98,
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
static const int asn_MAP_NGAP_PDUSessionResourceModifyConfirmTransfer_oms_1[] = { 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_NGAP_PDUSessionResourceModifyConfirmTransfer_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NGAP_PDUSessionResourceModifyConfirmTransfer_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* qosFlowModifyConfirmList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* uLNGU-UP-TNLInformation */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* additionalNG-UUPTNLInformation */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* qosFlowFailedToModifyList */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_NGAP_PDUSessionResourceModifyConfirmTransfer_specs_1 = {
	sizeof(struct NGAP_PDUSessionResourceModifyConfirmTransfer),
	offsetof(struct NGAP_PDUSessionResourceModifyConfirmTransfer, _asn_ctx),
	asn_MAP_NGAP_PDUSessionResourceModifyConfirmTransfer_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_NGAP_PDUSessionResourceModifyConfirmTransfer_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NGAP_PDUSessionResourceModifyConfirmTransfer = {
	"PDUSessionResourceModifyConfirmTransfer",
	"PDUSessionResourceModifyConfirmTransfer",
	&asn_OP_SEQUENCE,
	asn_DEF_NGAP_PDUSessionResourceModifyConfirmTransfer_tags_1,
	sizeof(asn_DEF_NGAP_PDUSessionResourceModifyConfirmTransfer_tags_1)
		/sizeof(asn_DEF_NGAP_PDUSessionResourceModifyConfirmTransfer_tags_1[0]), /* 1 */
	asn_DEF_NGAP_PDUSessionResourceModifyConfirmTransfer_tags_1,	/* Same as above */
	sizeof(asn_DEF_NGAP_PDUSessionResourceModifyConfirmTransfer_tags_1)
		/sizeof(asn_DEF_NGAP_PDUSessionResourceModifyConfirmTransfer_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NGAP_PDUSessionResourceModifyConfirmTransfer_1,
	5,	/* Elements count */
	&asn_SPC_NGAP_PDUSessionResourceModifyConfirmTransfer_specs_1	/* Additional specs */
};

