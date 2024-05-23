/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_H_
#define	_NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_PR {
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_PR_NOTHING,	/* No components present */
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_PR_scs15_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_PR_scs30_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_PR_scs60_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_PR_scs120_r17
	/* Extensions may appear below */
	
} NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_PR;
typedef enum NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs15_r17_PR {
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs15_r17_PR_NOTHING,	/* No components present */
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs15_r17_PR_n4_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs15_r17_PR_n5_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs15_r17_PR_n8_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs15_r17_PR_n10_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs15_r17_PR_n16_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs15_r17_PR_n20_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs15_r17_PR_n32_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs15_r17_PR_n40_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs15_r17_PR_n64_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs15_r17_PR_n80_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs15_r17_PR_n160_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs15_r17_PR_n320_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs15_r17_PR_n640_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs15_r17_PR_n1280_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs15_r17_PR_n2560_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs15_r17_PR_n5120_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs15_r17_PR_n10240_r17
	/* Extensions may appear below */
	
} NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs15_r17_PR;
typedef enum NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs30_r17_PR {
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs30_r17_PR_NOTHING,	/* No components present */
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs30_r17_PR_n8_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs30_r17_PR_n10_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs30_r17_PR_n16_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs30_r17_PR_n20_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs30_r17_PR_n32_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs30_r17_PR_n40_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs30_r17_PR_n64_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs30_r17_PR_n80_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs30_r17_PR_n128_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs30_r17_PR_n160_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs30_r17_PR_n320_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs30_r17_PR_n640_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs30_r17_PR_n1280_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs30_r17_PR_n2560_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs30_r17_PR_n5120_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs30_r17_PR_n10240_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs30_r17_PR_n20480_r17
	/* Extensions may appear below */
	
} NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs30_r17_PR;
typedef enum NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs60_r17_PR {
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs60_r17_PR_NOTHING,	/* No components present */
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs60_r17_PR_n16_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs60_r17_PR_n20_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs60_r17_PR_n32_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs60_r17_PR_n40_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs60_r17_PR_n64_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs60_r17_PR_n80_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs60_r17_PR_n128_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs60_r17_PR_n160_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs60_r17_PR_n256_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs60_r17_PR_n320_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs60_r17_PR_n640_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs60_r17_PR_n1280_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs60_r17_PR_n2560_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs60_r17_PR_n5120_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs60_r17_PR_n10240_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs60_r17_PR_n20480_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs60_r17_PR_n40960_r17
	/* Extensions may appear below */
	
} NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs60_r17_PR;
typedef enum NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs120_r17_PR {
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs120_r17_PR_NOTHING,	/* No components present */
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs120_r17_PR_n32_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs120_r17_PR_n40_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs120_r17_PR_n64_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs120_r17_PR_n80_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs120_r17_PR_n128_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs120_r17_PR_n160_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs120_r17_PR_n256_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs120_r17_PR_n320_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs120_r17_PR_n512_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs120_r17_PR_n640_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs120_r17_PR_n1280_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs120_r17_PR_n2560_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs120_r17_PR_n5120_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs120_r17_PR_n10240_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs120_r17_PR_n20480_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs120_r17_PR_n40960_r17,
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs120_r17_PR_n81920_r17
	/* Extensions may appear below */
	
} NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs120_r17_PR;

/* NR_NR-DL-PRS-Periodicity-and-ResourceSetSlotOffset-r17 */
typedef struct NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17 {
	NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_PR present;
	union NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_u {
		struct NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs15_r17 {
			NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs15_r17_PR present;
			union NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__NR_scs15_r17_u {
				long	 n4_r17;
				long	 n5_r17;
				long	 n8_r17;
				long	 n10_r17;
				long	 n16_r17;
				long	 n20_r17;
				long	 n32_r17;
				long	 n40_r17;
				long	 n64_r17;
				long	 n80_r17;
				long	 n160_r17;
				long	 n320_r17;
				long	 n640_r17;
				long	 n1280_r17;
				long	 n2560_r17;
				long	 n5120_r17;
				long	 n10240_r17;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *scs15_r17;
		struct NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs30_r17 {
			NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs30_r17_PR present;
			union NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__NR_scs30_r17_u {
				long	 n8_r17;
				long	 n10_r17;
				long	 n16_r17;
				long	 n20_r17;
				long	 n32_r17;
				long	 n40_r17;
				long	 n64_r17;
				long	 n80_r17;
				long	 n128_r17;
				long	 n160_r17;
				long	 n320_r17;
				long	 n640_r17;
				long	 n1280_r17;
				long	 n2560_r17;
				long	 n5120_r17;
				long	 n10240_r17;
				long	 n20480_r17;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *scs30_r17;
		struct NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs60_r17 {
			NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs60_r17_PR present;
			union NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__NR_scs60_r17_u {
				long	 n16_r17;
				long	 n20_r17;
				long	 n32_r17;
				long	 n40_r17;
				long	 n64_r17;
				long	 n80_r17;
				long	 n128_r17;
				long	 n160_r17;
				long	 n256_r17;
				long	 n320_r17;
				long	 n640_r17;
				long	 n1280_r17;
				long	 n2560_r17;
				long	 n5120_r17;
				long	 n10240_r17;
				long	 n20480_r17;
				long	 n40960_r17;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *scs60_r17;
		struct NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs120_r17 {
			NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__scs120_r17_PR present;
			union NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17__NR_scs120_r17_u {
				long	 n32_r17;
				long	 n40_r17;
				long	 n64_r17;
				long	 n80_r17;
				long	 n128_r17;
				long	 n160_r17;
				long	 n256_r17;
				long	 n320_r17;
				long	 n512_r17;
				long	 n640_r17;
				long	 n1280_r17;
				long	 n2560_r17;
				long	 n5120_r17;
				long	 n10240_r17;
				long	 n20480_r17;
				long	 n40960_r17;
				long	 n81920_r17;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *scs120_r17;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17;
extern asn_CHOICE_specifics_t asn_SPC_NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_1[4];
extern asn_per_constraints_t asn_PER_type_NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _NR_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_H_ */
#include <asn_internal.h>
