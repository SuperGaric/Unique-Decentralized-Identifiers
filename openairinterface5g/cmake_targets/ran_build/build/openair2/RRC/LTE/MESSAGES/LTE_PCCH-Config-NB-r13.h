/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_PCCH_Config_NB_r13_H_
#define	_LTE_PCCH_Config_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_PCCH_Config_NB_r13__defaultPagingCycle_r13 {
	LTE_PCCH_Config_NB_r13__defaultPagingCycle_r13_rf128	= 0,
	LTE_PCCH_Config_NB_r13__defaultPagingCycle_r13_rf256	= 1,
	LTE_PCCH_Config_NB_r13__defaultPagingCycle_r13_rf512	= 2,
	LTE_PCCH_Config_NB_r13__defaultPagingCycle_r13_rf1024	= 3
} e_LTE_PCCH_Config_NB_r13__defaultPagingCycle_r13;
typedef enum LTE_PCCH_Config_NB_r13__nB_r13 {
	LTE_PCCH_Config_NB_r13__nB_r13_fourT	= 0,
	LTE_PCCH_Config_NB_r13__nB_r13_twoT	= 1,
	LTE_PCCH_Config_NB_r13__nB_r13_oneT	= 2,
	LTE_PCCH_Config_NB_r13__nB_r13_halfT	= 3,
	LTE_PCCH_Config_NB_r13__nB_r13_quarterT	= 4,
	LTE_PCCH_Config_NB_r13__nB_r13_one8thT	= 5,
	LTE_PCCH_Config_NB_r13__nB_r13_one16thT	= 6,
	LTE_PCCH_Config_NB_r13__nB_r13_one32ndT	= 7,
	LTE_PCCH_Config_NB_r13__nB_r13_one64thT	= 8,
	LTE_PCCH_Config_NB_r13__nB_r13_one128thT	= 9,
	LTE_PCCH_Config_NB_r13__nB_r13_one256thT	= 10,
	LTE_PCCH_Config_NB_r13__nB_r13_one512thT	= 11,
	LTE_PCCH_Config_NB_r13__nB_r13_one1024thT	= 12,
	LTE_PCCH_Config_NB_r13__nB_r13_spare3	= 13,
	LTE_PCCH_Config_NB_r13__nB_r13_spare2	= 14,
	LTE_PCCH_Config_NB_r13__nB_r13_spare1	= 15
} e_LTE_PCCH_Config_NB_r13__nB_r13;
typedef enum LTE_PCCH_Config_NB_r13__npdcch_NumRepetitionPaging_r13 {
	LTE_PCCH_Config_NB_r13__npdcch_NumRepetitionPaging_r13_r1	= 0,
	LTE_PCCH_Config_NB_r13__npdcch_NumRepetitionPaging_r13_r2	= 1,
	LTE_PCCH_Config_NB_r13__npdcch_NumRepetitionPaging_r13_r4	= 2,
	LTE_PCCH_Config_NB_r13__npdcch_NumRepetitionPaging_r13_r8	= 3,
	LTE_PCCH_Config_NB_r13__npdcch_NumRepetitionPaging_r13_r16	= 4,
	LTE_PCCH_Config_NB_r13__npdcch_NumRepetitionPaging_r13_r32	= 5,
	LTE_PCCH_Config_NB_r13__npdcch_NumRepetitionPaging_r13_r64	= 6,
	LTE_PCCH_Config_NB_r13__npdcch_NumRepetitionPaging_r13_r128	= 7,
	LTE_PCCH_Config_NB_r13__npdcch_NumRepetitionPaging_r13_r256	= 8,
	LTE_PCCH_Config_NB_r13__npdcch_NumRepetitionPaging_r13_r512	= 9,
	LTE_PCCH_Config_NB_r13__npdcch_NumRepetitionPaging_r13_r1024	= 10,
	LTE_PCCH_Config_NB_r13__npdcch_NumRepetitionPaging_r13_r2048	= 11,
	LTE_PCCH_Config_NB_r13__npdcch_NumRepetitionPaging_r13_spare4	= 12,
	LTE_PCCH_Config_NB_r13__npdcch_NumRepetitionPaging_r13_spare3	= 13,
	LTE_PCCH_Config_NB_r13__npdcch_NumRepetitionPaging_r13_spare2	= 14,
	LTE_PCCH_Config_NB_r13__npdcch_NumRepetitionPaging_r13_spare1	= 15
} e_LTE_PCCH_Config_NB_r13__npdcch_NumRepetitionPaging_r13;

/* LTE_PCCH-Config-NB-r13 */
typedef struct LTE_PCCH_Config_NB_r13 {
	long	 defaultPagingCycle_r13;
	long	 nB_r13;
	long	 npdcch_NumRepetitionPaging_r13;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_PCCH_Config_NB_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_defaultPagingCycle_r13_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_nB_r13_7;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_npdcch_NumRepetitionPaging_r13_24;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_PCCH_Config_NB_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_PCCH_Config_NB_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_PCCH_Config_NB_r13_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_PCCH_Config_NB_r13_H_ */
#include <asn_internal.h>
