/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_PUCCH_ConfigDedicated_v1250_H_
#define	_LTE_PUCCH_ConfigDedicated_v1250_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_PUCCH_ConfigDedicated_v1250__nkaPUCCH_Param_r12_PR {
	LTE_PUCCH_ConfigDedicated_v1250__nkaPUCCH_Param_r12_PR_NOTHING,	/* No components present */
	LTE_PUCCH_ConfigDedicated_v1250__nkaPUCCH_Param_r12_PR_release,
	LTE_PUCCH_ConfigDedicated_v1250__nkaPUCCH_Param_r12_PR_setup
} LTE_PUCCH_ConfigDedicated_v1250__nkaPUCCH_Param_r12_PR;

/* LTE_PUCCH-ConfigDedicated-v1250 */
typedef struct LTE_PUCCH_ConfigDedicated_v1250 {
	struct LTE_PUCCH_ConfigDedicated_v1250__nkaPUCCH_Param_r12 {
		LTE_PUCCH_ConfigDedicated_v1250__nkaPUCCH_Param_r12_PR present;
		union LTE_PUCCH_ConfigDedicated_v1250__LTE_nkaPUCCH_Param_r12_u {
			NULL_t	 release;
			struct LTE_PUCCH_ConfigDedicated_v1250__nkaPUCCH_Param_r12__setup {
				long	 nkaPUCCH_AN_r12;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} nkaPUCCH_Param_r12;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_PUCCH_ConfigDedicated_v1250_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_PUCCH_ConfigDedicated_v1250;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_PUCCH_ConfigDedicated_v1250_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_PUCCH_ConfigDedicated_v1250_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_PUCCH_ConfigDedicated_v1250_H_ */
#include <asn_internal.h>
