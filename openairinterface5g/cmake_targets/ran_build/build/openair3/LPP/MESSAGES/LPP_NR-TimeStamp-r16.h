/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_NR_TimeStamp_r16_H_
#define	_LPP_NR_TimeStamp_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "LPP_NR-PhysCellID-r16.h"
#include "LPP_ARFCN-ValueNR-r15.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LPP_NR_TimeStamp_r16__nr_Slot_r16_PR {
	LPP_NR_TimeStamp_r16__nr_Slot_r16_PR_NOTHING,	/* No components present */
	LPP_NR_TimeStamp_r16__nr_Slot_r16_PR_scs15_r16,
	LPP_NR_TimeStamp_r16__nr_Slot_r16_PR_scs30_r16,
	LPP_NR_TimeStamp_r16__nr_Slot_r16_PR_scs60_r16,
	LPP_NR_TimeStamp_r16__nr_Slot_r16_PR_scs120_r16
} LPP_NR_TimeStamp_r16__nr_Slot_r16_PR;

/* Forward declarations */
struct LPP_NCGI_r15;

/* LPP_NR-TimeStamp-r16 */
typedef struct LPP_NR_TimeStamp_r16 {
	long	 dl_PRS_ID_r16;
	LPP_NR_PhysCellID_r16_t	*nr_PhysCellID_r16;	/* OPTIONAL */
	struct LPP_NCGI_r15	*nr_CellGlobalID_r16;	/* OPTIONAL */
	LPP_ARFCN_ValueNR_r15_t	*nr_ARFCN_r16;	/* OPTIONAL */
	long	 nr_SFN_r16;
	struct LPP_NR_TimeStamp_r16__nr_Slot_r16 {
		LPP_NR_TimeStamp_r16__nr_Slot_r16_PR present;
		union LPP_NR_TimeStamp_r16__LPP_nr_Slot_r16_u {
			long	 scs15_r16;
			long	 scs30_r16;
			long	 scs60_r16;
			long	 scs120_r16;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} nr_Slot_r16;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_NR_TimeStamp_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LPP_NR_TimeStamp_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_LPP_NR_TimeStamp_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_NR_TimeStamp_r16_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_NR_TimeStamp_r16_H_ */
#include <asn_internal.h>
