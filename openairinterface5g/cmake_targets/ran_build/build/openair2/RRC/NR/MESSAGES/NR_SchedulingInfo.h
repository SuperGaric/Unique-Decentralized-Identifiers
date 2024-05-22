/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_SchedulingInfo_H_
#define	_NR_SchedulingInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "NR_SIB-Mapping.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_SchedulingInfo__si_BroadcastStatus {
	NR_SchedulingInfo__si_BroadcastStatus_broadcasting	= 0,
	NR_SchedulingInfo__si_BroadcastStatus_notBroadcasting	= 1
} e_NR_SchedulingInfo__si_BroadcastStatus;
typedef enum NR_SchedulingInfo__si_Periodicity {
	NR_SchedulingInfo__si_Periodicity_rf8	= 0,
	NR_SchedulingInfo__si_Periodicity_rf16	= 1,
	NR_SchedulingInfo__si_Periodicity_rf32	= 2,
	NR_SchedulingInfo__si_Periodicity_rf64	= 3,
	NR_SchedulingInfo__si_Periodicity_rf128	= 4,
	NR_SchedulingInfo__si_Periodicity_rf256	= 5,
	NR_SchedulingInfo__si_Periodicity_rf512	= 6
} e_NR_SchedulingInfo__si_Periodicity;

/* NR_SchedulingInfo */
typedef struct NR_SchedulingInfo {
	long	 si_BroadcastStatus;
	long	 si_Periodicity;
	NR_SIB_Mapping_t	 sib_MappingInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_SchedulingInfo_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_si_BroadcastStatus_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_si_Periodicity_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_SchedulingInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_SchedulingInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_SchedulingInfo_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_SchedulingInfo_H_ */
#include <asn_internal.h>