/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_MBMS_SessionInfoList_r9_H_
#define	_LTE_MBMS_SessionInfoList_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_MBMS_SessionInfo_r9;

/* LTE_MBMS-SessionInfoList-r9 */
typedef struct LTE_MBMS_SessionInfoList_r9 {
	A_SEQUENCE_OF(struct LTE_MBMS_SessionInfo_r9) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_MBMS_SessionInfoList_r9_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_MBMS_SessionInfoList_r9;
extern asn_SET_OF_specifics_t asn_SPC_LTE_MBMS_SessionInfoList_r9_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_MBMS_SessionInfoList_r9_1[1];
extern asn_per_constraints_t asn_PER_type_LTE_MBMS_SessionInfoList_r9_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_MBMS-SessionInfo-r9.h"

#endif	/* _LTE_MBMS_SessionInfoList_r9_H_ */
#include <asn_internal.h>