/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair3/NGAP/MESSAGES/ASN1/ngap-15.8.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -no-gen-example -fno-include-deps -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/NGAP/MESSAGES`
 */

#ifndef	_NGAP_HandoverPreparationUnsuccessfulTransfer_H_
#define	_NGAP_HandoverPreparationUnsuccessfulTransfer_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NGAP_Cause.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NGAP_ProtocolExtensionContainer;

/* NGAP_HandoverPreparationUnsuccessfulTransfer */
typedef struct NGAP_HandoverPreparationUnsuccessfulTransfer {
	NGAP_Cause_t	 cause;
	struct NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_HandoverPreparationUnsuccessfulTransfer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_HandoverPreparationUnsuccessfulTransfer;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_HandoverPreparationUnsuccessfulTransfer_H_ */
#include <asn_internal.h>
