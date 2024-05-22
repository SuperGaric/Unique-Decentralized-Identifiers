/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_MRDC_Parameters_v1700_H_
#define	_NR_MRDC_Parameters_v1700_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_MRDC_Parameters_v1700__condPSCellAdditionENDC_r17 {
	NR_MRDC_Parameters_v1700__condPSCellAdditionENDC_r17_supported	= 0
} e_NR_MRDC_Parameters_v1700__condPSCellAdditionENDC_r17;
typedef enum NR_MRDC_Parameters_v1700__scg_ActivationDeactivationENDC_r17 {
	NR_MRDC_Parameters_v1700__scg_ActivationDeactivationENDC_r17_supported	= 0
} e_NR_MRDC_Parameters_v1700__scg_ActivationDeactivationENDC_r17;
typedef enum NR_MRDC_Parameters_v1700__scg_ActivationDeactivationResumeENDC_r17 {
	NR_MRDC_Parameters_v1700__scg_ActivationDeactivationResumeENDC_r17_supported	= 0
} e_NR_MRDC_Parameters_v1700__scg_ActivationDeactivationResumeENDC_r17;

/* NR_MRDC-Parameters-v1700 */
typedef struct NR_MRDC_Parameters_v1700 {
	long	*condPSCellAdditionENDC_r17;	/* OPTIONAL */
	long	*scg_ActivationDeactivationENDC_r17;	/* OPTIONAL */
	long	*scg_ActivationDeactivationResumeENDC_r17;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_MRDC_Parameters_v1700_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_condPSCellAdditionENDC_r17_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_scg_ActivationDeactivationENDC_r17_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_scg_ActivationDeactivationResumeENDC_r17_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_MRDC_Parameters_v1700;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_MRDC_Parameters_v1700_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_MRDC_Parameters_v1700_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_MRDC_Parameters_v1700_H_ */
#include <asn_internal.h>
