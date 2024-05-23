/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_SI_SchedulingInfo_v1700_H_
#define	_NR_SI_SchedulingInfo_v1700_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_SI_RequestConfig;
struct NR_SchedulingInfo2_r17;

/* NR_SI-SchedulingInfo-v1700 */
typedef struct NR_SI_SchedulingInfo_v1700 {
	struct NR_SI_SchedulingInfo_v1700__schedulingInfoList2_r17 {
		A_SEQUENCE_OF(struct NR_SchedulingInfo2_r17) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} schedulingInfoList2_r17;
	struct NR_SI_RequestConfig	*si_RequestConfigRedCap_r17;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_SI_SchedulingInfo_v1700_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_SI_SchedulingInfo_v1700;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_SI_SchedulingInfo_v1700_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_SI_SchedulingInfo_v1700_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_SI-RequestConfig.h"
#include "NR_SchedulingInfo2-r17.h"

#endif	/* _NR_SI_SchedulingInfo_v1700_H_ */
#include <asn_internal.h>
