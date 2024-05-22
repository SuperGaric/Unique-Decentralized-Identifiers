/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_SRS_ConfigAdd_r16_H_
#define	_LTE_SRS_ConfigAdd_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include "LTE_SRS-AntennaPort.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SRS_ConfigAdd_r16__srs_RepNumAdd_r16 {
	LTE_SRS_ConfigAdd_r16__srs_RepNumAdd_r16_n1	= 0,
	LTE_SRS_ConfigAdd_r16__srs_RepNumAdd_r16_n2	= 1,
	LTE_SRS_ConfigAdd_r16__srs_RepNumAdd_r16_n3	= 2,
	LTE_SRS_ConfigAdd_r16__srs_RepNumAdd_r16_n4	= 3,
	LTE_SRS_ConfigAdd_r16__srs_RepNumAdd_r16_n6	= 4,
	LTE_SRS_ConfigAdd_r16__srs_RepNumAdd_r16_n7	= 5,
	LTE_SRS_ConfigAdd_r16__srs_RepNumAdd_r16_n8	= 6,
	LTE_SRS_ConfigAdd_r16__srs_RepNumAdd_r16_n9	= 7,
	LTE_SRS_ConfigAdd_r16__srs_RepNumAdd_r16_n12	= 8,
	LTE_SRS_ConfigAdd_r16__srs_RepNumAdd_r16_n13	= 9
} e_LTE_SRS_ConfigAdd_r16__srs_RepNumAdd_r16;
typedef enum LTE_SRS_ConfigAdd_r16__srs_BandwidthAdd_r16 {
	LTE_SRS_ConfigAdd_r16__srs_BandwidthAdd_r16_bw0	= 0,
	LTE_SRS_ConfigAdd_r16__srs_BandwidthAdd_r16_bw1	= 1,
	LTE_SRS_ConfigAdd_r16__srs_BandwidthAdd_r16_bw2	= 2,
	LTE_SRS_ConfigAdd_r16__srs_BandwidthAdd_r16_bw3	= 3
} e_LTE_SRS_ConfigAdd_r16__srs_BandwidthAdd_r16;
typedef enum LTE_SRS_ConfigAdd_r16__srs_HoppingBandwidthAdd_r16 {
	LTE_SRS_ConfigAdd_r16__srs_HoppingBandwidthAdd_r16_hbw0	= 0,
	LTE_SRS_ConfigAdd_r16__srs_HoppingBandwidthAdd_r16_hbw1	= 1,
	LTE_SRS_ConfigAdd_r16__srs_HoppingBandwidthAdd_r16_hbw2	= 2,
	LTE_SRS_ConfigAdd_r16__srs_HoppingBandwidthAdd_r16_hbw3	= 3
} e_LTE_SRS_ConfigAdd_r16__srs_HoppingBandwidthAdd_r16;
typedef enum LTE_SRS_ConfigAdd_r16__srs_CyclicShiftAdd_r16 {
	LTE_SRS_ConfigAdd_r16__srs_CyclicShiftAdd_r16_cs0	= 0,
	LTE_SRS_ConfigAdd_r16__srs_CyclicShiftAdd_r16_cs1	= 1,
	LTE_SRS_ConfigAdd_r16__srs_CyclicShiftAdd_r16_cs2	= 2,
	LTE_SRS_ConfigAdd_r16__srs_CyclicShiftAdd_r16_cs3	= 3,
	LTE_SRS_ConfigAdd_r16__srs_CyclicShiftAdd_r16_cs4	= 4,
	LTE_SRS_ConfigAdd_r16__srs_CyclicShiftAdd_r16_cs5	= 5,
	LTE_SRS_ConfigAdd_r16__srs_CyclicShiftAdd_r16_cs6	= 6,
	LTE_SRS_ConfigAdd_r16__srs_CyclicShiftAdd_r16_cs7	= 7,
	LTE_SRS_ConfigAdd_r16__srs_CyclicShiftAdd_r16_cs8	= 8,
	LTE_SRS_ConfigAdd_r16__srs_CyclicShiftAdd_r16_cs9	= 9,
	LTE_SRS_ConfigAdd_r16__srs_CyclicShiftAdd_r16_cs10	= 10,
	LTE_SRS_ConfigAdd_r16__srs_CyclicShiftAdd_r16_cs11	= 11
} e_LTE_SRS_ConfigAdd_r16__srs_CyclicShiftAdd_r16;
typedef enum LTE_SRS_ConfigAdd_r16__srs_TransmissionCombNumAdd_r16 {
	LTE_SRS_ConfigAdd_r16__srs_TransmissionCombNumAdd_r16_n2	= 0,
	LTE_SRS_ConfigAdd_r16__srs_TransmissionCombNumAdd_r16_n4	= 1
} e_LTE_SRS_ConfigAdd_r16__srs_TransmissionCombNumAdd_r16;
typedef enum LTE_SRS_ConfigAdd_r16__srs_GuardSymbolAS_Add_r16 {
	LTE_SRS_ConfigAdd_r16__srs_GuardSymbolAS_Add_r16_enabled	= 0
} e_LTE_SRS_ConfigAdd_r16__srs_GuardSymbolAS_Add_r16;
typedef enum LTE_SRS_ConfigAdd_r16__srs_GuardSymbolFH_Add_r16 {
	LTE_SRS_ConfigAdd_r16__srs_GuardSymbolFH_Add_r16_enabled	= 0
} e_LTE_SRS_ConfigAdd_r16__srs_GuardSymbolFH_Add_r16;

/* LTE_SRS-ConfigAdd-r16 */
typedef struct LTE_SRS_ConfigAdd_r16 {
	long	 srs_RepNumAdd_r16;
	long	 srs_BandwidthAdd_r16;
	long	 srs_HoppingBandwidthAdd_r16;
	long	 srs_FreqDomainPosAdd_r16;
	LTE_SRS_AntennaPort_t	 srs_AntennaPortAdd_r16;
	long	 srs_CyclicShiftAdd_r16;
	long	 srs_TransmissionCombNumAdd_r16;
	long	 srs_TransmissionCombAdd_r16;
	long	 srs_StartPosAdd_r16;
	long	 srs_DurationAdd_r16;
	long	*srs_GuardSymbolAS_Add_r16;	/* OPTIONAL */
	long	*srs_GuardSymbolFH_Add_r16;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SRS_ConfigAdd_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_srs_RepNumAdd_r16_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_srs_BandwidthAdd_r16_13;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_srs_HoppingBandwidthAdd_r16_18;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_srs_CyclicShiftAdd_r16_25;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_srs_TransmissionCombNumAdd_r16_38;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_srs_GuardSymbolAS_Add_r16_44;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_srs_GuardSymbolFH_Add_r16_46;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SRS_ConfigAdd_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SRS_ConfigAdd_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SRS_ConfigAdd_r16_1[12];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_SRS_ConfigAdd_r16_H_ */
#include <asn_internal.h>