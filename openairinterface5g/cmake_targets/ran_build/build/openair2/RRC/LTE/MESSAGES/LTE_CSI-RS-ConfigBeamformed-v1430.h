/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_CSI_RS_ConfigBeamformed_v1430_H_
#define	_LTE_CSI_RS_ConfigBeamformed_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_CSI_RS_Config_NZP_v1430;
struct LTE_CSI_RS_ConfigNZP_Activation_r14;
struct LTE_CSI_RS_ConfigNZP_r11;

/* LTE_CSI-RS-ConfigBeamformed-v1430 */
typedef struct LTE_CSI_RS_ConfigBeamformed_v1430 {
	struct LTE_CSI_RS_ConfigBeamformed_v1430__csi_RS_ConfigNZP_ApList_r14 {
		A_SEQUENCE_OF(struct LTE_CSI_RS_ConfigNZP_r11) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *csi_RS_ConfigNZP_ApList_r14;
	struct LTE_CSI_RS_Config_NZP_v1430	*nzp_ResourceConfigOriginal_v1430;	/* OPTIONAL */
	struct LTE_CSI_RS_ConfigNZP_Activation_r14	*csi_RS_NZP_Activation_r14;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CSI_RS_ConfigBeamformed_v1430_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CSI_RS_ConfigBeamformed_v1430;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_CSI_RS_ConfigBeamformed_v1430_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CSI_RS_ConfigBeamformed_v1430_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_CSI-RS-Config-NZP-v1430.h"
#include "LTE_CSI-RS-ConfigNZP-Activation-r14.h"
#include "LTE_CSI-RS-ConfigNZP-r11.h"

#endif	/* _LTE_CSI_RS_ConfigBeamformed_v1430_H_ */
#include <asn_internal.h>
