/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_ResultsPerSSB_IndexIdle_r16_H_
#define	_LTE_ResultsPerSSB_IndexIdle_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_RS-IndexNR-r15.h"
#include "LTE_RSRP-RangeNR-r15.h"
#include "LTE_RSRQ-RangeNR-r15.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_ResultsPerSSB-IndexIdle-r16 */
typedef struct LTE_ResultsPerSSB_IndexIdle_r16 {
	LTE_RS_IndexNR_r15_t	 ssb_Index_r16;
	struct LTE_ResultsPerSSB_IndexIdle_r16__ssb_Results_r16 {
		LTE_RSRP_RangeNR_r15_t	*ssb_RSRP_Result_r16;	/* OPTIONAL */
		LTE_RSRQ_RangeNR_r15_t	*ssb_RSRQ_Result_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ssb_Results_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_ResultsPerSSB_IndexIdle_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_ResultsPerSSB_IndexIdle_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_ResultsPerSSB_IndexIdle_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_ResultsPerSSB_IndexIdle_r16_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_ResultsPerSSB_IndexIdle_r16_H_ */
#include <asn_internal.h>