/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair3/NGAP/MESSAGES/ASN1/ngap-15.8.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -no-gen-example -fno-include-deps -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/NGAP/MESSAGES`
 */

#ifndef	_NGAP_QosFlowSetupResponseListSURes_H_
#define	_NGAP_QosFlowSetupResponseListSURes_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NGAP_QosFlowSetupResponseItemSURes;

/* NGAP_QosFlowSetupResponseListSURes */
typedef struct NGAP_QosFlowSetupResponseListSURes {
	A_SEQUENCE_OF(struct NGAP_QosFlowSetupResponseItemSURes) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_QosFlowSetupResponseListSURes_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_QosFlowSetupResponseListSURes;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_QosFlowSetupResponseListSURes_H_ */
#include <asn_internal.h>