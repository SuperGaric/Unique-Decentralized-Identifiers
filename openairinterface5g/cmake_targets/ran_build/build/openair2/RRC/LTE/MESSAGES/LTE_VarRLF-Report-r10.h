/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-UE-Variables"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_VarRLF_Report_r10_H_
#define	_LTE_VarRLF_Report_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_RLF-Report-r9.h"
#include "LTE_PLMN-Identity.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_VarRLF-Report-r10 */
typedef struct LTE_VarRLF_Report_r10 {
	LTE_RLF_Report_r9_t	 rlf_Report_r10;
	LTE_PLMN_Identity_t	 plmn_Identity_r10;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_VarRLF_Report_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_VarRLF_Report_r10;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_VarRLF_Report_r10_H_ */
#include <asn_internal.h>
