/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_UL_CCCH_Message_H_
#define	_LTE_UL_CCCH_Message_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_UL-CCCH-MessageType.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_UL-CCCH-Message */
typedef struct LTE_UL_CCCH_Message {
	LTE_UL_CCCH_MessageType_t	 message;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_UL_CCCH_Message_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_UL_CCCH_Message;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_UL_CCCH_Message_H_ */
#include <asn_internal.h>
