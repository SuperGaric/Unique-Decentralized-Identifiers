/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_MeasResultSCG_FailureMRDC_r15_H_
#define	_LTE_MeasResultSCG_FailureMRDC_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_MeasResultList3EUTRA-r15.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_LocationInfo_r10;
struct LTE_LogMeasResultListBT_r15;
struct LTE_LogMeasResultListWLAN_r15;

/* LTE_MeasResultSCG-FailureMRDC-r15 */
typedef struct LTE_MeasResultSCG_FailureMRDC_r15 {
	LTE_MeasResultList3EUTRA_r15_t	 measResultFreqListEUTRA_r15;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_MeasResultSCG_FailureMRDC_r15__ext1 {
		struct LTE_LocationInfo_r10	*locationInfo_r16;	/* OPTIONAL */
		struct LTE_LogMeasResultListBT_r15	*logMeasResultListBT_r16;	/* OPTIONAL */
		struct LTE_LogMeasResultListWLAN_r15	*logMeasResultListWLAN_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_MeasResultSCG_FailureMRDC_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_MeasResultSCG_FailureMRDC_r15;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_LocationInfo-r10.h"
#include "LTE_LogMeasResultListBT-r15.h"
#include "LTE_LogMeasResultListWLAN-r15.h"

#endif	/* _LTE_MeasResultSCG_FailureMRDC_r15_H_ */
#include <asn_internal.h>