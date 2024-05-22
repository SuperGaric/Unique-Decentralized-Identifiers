/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_FreqPriorityEUTRA_H_
#define	_NR_FreqPriorityEUTRA_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_ARFCN-ValueEUTRA.h"
#include "NR_CellReselectionPriority.h"
#include "NR_CellReselectionSubPriority.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NR_FreqPriorityEUTRA */
typedef struct NR_FreqPriorityEUTRA {
	NR_ARFCN_ValueEUTRA_t	 carrierFreq;
	NR_CellReselectionPriority_t	 cellReselectionPriority;
	NR_CellReselectionSubPriority_t	*cellReselectionSubPriority;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_FreqPriorityEUTRA_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_FreqPriorityEUTRA;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_FreqPriorityEUTRA_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_FreqPriorityEUTRA_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_FreqPriorityEUTRA_H_ */
#include <asn_internal.h>
