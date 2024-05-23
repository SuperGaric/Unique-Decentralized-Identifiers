/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_ReportQuantityNR_r15_H_
#define	_LTE_ReportQuantityNR_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_ReportQuantityNR-r15 */
typedef struct LTE_ReportQuantityNR_r15 {
	BOOLEAN_t	 ss_rsrp;
	BOOLEAN_t	 ss_rsrq;
	BOOLEAN_t	 ss_sinr;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_ReportQuantityNR_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_ReportQuantityNR_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_ReportQuantityNR_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_ReportQuantityNR_r15_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_ReportQuantityNR_r15_H_ */
#include <asn_internal.h>
