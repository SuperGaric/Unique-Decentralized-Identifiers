/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_LPP_Message_H_
#define	_LPP_LPP_Message_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include "LPP_SequenceNumber.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LPP_LPP_TransactionID;
struct LPP_Acknowledgement;
struct LPP_LPP_MessageBody;

/* LPP_LPP-Message */
typedef struct LPP_LPP_Message {
	struct LPP_LPP_TransactionID	*transactionID;	/* OPTIONAL */
	BOOLEAN_t	 endTransaction;
	LPP_SequenceNumber_t	*sequenceNumber;	/* OPTIONAL */
	struct LPP_Acknowledgement	*acknowledgement;	/* OPTIONAL */
	struct LPP_LPP_MessageBody	*lpp_MessageBody;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_LPP_Message_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LPP_LPP_Message;

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_LPP_Message_H_ */
#include <asn_internal.h>
