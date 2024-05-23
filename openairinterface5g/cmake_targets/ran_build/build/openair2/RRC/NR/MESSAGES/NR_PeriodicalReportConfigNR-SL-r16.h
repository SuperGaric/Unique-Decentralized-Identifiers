/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_PeriodicalReportConfigNR_SL_r16_H_
#define	_NR_PeriodicalReportConfigNR_SL_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_ReportInterval.h"
#include <NativeEnumerated.h>
#include "NR_MeasReportQuantity-r16.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_PeriodicalReportConfigNR_SL_r16__reportAmount_r16 {
	NR_PeriodicalReportConfigNR_SL_r16__reportAmount_r16_r1	= 0,
	NR_PeriodicalReportConfigNR_SL_r16__reportAmount_r16_r2	= 1,
	NR_PeriodicalReportConfigNR_SL_r16__reportAmount_r16_r4	= 2,
	NR_PeriodicalReportConfigNR_SL_r16__reportAmount_r16_r8	= 3,
	NR_PeriodicalReportConfigNR_SL_r16__reportAmount_r16_r16	= 4,
	NR_PeriodicalReportConfigNR_SL_r16__reportAmount_r16_r32	= 5,
	NR_PeriodicalReportConfigNR_SL_r16__reportAmount_r16_r64	= 6,
	NR_PeriodicalReportConfigNR_SL_r16__reportAmount_r16_infinity	= 7
} e_NR_PeriodicalReportConfigNR_SL_r16__reportAmount_r16;

/* NR_PeriodicalReportConfigNR-SL-r16 */
typedef struct NR_PeriodicalReportConfigNR_SL_r16 {
	NR_ReportInterval_t	 reportInterval_r16;
	long	 reportAmount_r16;
	NR_MeasReportQuantity_r16_t	 reportQuantity_r16;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_PeriodicalReportConfigNR_SL_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_reportAmount_r16_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_PeriodicalReportConfigNR_SL_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_PeriodicalReportConfigNR_SL_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_PeriodicalReportConfigNR_SL_r16_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_PeriodicalReportConfigNR_SL_r16_H_ */
#include <asn_internal.h>
