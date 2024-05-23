/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-UE-Variables"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_VarShortResumeMAC_Input_r13_H_
#define	_LTE_VarShortResumeMAC_Input_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_CellIdentity.h"
#include "LTE_PhysCellId.h"
#include "LTE_C-RNTI.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_VarShortResumeMAC-Input-r13 */
typedef struct LTE_VarShortResumeMAC_Input_r13 {
	LTE_CellIdentity_t	 cellIdentity_r13;
	LTE_PhysCellId_t	 physCellId_r13;
	LTE_C_RNTI_t	 c_RNTI_r13;
	BIT_STRING_t	 resumeDiscriminator_r13;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_VarShortResumeMAC_Input_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_VarShortResumeMAC_Input_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_VarShortResumeMAC_Input_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_VarShortResumeMAC_Input_r13_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_VarShortResumeMAC_Input_r13_H_ */
#include <asn_internal.h>
