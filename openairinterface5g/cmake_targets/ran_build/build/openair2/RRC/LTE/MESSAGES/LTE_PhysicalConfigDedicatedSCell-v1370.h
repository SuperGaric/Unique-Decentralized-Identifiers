/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_PhysicalConfigDedicatedSCell_v1370_H_
#define	_LTE_PhysicalConfigDedicatedSCell_v1370_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_PhysicalConfigDedicatedSCell_v1370__pucch_SCell_v1370_PR {
	LTE_PhysicalConfigDedicatedSCell_v1370__pucch_SCell_v1370_PR_NOTHING,	/* No components present */
	LTE_PhysicalConfigDedicatedSCell_v1370__pucch_SCell_v1370_PR_release,
	LTE_PhysicalConfigDedicatedSCell_v1370__pucch_SCell_v1370_PR_setup
} LTE_PhysicalConfigDedicatedSCell_v1370__pucch_SCell_v1370_PR;

/* Forward declarations */
struct LTE_PUCCH_ConfigDedicated_v1370;

/* LTE_PhysicalConfigDedicatedSCell-v1370 */
typedef struct LTE_PhysicalConfigDedicatedSCell_v1370 {
	struct LTE_PhysicalConfigDedicatedSCell_v1370__pucch_SCell_v1370 {
		LTE_PhysicalConfigDedicatedSCell_v1370__pucch_SCell_v1370_PR present;
		union LTE_PhysicalConfigDedicatedSCell_v1370__LTE_pucch_SCell_v1370_u {
			NULL_t	 release;
			struct LTE_PhysicalConfigDedicatedSCell_v1370__pucch_SCell_v1370__setup {
				struct LTE_PUCCH_ConfigDedicated_v1370	*pucch_ConfigDedicated_v1370;	/* OPTIONAL */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} pucch_SCell_v1370;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_PhysicalConfigDedicatedSCell_v1370_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_PhysicalConfigDedicatedSCell_v1370;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_PhysicalConfigDedicatedSCell_v1370_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_PhysicalConfigDedicatedSCell_v1370_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_PUCCH-ConfigDedicated-v1370.h"

#endif	/* _LTE_PhysicalConfigDedicatedSCell_v1370_H_ */
#include <asn_internal.h>
