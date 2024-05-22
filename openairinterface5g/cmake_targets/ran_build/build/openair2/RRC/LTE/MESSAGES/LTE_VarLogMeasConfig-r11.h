/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-UE-Variables"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_VarLogMeasConfig_r11_H_
#define	_LTE_VarLogMeasConfig_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_LoggingDuration-r10.h"
#include "LTE_LoggingInterval-r10.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_AreaConfiguration_r10;
struct LTE_AreaConfiguration_v1130;

/* LTE_VarLogMeasConfig-r11 */
typedef struct LTE_VarLogMeasConfig_r11 {
	struct LTE_AreaConfiguration_r10	*areaConfiguration_r10;	/* OPTIONAL */
	struct LTE_AreaConfiguration_v1130	*areaConfiguration_v1130;	/* OPTIONAL */
	LTE_LoggingDuration_r10_t	 loggingDuration_r10;
	LTE_LoggingInterval_r10_t	 loggingInterval_r10;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_VarLogMeasConfig_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_VarLogMeasConfig_r11;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_AreaConfiguration-r10.h"
#include "LTE_AreaConfiguration-v1130.h"

#endif	/* _LTE_VarLogMeasConfig_r11_H_ */
#include <asn_internal.h>
