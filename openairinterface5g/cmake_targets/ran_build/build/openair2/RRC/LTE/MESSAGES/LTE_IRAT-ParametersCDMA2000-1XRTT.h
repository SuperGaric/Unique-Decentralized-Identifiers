/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_IRAT_ParametersCDMA2000_1XRTT_H_
#define	_LTE_IRAT_ParametersCDMA2000_1XRTT_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_SupportedBandList1XRTT.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_IRAT_ParametersCDMA2000_1XRTT__tx_Config1XRTT {
	LTE_IRAT_ParametersCDMA2000_1XRTT__tx_Config1XRTT_single	= 0,
	LTE_IRAT_ParametersCDMA2000_1XRTT__tx_Config1XRTT_dual	= 1
} e_LTE_IRAT_ParametersCDMA2000_1XRTT__tx_Config1XRTT;
typedef enum LTE_IRAT_ParametersCDMA2000_1XRTT__rx_Config1XRTT {
	LTE_IRAT_ParametersCDMA2000_1XRTT__rx_Config1XRTT_single	= 0,
	LTE_IRAT_ParametersCDMA2000_1XRTT__rx_Config1XRTT_dual	= 1
} e_LTE_IRAT_ParametersCDMA2000_1XRTT__rx_Config1XRTT;

/* LTE_IRAT-ParametersCDMA2000-1XRTT */
typedef struct LTE_IRAT_ParametersCDMA2000_1XRTT {
	LTE_SupportedBandList1XRTT_t	 supportedBandList1XRTT;
	long	 tx_Config1XRTT;
	long	 rx_Config1XRTT;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_IRAT_ParametersCDMA2000_1XRTT_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_tx_Config1XRTT_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_rx_Config1XRTT_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_IRAT_ParametersCDMA2000_1XRTT;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_IRAT_ParametersCDMA2000_1XRTT_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_IRAT_ParametersCDMA2000_1XRTT_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_IRAT_ParametersCDMA2000_1XRTT_H_ */
#include <asn_internal.h>
