/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_SSB_MTC_AdditionalPCI_r17_H_
#define	_NR_SSB_MTC_AdditionalPCI_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_AdditionalPCIIndex-r17.h"
#include "NR_PhysCellId.h"
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <BIT_STRING.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_SSB_MTC_AdditionalPCI_r17__periodicity_r17 {
	NR_SSB_MTC_AdditionalPCI_r17__periodicity_r17_ms5	= 0,
	NR_SSB_MTC_AdditionalPCI_r17__periodicity_r17_ms10	= 1,
	NR_SSB_MTC_AdditionalPCI_r17__periodicity_r17_ms20	= 2,
	NR_SSB_MTC_AdditionalPCI_r17__periodicity_r17_ms40	= 3,
	NR_SSB_MTC_AdditionalPCI_r17__periodicity_r17_ms80	= 4,
	NR_SSB_MTC_AdditionalPCI_r17__periodicity_r17_ms160	= 5,
	NR_SSB_MTC_AdditionalPCI_r17__periodicity_r17_spare2	= 6,
	NR_SSB_MTC_AdditionalPCI_r17__periodicity_r17_spare1	= 7
} e_NR_SSB_MTC_AdditionalPCI_r17__periodicity_r17;
typedef enum NR_SSB_MTC_AdditionalPCI_r17__ssb_PositionsInBurst_r17_PR {
	NR_SSB_MTC_AdditionalPCI_r17__ssb_PositionsInBurst_r17_PR_NOTHING,	/* No components present */
	NR_SSB_MTC_AdditionalPCI_r17__ssb_PositionsInBurst_r17_PR_shortBitmap,
	NR_SSB_MTC_AdditionalPCI_r17__ssb_PositionsInBurst_r17_PR_mediumBitmap,
	NR_SSB_MTC_AdditionalPCI_r17__ssb_PositionsInBurst_r17_PR_longBitmap
} NR_SSB_MTC_AdditionalPCI_r17__ssb_PositionsInBurst_r17_PR;

/* NR_SSB-MTC-AdditionalPCI-r17 */
typedef struct NR_SSB_MTC_AdditionalPCI_r17 {
	NR_AdditionalPCIIndex_r17_t	 additionalPCIIndex_r17;
	NR_PhysCellId_t	 additionalPCI_r17;
	long	 periodicity_r17;
	struct NR_SSB_MTC_AdditionalPCI_r17__ssb_PositionsInBurst_r17 {
		NR_SSB_MTC_AdditionalPCI_r17__ssb_PositionsInBurst_r17_PR present;
		union NR_SSB_MTC_AdditionalPCI_r17__NR_ssb_PositionsInBurst_r17_u {
			BIT_STRING_t	 shortBitmap;
			BIT_STRING_t	 mediumBitmap;
			BIT_STRING_t	 longBitmap;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} ssb_PositionsInBurst_r17;
	long	 ss_PBCH_BlockPower_r17;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_SSB_MTC_AdditionalPCI_r17_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_periodicity_r17_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_SSB_MTC_AdditionalPCI_r17;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_SSB_MTC_AdditionalPCI_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_SSB_MTC_AdditionalPCI_r17_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_SSB_MTC_AdditionalPCI_r17_H_ */
#include <asn_internal.h>