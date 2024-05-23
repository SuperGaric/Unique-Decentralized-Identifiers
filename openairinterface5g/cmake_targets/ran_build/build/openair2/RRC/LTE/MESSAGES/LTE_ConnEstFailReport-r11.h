/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_ConnEstFailReport_r11_H_
#define	_LTE_ConnEstFailReport_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_CellGlobalIdEUTRA.h"
#include "LTE_NumberOfPreamblesSent-r11.h"
#include <BOOLEAN.h>
#include "LTE_TimeSinceFailure-r11.h"
#include "LTE_RSRP-Range.h"
#include "LTE_RSRQ-Range.h"
#include <constr_SEQUENCE.h>
#include "LTE_RSRQ-Range-v1250.h"
#include "LTE_RSRP-Range-v1360.h"
#include "LTE_ARFCN-ValueNR-r15.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_LocationInfo_r10;
struct LTE_MeasResultList2EUTRA_v9e0;
struct LTE_MeasResultList2EUTRA_r9;
struct LTE_MeasResultList2UTRA_r9;
struct LTE_MeasResultListGERAN;
struct LTE_MeasResultList2CDMA2000_r9;
struct LTE_RSRQ_Type_r12;
struct LTE_MeasResultList2EUTRA_v1250;
struct LTE_LogMeasResultListBT_r15;
struct LTE_LogMeasResultListWLAN_r15;
struct LTE_MeasResultCellListNR_r15;
struct LTE_MeasResultFreqListNR_r16;

/* LTE_ConnEstFailReport-r11 */
typedef struct LTE_ConnEstFailReport_r11 {
	LTE_CellGlobalIdEUTRA_t	 failedCellId_r11;
	struct LTE_LocationInfo_r10	*locationInfo_r11;	/* OPTIONAL */
	struct LTE_ConnEstFailReport_r11__measResultFailedCell_r11 {
		LTE_RSRP_Range_t	 rsrpResult_r11;
		LTE_RSRQ_Range_t	*rsrqResult_r11;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} measResultFailedCell_r11;
	struct LTE_ConnEstFailReport_r11__measResultNeighCells_r11 {
		struct LTE_MeasResultList2EUTRA_r9	*measResultListEUTRA_r11;	/* OPTIONAL */
		struct LTE_MeasResultList2UTRA_r9	*measResultListUTRA_r11;	/* OPTIONAL */
		struct LTE_MeasResultListGERAN	*measResultListGERAN_r11;	/* OPTIONAL */
		struct LTE_MeasResultList2CDMA2000_r9	*measResultsCDMA2000_r11;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *measResultNeighCells_r11;
	LTE_NumberOfPreamblesSent_r11_t	 numberOfPreamblesSent_r11;
	BOOLEAN_t	 contentionDetected_r11;
	BOOLEAN_t	 maxTxPowerReached_r11;
	LTE_TimeSinceFailure_r11_t	 timeSinceFailure_r11;
	struct LTE_MeasResultList2EUTRA_v9e0	*measResultListEUTRA_v1130;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_ConnEstFailReport_r11__ext1 {
		LTE_RSRQ_Range_v1250_t	*measResultFailedCell_v1250;	/* OPTIONAL */
		struct LTE_RSRQ_Type_r12	*failedCellRSRQ_Type_r12;	/* OPTIONAL */
		struct LTE_MeasResultList2EUTRA_v1250	*measResultListEUTRA_v1250;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct LTE_ConnEstFailReport_r11__ext2 {
		LTE_RSRP_Range_v1360_t	*measResultFailedCell_v1360;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct LTE_ConnEstFailReport_r11__ext3 {
		struct LTE_LogMeasResultListBT_r15	*logMeasResultListBT_r15;	/* OPTIONAL */
		struct LTE_LogMeasResultListWLAN_r15	*logMeasResultListWLAN_r15;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	struct LTE_ConnEstFailReport_r11__ext4 {
		struct LTE_MeasResultCellListNR_r15	*measResultListNR_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext4;
	struct LTE_ConnEstFailReport_r11__ext5 {
		struct LTE_ConnEstFailReport_r11__ext5__measResultListNR_v1640 {
			LTE_ARFCN_ValueNR_r15_t	 carrierFreqNR_r16;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *measResultListNR_v1640;
		struct LTE_MeasResultFreqListNR_r16	*measResultListExtNR_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext5;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_ConnEstFailReport_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_ConnEstFailReport_r11;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_ConnEstFailReport_r11_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_ConnEstFailReport_r11_1[14];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_LocationInfo-r10.h"
#include "LTE_MeasResultList2EUTRA-v9e0.h"
#include "LTE_MeasResultList2EUTRA-r9.h"
#include "LTE_MeasResultList2UTRA-r9.h"
#include "LTE_MeasResultListGERAN.h"
#include "LTE_MeasResultList2CDMA2000-r9.h"
#include "LTE_RSRQ-Type-r12.h"
#include "LTE_MeasResultList2EUTRA-v1250.h"
#include "LTE_LogMeasResultListBT-r15.h"
#include "LTE_LogMeasResultListWLAN-r15.h"
#include "LTE_MeasResultCellListNR-r15.h"
#include "LTE_MeasResultFreqListNR-r16.h"

#endif	/* _LTE_ConnEstFailReport_r11_H_ */
#include <asn_internal.h>
