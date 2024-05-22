/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_DLInformationTransfer_v1610_IEs_H_
#define	_NR_DLInformationTransfer_v1610_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_ReferenceTimeInfo_r16;
struct NR_DLInformationTransfer_v1700_IEs;

/* NR_DLInformationTransfer-v1610-IEs */
typedef struct NR_DLInformationTransfer_v1610_IEs {
	struct NR_ReferenceTimeInfo_r16	*referenceTimeInfo_r16;	/* OPTIONAL */
	struct NR_DLInformationTransfer_v1700_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_DLInformationTransfer_v1610_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_DLInformationTransfer_v1610_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_DLInformationTransfer_v1610_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_DLInformationTransfer_v1610_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_ReferenceTimeInfo-r16.h"
#include "NR_DLInformationTransfer-v1700-IEs.h"

#endif	/* _NR_DLInformationTransfer_v1610_IEs_H_ */
#include <asn_internal.h>
