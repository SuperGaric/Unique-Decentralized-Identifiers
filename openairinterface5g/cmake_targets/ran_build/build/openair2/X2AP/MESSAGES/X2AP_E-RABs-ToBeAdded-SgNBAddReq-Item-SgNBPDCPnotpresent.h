/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "/home/dmt/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/X2AP/MESSAGES`
 */

#ifndef	_X2AP_E_RABs_ToBeAdded_SgNBAddReq_Item_SgNBPDCPnotpresent_H_
#define	_X2AP_E_RABs_ToBeAdded_SgNBAddReq_Item_SgNBPDCPnotpresent_H_


#include <asn_application.h>

/* Including external dependencies */
#include "X2AP_E-RAB-Level-QoS-Parameters.h"
#include "X2AP_GTPtunnelEndpoint.h"
#include "X2AP_RLCMode.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct X2AP_GTPtunnelEndpoint;
struct X2AP_ULConfiguration;
struct X2AP_ProtocolExtensionContainer;

/* X2AP_E-RABs-ToBeAdded-SgNBAddReq-Item-SgNBPDCPnotpresent */
typedef struct X2AP_E_RABs_ToBeAdded_SgNBAddReq_Item_SgNBPDCPnotpresent {
	X2AP_E_RAB_Level_QoS_Parameters_t	 requested_SCG_E_RAB_Level_QoS_Parameters;
	X2AP_GTPtunnelEndpoint_t	 meNB_UL_GTP_TEIDatPDCP;
	struct X2AP_GTPtunnelEndpoint	*secondary_meNB_UL_GTP_TEIDatPDCP;	/* OPTIONAL */
	X2AP_RLCMode_t	 rlc_Mode;
	struct X2AP_ULConfiguration	*uL_Configuration;	/* OPTIONAL */
	struct X2AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_E_RABs_ToBeAdded_SgNBAddReq_Item_SgNBPDCPnotpresent_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2AP_E_RABs_ToBeAdded_SgNBAddReq_Item_SgNBPDCPnotpresent;
extern asn_SEQUENCE_specifics_t asn_SPC_X2AP_E_RABs_ToBeAdded_SgNBAddReq_Item_SgNBPDCPnotpresent_specs_1;
extern asn_TYPE_member_t asn_MBR_X2AP_E_RABs_ToBeAdded_SgNBAddReq_Item_SgNBPDCPnotpresent_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_E_RABs_ToBeAdded_SgNBAddReq_Item_SgNBPDCPnotpresent_H_ */
#include <asn_internal.h>
