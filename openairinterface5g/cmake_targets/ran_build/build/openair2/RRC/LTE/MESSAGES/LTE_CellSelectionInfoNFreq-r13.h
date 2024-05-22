/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_CellSelectionInfoNFreq_r13_H_
#define	_LTE_CellSelectionInfoNFreq_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_Q-RxLevMin.h"
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include "LTE_T-Reselection.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_CellSelectionInfoNFreq_r13__q_Hyst_r13 {
	LTE_CellSelectionInfoNFreq_r13__q_Hyst_r13_dB0	= 0,
	LTE_CellSelectionInfoNFreq_r13__q_Hyst_r13_dB1	= 1,
	LTE_CellSelectionInfoNFreq_r13__q_Hyst_r13_dB2	= 2,
	LTE_CellSelectionInfoNFreq_r13__q_Hyst_r13_dB3	= 3,
	LTE_CellSelectionInfoNFreq_r13__q_Hyst_r13_dB4	= 4,
	LTE_CellSelectionInfoNFreq_r13__q_Hyst_r13_dB5	= 5,
	LTE_CellSelectionInfoNFreq_r13__q_Hyst_r13_dB6	= 6,
	LTE_CellSelectionInfoNFreq_r13__q_Hyst_r13_dB8	= 7,
	LTE_CellSelectionInfoNFreq_r13__q_Hyst_r13_dB10	= 8,
	LTE_CellSelectionInfoNFreq_r13__q_Hyst_r13_dB12	= 9,
	LTE_CellSelectionInfoNFreq_r13__q_Hyst_r13_dB14	= 10,
	LTE_CellSelectionInfoNFreq_r13__q_Hyst_r13_dB16	= 11,
	LTE_CellSelectionInfoNFreq_r13__q_Hyst_r13_dB18	= 12,
	LTE_CellSelectionInfoNFreq_r13__q_Hyst_r13_dB20	= 13,
	LTE_CellSelectionInfoNFreq_r13__q_Hyst_r13_dB22	= 14,
	LTE_CellSelectionInfoNFreq_r13__q_Hyst_r13_dB24	= 15
} e_LTE_CellSelectionInfoNFreq_r13__q_Hyst_r13;

/* LTE_CellSelectionInfoNFreq-r13 */
typedef struct LTE_CellSelectionInfoNFreq_r13 {
	LTE_Q_RxLevMin_t	 q_RxLevMin_r13;
	long	*q_RxLevMinOffset;	/* OPTIONAL */
	long	 q_Hyst_r13;
	LTE_Q_RxLevMin_t	 q_RxLevMinReselection_r13;
	LTE_T_Reselection_t	 t_ReselectionEUTRA_r13;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CellSelectionInfoNFreq_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_q_Hyst_r13_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CellSelectionInfoNFreq_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_CellSelectionInfoNFreq_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CellSelectionInfoNFreq_r13_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_CellSelectionInfoNFreq_r13_H_ */
#include <asn_internal.h>