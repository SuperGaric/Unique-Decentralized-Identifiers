/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_PDSCH_RE_MappingQCL_Config_r11_H_
#define	_LTE_PDSCH_RE_MappingQCL_Config_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_PDSCH-RE-MappingQCL-ConfigId-r11.h"
#include "LTE_CSI-RS-ConfigZPId-r11.h"
#include "LTE_CSI-RS-ConfigNZPId-r11.h"
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <NULL.h>
#include "LTE_MBSFN-SubframeConfigList.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>
#include "LTE_MBSFN-SubframeConfigList-v1430.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__crs_PortsCount_r11 {
	LTE_PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__crs_PortsCount_r11_n1	= 0,
	LTE_PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__crs_PortsCount_r11_n2	= 1,
	LTE_PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__crs_PortsCount_r11_n4	= 2,
	LTE_PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__crs_PortsCount_r11_spare1	= 3
} e_LTE_PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__crs_PortsCount_r11;
typedef enum LTE_PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__mbsfn_SubframeConfigList_r11_PR {
	LTE_PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__mbsfn_SubframeConfigList_r11_PR_NOTHING,	/* No components present */
	LTE_PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__mbsfn_SubframeConfigList_r11_PR_release,
	LTE_PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__mbsfn_SubframeConfigList_r11_PR_setup
} LTE_PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__mbsfn_SubframeConfigList_r11_PR;
typedef enum LTE_PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__pdsch_Start_r11 {
	LTE_PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__pdsch_Start_r11_reserved	= 0,
	LTE_PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__pdsch_Start_r11_n1	= 1,
	LTE_PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__pdsch_Start_r11_n2	= 2,
	LTE_PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__pdsch_Start_r11_n3	= 3,
	LTE_PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__pdsch_Start_r11_n4	= 4,
	LTE_PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__pdsch_Start_r11_assigned	= 5
} e_LTE_PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__pdsch_Start_r11;
typedef enum LTE_PDSCH_RE_MappingQCL_Config_r11__ext1__mbsfn_SubframeConfigList_v1430_PR {
	LTE_PDSCH_RE_MappingQCL_Config_r11__ext1__mbsfn_SubframeConfigList_v1430_PR_NOTHING,	/* No components present */
	LTE_PDSCH_RE_MappingQCL_Config_r11__ext1__mbsfn_SubframeConfigList_v1430_PR_release,
	LTE_PDSCH_RE_MappingQCL_Config_r11__ext1__mbsfn_SubframeConfigList_v1430_PR_setup
} LTE_PDSCH_RE_MappingQCL_Config_r11__ext1__mbsfn_SubframeConfigList_v1430_PR;
typedef enum LTE_PDSCH_RE_MappingQCL_Config_r11__ext2__codewordOneConfig_v1530_PR {
	LTE_PDSCH_RE_MappingQCL_Config_r11__ext2__codewordOneConfig_v1530_PR_NOTHING,	/* No components present */
	LTE_PDSCH_RE_MappingQCL_Config_r11__ext2__codewordOneConfig_v1530_PR_release,
	LTE_PDSCH_RE_MappingQCL_Config_r11__ext2__codewordOneConfig_v1530_PR_setup
} LTE_PDSCH_RE_MappingQCL_Config_r11__ext2__codewordOneConfig_v1530_PR;
typedef enum LTE_PDSCH_RE_MappingQCL_Config_r11__ext2__codewordOneConfig_v1530__setup__crs_PortsCount_v1530 {
	LTE_PDSCH_RE_MappingQCL_Config_r11__ext2__codewordOneConfig_v1530__setup__crs_PortsCount_v1530_n1	= 0,
	LTE_PDSCH_RE_MappingQCL_Config_r11__ext2__codewordOneConfig_v1530__setup__crs_PortsCount_v1530_n2	= 1,
	LTE_PDSCH_RE_MappingQCL_Config_r11__ext2__codewordOneConfig_v1530__setup__crs_PortsCount_v1530_n4	= 2,
	LTE_PDSCH_RE_MappingQCL_Config_r11__ext2__codewordOneConfig_v1530__setup__crs_PortsCount_v1530_spare1	= 3
} e_LTE_PDSCH_RE_MappingQCL_Config_r11__ext2__codewordOneConfig_v1530__setup__crs_PortsCount_v1530;
typedef enum LTE_PDSCH_RE_MappingQCL_Config_r11__ext2__codewordOneConfig_v1530__setup__pdsch_Start_v1530 {
	LTE_PDSCH_RE_MappingQCL_Config_r11__ext2__codewordOneConfig_v1530__setup__pdsch_Start_v1530_reserved	= 0,
	LTE_PDSCH_RE_MappingQCL_Config_r11__ext2__codewordOneConfig_v1530__setup__pdsch_Start_v1530_n1	= 1,
	LTE_PDSCH_RE_MappingQCL_Config_r11__ext2__codewordOneConfig_v1530__setup__pdsch_Start_v1530_n2	= 2,
	LTE_PDSCH_RE_MappingQCL_Config_r11__ext2__codewordOneConfig_v1530__setup__pdsch_Start_v1530_n3	= 3,
	LTE_PDSCH_RE_MappingQCL_Config_r11__ext2__codewordOneConfig_v1530__setup__pdsch_Start_v1530_n4	= 4,
	LTE_PDSCH_RE_MappingQCL_Config_r11__ext2__codewordOneConfig_v1530__setup__pdsch_Start_v1530_assigned	= 5
} e_LTE_PDSCH_RE_MappingQCL_Config_r11__ext2__codewordOneConfig_v1530__setup__pdsch_Start_v1530;

