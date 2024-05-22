/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_SL_PQI_r16_H_
#define	_NR_SL_PQI_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_SL_PQI_r16_PR {
	NR_SL_PQI_r16_PR_NOTHING,	/* No components present */
	NR_SL_PQI_r16_PR_sl_StandardizedPQI_r16,
	NR_SL_PQI_r16_PR_sl_Non_StandardizedPQI_r16
} NR_SL_PQI_r16_PR;
typedef enum NR_SL_PQI_r16__sl_Non_StandardizedPQI_r16__sl_ResourceType_r16 {
	NR_SL_PQI_r16__sl_Non_StandardizedPQI_r16__sl_ResourceType_r16_gbr	= 0,
	NR_SL_PQI_r16__sl_Non_StandardizedPQI_r16__sl_ResourceType_r16_non_GBR	= 1,
	NR_SL_PQI_r16__sl_Non_StandardizedPQI_r16__sl_ResourceType_r16_delayCriticalGBR	= 2,
	NR_SL_PQI_r16__sl_Non_StandardizedPQI_r16__sl_ResourceType_r16_spare1	= 3
} e_NR_SL_PQI_r16__sl_Non_StandardizedPQI_r16__sl_ResourceType_r16;

/* NR_SL-PQI-r16 */
typedef struct NR_SL_PQI_r16 {
	NR_SL_PQI_r16_PR present;
	union NR_SL_PQI_r16_u {
		long	 sl_StandardizedPQI_r16;
		struct NR_SL_PQI_r16__sl_Non_StandardizedPQI_r16 {
			long	*sl_ResourceType_r16;	/* OPTIONAL */
			long	*sl_PriorityLevel_r16;	/* OPTIONAL */
			long	*sl_PacketDelayBudget_r16;	/* OPTIONAL */
			long	*sl_PacketErrorRate_r16;	/* OPTIONAL */
			long	*sl_AveragingWindow_r16;	/* OPTIONAL */
			long	*sl_MaxDataBurstVolume_r16;	/* OPTIONAL */
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *sl_Non_StandardizedPQI_r16;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_SL_PQI_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_sl_ResourceType_r16_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_SL_PQI_r16;
extern asn_CHOICE_specifics_t asn_SPC_NR_SL_PQI_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_SL_PQI_r16_1[2];
extern asn_per_constraints_t asn_PER_type_NR_SL_PQI_r16_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _NR_SL_PQI_r16_H_ */
#include <asn_internal.h>
