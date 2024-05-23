/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_MotionTimeSource_r15_H_
#define	_LPP_MotionTimeSource_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LPP_MotionTimeSource_r15__timeSource_r15 {
	LPP_MotionTimeSource_r15__timeSource_r15_servingCell	= 0,
	LPP_MotionTimeSource_r15__timeSource_r15_referenceCell	= 1,
	LPP_MotionTimeSource_r15__timeSource_r15_gnss	= 2,
	LPP_MotionTimeSource_r15__timeSource_r15_mixed	= 3,
	LPP_MotionTimeSource_r15__timeSource_r15_other	= 4,
	LPP_MotionTimeSource_r15__timeSource_r15_none	= 5
	/*
	 * Enumeration is extensible
	 */
} e_LPP_MotionTimeSource_r15__timeSource_r15;

/* LPP_MotionTimeSource-r15 */
typedef struct LPP_MotionTimeSource_r15 {
	long	 timeSource_r15;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_MotionTimeSource_r15_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LPP_timeSource_r15_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LPP_MotionTimeSource_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_LPP_MotionTimeSource_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_MotionTimeSource_r15_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_MotionTimeSource_r15_H_ */
#include <asn_internal.h>
