/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_DMRS_BundlingPUSCH_Config_r17_H_
#define	_NR_DMRS_BundlingPUSCH_Config_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_DMRS_BundlingPUSCH_Config_r17__pusch_DMRS_Bundling_r17 {
	NR_DMRS_BundlingPUSCH_Config_r17__pusch_DMRS_Bundling_r17_enabled	= 0
} e_NR_DMRS_BundlingPUSCH_Config_r17__pusch_DMRS_Bundling_r17;
typedef enum NR_DMRS_BundlingPUSCH_Config_r17__pusch_WindowRestart_r17 {
	NR_DMRS_BundlingPUSCH_Config_r17__pusch_WindowRestart_r17_enabled	= 0
} e_NR_DMRS_BundlingPUSCH_Config_r17__pusch_WindowRestart_r17;
typedef enum NR_DMRS_BundlingPUSCH_Config_r17__pusch_FrequencyHoppingInterval_r17 {
	NR_DMRS_BundlingPUSCH_Config_r17__pusch_FrequencyHoppingInterval_r17_s2	= 0,
	NR_DMRS_BundlingPUSCH_Config_r17__pusch_FrequencyHoppingInterval_r17_s4	= 1,
	NR_DMRS_BundlingPUSCH_Config_r17__pusch_FrequencyHoppingInterval_r17_s5	= 2,
	NR_DMRS_BundlingPUSCH_Config_r17__pusch_FrequencyHoppingInterval_r17_s6	= 3,
	NR_DMRS_BundlingPUSCH_Config_r17__pusch_FrequencyHoppingInterval_r17_s8	= 4,
	NR_DMRS_BundlingPUSCH_Config_r17__pusch_FrequencyHoppingInterval_r17_s10	= 5,
	NR_DMRS_BundlingPUSCH_Config_r17__pusch_FrequencyHoppingInterval_r17_s12	= 6,
	NR_DMRS_BundlingPUSCH_Config_r17__pusch_FrequencyHoppingInterval_r17_s14	= 7,
	NR_DMRS_BundlingPUSCH_Config_r17__pusch_FrequencyHoppingInterval_r17_s16	= 8,
	NR_DMRS_BundlingPUSCH_Config_r17__pusch_FrequencyHoppingInterval_r17_s20	= 9
} e_NR_DMRS_BundlingPUSCH_Config_r17__pusch_FrequencyHoppingInterval_r17;

/* NR_DMRS-BundlingPUSCH-Config-r17 */
typedef struct NR_DMRS_BundlingPUSCH_Config_r17 {
	long	*pusch_DMRS_Bundling_r17;	/* OPTIONAL */
	long	*pusch_TimeDomainWindowLength_r17;	/* OPTIONAL */
	long	*pusch_WindowRestart_r17;	/* OPTIONAL */
	long	*pusch_FrequencyHoppingInterval_r17;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_DMRS_BundlingPUSCH_Config_r17_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_pusch_DMRS_Bundling_r17_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_pusch_WindowRestart_r17_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_pusch_FrequencyHoppingInterval_r17_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_DMRS_BundlingPUSCH_Config_r17;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_DMRS_BundlingPUSCH_Config_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_DMRS_BundlingPUSCH_Config_r17_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_DMRS_BundlingPUSCH_Config_r17_H_ */
#include <asn_internal.h>
