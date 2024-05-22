/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_RRCConnectionRequest_5GC_NB_r16_IEs_H_
#define	_LTE_RRCConnectionRequest_5GC_NB_r16_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_InitialUE-Identity-5GC-NB-r16.h"
#include <NativeEnumerated.h>
#include "LTE_CQI-NPDCCH-NB-r14.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_RRCConnectionRequest_5GC_NB_r16_IEs__establishmentCause_r16 {
	LTE_RRCConnectionRequest_5GC_NB_r16_IEs__establishmentCause_r16_mt_Access	= 0,
	LTE_RRCConnectionRequest_5GC_NB_r16_IEs__establishmentCause_r16_mo_Signalling	= 1,
	LTE_RRCConnectionRequest_5GC_NB_r16_IEs__establishmentCause_r16_mo_Data	= 2,
	LTE_RRCConnectionRequest_5GC_NB_r16_IEs__establishmentCause_r16_mo_ExceptionData	= 3,
	LTE_RRCConnectionRequest_5GC_NB_r16_IEs__establishmentCause_r16_spare4	= 4,
	LTE_RRCConnectionRequest_5GC_NB_r16_IEs__establishmentCause_r16_spare3	= 5,
	LTE_RRCConnectionRequest_5GC_NB_r16_IEs__establishmentCause_r16_spare2	= 6,
	LTE_RRCConnectionRequest_5GC_NB_r16_IEs__establishmentCause_r16_spare1	= 7
} e_LTE_RRCConnectionRequest_5GC_NB_r16_IEs__establishmentCause_r16;

/* LTE_RRCConnectionRequest-5GC-NB-r16-IEs */
typedef struct LTE_RRCConnectionRequest_5GC_NB_r16_IEs {
	LTE_InitialUE_Identity_5GC_NB_r16_t	 ue_Identity_r16;
	long	 establishmentCause_r16;
	LTE_CQI_NPDCCH_NB_r14_t	 cqi_NPDCCH_r16;
	BIT_STRING_t	 spare;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RRCConnectionRequest_5GC_NB_r16_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_establishmentCause_r16_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RRCConnectionRequest_5GC_NB_r16_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_RRCConnectionRequest_5GC_NB_r16_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RRCConnectionRequest_5GC_NB_r16_IEs_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_RRCConnectionRequest_5GC_NB_r16_IEs_H_ */
#include <asn_internal.h>
