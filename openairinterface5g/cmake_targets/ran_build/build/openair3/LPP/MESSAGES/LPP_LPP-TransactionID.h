/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_LPP_TransactionID_H_
#define	_LPP_LPP_TransactionID_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LPP_Initiator.h"
#include "LPP_TransactionNumber.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LPP_LPP-TransactionID */
typedef struct LPP_LPP_TransactionID {
	LPP_Initiator_t	 initiator;
	LPP_TransactionNumber_t	 transactionNumber;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_LPP_TransactionID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LPP_LPP_TransactionID;
extern asn_SEQUENCE_specifics_t asn_SPC_LPP_LPP_TransactionID_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_LPP_TransactionID_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_LPP_TransactionID_H_ */
#include <asn_internal.h>
