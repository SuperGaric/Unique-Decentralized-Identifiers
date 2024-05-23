/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair2/F1AP/MESSAGES/ASN1/R16.3.1/38473-g31.asn"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/F1AP/MESSAGES`
 */

#ifndef	_F1AP_TransmissionCombPos_H_
#define	_F1AP_TransmissionCombPos_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum F1AP_TransmissionCombPos_PR {
	F1AP_TransmissionCombPos_PR_NOTHING,	/* No components present */
	F1AP_TransmissionCombPos_PR_n2,
	F1AP_TransmissionCombPos_PR_n4,
	F1AP_TransmissionCombPos_PR_n8,
	F1AP_TransmissionCombPos_PR_choice_extension
} F1AP_TransmissionCombPos_PR;

/* Forward declarations */
struct F1AP_ProtocolIE_SingleContainer;

/* F1AP_TransmissionCombPos */
typedef struct F1AP_TransmissionCombPos {
	F1AP_TransmissionCombPos_PR present;
	union F1AP_TransmissionCombPos_u {
		struct F1AP_TransmissionCombPos__n2 {
			long	 combOffset_n2;
			long	 cyclicShift_n2;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *n2;
		struct F1AP_TransmissionCombPos__n4 {
			long	 combOffset_n4;
			long	 cyclicShift_n4;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *n4;
		struct F1AP_TransmissionCombPos__n8 {
			long	 combOffset_n8;
			long	 cyclicShift_n8;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *n8;
		struct F1AP_ProtocolIE_SingleContainer	*choice_extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} F1AP_TransmissionCombPos_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_F1AP_TransmissionCombPos;
extern asn_CHOICE_specifics_t asn_SPC_F1AP_TransmissionCombPos_specs_1;
extern asn_TYPE_member_t asn_MBR_F1AP_TransmissionCombPos_1[4];
extern asn_per_constraints_t asn_PER_type_F1AP_TransmissionCombPos_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_TransmissionCombPos_H_ */
#include <asn_internal.h>
