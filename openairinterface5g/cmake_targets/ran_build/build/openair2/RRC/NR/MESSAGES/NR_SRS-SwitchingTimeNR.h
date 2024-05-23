/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_SRS_SwitchingTimeNR_H_
#define	_NR_SRS_SwitchingTimeNR_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_SRS_SwitchingTimeNR__switchingTimeDL {
	NR_SRS_SwitchingTimeNR__switchingTimeDL_n0us	= 0,
	NR_SRS_SwitchingTimeNR__switchingTimeDL_n30us	= 1,
	NR_SRS_SwitchingTimeNR__switchingTimeDL_n100us	= 2,
	NR_SRS_SwitchingTimeNR__switchingTimeDL_n140us	= 3,
	NR_SRS_SwitchingTimeNR__switchingTimeDL_n200us	= 4,
	NR_SRS_SwitchingTimeNR__switchingTimeDL_n300us	= 5,
	NR_SRS_SwitchingTimeNR__switchingTimeDL_n500us	= 6,
	NR_SRS_SwitchingTimeNR__switchingTimeDL_n900us	= 7
} e_NR_SRS_SwitchingTimeNR__switchingTimeDL;
typedef enum NR_SRS_SwitchingTimeNR__switchingTimeUL {
	NR_SRS_SwitchingTimeNR__switchingTimeUL_n0us	= 0,
	NR_SRS_SwitchingTimeNR__switchingTimeUL_n30us	= 1,
	NR_SRS_SwitchingTimeNR__switchingTimeUL_n100us	= 2,
	NR_SRS_SwitchingTimeNR__switchingTimeUL_n140us	= 3,
	NR_SRS_SwitchingTimeNR__switchingTimeUL_n200us	= 4,
	NR_SRS_SwitchingTimeNR__switchingTimeUL_n300us	= 5,
	NR_SRS_SwitchingTimeNR__switchingTimeUL_n500us	= 6,
	NR_SRS_SwitchingTimeNR__switchingTimeUL_n900us	= 7
} e_NR_SRS_SwitchingTimeNR__switchingTimeUL;

/* NR_SRS-SwitchingTimeNR */
typedef struct NR_SRS_SwitchingTimeNR {
	long	*switchingTimeDL;	/* OPTIONAL */
	long	*switchingTimeUL;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_SRS_SwitchingTimeNR_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_switchingTimeDL_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_switchingTimeUL_11;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_SRS_SwitchingTimeNR;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_SRS_SwitchingTimeNR_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_SRS_SwitchingTimeNR_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_SRS_SwitchingTimeNR_H_ */
#include <asn_internal.h>
