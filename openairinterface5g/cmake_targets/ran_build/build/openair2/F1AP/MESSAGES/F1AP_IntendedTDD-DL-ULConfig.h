/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair2/F1AP/MESSAGES/ASN1/R16.3.1/38473-g31.asn"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/F1AP/MESSAGES`
 */

#ifndef	_F1AP_IntendedTDD_DL_ULConfig_H_
#define	_F1AP_IntendedTDD_DL_ULConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "F1AP_Slot-Configuration-List.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum F1AP_IntendedTDD_DL_ULConfig__nRSCS {
	F1AP_IntendedTDD_DL_ULConfig__nRSCS_scs15	= 0,
	F1AP_IntendedTDD_DL_ULConfig__nRSCS_scs30	= 1,
	F1AP_IntendedTDD_DL_ULConfig__nRSCS_scs60	= 2,
	F1AP_IntendedTDD_DL_ULConfig__nRSCS_scs120	= 3
	/*
	 * Enumeration is extensible
	 */
} e_F1AP_IntendedTDD_DL_ULConfig__nRSCS;
typedef enum F1AP_IntendedTDD_DL_ULConfig__nRCP {
	F1AP_IntendedTDD_DL_ULConfig__nRCP_normal	= 0,
	F1AP_IntendedTDD_DL_ULConfig__nRCP_extended	= 1
	/*
	 * Enumeration is extensible
	 */
} e_F1AP_IntendedTDD_DL_ULConfig__nRCP;
typedef enum F1AP_IntendedTDD_DL_ULConfig__nRDLULTxPeriodicity {
	F1AP_IntendedTDD_DL_ULConfig__nRDLULTxPeriodicity_ms0p5	= 0,
	F1AP_IntendedTDD_DL_ULConfig__nRDLULTxPeriodicity_ms0p625	= 1,
	F1AP_IntendedTDD_DL_ULConfig__nRDLULTxPeriodicity_ms1	= 2,
	F1AP_IntendedTDD_DL_ULConfig__nRDLULTxPeriodicity_ms1p25	= 3,
	F1AP_IntendedTDD_DL_ULConfig__nRDLULTxPeriodicity_ms2	= 4,
	F1AP_IntendedTDD_DL_ULConfig__nRDLULTxPeriodicity_ms2p5	= 5,
	F1AP_IntendedTDD_DL_ULConfig__nRDLULTxPeriodicity_ms3	= 6,
	F1AP_IntendedTDD_DL_ULConfig__nRDLULTxPeriodicity_ms4	= 7,
	F1AP_IntendedTDD_DL_ULConfig__nRDLULTxPeriodicity_ms5	= 8,
	F1AP_IntendedTDD_DL_ULConfig__nRDLULTxPeriodicity_ms10	= 9,
	F1AP_IntendedTDD_DL_ULConfig__nRDLULTxPeriodicity_ms20	= 10,
	F1AP_IntendedTDD_DL_ULConfig__nRDLULTxPeriodicity_ms40	= 11,
	F1AP_IntendedTDD_DL_ULConfig__nRDLULTxPeriodicity_ms60	= 12,
	F1AP_IntendedTDD_DL_ULConfig__nRDLULTxPeriodicity_ms80	= 13,
	F1AP_IntendedTDD_DL_ULConfig__nRDLULTxPeriodicity_ms100	= 14,
	F1AP_IntendedTDD_DL_ULConfig__nRDLULTxPeriodicity_ms120	= 15,
	F1AP_IntendedTDD_DL_ULConfig__nRDLULTxPeriodicity_ms140	= 16,
	F1AP_IntendedTDD_DL_ULConfig__nRDLULTxPeriodicity_ms160	= 17
	/*
	 * Enumeration is extensible
	 */
} e_F1AP_IntendedTDD_DL_ULConfig__nRDLULTxPeriodicity;

/* Forward declarations */
struct F1AP_ProtocolExtensionContainer;

/* F1AP_IntendedTDD-DL-ULConfig */
typedef struct F1AP_IntendedTDD_DL_ULConfig {
	long	 nRSCS;
	long	 nRCP;
	long	 nRDLULTxPeriodicity;
	F1AP_Slot_Configuration_List_t	 slot_Configuration_List;
	struct F1AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} F1AP_IntendedTDD_DL_ULConfig_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_F1AP_nRSCS_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_F1AP_nRCP_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_F1AP_nRDLULTxPeriodicity_12;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_F1AP_IntendedTDD_DL_ULConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_F1AP_IntendedTDD_DL_ULConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_F1AP_IntendedTDD_DL_ULConfig_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_IntendedTDD_DL_ULConfig_H_ */
#include <asn_internal.h>