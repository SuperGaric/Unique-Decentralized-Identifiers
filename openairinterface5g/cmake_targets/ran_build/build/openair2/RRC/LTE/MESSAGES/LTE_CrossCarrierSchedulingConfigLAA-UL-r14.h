/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_CrossCarrierSchedulingConfigLAA_UL_r14_H_
#define	_LTE_CrossCarrierSchedulingConfigLAA_UL_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_ServCellIndex-r13.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_CrossCarrierSchedulingConfigLAA-UL-r14 */
typedef struct LTE_CrossCarrierSchedulingConfigLAA_UL_r14 {
	LTE_ServCellIndex_r13_t	 schedulingCellId_r14;
	long	 cif_InSchedulingCell_r14;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CrossCarrierSchedulingConfigLAA_UL_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CrossCarrierSchedulingConfigLAA_UL_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_CrossCarrierSchedulingConfigLAA_UL_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CrossCarrierSchedulingConfigLAA_UL_r14_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_CrossCarrierSchedulingConfigLAA_UL_r14_H_ */
#include <asn_internal.h>
