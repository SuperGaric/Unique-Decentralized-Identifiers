/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_RadioResourceConfigCommonSIB_H_
#define	_LTE_RadioResourceConfigCommonSIB_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_RACH-ConfigCommon.h"
#include "LTE_BCCH-Config.h"
#include "LTE_PCCH-Config.h"
#include "LTE_PRACH-ConfigSIB.h"
#include "LTE_PDSCH-ConfigCommon.h"
#include "LTE_PUSCH-ConfigCommon.h"
#include "LTE_PUCCH-ConfigCommon.h"
#include "LTE_SoundingRS-UL-ConfigCommon.h"
#include "LTE_UplinkPowerControlCommon.h"
#include "LTE_UL-CyclicPrefixLength.h"
#include <constr_SEQUENCE.h>
#include <NativeEnumerated.h>
#include <BIT_STRING.h>
#include <BOOLEAN.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_RadioResourceConfigCommonSIB__ext9__rss_MeasConfig_r16 {
	LTE_RadioResourceConfigCommonSIB__ext9__rss_MeasConfig_r16_enabled	= 0
} e_LTE_RadioResourceConfigCommonSIB__ext9__rss_MeasConfig_r16;
typedef enum LTE_RadioResourceConfigCommonSIB__ext9__rss_MeasNonNCL_r16 {
	LTE_RadioResourceConfigCommonSIB__ext9__rss_MeasNonNCL_r16_enabled	= 0
} e_LTE_RadioResourceConfigCommonSIB__ext9__rss_MeasNonNCL_r16;

/* Forward declarations */
struct LTE_UplinkPowerControlCommon_v1020;
struct LTE_RACH_ConfigCommon_v1250;
struct LTE_PUSCH_ConfigCommon_v1270;
struct LTE_BCCH_Config_v1310;
struct LTE_PCCH_Config_v1310;
struct LTE_FreqHoppingParameters_r13;
struct LTE_PDSCH_ConfigCommon_v1310;
struct LTE_PUSCH_ConfigCommon_v1310;
struct LTE_PRACH_ConfigSIB_v1310;
struct LTE_PUCCH_ConfigCommon_v1310;
struct LTE_HighSpeedConfig_r14;
struct LTE_PRACH_Config_v1430;
struct LTE_PUCCH_ConfigCommon_v1430;
struct LTE_PRACH_ConfigSIB_v1530;
struct LTE_RSS_Config_r15;
struct LTE_WUS_Config_r15;
struct LTE_HighSpeedConfig_v1530;
struct LTE_UplinkPowerControlCommon_v1530;
struct LTE_WUS_Config_v1560;
struct LTE_WUS_Config_v1610;
struct LTE_HighSpeedConfig_v1610;
struct LTE_CRS_ChEstMPDCCH_ConfigCommon_r16;
struct LTE_GWUS_Config_r16;
struct LTE_UplinkPowerControlCommon_v1610;

