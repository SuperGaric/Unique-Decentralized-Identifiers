/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_MBS_AcquisitionAssistance_r14_H_
#define	_LPP_MBS_AcquisitionAssistance_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LPP_MBS_AcquisitionAssistance_r14__mbsConfiguration_r14 {
	LPP_MBS_AcquisitionAssistance_r14__mbsConfiguration_r14_tb1	= 0,
	LPP_MBS_AcquisitionAssistance_r14__mbsConfiguration_r14_tb2	= 1,
	LPP_MBS_AcquisitionAssistance_r14__mbsConfiguration_r14_tb3	= 2,
	LPP_MBS_AcquisitionAssistance_r14__mbsConfiguration_r14_tb4	= 3
	/*
	 * Enumeration is extensible
	 */
} e_LPP_MBS_AcquisitionAssistance_r14__mbsConfiguration_r14;

/* LPP_MBS-AcquisitionAssistance-r14 */
typedef struct LPP_MBS_AcquisitionAssistance_r14 {
	long	*transmitterID_r14;	/* OPTIONAL */
	long	*mbsConfiguration_r14;	/* OPTIONAL */
	long	*pnCodeIndex_r14;	/* OPTIONAL */
	long	*freq_r14;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_MBS_AcquisitionAssistance_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LPP_mbsConfiguration_r14_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LPP_MBS_AcquisitionAssistance_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_LPP_MBS_AcquisitionAssistance_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_MBS_AcquisitionAssistance_r14_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_MBS_AcquisitionAssistance_r14_H_ */
#include <asn_internal.h>
