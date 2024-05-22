/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_ResourceReservationConfigDL_r16_H_
#define	_LTE_ResourceReservationConfigDL_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_PeriodicityStartPos-r16.h"
#include <BIT_STRING.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_ResourceReservationConfigDL_r16__resourceReservationFreq_r16_PR {
	LTE_ResourceReservationConfigDL_r16__resourceReservationFreq_r16_PR_NOTHING,	/* No components present */
	LTE_ResourceReservationConfigDL_r16__resourceReservationFreq_r16_PR_rbg_Bitmap1dot4,
	LTE_ResourceReservationConfigDL_r16__resourceReservationFreq_r16_PR_rbg_Bitmap3,
	LTE_ResourceReservationConfigDL_r16__resourceReservationFreq_r16_PR_rbg_Bitmap5,
	LTE_ResourceReservationConfigDL_r16__resourceReservationFreq_r16_PR_rbg_Bitmap10,
	LTE_ResourceReservationConfigDL_r16__resourceReservationFreq_r16_PR_rbg_Bitmap15,
	LTE_ResourceReservationConfigDL_r16__resourceReservationFreq_r16_PR_rbg_Bitmap20
} LTE_ResourceReservationConfigDL_r16__resourceReservationFreq_r16_PR;
typedef enum LTE_ResourceReservationConfigDL_r16__slotBitmap_r16_PR {
	LTE_ResourceReservationConfigDL_r16__slotBitmap_r16_PR_NOTHING,	/* No components present */
	LTE_ResourceReservationConfigDL_r16__slotBitmap_r16_PR_slotPattern10ms,
	LTE_ResourceReservationConfigDL_r16__slotBitmap_r16_PR_slotPattern40ms
} LTE_ResourceReservationConfigDL_r16__slotBitmap_r16_PR;

/* LTE_ResourceReservationConfigDL-r16 */
typedef struct LTE_ResourceReservationConfigDL_r16 {
	LTE_PeriodicityStartPos_r16_t	 periodicityStartPos_r16;
	struct LTE_ResourceReservationConfigDL_r16__resourceReservationFreq_r16 {
		LTE_ResourceReservationConfigDL_r16__resourceReservationFreq_r16_PR present;
		union LTE_ResourceReservationConfigDL_r16__LTE_resourceReservationFreq_r16_u {
			BIT_STRING_t	 rbg_Bitmap1dot4;
			BIT_STRING_t	 rbg_Bitmap3;
			BIT_STRING_t	 rbg_Bitmap5;
			BIT_STRING_t	 rbg_Bitmap10;
			BIT_STRING_t	 rbg_Bitmap15;
			BIT_STRING_t	 rbg_Bitmap20;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *resourceReservationFreq_r16;
	struct LTE_ResourceReservationConfigDL_r16__slotBitmap_r16 {
		LTE_ResourceReservationConfigDL_r16__slotBitmap_r16_PR present;
		union LTE_ResourceReservationConfigDL_r16__LTE_slotBitmap_r16_u {
			BIT_STRING_t	 slotPattern10ms;
			BIT_STRING_t	 slotPattern40ms;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} slotBitmap_r16;
	BIT_STRING_t	*symbolBitmap1_r16;	/* OPTIONAL */
	BIT_STRING_t	*symbolBitmap2_r16;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_ResourceReservationConfigDL_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_ResourceReservationConfigDL_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_ResourceReservationConfigDL_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_ResourceReservationConfigDL_r16_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_ResourceReservationConfigDL_r16_H_ */
#include <asn_internal.h>