/* Forward declarations */
struct LTE_MBSFN_SubframeConfigList;
struct LTE_MBSFN_SubframeConfigList_v1430;

/* LTE_PDSCH-RE-MappingQCL-Config-r11 */
typedef struct LTE_PDSCH_RE_MappingQCL_Config_r11 {
	LTE_PDSCH_RE_MappingQCL_ConfigId_r11_t	 pdsch_RE_MappingQCL_ConfigId_r11;
	struct LTE_PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11 {
		long	 crs_PortsCount_r11;
		long	 crs_FreqShift_r11;
		struct LTE_PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__mbsfn_SubframeConfigList_r11 {
			LTE_PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__mbsfn_SubframeConfigList_r11_PR present;
			union LTE_PDSCH_RE_MappingQCL_Config_r11__LTE_optionalSetOfFields_r11__LTE_mbsfn_SubframeConfigList_r11_u {
				NULL_t	 release;
				struct LTE_PDSCH_RE_MappingQCL_Config_r11__optionalSetOfFields_r11__mbsfn_SubframeConfigList_r11__setup {
					LTE_MBSFN_SubframeConfigList_t	 subframeConfigList;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} setup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *mbsfn_SubframeConfigList_r11;
		long	 pdsch_Start_r11;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *optionalSetOfFields_r11;
	LTE_CSI_RS_ConfigZPId_r11_t	 csi_RS_ConfigZPId_r11;
	LTE_CSI_RS_ConfigNZPId_r11_t	*qcl_CSI_RS_ConfigNZPId_r11;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_PDSCH_RE_MappingQCL_Config_r11__ext1 {
		struct LTE_PDSCH_RE_MappingQCL_Config_r11__ext1__mbsfn_SubframeConfigList_v1430 {
			LTE_PDSCH_RE_MappingQCL_Config_r11__ext1__mbsfn_SubframeConfigList_v1430_PR present;
			union LTE_PDSCH_RE_MappingQCL_Config_r11__LTE_ext1__LTE_mbsfn_SubframeConfigList_v1430_u {
				NULL_t	 release;
				struct LTE_PDSCH_RE_MappingQCL_Config_r11__ext1__mbsfn_SubframeConfigList_v1430__setup {
					LTE_MBSFN_SubframeConfigList_v1430_t	 subframeConfigList_v1430;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} setup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *mbsfn_SubframeConfigList_v1430;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct LTE_PDSCH_RE_MappingQCL_Config_r11__ext2 {
		struct LTE_PDSCH_RE_MappingQCL_Config_r11__ext2__codewordOneConfig_v1530 {
			LTE_PDSCH_RE_MappingQCL_Config_r11__ext2__codewordOneConfig_v1530_PR present;
			union LTE_PDSCH_RE_MappingQCL_Config_r11__LTE_ext2__LTE_codewordOneConfig_v1530_u {
				NULL_t	 release;
				struct LTE_PDSCH_RE_MappingQCL_Config_r11__ext2__codewordOneConfig_v1530__setup {
					long	 crs_PortsCount_v1530;
					long	 crs_FreqShift_v1530;
					struct LTE_MBSFN_SubframeConfigList	*mbsfn_SubframeConfigList_v1530;	/* OPTIONAL */
					struct LTE_MBSFN_SubframeConfigList_v1430	*mbsfn_SubframeConfigListExt_v1530;	/* OPTIONAL */
					long	 pdsch_Start_v1530;
					LTE_CSI_RS_ConfigZPId_r11_t	 csi_RS_ConfigZPId_v1530;
					LTE_CSI_RS_ConfigNZPId_r11_t	*qcl_CSI_RS_ConfigNZPId_v1530;	/* OPTIONAL */
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} setup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *codewordOneConfig_v1530;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_PDSCH_RE_MappingQCL_Config_r11_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_crs_PortsCount_r11_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_pdsch_Start_r11_14;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_crs_PortsCount_v1530_33;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_pdsch_Start_v1530_41;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_PDSCH_RE_MappingQCL_Config_r11;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_PDSCH_RE_MappingQCL_Config_r11_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_PDSCH_RE_MappingQCL_Config_r11_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_MBSFN-SubframeConfigList.h"
#include "LTE_MBSFN-SubframeConfigList-v1430.h"

#endif	/* _LTE_PDSCH_RE_MappingQCL_Config_r11_H_ */
#include <asn_internal.h>
