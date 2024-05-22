/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair3/NGAP/MESSAGES/ASN1/ngap-15.8.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -no-gen-example -fno-include-deps -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/NGAP/MESSAGES`
 */

#include "NGAP_PacketDelayBudget.h"

int
NGAP_PacketDelayBudget_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 1023L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using NativeInteger,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_NGAP_PacketDelayBudget_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  10,  10,  0,  1023 }	/* (0..1023,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const ber_tlv_tag_t asn_DEF_NGAP_PacketDelayBudget_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (2 << 2))
};
asn_TYPE_descriptor_t asn_DEF_NGAP_PacketDelayBudget = {
	"PacketDelayBudget",
	"PacketDelayBudget",
	&asn_OP_NativeInteger,
	asn_DEF_NGAP_PacketDelayBudget_tags_1,
	sizeof(asn_DEF_NGAP_PacketDelayBudget_tags_1)
		/sizeof(asn_DEF_NGAP_PacketDelayBudget_tags_1[0]), /* 1 */
	asn_DEF_NGAP_PacketDelayBudget_tags_1,	/* Same as above */
	sizeof(asn_DEF_NGAP_PacketDelayBudget_tags_1)
		/sizeof(asn_DEF_NGAP_PacketDelayBudget_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NGAP_PacketDelayBudget_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NGAP_PacketDelayBudget_constraint
	},
	0, 0,	/* No members */
	0	/* No specifics */
};

