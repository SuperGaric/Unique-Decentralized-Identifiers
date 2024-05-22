/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_MRB_PDCP_ConfigBroadcast_r17_H_
#define	_NR_MRB_PDCP_ConfigBroadcast_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NULL.h>
#include <NativeInteger.h>
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_MRB_PDCP_ConfigBroadcast_r17__pdcp_SN_SizeDL_r17 {
	NR_MRB_PDCP_ConfigBroadcast_r17__pdcp_SN_SizeDL_r17_len12bits	= 0
} e_NR_MRB_PDCP_ConfigBroadcast_r17__pdcp_SN_SizeDL_r17;
typedef enum NR_MRB_PDCP_ConfigBroadcast_r17__headerCompression_r17_PR {
	NR_MRB_PDCP_ConfigBroadcast_r17__headerCompression_r17_PR_NOTHING,	/* No components present */
	NR_MRB_PDCP_ConfigBroadcast_r17__headerCompression_r17_PR_notUsed,
	NR_MRB_PDCP_ConfigBroadcast_r17__headerCompression_r17_PR_rohc
} NR_MRB_PDCP_ConfigBroadcast_r17__headerCompression_r17_PR;
typedef enum NR_MRB_PDCP_ConfigBroadcast_r17__t_Reordering_r17 {
	NR_MRB_PDCP_ConfigBroadcast_r17__t_Reordering_r17_ms1	= 0,
	NR_MRB_PDCP_ConfigBroadcast_r17__t_Reordering_r17_ms10	= 1,
	NR_MRB_PDCP_ConfigBroadcast_r17__t_Reordering_r17_ms40	= 2,
	NR_MRB_PDCP_ConfigBroadcast_r17__t_Reordering_r17_ms160	= 3,
	NR_MRB_PDCP_ConfigBroadcast_r17__t_Reordering_r17_ms500	= 4,
	NR_MRB_PDCP_ConfigBroadcast_r17__t_Reordering_r17_ms1000	= 5,
	NR_MRB_PDCP_ConfigBroadcast_r17__t_Reordering_r17_ms1250	= 6,
	NR_MRB_PDCP_ConfigBroadcast_r17__t_Reordering_r17_ms2750	= 7
} e_NR_MRB_PDCP_ConfigBroadcast_r17__t_Reordering_r17;

/* NR_MRB-PDCP-ConfigBroadcast-r17 */
typedef struct NR_MRB_PDCP_ConfigBroadcast_r17 {
	long	*pdcp_SN_SizeDL_r17;	/* OPTIONAL */
	struct NR_MRB_PDCP_ConfigBroadcast_r17__headerCompression_r17 {
		NR_MRB_PDCP_ConfigBroadcast_r17__headerCompression_r17_PR present;
		union NR_MRB_PDCP_ConfigBroadcast_r17__NR_headerCompression_r17_u {
			NULL_t	 notUsed;
			struct NR_MRB_PDCP_ConfigBroadcast_r17__headerCompression_r17__rohc {
				long	*maxCID_r17;	/* DEFAULT 15 */
				struct NR_MRB_PDCP_ConfigBroadcast_r17__headerCompression_r17__rohc__profiles_r17 {
					BOOLEAN_t	 profile0x0000_r17;
					BOOLEAN_t	 profile0x0001_r17;
					BOOLEAN_t	 profile0x0002_r17;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} profiles_r17;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *rohc;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} headerCompression_r17;
	long	*t_Reordering_r17;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_MRB_PDCP_ConfigBroadcast_r17_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_pdcp_SN_SizeDL_r17_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_t_Reordering_r17_12;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_MRB_PDCP_ConfigBroadcast_r17;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_MRB_PDCP_ConfigBroadcast_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_MRB_PDCP_ConfigBroadcast_r17_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_MRB_PDCP_ConfigBroadcast_r17_H_ */
#include <asn_internal.h>
