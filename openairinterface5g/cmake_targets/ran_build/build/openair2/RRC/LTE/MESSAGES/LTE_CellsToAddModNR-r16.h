/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_CellsToAddModNR_r16_H_
#define	_LTE_CellsToAddModNR_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "LTE_PhysCellIdNR-r15.h"
#include "LTE_Q-OffsetRange.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_CellsToAddModNR-r16 */
typedef struct LTE_CellsToAddModNR_r16 {
	long	 cellIndex_r16;
	LTE_PhysCellIdNR_r15_t	 physCellId_r16;
	LTE_Q_OffsetRange_t	 cellIndividualOffset_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CellsToAddModNR_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CellsToAddModNR_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_CellsToAddModNR_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CellsToAddModNR_r16_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_CellsToAddModNR_r16_H_ */
#include <asn_internal.h>