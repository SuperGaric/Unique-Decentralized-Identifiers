/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair2/E1AP/MESSAGES/ASN.1/38463-g80.R16.78.0.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-JER -no-gen-BER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/E1AP/MESSAGES`
 */

#ifndef	_E1AP_PDCP_Configuration_H_
#define	_E1AP_PDCP_Configuration_H_


#include <asn_application.h>

/* Including external dependencies */
#include "E1AP_PDCP-SN-Size.h"
#include "E1AP_RLC-Mode.h"
#include "E1AP_DiscardTimer.h"
#include "E1AP_ULDataSplitThreshold.h"
#include "E1AP_PDCP-Duplication.h"
#include "E1AP_PDCP-Reestablishment.h"
#include "E1AP_PDCP-DataRecovery.h"
#include "E1AP_Duplication-Activation.h"
#include "E1AP_OutOfOrderDelivery.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct E1AP_ROHC_Parameters;
struct E1AP_T_ReorderingTimer;
struct E1AP_ProtocolExtensionContainer;

/* E1AP_PDCP-Configuration */
typedef struct E1AP_PDCP_Configuration {
	E1AP_PDCP_SN_Size_t	 pDCP_SN_Size_UL;
	E1AP_PDCP_SN_Size_t	 pDCP_SN_Size_DL;
	E1AP_RLC_Mode_t	 rLC_Mode;
	struct E1AP_ROHC_Parameters	*rOHC_Parameters;	/* OPTIONAL */
	struct E1AP_T_ReorderingTimer	*t_ReorderingTimer;	/* OPTIONAL */
	E1AP_DiscardTimer_t	*discardTimer;	/* OPTIONAL */
	E1AP_ULDataSplitThreshold_t	*uLDataSplitThreshold;	/* OPTIONAL */
	E1AP_PDCP_Duplication_t	*pDCP_Duplication;	/* OPTIONAL */
	E1AP_PDCP_Reestablishment_t	*pDCP_Reestablishment;	/* OPTIONAL */
	E1AP_PDCP_DataRecovery_t	*pDCP_DataRecovery;	/* OPTIONAL */
	E1AP_Duplication_Activation_t	*duplication_Activation;	/* OPTIONAL */
	E1AP_OutOfOrderDelivery_t	*outOfOrderDelivery;	/* OPTIONAL */
	struct E1AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E1AP_PDCP_Configuration_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E1AP_PDCP_Configuration;
extern asn_SEQUENCE_specifics_t asn_SPC_E1AP_PDCP_Configuration_specs_1;
extern asn_TYPE_member_t asn_MBR_E1AP_PDCP_Configuration_1[13];

#ifdef __cplusplus
}
#endif

#endif	/* _E1AP_PDCP_Configuration_H_ */
#include <asn_internal.h>
