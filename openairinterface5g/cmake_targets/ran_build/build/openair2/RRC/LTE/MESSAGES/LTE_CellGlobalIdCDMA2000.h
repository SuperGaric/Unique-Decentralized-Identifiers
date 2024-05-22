/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_CellGlobalIdCDMA2000_H_
#define	_LTE_CellGlobalIdCDMA2000_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_CellGlobalIdCDMA2000_PR {
	LTE_CellGlobalIdCDMA2000_PR_NOTHING,	/* No components present */
	LTE_CellGlobalIdCDMA2000_PR_cellGlobalId1XRTT,
	LTE_CellGlobalIdCDMA2000_PR_cellGlobalIdHRPD
} LTE_CellGlobalIdCDMA2000_PR;

/* LTE_CellGlobalIdCDMA2000 */
typedef struct LTE_CellGlobalIdCDMA2000 {
	LTE_CellGlobalIdCDMA2000_PR present;
	union LTE_CellGlobalIdCDMA2000_u {
		BIT_STRING_t	 cellGlobalId1XRTT;
		BIT_STRING_t	 cellGlobalIdHRPD;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CellGlobalIdCDMA2000_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CellGlobalIdCDMA2000;
extern asn_CHOICE_specifics_t asn_SPC_LTE_CellGlobalIdCDMA2000_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CellGlobalIdCDMA2000_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_CellGlobalIdCDMA2000_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_CellGlobalIdCDMA2000_H_ */
#include <asn_internal.h>
