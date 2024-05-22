/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PC5-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_SL_SDAP_ConfigPC5_r16_H_
#define	_NR_SL_SDAP_ConfigPC5_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "NR_SL-PQFI-r16.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_SL_SDAP_ConfigPC5_r16__sl_SDAP_Header_r16 {
	NR_SL_SDAP_ConfigPC5_r16__sl_SDAP_Header_r16_present	= 0,
	NR_SL_SDAP_ConfigPC5_r16__sl_SDAP_Header_r16_absent	= 1
} e_NR_SL_SDAP_ConfigPC5_r16__sl_SDAP_Header_r16;

/* NR_SL-SDAP-ConfigPC5-r16 */
typedef struct NR_SL_SDAP_ConfigPC5_r16 {
	struct NR_SL_SDAP_ConfigPC5_r16__sl_MappedQoS_FlowsToAddList_r16 {
		A_SEQUENCE_OF(NR_SL_PQFI_r16_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *sl_MappedQoS_FlowsToAddList_r16;
	struct NR_SL_SDAP_ConfigPC5_r16__sl_MappedQoS_FlowsToReleaseList_r16 {
		A_SEQUENCE_OF(NR_SL_PQFI_r16_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *sl_MappedQoS_FlowsToReleaseList_r16;
	long	 sl_SDAP_Header_r16;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_SL_SDAP_ConfigPC5_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_sl_SDAP_Header_r16_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_SL_SDAP_ConfigPC5_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_SL_SDAP_ConfigPC5_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_SL_SDAP_ConfigPC5_r16_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_SL_SDAP_ConfigPC5_r16_H_ */
#include <asn_internal.h>