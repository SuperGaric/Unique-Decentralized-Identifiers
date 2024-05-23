/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair3/NGAP/MESSAGES/ASN1/ngap-15.8.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -no-gen-example -fno-include-deps -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/NGAP/MESSAGES`
 */

#include "NGAP_PDUSessionResourceModifyRequestTransfer.h"

static asn_TYPE_member_t asn_MBR_NGAP_PDUSessionResourceModifyRequestTransfer_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NGAP_PDUSessionResourceModifyRequestTransfer, protocolIEs),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_ProtocolIE_Container_6810P78,
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
		"protocolIEs"
		},
};
static const ber_tlv_tag_t asn_DEF_NGAP_PDUSessionResourceModifyRequestTransfer_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NGAP_PDUSessionResourceModifyRequestTransfer_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* protocolIEs */
};
static asn_SEQUENCE_specifics_t asn_SPC_NGAP_PDUSessionResourceModifyRequestTransfer_specs_1 = {
	sizeof(struct NGAP_PDUSessionResourceModifyRequestTransfer),
	offsetof(struct NGAP_PDUSessionResourceModifyRequestTransfer, _asn_ctx),
	asn_MAP_NGAP_PDUSessionResourceModifyRequestTransfer_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NGAP_PDUSessionResourceModifyRequestTransfer = {
	"PDUSessionResourceModifyRequestTransfer",
	"PDUSessionResourceModifyRequestTransfer",
	&asn_OP_SEQUENCE,
	asn_DEF_NGAP_PDUSessionResourceModifyRequestTransfer_tags_1,
	sizeof(asn_DEF_NGAP_PDUSessionResourceModifyRequestTransfer_tags_1)
		/sizeof(asn_DEF_NGAP_PDUSessionResourceModifyRequestTransfer_tags_1[0]), /* 1 */
	asn_DEF_NGAP_PDUSessionResourceModifyRequestTransfer_tags_1,	/* Same as above */
	sizeof(asn_DEF_NGAP_PDUSessionResourceModifyRequestTransfer_tags_1)
		/sizeof(asn_DEF_NGAP_PDUSessionResourceModifyRequestTransfer_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NGAP_PDUSessionResourceModifyRequestTransfer_1,
	1,	/* Elements count */
	&asn_SPC_NGAP_PDUSessionResourceModifyRequestTransfer_specs_1	/* Additional specs */
};

