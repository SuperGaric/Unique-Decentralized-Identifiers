/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_UEInformationResponse_r16_IEs_H_
#define	_NR_UEInformationResponse_r16_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_MeasResultIdleEUTRA_r16;
struct NR_MeasResultIdleNR_r16;
struct NR_LogMeasReport_r16;
struct NR_ConnEstFailReport_r16;
struct NR_RA_ReportList_r16;
struct NR_RLF_Report_r16;
struct NR_MobilityHistoryReport_r16;
struct NR_UEInformationResponse_v1700_IEs;

/* NR_UEInformationResponse-r16-IEs */
typedef struct NR_UEInformationResponse_r16_IEs {
	struct NR_MeasResultIdleEUTRA_r16	*measResultIdleEUTRA_r16;	/* OPTIONAL */
	struct NR_MeasResultIdleNR_r16	*measResultIdleNR_r16;	/* OPTIONAL */
	struct NR_LogMeasReport_r16	*logMeasReport_r16;	/* OPTIONAL */
	struct NR_ConnEstFailReport_r16	*connEstFailReport_r16;	/* OPTIONAL */
	struct NR_RA_ReportList_r16	*ra_ReportList_r16;	/* OPTIONAL */
	struct NR_RLF_Report_r16	*rlf_Report_r16;	/* OPTIONAL */
	struct NR_MobilityHistoryReport_r16	*mobilityHistoryReport_r16;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct NR_UEInformationResponse_v1700_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_UEInformationResponse_r16_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_UEInformationResponse_r16_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_UEInformationResponse_r16_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_UEInformationResponse_r16_IEs_1[9];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_MeasResultIdleEUTRA-r16.h"
#include "NR_MeasResultIdleNR-r16.h"
#include "NR_LogMeasReport-r16.h"
#include "NR_ConnEstFailReport-r16.h"
#include "NR_RA-ReportList-r16.h"
#include "NR_RLF-Report-r16.h"
#include "NR_MobilityHistoryReport-r16.h"
#include "NR_UEInformationResponse-v1700-IEs.h"

#endif	/* _NR_UEInformationResponse_r16_IEs_H_ */
#include <asn_internal.h>
