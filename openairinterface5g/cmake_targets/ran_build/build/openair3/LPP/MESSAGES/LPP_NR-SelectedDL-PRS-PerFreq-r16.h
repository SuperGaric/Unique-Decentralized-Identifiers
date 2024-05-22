/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_NR_SelectedDL_PRS_PerFreq_r16_H_
#define	_LPP_NR_SelectedDL_PRS_PerFreq_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LPP_NR_SelectedDL_PRS_IndexPerTRP_r16;

/* LPP_NR-SelectedDL-PRS-PerFreq-r16 */
typedef struct LPP_NR_SelectedDL_PRS_PerFreq_r16 {
	long	 nr_SelectedDL_PRS_FrequencyLayerIndex_r16;
	struct LPP_NR_SelectedDL_PRS_PerFreq_r16__nr_SelectedDL_PRS_IndexListPerFreq_r16 {
		A_SEQUENCE_OF(struct LPP_NR_SelectedDL_PRS_IndexPerTRP_r16) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nr_SelectedDL_PRS_IndexListPerFreq_r16;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_NR_SelectedDL_PRS_PerFreq_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LPP_NR_SelectedDL_PRS_PerFreq_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_LPP_NR_SelectedDL_PRS_PerFreq_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_NR_SelectedDL_PRS_PerFreq_r16_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_NR_SelectedDL_PRS_PerFreq_r16_H_ */
#include <asn_internal.h>
