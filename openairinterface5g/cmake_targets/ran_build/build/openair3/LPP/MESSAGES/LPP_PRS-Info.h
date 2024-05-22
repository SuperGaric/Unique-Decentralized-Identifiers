/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_PRS_Info_H_
#define	_LPP_PRS_Info_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <BIT_STRING.h>
#include <constr_CHOICE.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LPP_PRS_Info__prs_Bandwidth {
	LPP_PRS_Info__prs_Bandwidth_n6	= 0,
	LPP_PRS_Info__prs_Bandwidth_n15	= 1,
	LPP_PRS_Info__prs_Bandwidth_n25	= 2,
	LPP_PRS_Info__prs_Bandwidth_n50	= 3,
	LPP_PRS_Info__prs_Bandwidth_n75	= 4,
	LPP_PRS_Info__prs_Bandwidth_n100	= 5
	/*
	 * Enumeration is extensible
	 */
} e_LPP_PRS_Info__prs_Bandwidth;
typedef enum LPP_PRS_Info__numDL_Frames {
	LPP_PRS_Info__numDL_Frames_sf_1	= 0,
	LPP_PRS_Info__numDL_Frames_sf_2	= 1,
	LPP_PRS_Info__numDL_Frames_sf_4	= 2,
	LPP_PRS_Info__numDL_Frames_sf_6	= 3,
	/*
	 * Enumeration is extensible
	 */
	LPP_PRS_Info__numDL_Frames_sf_add_v1420	= 4
} e_LPP_PRS_Info__numDL_Frames;
typedef enum LPP_PRS_Info__prs_MutingInfo_r9_PR {
	LPP_PRS_Info__prs_MutingInfo_r9_PR_NOTHING,	/* No components present */
	LPP_PRS_Info__prs_MutingInfo_r9_PR_po2_r9,
	LPP_PRS_Info__prs_MutingInfo_r9_PR_po4_r9,
	LPP_PRS_Info__prs_MutingInfo_r9_PR_po8_r9,
	LPP_PRS_Info__prs_MutingInfo_r9_PR_po16_r9,
	/* Extensions may appear below */
	LPP_PRS_Info__prs_MutingInfo_r9_PR_po32_v1420,
	LPP_PRS_Info__prs_MutingInfo_r9_PR_po64_v1420,
	LPP_PRS_Info__prs_MutingInfo_r9_PR_po128_v1420,
	LPP_PRS_Info__prs_MutingInfo_r9_PR_po256_v1420,
	LPP_PRS_Info__prs_MutingInfo_r9_PR_po512_v1420,
	LPP_PRS_Info__prs_MutingInfo_r9_PR_po1024_v1420
} LPP_PRS_Info__prs_MutingInfo_r9_PR;
typedef enum LPP_PRS_Info__ext1__prsOccGroupLen_r14 {
	LPP_PRS_Info__ext1__prsOccGroupLen_r14_g2	= 0,
	LPP_PRS_Info__ext1__prsOccGroupLen_r14_g4	= 1,
	LPP_PRS_Info__ext1__prsOccGroupLen_r14_g8	= 2,
	LPP_PRS_Info__ext1__prsOccGroupLen_r14_g16	= 3,
	LPP_PRS_Info__ext1__prsOccGroupLen_r14_g32	= 4,
	LPP_PRS_Info__ext1__prsOccGroupLen_r14_g64	= 5,
	LPP_PRS_Info__ext1__prsOccGroupLen_r14_g128	= 6
	/*
	 * Enumeration is extensible
	 */
} e_LPP_PRS_Info__ext1__prsOccGroupLen_r14;
typedef enum LPP_PRS_Info__ext1__prsHoppingInfo_r14_PR {
	LPP_PRS_Info__ext1__prsHoppingInfo_r14_PR_NOTHING,	/* No components present */
	LPP_PRS_Info__ext1__prsHoppingInfo_r14_PR_nb2_r14,
	LPP_PRS_Info__ext1__prsHoppingInfo_r14_PR_nb4_r14
} LPP_PRS_Info__ext1__prsHoppingInfo_r14_PR;

/* LPP_PRS-Info */
typedef struct LPP_PRS_Info {
	long	 prs_Bandwidth;
	long	 prs_ConfigurationIndex;
	long	 numDL_Frames;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LPP_PRS_Info__prs_MutingInfo_r9 {
		LPP_PRS_Info__prs_MutingInfo_r9_PR present;
		union LPP_PRS_Info__LPP_prs_MutingInfo_r9_u {
			BIT_STRING_t	 po2_r9;
			BIT_STRING_t	 po4_r9;
			BIT_STRING_t	 po8_r9;
			BIT_STRING_t	 po16_r9;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
			BIT_STRING_t	 po32_v1420;
			BIT_STRING_t	 po64_v1420;
			BIT_STRING_t	 po128_v1420;
			BIT_STRING_t	 po256_v1420;
			BIT_STRING_t	 po512_v1420;
			BIT_STRING_t	 po1024_v1420;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *prs_MutingInfo_r9;
	struct LPP_PRS_Info__ext1 {
		long	*prsID_r14;	/* OPTIONAL */
		long	*add_numDL_Frames_r14;	/* OPTIONAL */
		long	*prsOccGroupLen_r14;	/* OPTIONAL */
		struct LPP_PRS_Info__ext1__prsHoppingInfo_r14 {
			LPP_PRS_Info__ext1__prsHoppingInfo_r14_PR present;
			union LPP_PRS_Info__LPP_ext1__LPP_prsHoppingInfo_r14_u {
				long	 nb2_r14;
				struct LPP_PRS_Info__ext1__prsHoppingInfo_r14__nb4_r14 {
					A_SEQUENCE_OF(long) list;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *nb4_r14;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *prsHoppingInfo_r14;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_PRS_Info_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LPP_prs_Bandwidth_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LPP_numDL_Frames_11;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LPP_prsOccGroupLen_r14_34;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LPP_PRS_Info;
extern asn_SEQUENCE_specifics_t asn_SPC_LPP_PRS_Info_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_PRS_Info_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_PRS_Info_H_ */
#include <asn_internal.h>
