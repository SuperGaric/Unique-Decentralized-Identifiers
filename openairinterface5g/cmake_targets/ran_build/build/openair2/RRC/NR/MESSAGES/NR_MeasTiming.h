/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_MeasTiming_H_
#define	_NR_MeasTiming_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_ARFCN-ValueNR.h"
#include "NR_SubcarrierSpacing.h"
#include "NR_SSB-MTC.h"
#include <constr_SEQUENCE.h>
#include "NR_PhysCellId.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_SS_RSSI_Measurement;
struct NR_SSB_ToMeasure;

/* NR_MeasTiming */
typedef struct NR_MeasTiming {
	struct NR_MeasTiming__frequencyAndTiming {
		NR_ARFCN_ValueNR_t	 carrierFreq;
		NR_SubcarrierSpacing_t	 ssbSubcarrierSpacing;
		NR_SSB_MTC_t	 ssb_MeasurementTimingConfiguration;
		struct NR_SS_RSSI_Measurement	*ss_RSSI_Measurement;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *frequencyAndTiming;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_MeasTiming__ext1 {
		struct NR_SSB_ToMeasure	*ssb_ToMeasure;	/* OPTIONAL */
		NR_PhysCellId_t	*physCellId;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_MeasTiming_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_MeasTiming;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_MeasTiming_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_MeasTiming_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_SS-RSSI-Measurement.h"
#include "NR_SSB-ToMeasure.h"

#endif	/* _NR_MeasTiming_H_ */
#include <asn_internal.h>
