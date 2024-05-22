/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_CarrierFreqsInfoGERAN_H_
#define	_LTE_CarrierFreqsInfoGERAN_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_CarrierFreqsGERAN.h"
#include "LTE_CellReselectionPriority.h"
#include <BIT_STRING.h>
#include <NativeInteger.h>
#include "LTE_ReselectionThreshold.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_CarrierFreqsInfoGERAN */
typedef struct LTE_CarrierFreqsInfoGERAN {
	LTE_CarrierFreqsGERAN_t	 carrierFreqs;
	struct LTE_CarrierFreqsInfoGERAN__commonInfo {
		LTE_CellReselectionPriority_t	*cellReselectionPriority;	/* OPTIONAL */
		BIT_STRING_t	 ncc_Permitted;
		long	 q_RxLevMin;
		long	*p_MaxGERAN;	/* OPTIONAL */
		LTE_ReselectionThreshold_t	 threshX_High;
		LTE_ReselectionThreshold_t	 threshX_Low;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} commonInfo;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CarrierFreqsInfoGERAN_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CarrierFreqsInfoGERAN;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_CarrierFreqsInfoGERAN_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CarrierFreqsInfoGERAN_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_CarrierFreqsInfoGERAN_H_ */
#include <asn_internal.h>