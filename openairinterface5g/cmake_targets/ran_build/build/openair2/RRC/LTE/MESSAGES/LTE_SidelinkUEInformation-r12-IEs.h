/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_SidelinkUEInformation_r12_IEs_H_
#define	_LTE_SidelinkUEInformation_r12_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_ARFCN-ValueEUTRA-r9.h"
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SidelinkUEInformation_r12_IEs__discRxInterest_r12 {
	LTE_SidelinkUEInformation_r12_IEs__discRxInterest_r12_true	= 0
} e_LTE_SidelinkUEInformation_r12_IEs__discRxInterest_r12;

/* Forward declarations */
struct LTE_SL_CommTxResourceReq_r12;
struct LTE_SidelinkUEInformation_v1310_IEs;

/* LTE_SidelinkUEInformation-r12-IEs */
typedef struct LTE_SidelinkUEInformation_r12_IEs {
	LTE_ARFCN_ValueEUTRA_r9_t	*commRxInterestedFreq_r12;	/* OPTIONAL */
	struct LTE_SL_CommTxResourceReq_r12	*commTxResourceReq_r12;	/* OPTIONAL */
	long	*discRxInterest_r12;	/* OPTIONAL */
	long	*discTxResourceReq_r12;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct LTE_SidelinkUEInformation_v1310_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SidelinkUEInformation_r12_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_discRxInterest_r12_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SidelinkUEInformation_r12_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SidelinkUEInformation_r12_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SidelinkUEInformation_r12_IEs_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_SL-CommTxResourceReq-r12.h"
#include "LTE_SidelinkUEInformation-v1310-IEs.h"

#endif	/* _LTE_SidelinkUEInformation_r12_IEs_H_ */
#include <asn_internal.h>
