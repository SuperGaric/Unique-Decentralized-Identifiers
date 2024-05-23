/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair2/F1AP/MESSAGES/ASN1/R16.3.1/38473-g31.asn"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/F1AP/MESSAGES`
 */

#ifndef	_F1AP_Dynamic5QIDescriptor_H_
#define	_F1AP_Dynamic5QIDescriptor_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "F1AP_PacketDelayBudget.h"
#include "F1AP_PacketErrorRate.h"
#include <NativeEnumerated.h>
#include "F1AP_AveragingWindow.h"
#include "F1AP_MaxDataBurstVolume.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum F1AP_Dynamic5QIDescriptor__delayCritical {
	F1AP_Dynamic5QIDescriptor__delayCritical_delay_critical	= 0,
	F1AP_Dynamic5QIDescriptor__delayCritical_non_delay_critical	= 1
} e_F1AP_Dynamic5QIDescriptor__delayCritical;

/* Forward declarations */
struct F1AP_ProtocolExtensionContainer;

/* F1AP_Dynamic5QIDescriptor */
typedef struct F1AP_Dynamic5QIDescriptor {
	long	 qoSPriorityLevel;
	F1AP_PacketDelayBudget_t	 packetDelayBudget;
	F1AP_PacketErrorRate_t	 packetErrorRate;
	long	*fiveQI;	/* OPTIONAL */
	long	*delayCritical;	/* OPTIONAL */
	F1AP_AveragingWindow_t	*averagingWindow;	/* OPTIONAL */
	F1AP_MaxDataBurstVolume_t	*maxDataBurstVolume;	/* OPTIONAL */
	struct F1AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} F1AP_Dynamic5QIDescriptor_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_F1AP_delayCritical_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_F1AP_Dynamic5QIDescriptor;
extern asn_SEQUENCE_specifics_t asn_SPC_F1AP_Dynamic5QIDescriptor_specs_1;
extern asn_TYPE_member_t asn_MBR_F1AP_Dynamic5QIDescriptor_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_Dynamic5QIDescriptor_H_ */
#include <asn_internal.h>
