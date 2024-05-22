/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-UE-Variables"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_VarANR_MeasReport_NB_r16_H_
#define	_LTE_VarANR_MeasReport_NB_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_PLMN-IdentityList3-r11.h"
#include "LTE_CellGlobalIdEUTRA.h"
#include "LTE_MeasResultServCell-NB-r14.h"
#include <NativeInteger.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_ANR_MeasResult_NB_r16;

/* LTE_VarANR-MeasReport-NB-r16 */
typedef struct LTE_VarANR_MeasReport_NB_r16 {
	LTE_PLMN_IdentityList3_r11_t	 plmn_IdentityList_r16;
	LTE_CellGlobalIdEUTRA_t	 servCellIdentity_r16;
	LTE_MeasResultServCell_NB_r14_t	 measResultServCell_r16;
	long	 relativeTimeStamp_r16;
	struct LTE_VarANR_MeasReport_NB_r16__measResultList_r16 {
		A_SEQUENCE_OF(struct LTE_ANR_MeasResult_NB_r16) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} measResultList_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_VarANR_MeasReport_NB_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_VarANR_MeasReport_NB_r16;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_ANR-MeasResult-NB-r16.h"

#endif	/* _LTE_VarANR_MeasReport_NB_r16_H_ */
#include <asn_internal.h>
