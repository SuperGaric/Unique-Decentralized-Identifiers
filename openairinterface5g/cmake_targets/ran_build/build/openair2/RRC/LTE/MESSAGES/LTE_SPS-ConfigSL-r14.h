/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_SPS_ConfigSL_r14_H_
#define	_LTE_SPS_ConfigSL_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_SPS-ConfigIndex-r14.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SPS_ConfigSL_r14__semiPersistSchedIntervalSL_r14 {
	LTE_SPS_ConfigSL_r14__semiPersistSchedIntervalSL_r14_sf20	= 0,
	LTE_SPS_ConfigSL_r14__semiPersistSchedIntervalSL_r14_sf50	= 1,
	LTE_SPS_ConfigSL_r14__semiPersistSchedIntervalSL_r14_sf100	= 2,
	LTE_SPS_ConfigSL_r14__semiPersistSchedIntervalSL_r14_sf200	= 3,
	LTE_SPS_ConfigSL_r14__semiPersistSchedIntervalSL_r14_sf300	= 4,
	LTE_SPS_ConfigSL_r14__semiPersistSchedIntervalSL_r14_sf400	= 5,
	LTE_SPS_ConfigSL_r14__semiPersistSchedIntervalSL_r14_sf500	= 6,
	LTE_SPS_ConfigSL_r14__semiPersistSchedIntervalSL_r14_sf600	= 7,
	LTE_SPS_ConfigSL_r14__semiPersistSchedIntervalSL_r14_sf700	= 8,
	LTE_SPS_ConfigSL_r14__semiPersistSchedIntervalSL_r14_sf800	= 9,
	LTE_SPS_ConfigSL_r14__semiPersistSchedIntervalSL_r14_sf900	= 10,
	LTE_SPS_ConfigSL_r14__semiPersistSchedIntervalSL_r14_sf1000	= 11,
	LTE_SPS_ConfigSL_r14__semiPersistSchedIntervalSL_r14_spare4	= 12,
	LTE_SPS_ConfigSL_r14__semiPersistSchedIntervalSL_r14_spare3	= 13,
	LTE_SPS_ConfigSL_r14__semiPersistSchedIntervalSL_r14_spare2	= 14,
	LTE_SPS_ConfigSL_r14__semiPersistSchedIntervalSL_r14_spare1	= 15
} e_LTE_SPS_ConfigSL_r14__semiPersistSchedIntervalSL_r14;

/* LTE_SPS-ConfigSL-r14 */
typedef struct LTE_SPS_ConfigSL_r14 {
	LTE_SPS_ConfigIndex_r14_t	 sps_ConfigIndex_r14;
	long	 semiPersistSchedIntervalSL_r14;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SPS_ConfigSL_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_semiPersistSchedIntervalSL_r14_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SPS_ConfigSL_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SPS_ConfigSL_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SPS_ConfigSL_r14_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_SPS_ConfigSL_r14_H_ */
#include <asn_internal.h>
