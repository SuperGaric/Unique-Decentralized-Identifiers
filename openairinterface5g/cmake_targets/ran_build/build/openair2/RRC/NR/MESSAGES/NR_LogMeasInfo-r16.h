/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_LogMeasInfo_r16_H_
#define	_NR_LogMeasInfo_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_LogMeasInfo_r16__anyCellSelectionDetected_r16 {
	NR_LogMeasInfo_r16__anyCellSelectionDetected_r16_true	= 0
} e_NR_LogMeasInfo_r16__anyCellSelectionDetected_r16;
typedef enum NR_LogMeasInfo_r16__ext1__inDeviceCoexDetected_r17 {
	NR_LogMeasInfo_r16__ext1__inDeviceCoexDetected_r17_true	= 0
} e_NR_LogMeasInfo_r16__ext1__inDeviceCoexDetected_r17;

/* Forward declarations */
struct NR_LocationInfo_r16;
struct NR_CGI_Info_Logging_r16;
struct NR_MeasResultServingCell_r16;
struct NR_MeasResultListLogging2NR_r16;
struct NR_MeasResultList2EUTRA_r16;

/* NR_LogMeasInfo-r16 */
typedef struct NR_LogMeasInfo_r16 {
	struct NR_LocationInfo_r16	*locationInfo_r16;	/* OPTIONAL */
	long	 relativeTimeStamp_r16;
	struct NR_CGI_Info_Logging_r16	*servCellIdentity_r16;	/* OPTIONAL */
	struct NR_MeasResultServingCell_r16	*measResultServingCell_r16;	/* OPTIONAL */
	struct NR_LogMeasInfo_r16__measResultNeighCells_r16 {
		struct NR_MeasResultListLogging2NR_r16	*measResultNeighCellListNR;	/* OPTIONAL */
		struct NR_MeasResultList2EUTRA_r16	*measResultNeighCellListEUTRA;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} measResultNeighCells_r16;
	long	*anyCellSelectionDetected_r16;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_LogMeasInfo_r16__ext1 {
		long	*inDeviceCoexDetected_r17;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_LogMeasInfo_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_anyCellSelectionDetected_r16_9;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_inDeviceCoexDetected_r17_13;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_LogMeasInfo_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_LogMeasInfo_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_LogMeasInfo_r16_1[7];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_LocationInfo-r16.h"
#include "NR_CGI-Info-Logging-r16.h"
#include "NR_MeasResultServingCell-r16.h"
#include "NR_MeasResultListLogging2NR-r16.h"
#include "NR_MeasResultList2EUTRA-r16.h"

#endif	/* _NR_LogMeasInfo_r16_H_ */
#include <asn_internal.h>
