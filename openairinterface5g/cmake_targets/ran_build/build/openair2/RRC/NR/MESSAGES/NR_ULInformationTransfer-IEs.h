/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_ULInformationTransfer_IEs_H_
#define	_NR_ULInformationTransfer_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_DedicatedNAS-Message.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_ULInformationTransfer_v1700_IEs;

/* NR_ULInformationTransfer-IEs */
typedef struct NR_ULInformationTransfer_IEs {
	NR_DedicatedNAS_Message_t	*dedicatedNAS_Message;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct NR_ULInformationTransfer_v1700_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_ULInformationTransfer_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_ULInformationTransfer_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_ULInformationTransfer_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_ULInformationTransfer_IEs_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_ULInformationTransfer-v1700-IEs.h"

#endif	/* _NR_ULInformationTransfer_IEs_H_ */
#include <asn_internal.h>
