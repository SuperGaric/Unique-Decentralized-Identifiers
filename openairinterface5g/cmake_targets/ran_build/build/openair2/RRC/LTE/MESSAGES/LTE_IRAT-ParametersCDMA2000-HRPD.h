/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_IRAT_ParametersCDMA2000_HRPD_H_
#define	_LTE_IRAT_ParametersCDMA2000_HRPD_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_SupportedBandListHRPD.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_IRAT_ParametersCDMA2000_HRPD__tx_ConfigHRPD {
	LTE_IRAT_ParametersCDMA2000_HRPD__tx_ConfigHRPD_single	= 0,
	LTE_IRAT_ParametersCDMA2000_HRPD__tx_ConfigHRPD_dual	= 1
} e_LTE_IRAT_ParametersCDMA2000_HRPD__tx_ConfigHRPD;
typedef enum LTE_IRAT_ParametersCDMA2000_HRPD__rx_ConfigHRPD {
	LTE_IRAT_ParametersCDMA2000_HRPD__rx_ConfigHRPD_single	= 0,
	LTE_IRAT_ParametersCDMA2000_HRPD__rx_ConfigHRPD_dual	= 1
} e_LTE_IRAT_ParametersCDMA2000_HRPD__rx_ConfigHRPD;

/* LTE_IRAT-ParametersCDMA2000-HRPD */
typedef struct LTE_IRAT_ParametersCDMA2000_HRPD {
	LTE_SupportedBandListHRPD_t	 supportedBandListHRPD;
	long	 tx_ConfigHRPD;
	long	 rx_ConfigHRPD;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_IRAT_ParametersCDMA2000_HRPD_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_tx_ConfigHRPD_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_rx_ConfigHRPD_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_IRAT_ParametersCDMA2000_HRPD;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_IRAT_ParametersCDMA2000_HRPD_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_IRAT_ParametersCDMA2000_HRPD_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_IRAT_ParametersCDMA2000_HRPD_H_ */
#include <asn_internal.h>
