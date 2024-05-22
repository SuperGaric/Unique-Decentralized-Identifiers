/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_PDCCH_ConfigLAA_r14_H_
#define	_LTE_PDCCH_ConfigLAA_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_PDCCH_ConfigLAA_r14__maxNumberOfSchedSubframes_Format0B_r14 {
	LTE_PDCCH_ConfigLAA_r14__maxNumberOfSchedSubframes_Format0B_r14_sf2	= 0,
	LTE_PDCCH_ConfigLAA_r14__maxNumberOfSchedSubframes_Format0B_r14_sf3	= 1,
	LTE_PDCCH_ConfigLAA_r14__maxNumberOfSchedSubframes_Format0B_r14_sf4	= 2
} e_LTE_PDCCH_ConfigLAA_r14__maxNumberOfSchedSubframes_Format0B_r14;
typedef enum LTE_PDCCH_ConfigLAA_r14__maxNumberOfSchedSubframes_Format4B_r14 {
	LTE_PDCCH_ConfigLAA_r14__maxNumberOfSchedSubframes_Format4B_r14_sf2	= 0,
	LTE_PDCCH_ConfigLAA_r14__maxNumberOfSchedSubframes_Format4B_r14_sf3	= 1,
	LTE_PDCCH_ConfigLAA_r14__maxNumberOfSchedSubframes_Format4B_r14_sf4	= 2
} e_LTE_PDCCH_ConfigLAA_r14__maxNumberOfSchedSubframes_Format4B_r14;
typedef enum LTE_PDCCH_ConfigLAA_r14__skipMonitoringDCI_Format0A_r14 {
	LTE_PDCCH_ConfigLAA_r14__skipMonitoringDCI_Format0A_r14_true	= 0
} e_LTE_PDCCH_ConfigLAA_r14__skipMonitoringDCI_Format0A_r14;
typedef enum LTE_PDCCH_ConfigLAA_r14__skipMonitoringDCI_Format4A_r14 {
	LTE_PDCCH_ConfigLAA_r14__skipMonitoringDCI_Format4A_r14_true	= 0
} e_LTE_PDCCH_ConfigLAA_r14__skipMonitoringDCI_Format4A_r14;

/* Forward declarations */
struct LTE_PDCCH_CandidateReductions_r13;
struct LTE_PDCCH_CandidateReductionsLAA_UL_r14;

/* LTE_PDCCH-ConfigLAA-r14 */
typedef struct LTE_PDCCH_ConfigLAA_r14 {
	long	*maxNumberOfSchedSubframes_Format0B_r14;	/* OPTIONAL */
	long	*maxNumberOfSchedSubframes_Format4B_r14;	/* OPTIONAL */
	long	*skipMonitoringDCI_Format0A_r14;	/* OPTIONAL */
	long	*skipMonitoringDCI_Format4A_r14;	/* OPTIONAL */
	struct LTE_PDCCH_CandidateReductions_r13	*pdcch_CandidateReductions_Format0A_r14;	/* OPTIONAL */
	struct LTE_PDCCH_CandidateReductionsLAA_UL_r14	*pdcch_CandidateReductions_Format4A_r14;	/* OPTIONAL */
	struct LTE_PDCCH_CandidateReductionsLAA_UL_r14	*pdcch_CandidateReductions_Format0B_r14;	/* OPTIONAL */
	struct LTE_PDCCH_CandidateReductionsLAA_UL_r14	*pdcch_CandidateReductions_Format4B_r14;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_PDCCH_ConfigLAA_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_maxNumberOfSchedSubframes_Format0B_r14_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_maxNumberOfSchedSubframes_Format4B_r14_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_skipMonitoringDCI_Format0A_r14_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_skipMonitoringDCI_Format4A_r14_12;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_PDCCH_ConfigLAA_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_PDCCH_ConfigLAA_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_PDCCH_ConfigLAA_r14_1[8];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_PDCCH-CandidateReductions-r13.h"
#include "LTE_PDCCH-CandidateReductionsLAA-UL-r14.h"

#endif	/* _LTE_PDCCH_ConfigLAA_r14_H_ */
#include <asn_internal.h>
