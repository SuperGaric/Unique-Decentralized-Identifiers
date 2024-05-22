/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_MasterInformationBlock_TDD_NB_r15_H_
#define	_LTE_MasterInformationBlock_TDD_NB_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <NativeInteger.h>
#include <BOOLEAN.h>
#include <NativeEnumerated.h>
#include "LTE_Inband-SamePCI-TDD-NB-r15.h"
#include "LTE_Inband-DifferentPCI-TDD-NB-r15.h"
#include "LTE_GuardbandTDD-NB-r15.h"
#include "LTE_StandaloneTDD-NB-r15.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_MasterInformationBlock_TDD_NB_r15__operationModeInfo_r15_PR {
	LTE_MasterInformationBlock_TDD_NB_r15__operationModeInfo_r15_PR_NOTHING,	/* No components present */
	LTE_MasterInformationBlock_TDD_NB_r15__operationModeInfo_r15_PR_inband_SamePCI_r15,
	LTE_MasterInformationBlock_TDD_NB_r15__operationModeInfo_r15_PR_inband_DifferentPCI_r15,
	LTE_MasterInformationBlock_TDD_NB_r15__operationModeInfo_r15_PR_guardband_r15,
	LTE_MasterInformationBlock_TDD_NB_r15__operationModeInfo_r15_PR_standalone_r15
} LTE_MasterInformationBlock_TDD_NB_r15__operationModeInfo_r15_PR;
typedef enum LTE_MasterInformationBlock_TDD_NB_r15__sib1_CarrierInfo_r15 {
	LTE_MasterInformationBlock_TDD_NB_r15__sib1_CarrierInfo_r15_anchor	= 0,
	LTE_MasterInformationBlock_TDD_NB_r15__sib1_CarrierInfo_r15_non_anchor	= 1
} e_LTE_MasterInformationBlock_TDD_NB_r15__sib1_CarrierInfo_r15;

/* LTE_MasterInformationBlock-TDD-NB-r15 */
typedef struct LTE_MasterInformationBlock_TDD_NB_r15 {
	BIT_STRING_t	 systemFrameNumber_MSB_r15;
	BIT_STRING_t	 hyperSFN_LSB_r15;
	long	 schedulingInfoSIB1_r15;
	long	 systemInfoValueTag_r15;
	BOOLEAN_t	 ab_Enabled_r15;
	struct LTE_MasterInformationBlock_TDD_NB_r15__operationModeInfo_r15 {
		LTE_MasterInformationBlock_TDD_NB_r15__operationModeInfo_r15_PR present;
		union LTE_MasterInformationBlock_TDD_NB_r15__LTE_operationModeInfo_r15_u {
			LTE_Inband_SamePCI_TDD_NB_r15_t	 inband_SamePCI_r15;
			LTE_Inband_DifferentPCI_TDD_NB_r15_t	 inband_DifferentPCI_r15;
			LTE_GuardbandTDD_NB_r15_t	 guardband_r15;
			LTE_StandaloneTDD_NB_r15_t	 standalone_r15;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} operationModeInfo_r15;
	long	 sib1_CarrierInfo_r15;
	BOOLEAN_t	 ab_Enabled_5GC_r16;
	BIT_STRING_t	 spare;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_MasterInformationBlock_TDD_NB_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_sib1_CarrierInfo_r15_12;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_MasterInformationBlock_TDD_NB_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_MasterInformationBlock_TDD_NB_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_MasterInformationBlock_TDD_NB_r15_1[9];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_MasterInformationBlock_TDD_NB_r15_H_ */
#include <asn_internal.h>
