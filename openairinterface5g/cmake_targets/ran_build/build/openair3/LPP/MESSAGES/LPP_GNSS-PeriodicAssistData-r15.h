/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_GNSS_PeriodicAssistData_r15_H_
#define	_LPP_GNSS_PeriodicAssistData_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LPP_GNSS_PeriodicControlParam_r15;

/* LPP_GNSS-PeriodicAssistData-r15 */
typedef struct LPP_GNSS_PeriodicAssistData_r15 {
	struct LPP_GNSS_PeriodicControlParam_r15	*gnss_RTK_PeriodicObservations_r15;	/* OPTIONAL */
	struct LPP_GNSS_PeriodicControlParam_r15	*glo_RTK_PeriodicBiasInformation_r15;	/* OPTIONAL */
	struct LPP_GNSS_PeriodicControlParam_r15	*gnss_RTK_MAC_PeriodicCorrectionDifferences_r15;	/* OPTIONAL */
	struct LPP_GNSS_PeriodicControlParam_r15	*gnss_RTK_PeriodicResiduals_r15;	/* OPTIONAL */
	struct LPP_GNSS_PeriodicControlParam_r15	*gnss_RTK_FKP_PeriodicGradients_r15;	/* OPTIONAL */
	struct LPP_GNSS_PeriodicControlParam_r15	*gnss_SSR_PeriodicOrbitCorrections_r15;	/* OPTIONAL */
	struct LPP_GNSS_PeriodicControlParam_r15	*gnss_SSR_PeriodicClockCorrections_r15;	/* OPTIONAL */
	struct LPP_GNSS_PeriodicControlParam_r15	*gnss_SSR_PeriodicCodeBias_r15;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LPP_GNSS_PeriodicAssistData_r15__ext1 {
		struct LPP_GNSS_PeriodicControlParam_r15	*gnss_SSR_PeriodicURA_r16;	/* OPTIONAL */
		struct LPP_GNSS_PeriodicControlParam_r15	*gnss_SSR_PeriodicPhaseBias_r16;	/* OPTIONAL */
		struct LPP_GNSS_PeriodicControlParam_r15	*gnss_SSR_PeriodicSTEC_Correction_r16;	/* OPTIONAL */
		struct LPP_GNSS_PeriodicControlParam_r15	*gnss_SSR_PeriodicGriddedCorrection_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_GNSS_PeriodicAssistData_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LPP_GNSS_PeriodicAssistData_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_LPP_GNSS_PeriodicAssistData_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_GNSS_PeriodicAssistData_r15_1[9];

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_GNSS_PeriodicAssistData_r15_H_ */
#include <asn_internal.h>