/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair2/E1AP/MESSAGES/ASN.1/38463-g80.R16.78.0.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-JER -no-gen-BER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/E1AP/MESSAGES`
 */

#include "E1AP_Endpoint-IP-address-and-port.h"

#include "E1AP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_E1AP_Endpoint_IP_address_and_port_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E1AP_Endpoint_IP_address_and_port, endpoint_IP_Address),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E1AP_TransportLayerAddress,
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
		"endpoint-IP-Address"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E1AP_Endpoint_IP_address_and_port, portNumber),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E1AP_PortNumber,
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
		"portNumber"
		},
	{ ATF_POINTER, 1, offsetof(struct E1AP_Endpoint_IP_address_and_port, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E1AP_ProtocolExtensionContainer_4961P53,
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
static const int asn_MAP_E1AP_Endpoint_IP_address_and_port_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_E1AP_Endpoint_IP_address_and_port_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E1AP_Endpoint_IP_address_and_port_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* endpoint-IP-Address */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* portNumber */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_E1AP_Endpoint_IP_address_and_port_specs_1 = {
	sizeof(struct E1AP_Endpoint_IP_address_and_port),
	offsetof(struct E1AP_Endpoint_IP_address_and_port, _asn_ctx),
	asn_MAP_E1AP_Endpoint_IP_address_and_port_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_E1AP_Endpoint_IP_address_and_port_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E1AP_Endpoint_IP_address_and_port = {
	"Endpoint-IP-address-and-port",
	"Endpoint-IP-address-and-port",
	&asn_OP_SEQUENCE,
	asn_DEF_E1AP_Endpoint_IP_address_and_port_tags_1,
	sizeof(asn_DEF_E1AP_Endpoint_IP_address_and_port_tags_1)
		/sizeof(asn_DEF_E1AP_Endpoint_IP_address_and_port_tags_1[0]), /* 1 */
	asn_DEF_E1AP_Endpoint_IP_address_and_port_tags_1,	/* Same as above */
	sizeof(asn_DEF_E1AP_Endpoint_IP_address_and_port_tags_1)
		/sizeof(asn_DEF_E1AP_Endpoint_IP_address_and_port_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_E1AP_Endpoint_IP_address_and_port_1,
	3,	/* Elements count */
	&asn_SPC_E1AP_Endpoint_IP_address_and_port_specs_1	/* Additional specs */
};

