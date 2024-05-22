/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_CondReconfigurationTriggerEUTRA_r16_H_
#define	_LTE_CondReconfigurationTriggerEUTRA_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "LTE_Hysteresis.h"
#include "LTE_TimeToTrigger.h"
#include <constr_SEQUENCE.h>
#include "LTE_ThresholdEUTRA.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_CondReconfigurationTriggerEUTRA_r16__condEventId_r16_PR {
	LTE_CondReconfigurationTriggerEUTRA_r16__condEventId_r16_PR_NOTHING,	/* No components present */
	LTE_CondReconfigurationTriggerEUTRA_r16__condEventId_r16_PR_condEventA3_r16,
	LTE_CondReconfigurationTriggerEUTRA_r16__condEventId_r16_PR_condEventA5_r16
	/* Extensions may appear below */
	
} LTE_CondReconfigurationTriggerEUTRA_r16__condEventId_r16_PR;

/* LTE_CondReconfigurationTriggerEUTRA-r16 */
typedef struct LTE_CondReconfigurationTriggerEUTRA_r16 {
	struct LTE_CondReconfigurationTriggerEUTRA_r16__condEventId_r16 {
		LTE_CondReconfigurationTriggerEUTRA_r16__condEventId_r16_PR present;
		union LTE_CondReconfigurationTriggerEUTRA_r16__LTE_condEventId_r16_u {
			struct LTE_CondReconfigurationTriggerEUTRA_r16__condEventId_r16__condEventA3_r16 {
				long	 a3_Offset_r16;
				LTE_Hysteresis_t	 hysteresis_r16;
				LTE_TimeToTrigger_t	 timeToTrigger_r16;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} condEventA3_r16;
			struct LTE_CondReconfigurationTriggerEUTRA_r16__condEventId_r16__condEventA5_r16 {
				LTE_ThresholdEUTRA_t	 a5_Threshold1_r16;
				LTE_ThresholdEUTRA_t	 a5_Threshold2_r16;
				LTE_Hysteresis_t	 hysteresis_r16;
				LTE_TimeToTrigger_t	 timeToTrigger_r16;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} condEventA5_r16;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} condEventId_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CondReconfigurationTriggerEUTRA_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CondReconfigurationTriggerEUTRA_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_CondReconfigurationTriggerEUTRA_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CondReconfigurationTriggerEUTRA_r16_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_CondReconfigurationTriggerEUTRA_r16_H_ */
#include <asn_internal.h>