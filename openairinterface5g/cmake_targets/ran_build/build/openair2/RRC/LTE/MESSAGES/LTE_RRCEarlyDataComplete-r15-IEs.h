/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_RRCEarlyDataComplete_r15_IEs_H_
#define	_LTE_RRCEarlyDataComplete_r15_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_DedicatedInfoNAS.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_IdleModeMobilityControlInfo;
struct LTE_IdleModeMobilityControlInfo_v9e0;
struct LTE_RedirectedCarrierInfo_r15_IEs;
struct LTE_RRCEarlyDataComplete_v1590_IEs;

/* LTE_RRCEarlyDataComplete-r15-IEs */
typedef struct LTE_RRCEarlyDataComplete_r15_IEs {
	LTE_DedicatedInfoNAS_t	*dedicatedInfoNAS_r15;	/* OPTIONAL */
	long	*extendedWaitTime_r15;	/* OPTIONAL */
	struct LTE_IdleModeMobilityControlInfo	*idleModeMobilityControlInfo_r15;	/* OPTIONAL */
	struct LTE_IdleModeMobilityControlInfo_v9e0	*idleModeMobilityControlInfoExt_r15;	/* OPTIONAL */
	struct LTE_RedirectedCarrierInfo_r15_IEs	*redirectedCarrierInfo_r15;	/* OPTIONAL */
	struct LTE_RRCEarlyDataComplete_v1590_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RRCEarlyDataComplete_r15_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RRCEarlyDataComplete_r15_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_RRCEarlyDataComplete_r15_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RRCEarlyDataComplete_r15_IEs_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_IdleModeMobilityControlInfo.h"
#include "LTE_IdleModeMobilityControlInfo-v9e0.h"
#include "LTE_RedirectedCarrierInfo-r15-IEs.h"
#include "LTE_RRCEarlyDataComplete-v1590-IEs.h"

#endif	/* _LTE_RRCEarlyDataComplete_r15_IEs_H_ */
#include <asn_internal.h>