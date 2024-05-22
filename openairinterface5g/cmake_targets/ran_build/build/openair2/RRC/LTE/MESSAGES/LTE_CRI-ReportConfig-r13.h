/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_CRI_ReportConfig_r13_H_
#define	_LTE_CRI_ReportConfig_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "LTE_CRI-ConfigIndex-r13.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_CRI_ReportConfig_r13_PR {
	LTE_CRI_ReportConfig_r13_PR_NOTHING,	/* No components present */
	LTE_CRI_ReportConfig_r13_PR_release,
	LTE_CRI_ReportConfig_r13_PR_setup
} LTE_CRI_ReportConfig_r13_PR;

/* LTE_CRI-ReportConfig-r13 */
typedef struct LTE_CRI_ReportConfig_r13 {
	LTE_CRI_ReportConfig_r13_PR present;
	union LTE_CRI_ReportConfig_r13_u {
		NULL_t	 release;
		struct LTE_CRI_ReportConfig_r13__setup {
			LTE_CRI_ConfigIndex_r13_t	 cri_ConfigIndex_r13;
			LTE_CRI_ConfigIndex_r13_t	*cri_ConfigIndex2_r13;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CRI_ReportConfig_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CRI_ReportConfig_r13;
extern asn_CHOICE_specifics_t asn_SPC_LTE_CRI_ReportConfig_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CRI_ReportConfig_r13_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_CRI_ReportConfig_r13_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_CRI_ReportConfig_r13_H_ */
#include <asn_internal.h>
