/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_MeasReportAppLayer_r15_IEs_H_
#define	_LTE_MeasReportAppLayer_r15_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_MeasReportAppLayer_r15_IEs__serviceType_r15 {
	LTE_MeasReportAppLayer_r15_IEs__serviceType_r15_qoe	= 0,
	LTE_MeasReportAppLayer_r15_IEs__serviceType_r15_qoemtsi	= 1,
	LTE_MeasReportAppLayer_r15_IEs__serviceType_r15_spare6	= 2,
	LTE_MeasReportAppLayer_r15_IEs__serviceType_r15_spare5	= 3,
	LTE_MeasReportAppLayer_r15_IEs__serviceType_r15_spare4	= 4,
	LTE_MeasReportAppLayer_r15_IEs__serviceType_r15_spare3	= 5,
	LTE_MeasReportAppLayer_r15_IEs__serviceType_r15_spare2	= 6,
	LTE_MeasReportAppLayer_r15_IEs__serviceType_r15_spare1	= 7
} e_LTE_MeasReportAppLayer_r15_IEs__serviceType_r15;

/* Forward declarations */
struct LTE_MeasReportAppLayer_v1590_IEs;

/* LTE_MeasReportAppLayer-r15-IEs */
typedef struct LTE_MeasReportAppLayer_r15_IEs {
	OCTET_STRING_t	*measReportAppLayerContainer_r15;	/* OPTIONAL */
	long	*serviceType_r15;	/* OPTIONAL */
	struct LTE_MeasReportAppLayer_v1590_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_MeasReportAppLayer_r15_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_serviceType_r15_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_MeasReportAppLayer_r15_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_MeasReportAppLayer_r15_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_MeasReportAppLayer_r15_IEs_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_MeasReportAppLayer-v1590-IEs.h"

#endif	/* _LTE_MeasReportAppLayer_r15_IEs_H_ */
#include <asn_internal.h>
