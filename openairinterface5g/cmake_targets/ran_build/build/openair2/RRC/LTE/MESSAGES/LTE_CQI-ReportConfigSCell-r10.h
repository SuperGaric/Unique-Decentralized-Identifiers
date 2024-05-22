/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_CQI_ReportConfigSCell_r10_H_
#define	_LTE_CQI_ReportConfigSCell_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_CQI-ReportModeAperiodic.h"
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_CQI_ReportConfigSCell_r10__pmi_RI_Report_r10 {
	LTE_CQI_ReportConfigSCell_r10__pmi_RI_Report_r10_setup	= 0
} e_LTE_CQI_ReportConfigSCell_r10__pmi_RI_Report_r10;

/* Forward declarations */
struct LTE_CQI_ReportPeriodic_r10;

/* LTE_CQI-ReportConfigSCell-r10 */
typedef struct LTE_CQI_ReportConfigSCell_r10 {
	LTE_CQI_ReportModeAperiodic_t	*cqi_ReportModeAperiodic_r10;	/* OPTIONAL */
	long	 nomPDSCH_RS_EPRE_Offset_r10;
	struct LTE_CQI_ReportPeriodic_r10	*cqi_ReportPeriodicSCell_r10;	/* OPTIONAL */
	long	*pmi_RI_Report_r10;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CQI_ReportConfigSCell_r10_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_pmi_RI_Report_r10_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CQI_ReportConfigSCell_r10;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_CQI_ReportConfigSCell_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CQI_ReportConfigSCell_r10_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_CQI-ReportPeriodic-r10.h"

#endif	/* _LTE_CQI_ReportConfigSCell_r10_H_ */
#include <asn_internal.h>
