/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_CodebookParameters_H_
#define	_NR_CodebookParameters_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_CodebookParameters__type1__singlePanel__modes {
	NR_CodebookParameters__type1__singlePanel__modes_mode1	= 0,
	NR_CodebookParameters__type1__singlePanel__modes_mode1andMode2	= 1
} e_NR_CodebookParameters__type1__singlePanel__modes;
typedef enum NR_CodebookParameters__type1__multiPanel__modes {
	NR_CodebookParameters__type1__multiPanel__modes_mode1	= 0,
	NR_CodebookParameters__type1__multiPanel__modes_mode2	= 1,
	NR_CodebookParameters__type1__multiPanel__modes_both	= 2
} e_NR_CodebookParameters__type1__multiPanel__modes;
typedef enum NR_CodebookParameters__type1__multiPanel__nrofPanels {
	NR_CodebookParameters__type1__multiPanel__nrofPanels_n2	= 0,
	NR_CodebookParameters__type1__multiPanel__nrofPanels_n4	= 1
} e_NR_CodebookParameters__type1__multiPanel__nrofPanels;
typedef enum NR_CodebookParameters__type2__amplitudeScalingType {
	NR_CodebookParameters__type2__amplitudeScalingType_wideband	= 0,
	NR_CodebookParameters__type2__amplitudeScalingType_widebandAndSubband	= 1
} e_NR_CodebookParameters__type2__amplitudeScalingType;
typedef enum NR_CodebookParameters__type2__amplitudeSubsetRestriction {
	NR_CodebookParameters__type2__amplitudeSubsetRestriction_supported	= 0
} e_NR_CodebookParameters__type2__amplitudeSubsetRestriction;
typedef enum NR_CodebookParameters__type2_PortSelection__amplitudeScalingType {
	NR_CodebookParameters__type2_PortSelection__amplitudeScalingType_wideband	= 0,
	NR_CodebookParameters__type2_PortSelection__amplitudeScalingType_widebandAndSubband	= 1
} e_NR_CodebookParameters__type2_PortSelection__amplitudeScalingType;

/* Forward declarations */
struct NR_SupportedCSI_RS_Resource;

/* NR_CodebookParameters */
typedef struct NR_CodebookParameters {
	struct NR_CodebookParameters__type1 {
		struct NR_CodebookParameters__type1__singlePanel {
			struct NR_CodebookParameters__type1__singlePanel__supportedCSI_RS_ResourceList {
				A_SEQUENCE_OF(struct NR_SupportedCSI_RS_Resource) list;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} supportedCSI_RS_ResourceList;
			long	 modes;
			long	 maxNumberCSI_RS_PerResourceSet;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} singlePanel;
		struct NR_CodebookParameters__type1__multiPanel {
			struct NR_CodebookParameters__type1__multiPanel__supportedCSI_RS_ResourceList {
				A_SEQUENCE_OF(struct NR_SupportedCSI_RS_Resource) list;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} supportedCSI_RS_ResourceList;
			long	 modes;
			long	 nrofPanels;
			long	 maxNumberCSI_RS_PerResourceSet;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *multiPanel;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} type1;
	struct NR_CodebookParameters__type2 {
		struct NR_CodebookParameters__type2__supportedCSI_RS_ResourceList {
			A_SEQUENCE_OF(struct NR_SupportedCSI_RS_Resource) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} supportedCSI_RS_ResourceList;
		long	 parameterLx;
		long	 amplitudeScalingType;
		long	*amplitudeSubsetRestriction;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *type2;
	struct NR_CodebookParameters__type2_PortSelection {
		struct NR_CodebookParameters__type2_PortSelection__supportedCSI_RS_ResourceList {
			A_SEQUENCE_OF(struct NR_SupportedCSI_RS_Resource) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} supportedCSI_RS_ResourceList;
		long	 parameterLx;
		long	 amplitudeScalingType;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *type2_PortSelection;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_CodebookParameters_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_modes_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_modes_13;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_nrofPanels_17;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_amplitudeScalingType_25;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_amplitudeSubsetRestriction_28;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_amplitudeScalingType_34;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_CodebookParameters;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_CodebookParameters_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_CodebookParameters_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_SupportedCSI-RS-Resource.h"

#endif	/* _NR_CodebookParameters_H_ */
#include <asn_internal.h>