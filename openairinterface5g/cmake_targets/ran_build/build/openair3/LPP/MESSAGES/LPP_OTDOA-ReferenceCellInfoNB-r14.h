/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_OTDOA_ReferenceCellInfoNB_r14_H_
#define	_LPP_OTDOA_ReferenceCellInfoNB_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "LPP_ARFCN-ValueEUTRA-r14.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LPP_OTDOA_ReferenceCellInfoNB_r14__eutra_NumCRS_Ports_r14 {
	LPP_OTDOA_ReferenceCellInfoNB_r14__eutra_NumCRS_Ports_r14_ports1_or_2	= 0,
	LPP_OTDOA_ReferenceCellInfoNB_r14__eutra_NumCRS_Ports_r14_ports4	= 1
} e_LPP_OTDOA_ReferenceCellInfoNB_r14__eutra_NumCRS_Ports_r14;
typedef enum LPP_OTDOA_ReferenceCellInfoNB_r14__otdoa_SIB1_NB_repetitions_r14 {
	LPP_OTDOA_ReferenceCellInfoNB_r14__otdoa_SIB1_NB_repetitions_r14_r4	= 0,
	LPP_OTDOA_ReferenceCellInfoNB_r14__otdoa_SIB1_NB_repetitions_r14_r8	= 1,
	LPP_OTDOA_ReferenceCellInfoNB_r14__otdoa_SIB1_NB_repetitions_r14_r16	= 2
} e_LPP_OTDOA_ReferenceCellInfoNB_r14__otdoa_SIB1_NB_repetitions_r14;

/* Forward declarations */
struct LPP_ECGI;
struct LPP_CarrierFreq_NB_r14;
struct LPP_PRS_Info_NB_r14;
struct LPP_TDD_Config_v1520;

/* LPP_OTDOA-ReferenceCellInfoNB-r14 */
typedef struct LPP_OTDOA_ReferenceCellInfoNB_r14 {
	long	*physCellIdNB_r14;	/* OPTIONAL */
	struct LPP_ECGI	*cellGlobalIdNB_r14;	/* OPTIONAL */
	struct LPP_CarrierFreq_NB_r14	*carrierFreqRef_r14;	/* OPTIONAL */
	LPP_ARFCN_ValueEUTRA_r14_t	*earfcn_r14;	/* OPTIONAL */
	long	*eutra_NumCRS_Ports_r14;	/* OPTIONAL */
	long	*otdoa_SIB1_NB_repetitions_r14;	/* OPTIONAL */
	struct LPP_PRS_Info_NB_r14	*nprsInfo_r14;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LPP_OTDOA_ReferenceCellInfoNB_r14__ext1 {
		struct LPP_PRS_Info_NB_r14	*nprsInfo_Type2_v1470;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct LPP_OTDOA_ReferenceCellInfoNB_r14__ext2 {
		struct LPP_TDD_Config_v1520	*tdd_config_r15;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_OTDOA_ReferenceCellInfoNB_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LPP_eutra_NumCRS_Ports_r14_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LPP_otdoa_SIB1_NB_repetitions_r14_9;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LPP_OTDOA_ReferenceCellInfoNB_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_LPP_OTDOA_ReferenceCellInfoNB_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_OTDOA_ReferenceCellInfoNB_r14_1[9];

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_OTDOA_ReferenceCellInfoNB_r14_H_ */
#include <asn_internal.h>
