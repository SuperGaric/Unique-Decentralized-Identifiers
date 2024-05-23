/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_SL_DiscTxResourceInfoPerFreq_r13_H_
#define	_LTE_SL_DiscTxResourceInfoPerFreq_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_ARFCN-ValueEUTRA-r9.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_SL_DiscTxResource_r13;
struct LTE_SL_DiscTxRefCarrierDedicated_r13;
struct LTE_CellSelectionInfoNFreq_r13;

/* LTE_SL-DiscTxResourceInfoPerFreq-r13 */
typedef struct LTE_SL_DiscTxResourceInfoPerFreq_r13 {
	LTE_ARFCN_ValueEUTRA_r9_t	 discTxCarrierFreq_r13;
	struct LTE_SL_DiscTxResource_r13	*discTxResources_r13;	/* OPTIONAL */
	struct LTE_SL_DiscTxResource_r13	*discTxResourcesPS_r13;	/* OPTIONAL */
	struct LTE_SL_DiscTxRefCarrierDedicated_r13	*discTxRefCarrierDedicated_r13;	/* OPTIONAL */
	struct LTE_CellSelectionInfoNFreq_r13	*discCellSelectionInfo_r13;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SL_DiscTxResourceInfoPerFreq_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SL_DiscTxResourceInfoPerFreq_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SL_DiscTxResourceInfoPerFreq_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SL_DiscTxResourceInfoPerFreq_r13_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_SL-DiscTxResource-r13.h"
#include "LTE_SL-DiscTxRefCarrierDedicated-r13.h"
#include "LTE_CellSelectionInfoNFreq-r13.h"

#endif	/* _LTE_SL_DiscTxResourceInfoPerFreq_r13_H_ */
#include <asn_internal.h>
