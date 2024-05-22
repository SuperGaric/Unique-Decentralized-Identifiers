/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_MeasIdleCarrierEUTRA_r16_H_
#define	_NR_MeasIdleCarrierEUTRA_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_ARFCN-ValueEUTRA.h"
#include "NR_EUTRA-AllowedMeasBandwidth.h"
#include <NativeEnumerated.h>
#include "NR_RSRP-RangeEUTRA.h"
#include "NR_RSRQ-RangeEUTRA-r16.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_MeasIdleCarrierEUTRA_r16__reportQuantitiesEUTRA_r16 {
	NR_MeasIdleCarrierEUTRA_r16__reportQuantitiesEUTRA_r16_rsrp	= 0,
	NR_MeasIdleCarrierEUTRA_r16__reportQuantitiesEUTRA_r16_rsrq	= 1,
	NR_MeasIdleCarrierEUTRA_r16__reportQuantitiesEUTRA_r16_both	= 2
} e_NR_MeasIdleCarrierEUTRA_r16__reportQuantitiesEUTRA_r16;

/* Forward declarations */
struct NR_CellListEUTRA_r16;

/* NR_MeasIdleCarrierEUTRA-r16 */
typedef struct NR_MeasIdleCarrierEUTRA_r16 {
	NR_ARFCN_ValueEUTRA_t	 carrierFreqEUTRA_r16;
	NR_EUTRA_AllowedMeasBandwidth_t	 allowedMeasBandwidth_r16;
	struct NR_CellListEUTRA_r16	*measCellListEUTRA_r16;	/* OPTIONAL */
	long	 reportQuantitiesEUTRA_r16;
	struct NR_MeasIdleCarrierEUTRA_r16__qualityThresholdEUTRA_r16 {
		NR_RSRP_RangeEUTRA_t	*idleRSRP_Threshold_EUTRA_r16;	/* OPTIONAL */
		NR_RSRQ_RangeEUTRA_r16_t	*idleRSRQ_Threshold_EUTRA_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *qualityThresholdEUTRA_r16;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_MeasIdleCarrierEUTRA_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_reportQuantitiesEUTRA_r16_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_MeasIdleCarrierEUTRA_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_MeasIdleCarrierEUTRA_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_MeasIdleCarrierEUTRA_r16_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_CellListEUTRA-r16.h"

#endif	/* _NR_MeasIdleCarrierEUTRA_r16_H_ */
#include <asn_internal.h>
