/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-UE-Variables"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_VarMeasConfigSL_r16_H_
#define	_NR_VarMeasConfigSL_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_SL_MeasIdList_r16;
struct NR_SL_MeasObjectList_r16;
struct NR_SL_ReportConfigList_r16;
struct NR_SL_QuantityConfig_r16;

/* NR_VarMeasConfigSL-r16 */
typedef struct NR_VarMeasConfigSL_r16 {
	struct NR_SL_MeasIdList_r16	*sl_MeasIdList_r16;	/* OPTIONAL */
	struct NR_SL_MeasObjectList_r16	*sl_MeasObjectList_r16;	/* OPTIONAL */
	struct NR_SL_ReportConfigList_r16	*sl_reportConfigList_r16;	/* OPTIONAL */
	struct NR_SL_QuantityConfig_r16	*sl_QuantityConfig_r16;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_VarMeasConfigSL_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_VarMeasConfigSL_r16;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_SL-MeasIdList-r16.h"
#include "NR_SL-MeasObjectList-r16.h"
#include "NR_SL-ReportConfigList-r16.h"
#include "NR_SL-QuantityConfig-r16.h"

#endif	/* _NR_VarMeasConfigSL_r16_H_ */
#include <asn_internal.h>