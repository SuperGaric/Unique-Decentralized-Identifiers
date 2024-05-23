/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_PUSCH_ConfigDedicated_v1130_H_
#define	_LTE_PUSCH_ConfigDedicated_v1130_H_


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
typedef enum LTE_PUSCH_ConfigDedicated_v1130__pusch_DMRS_r11_PR {
	LTE_PUSCH_ConfigDedicated_v1130__pusch_DMRS_r11_PR_NOTHING,	/* No components present */
	LTE_PUSCH_ConfigDedicated_v1130__pusch_DMRS_r11_PR_release,
	LTE_PUSCH_ConfigDedicated_v1130__pusch_DMRS_r11_PR_setup
} LTE_PUSCH_ConfigDedicated_v1130__pusch_DMRS_r11_PR;

/* LTE_PUSCH-ConfigDedicated-v1130 */
typedef struct LTE_PUSCH_ConfigDedicated_v1130 {
	struct LTE_PUSCH_ConfigDedicated_v1130__pusch_DMRS_r11 {
		LTE_PUSCH_ConfigDedicated_v1130__pusch_DMRS_r11_PR present;
		union LTE_PUSCH_ConfigDedicated_v1130__LTE_pusch_DMRS_r11_u {
			NULL_t	 release;
			struct LTE_PUSCH_ConfigDedicated_v1130__pusch_DMRS_r11__setup {
				long	 nPUSCH_Identity_r11;
				long	 nDMRS_CSH_Identity_r11;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} pusch_DMRS_r11;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_PUSCH_ConfigDedicated_v1130_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_PUSCH_ConfigDedicated_v1130;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_PUSCH_ConfigDedicated_v1130_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_PUSCH_ConfigDedicated_v1130_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_PUSCH_ConfigDedicated_v1130_H_ */
#include <asn_internal.h>
