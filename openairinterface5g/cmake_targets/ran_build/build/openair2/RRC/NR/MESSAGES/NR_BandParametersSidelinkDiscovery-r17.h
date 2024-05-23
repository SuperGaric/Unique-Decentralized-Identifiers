/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_BandParametersSidelinkDiscovery_r17_H_
#define	_NR_BandParametersSidelinkDiscovery_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_BandParametersSidelinkDiscovery_r17__sl_CrossCarrierScheduling_r17 {
	NR_BandParametersSidelinkDiscovery_r17__sl_CrossCarrierScheduling_r17_supported	= 0
} e_NR_BandParametersSidelinkDiscovery_r17__sl_CrossCarrierScheduling_r17;
typedef enum NR_BandParametersSidelinkDiscovery_r17__sl_TransmissionMode2_PartialSensing_r17__harq_TxProcessModeTwoSidelink_r17 {
	NR_BandParametersSidelinkDiscovery_r17__sl_TransmissionMode2_PartialSensing_r17__harq_TxProcessModeTwoSidelink_r17_n8	= 0,
	NR_BandParametersSidelinkDiscovery_r17__sl_TransmissionMode2_PartialSensing_r17__harq_TxProcessModeTwoSidelink_r17_n16	= 1
} e_NR_BandParametersSidelinkDiscovery_r17__sl_TransmissionMode2_PartialSensing_r17__harq_TxProcessModeTwoSidelink_r17;
typedef enum NR_BandParametersSidelinkDiscovery_r17__sl_TransmissionMode2_PartialSensing_r17__scs_CP_PatternTxSidelinkModeTwo_r17_PR {
	NR_BandParametersSidelinkDiscovery_r17__sl_TransmissionMode2_PartialSensing_r17__scs_CP_PatternTxSidelinkModeTwo_r17_PR_NOTHING,	/* No components present */
	NR_BandParametersSidelinkDiscovery_r17__sl_TransmissionMode2_PartialSensing_r17__scs_CP_PatternTxSidelinkModeTwo_r17_PR_fr1_r17,
	NR_BandParametersSidelinkDiscovery_r17__sl_TransmissionMode2_PartialSensing_r17__scs_CP_PatternTxSidelinkModeTwo_r17_PR_fr2_r17
} NR_BandParametersSidelinkDiscovery_r17__sl_TransmissionMode2_PartialSensing_r17__scs_CP_PatternTxSidelinkModeTwo_r17_PR;
typedef enum NR_BandParametersSidelinkDiscovery_r17__sl_TransmissionMode2_PartialSensing_r17__extendedCP_Mode2PartialSensing_r17 {
	NR_BandParametersSidelinkDiscovery_r17__sl_TransmissionMode2_PartialSensing_r17__extendedCP_Mode2PartialSensing_r17_supported	= 0
} e_NR_BandParametersSidelinkDiscovery_r17__sl_TransmissionMode2_PartialSensing_r17__extendedCP_Mode2PartialSensing_r17;
typedef enum NR_BandParametersSidelinkDiscovery_r17__sl_TransmissionMode2_PartialSensing_r17__dl_openLoopPC_Sidelink_r17 {
	NR_BandParametersSidelinkDiscovery_r17__sl_TransmissionMode2_PartialSensing_r17__dl_openLoopPC_Sidelink_r17_supported	= 0
} e_NR_BandParametersSidelinkDiscovery_r17__sl_TransmissionMode2_PartialSensing_r17__dl_openLoopPC_Sidelink_r17;
typedef enum NR_BandParametersSidelinkDiscovery_r17__tx_IUC_Scheme1_Mode2Sidelink_r17 {
	NR_BandParametersSidelinkDiscovery_r17__tx_IUC_Scheme1_Mode2Sidelink_r17_supported	= 0
} e_NR_BandParametersSidelinkDiscovery_r17__tx_IUC_Scheme1_Mode2Sidelink_r17;

/* NR_BandParametersSidelinkDiscovery-r17 */
typedef struct NR_BandParametersSidelinkDiscovery_r17 {
	long	*sl_CrossCarrierScheduling_r17;	/* OPTIONAL */
	struct NR_BandParametersSidelinkDiscovery_r17__sl_TransmissionMode2_PartialSensing_r17 {
		long	 harq_TxProcessModeTwoSidelink_r17;
		struct NR_BandParametersSidelinkDiscovery_r17__sl_TransmissionMode2_PartialSensing_r17__scs_CP_PatternTxSidelinkModeTwo_r17 {
			NR_BandParametersSidelinkDiscovery_r17__sl_TransmissionMode2_PartialSensing_r17__scs_CP_PatternTxSidelinkModeTwo_r17_PR present;
			union NR_BandParametersSidelinkDiscovery_r17__NR_sl_TransmissionMode2_PartialSensing_r17__NR_scs_CP_PatternTxSidelinkModeTwo_r17_u {
				struct NR_BandParametersSidelinkDiscovery_r17__sl_TransmissionMode2_PartialSensing_r17__scs_CP_PatternTxSidelinkModeTwo_r17__fr1_r17 {
					BIT_STRING_t	*scs_15kHz_r17;	/* OPTIONAL */
					BIT_STRING_t	*scs_30kHz_r17;	/* OPTIONAL */
					BIT_STRING_t	*scs_60kHz_r17;	/* OPTIONAL */
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *fr1_r17;
				struct NR_BandParametersSidelinkDiscovery_r17__sl_TransmissionMode2_PartialSensing_r17__scs_CP_PatternTxSidelinkModeTwo_r17__fr2_r17 {
					BIT_STRING_t	*scs_60kHz_r17;	/* OPTIONAL */
					BIT_STRING_t	*scs_120kHz_r17;	/* OPTIONAL */
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *fr2_r17;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *scs_CP_PatternTxSidelinkModeTwo_r17;
		long	*extendedCP_Mode2PartialSensing_r17;	/* OPTIONAL */
		long	*dl_openLoopPC_Sidelink_r17;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *sl_TransmissionMode2_PartialSensing_r17;
	long	*tx_IUC_Scheme1_Mode2Sidelink_r17;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_BandParametersSidelinkDiscovery_r17_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_sl_CrossCarrierScheduling_r17_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_harq_TxProcessModeTwoSidelink_r17_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_extendedCP_Mode2PartialSensing_r17_16;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_dl_openLoopPC_Sidelink_r17_18;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_tx_IUC_Scheme1_Mode2Sidelink_r17_20;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_BandParametersSidelinkDiscovery_r17;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_BandParametersSidelinkDiscovery_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_BandParametersSidelinkDiscovery_r17_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_BandParametersSidelinkDiscovery_r17_H_ */
#include <asn_internal.h>
