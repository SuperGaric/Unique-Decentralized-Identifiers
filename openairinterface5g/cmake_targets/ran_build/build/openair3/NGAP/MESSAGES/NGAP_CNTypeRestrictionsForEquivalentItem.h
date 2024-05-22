/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair3/NGAP/MESSAGES/ASN1/ngap-15.8.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -no-gen-example -fno-include-deps -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/NGAP/MESSAGES`
 */

#ifndef	_NGAP_CNTypeRestrictionsForEquivalentItem_H_
#define	_NGAP_CNTypeRestrictionsForEquivalentItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NGAP_PLMNIdentity.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_CNTypeRestrictionsForEquivalentItem__cn_Type {
	NGAP_CNTypeRestrictionsForEquivalentItem__cn_Type_epc_forbidden	= 0,
	NGAP_CNTypeRestrictionsForEquivalentItem__cn_Type_fiveGC_forbidden	= 1
	/*
	 * Enumeration is extensible
	 */
} e_NGAP_CNTypeRestrictionsForEquivalentItem__cn_Type;

/* Forward declarations */
struct NGAP_ProtocolExtensionContainer;

/* NGAP_CNTypeRestrictionsForEquivalentItem */
typedef struct NGAP_CNTypeRestrictionsForEquivalentItem {
	NGAP_PLMNIdentity_t	 plmnIdentity;
	long	 cn_Type;
	struct NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_CNTypeRestrictionsForEquivalentItem_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NGAP_cn_Type_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_CNTypeRestrictionsForEquivalentItem;
extern asn_SEQUENCE_specifics_t asn_SPC_NGAP_CNTypeRestrictionsForEquivalentItem_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_CNTypeRestrictionsForEquivalentItem_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_CNTypeRestrictionsForEquivalentItem_H_ */
#include <asn_internal.h>
