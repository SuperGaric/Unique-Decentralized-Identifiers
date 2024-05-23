/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_PH_UplinkCarrierSCG_H_
#define	_NR_PH_UplinkCarrierSCG_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_PH_UplinkCarrierSCG__ph_Type1or3 {
	NR_PH_UplinkCarrierSCG__ph_Type1or3_type1	= 0,
	NR_PH_UplinkCarrierSCG__ph_Type1or3_type3	= 1
} e_NR_PH_UplinkCarrierSCG__ph_Type1or3;

/* NR_PH-UplinkCarrierSCG */
typedef struct NR_PH_UplinkCarrierSCG {
	long	 ph_Type1or3;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_PH_UplinkCarrierSCG_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_ph_Type1or3_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_PH_UplinkCarrierSCG;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_PH_UplinkCarrierSCG_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_PH_UplinkCarrierSCG_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_PH_UplinkCarrierSCG_H_ */
#include <asn_internal.h>
