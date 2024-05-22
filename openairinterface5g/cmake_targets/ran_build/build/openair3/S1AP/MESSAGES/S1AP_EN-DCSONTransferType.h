/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R15/s1ap-15.6.0.asn1"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/S1AP/MESSAGES`
 */

#ifndef	_S1AP_EN_DCSONTransferType_H_
#define	_S1AP_EN_DCSONTransferType_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1AP_EN-DCTransferTypeRequest.h"
#include "S1AP_EN-DCTransferTypeReply.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_EN_DCSONTransferType_PR {
	S1AP_EN_DCSONTransferType_PR_NOTHING,	/* No components present */
	S1AP_EN_DCSONTransferType_PR_request,
	S1AP_EN_DCSONTransferType_PR_reply
	/* Extensions may appear below */
	
} S1AP_EN_DCSONTransferType_PR;

/* S1AP_EN-DCSONTransferType */
typedef struct S1AP_EN_DCSONTransferType {
	S1AP_EN_DCSONTransferType_PR present;
	union S1AP_EN_DCSONTransferType_u {
		S1AP_EN_DCTransferTypeRequest_t	 request;
		S1AP_EN_DCTransferTypeReply_t	 reply;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_EN_DCSONTransferType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_EN_DCSONTransferType;
extern asn_CHOICE_specifics_t asn_SPC_S1AP_EN_DCSONTransferType_specs_1;
extern asn_TYPE_member_t asn_MBR_S1AP_EN_DCSONTransferType_1[2];
extern asn_per_constraints_t asn_PER_type_S1AP_EN_DCSONTransferType_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_EN_DCSONTransferType_H_ */
#include <asn_internal.h>
