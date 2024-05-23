/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_MCCH_Config_r17_H_
#define	_NR_MCCH_Config_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_MCCH-RepetitionPeriodAndOffset-r17.h"
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_MCCH_Config_r17__mcch_WindowDuration_r17 {
	NR_MCCH_Config_r17__mcch_WindowDuration_r17_sl2	= 0,
	NR_MCCH_Config_r17__mcch_WindowDuration_r17_sl4	= 1,
	NR_MCCH_Config_r17__mcch_WindowDuration_r17_sl8	= 2,
	NR_MCCH_Config_r17__mcch_WindowDuration_r17_sl10	= 3,
	NR_MCCH_Config_r17__mcch_WindowDuration_r17_sl20	= 4,
	NR_MCCH_Config_r17__mcch_WindowDuration_r17_sl40	= 5,
	NR_MCCH_Config_r17__mcch_WindowDuration_r17_sl80	= 6,
	NR_MCCH_Config_r17__mcch_WindowDuration_r17_sl160	= 7
} e_NR_MCCH_Config_r17__mcch_WindowDuration_r17;
typedef enum NR_MCCH_Config_r17__mcch_ModificationPeriod_r17 {
	NR_MCCH_Config_r17__mcch_ModificationPeriod_r17_rf2	= 0,
	NR_MCCH_Config_r17__mcch_ModificationPeriod_r17_rf4	= 1,
	NR_MCCH_Config_r17__mcch_ModificationPeriod_r17_rf8	= 2,
	NR_MCCH_Config_r17__mcch_ModificationPeriod_r17_rf16	= 3,
	NR_MCCH_Config_r17__mcch_ModificationPeriod_r17_rf32	= 4,
	NR_MCCH_Config_r17__mcch_ModificationPeriod_r17_rf64	= 5,
	NR_MCCH_Config_r17__mcch_ModificationPeriod_r17_rf128	= 6,
	NR_MCCH_Config_r17__mcch_ModificationPeriod_r17_rf256	= 7,
	NR_MCCH_Config_r17__mcch_ModificationPeriod_r17_rf512	= 8,
	NR_MCCH_Config_r17__mcch_ModificationPeriod_r17_rf1024	= 9,
	NR_MCCH_Config_r17__mcch_ModificationPeriod_r17_r2048	= 10,
	NR_MCCH_Config_r17__mcch_ModificationPeriod_r17_rf4096	= 11,
	NR_MCCH_Config_r17__mcch_ModificationPeriod_r17_rf8192	= 12,
	NR_MCCH_Config_r17__mcch_ModificationPeriod_r17_rf16384	= 13,
	NR_MCCH_Config_r17__mcch_ModificationPeriod_r17_rf32768	= 14,
	NR_MCCH_Config_r17__mcch_ModificationPeriod_r17_rf65536	= 15
} e_NR_MCCH_Config_r17__mcch_ModificationPeriod_r17;

/* NR_MCCH-Config-r17 */
typedef struct NR_MCCH_Config_r17 {
	NR_MCCH_RepetitionPeriodAndOffset_r17_t	 mcch_RepetitionPeriodAndOffset_r17;
	long	 mcch_WindowStartSlot_r17;
	long	*mcch_WindowDuration_r17;	/* OPTIONAL */
	long	 mcch_ModificationPeriod_r17;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_MCCH_Config_r17_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_mcch_WindowDuration_r17_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_mcch_ModificationPeriod_r17_13;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_MCCH_Config_r17;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_MCCH_Config_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_MCCH_Config_r17_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_MCCH_Config_r17_H_ */
#include <asn_internal.h>