/* LTE_RadioResourceConfigCommonSIB */
typedef struct LTE_RadioResourceConfigCommonSIB {
	LTE_RACH_ConfigCommon_t	 rach_ConfigCommon;
	LTE_BCCH_Config_t	 bcch_Config;
	LTE_PCCH_Config_t	 pcch_Config;
	LTE_PRACH_ConfigSIB_t	 prach_Config;
	LTE_PDSCH_ConfigCommon_t	 pdsch_ConfigCommon;
	LTE_PUSCH_ConfigCommon_t	 pusch_ConfigCommon;
	LTE_PUCCH_ConfigCommon_t	 pucch_ConfigCommon;
	LTE_SoundingRS_UL_ConfigCommon_t	 soundingRS_UL_ConfigCommon;
	LTE_UplinkPowerControlCommon_t	 uplinkPowerControlCommon;
	LTE_UL_CyclicPrefixLength_t	 ul_CyclicPrefixLength;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_RadioResourceConfigCommonSIB__ext1 {
		struct LTE_UplinkPowerControlCommon_v1020	*uplinkPowerControlCommon_v1020;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct LTE_RadioResourceConfigCommonSIB__ext2 {
		struct LTE_RACH_ConfigCommon_v1250	*rach_ConfigCommon_v1250;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct LTE_RadioResourceConfigCommonSIB__ext3 {
		struct LTE_PUSCH_ConfigCommon_v1270	*pusch_ConfigCommon_v1270;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	struct LTE_RadioResourceConfigCommonSIB__ext4 {
		struct LTE_BCCH_Config_v1310	*bcch_Config_v1310;	/* OPTIONAL */
		struct LTE_PCCH_Config_v1310	*pcch_Config_v1310;	/* OPTIONAL */
		struct LTE_FreqHoppingParameters_r13	*freqHoppingParameters_r13;	/* OPTIONAL */
		struct LTE_PDSCH_ConfigCommon_v1310	*pdsch_ConfigCommon_v1310;	/* OPTIONAL */
		struct LTE_PUSCH_ConfigCommon_v1310	*pusch_ConfigCommon_v1310;	/* OPTIONAL */
		struct LTE_PRACH_ConfigSIB_v1310	*prach_ConfigCommon_v1310;	/* OPTIONAL */
		struct LTE_PUCCH_ConfigCommon_v1310	*pucch_ConfigCommon_v1310;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext4;
	struct LTE_RadioResourceConfigCommonSIB__ext5 {
		struct LTE_HighSpeedConfig_r14	*highSpeedConfig_r14;	/* OPTIONAL */
		struct LTE_PRACH_Config_v1430	*prach_Config_v1430;	/* OPTIONAL */
		struct LTE_PUCCH_ConfigCommon_v1430	*pucch_ConfigCommon_v1430;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext5;
	struct LTE_RadioResourceConfigCommonSIB__ext6 {
		struct LTE_PRACH_ConfigSIB_v1530	*prach_Config_v1530;	/* OPTIONAL */
		struct LTE_RSS_Config_r15	*ce_RSS_Config_r15;	/* OPTIONAL */
		struct LTE_WUS_Config_r15	*wus_Config_r15;	/* OPTIONAL */
		struct LTE_HighSpeedConfig_v1530	*highSpeedConfig_v1530;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext6;
	struct LTE_RadioResourceConfigCommonSIB__ext7 {
		struct LTE_UplinkPowerControlCommon_v1530	*uplinkPowerControlCommon_v1540;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext7;
	struct LTE_RadioResourceConfigCommonSIB__ext8 {
		struct LTE_WUS_Config_v1560	*wus_Config_v1560;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext8;
	struct LTE_RadioResourceConfigCommonSIB__ext9 {
		struct LTE_WUS_Config_v1610	*wus_Config_v1610;	/* OPTIONAL */
		struct LTE_HighSpeedConfig_v1610	*highSpeedConfig_v1610;	/* OPTIONAL */
		struct LTE_CRS_ChEstMPDCCH_ConfigCommon_r16	*crs_ChEstMPDCCH_ConfigCommon_r16;	/* OPTIONAL */
		struct LTE_GWUS_Config_r16	*gwus_Config_r16;	/* OPTIONAL */
		struct LTE_UplinkPowerControlCommon_v1610	*uplinkPowerControlCommon_v1610;	/* OPTIONAL */
		long	*rss_MeasConfig_r16;	/* OPTIONAL */
		long	*rss_MeasNonNCL_r16;	/* OPTIONAL */
		BIT_STRING_t	*puncturedSubcarriersDL_r16;	/* OPTIONAL */
		BOOLEAN_t	*highSpeedInterRAT_NR_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext9;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RadioResourceConfigCommonSIB_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_rss_MeasConfig_r16_46;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_rss_MeasNonNCL_r16_48;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RadioResourceConfigCommonSIB;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_RadioResourceConfigCommonSIB_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RadioResourceConfigCommonSIB_1[19];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_UplinkPowerControlCommon-v1020.h"
#include "LTE_RACH-ConfigCommon-v1250.h"
#include "LTE_PUSCH-ConfigCommon-v1270.h"
#include "LTE_BCCH-Config-v1310.h"
#include "LTE_PCCH-Config-v1310.h"
#include "LTE_FreqHoppingParameters-r13.h"
#include "LTE_PDSCH-ConfigCommon-v1310.h"
#include "LTE_PUSCH-ConfigCommon-v1310.h"
#include "LTE_PRACH-ConfigSIB-v1310.h"
#include "LTE_PUCCH-ConfigCommon-v1310.h"
#include "LTE_HighSpeedConfig-r14.h"
#include "LTE_PRACH-Config-v1430.h"
#include "LTE_PUCCH-ConfigCommon-v1430.h"
#include "LTE_PRACH-ConfigSIB-v1530.h"
#include "LTE_RSS-Config-r15.h"
#include "LTE_WUS-Config-r15.h"
#include "LTE_HighSpeedConfig-v1530.h"
#include "LTE_UplinkPowerControlCommon-v1530.h"
#include "LTE_WUS-Config-v1560.h"
#include "LTE_WUS-Config-v1610.h"
#include "LTE_HighSpeedConfig-v1610.h"
#include "LTE_CRS-ChEstMPDCCH-ConfigCommon-r16.h"
#include "LTE_GWUS-Config-r16.h"
#include "LTE_UplinkPowerControlCommon-v1610.h"

#endif	/* _LTE_RadioResourceConfigCommonSIB_H_ */
#include <asn_internal.h>
