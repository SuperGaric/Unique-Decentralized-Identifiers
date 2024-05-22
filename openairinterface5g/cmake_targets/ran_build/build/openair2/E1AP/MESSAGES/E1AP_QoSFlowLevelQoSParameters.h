/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair2/E1AP/MESSAGES/ASN.1/38463-g80.R16.78.0.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-JER -no-gen-BER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/E1AP/MESSAGES`
 */

#ifndef	_E1AP_QoSFlowLevelQoSParameters_H_
#define	_E1AP_QoSFlowLevelQoSParameters_H_


#include <asn_application.h>

/* Including external dependencies */
#include "E1AP_QoS-Characteristics.h"
#include "E1AP_NGRANAllocationAndRetentionPriority.h"
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum E1AP_QoSFlowLevelQoSParameters__reflective_QoS_Attribute {
	E1AP_QoSFlowLevelQoSParameters__reflective_QoS_Attribute_subject_to	= 0
	/*
	 * Enumeration is extensible
	 */
} e_E1AP_QoSFlowLevelQoSParameters__reflective_QoS_Attribute;
typedef enum E1AP_QoSFlowLevelQoSParameters__additional_QoS_Information {
	E1AP_QoSFlowLevelQoSParameters__additional_QoS_Information_more_likely	= 0
	/*
	 * Enumeration is extensible
	 */
} e_E1AP_QoSFlowLevelQoSParameters__additional_QoS_Information;
typedef enum E1AP_QoSFlowLevelQoSParameters__reflective_QoS_Indicator {
	E1AP_QoSFlowLevelQoSParameters__reflective_QoS_Indicator_enabled	= 0
	/*
	 * Enumeration is extensible
	 */
} e_E1AP_QoSFlowLevelQoSParameters__reflective_QoS_Indicator;

/* Forward declarations */
struct E1AP_GBR_QoSFlowInformation;
struct E1AP_ProtocolExtensionContainer;

/* E1AP_QoSFlowLevelQoSParameters */
typedef struct E1AP_QoSFlowLevelQoSParameters {
	E1AP_QoS_Characteristics_t	 qoS_Characteristics;
	E1AP_NGRANAllocationAndRetentionPriority_t	 nGRANallocationRetentionPriority;
	struct E1AP_GBR_QoSFlowInformation	*gBR_QoS_Flow_Information;	/* OPTIONAL */
	long	*reflective_QoS_Attribute;	/* OPTIONAL */
	long	*additional_QoS_Information;	/* OPTIONAL */
	long	*paging_Policy_Indicator;	/* OPTIONAL */
	long	*reflective_QoS_Indicator;	/* OPTIONAL */
	struct E1AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E1AP_QoSFlowLevelQoSParameters_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_E1AP_reflective_QoS_Attribute_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_E1AP_additional_QoS_Information_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_E1AP_reflective_QoS_Indicator_12;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_E1AP_QoSFlowLevelQoSParameters;
extern asn_SEQUENCE_specifics_t asn_SPC_E1AP_QoSFlowLevelQoSParameters_specs_1;
extern asn_TYPE_member_t asn_MBR_E1AP_QoSFlowLevelQoSParameters_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _E1AP_QoSFlowLevelQoSParameters_H_ */
#include <asn_internal.h>
