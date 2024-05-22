/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_CSI_ReportFramework_H_
#define	_NR_CSI_ReportFramework_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_CSI_ReportFramework__maxNumberAperiodicCSI_triggeringStatePerCC {
	NR_CSI_ReportFramework__maxNumberAperiodicCSI_triggeringStatePerCC_n3	= 0,
	NR_CSI_ReportFramework__maxNumberAperiodicCSI_triggeringStatePerCC_n7	= 1,
	NR_CSI_ReportFramework__maxNumberAperiodicCSI_triggeringStatePerCC_n15	= 2,
	NR_CSI_ReportFramework__maxNumberAperiodicCSI_triggeringStatePerCC_n31	= 3,
	NR_CSI_ReportFramework__maxNumberAperiodicCSI_triggeringStatePerCC_n63	= 4,
	NR_CSI_ReportFramework__maxNumberAperiodicCSI_triggeringStatePerCC_n128	= 5
} e_NR_CSI_ReportFramework__maxNumberAperiodicCSI_triggeringStatePerCC;

/* NR_CSI-ReportFramework */
typedef struct NR_CSI_ReportFramework {
	long	 maxNumberPeriodicCSI_PerBWP_ForCSI_Report;
	long	 maxNumberAperiodicCSI_PerBWP_ForCSI_Report;
	long	 maxNumberSemiPersistentCSI_PerBWP_ForCSI_Report;
	long	 maxNumberPeriodicCSI_PerBWP_ForBeamReport;
	long	 maxNumberAperiodicCSI_PerBWP_ForBeamReport;
	long	 maxNumberAperiodicCSI_triggeringStatePerCC;
	long	 maxNumberSemiPersistentCSI_PerBWP_ForBeamReport;
	long	 simultaneousCSI_ReportsPerCC;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_CSI_ReportFramework_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_maxNumberAperiodicCSI_triggeringStatePerCC_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_CSI_ReportFramework;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_CSI_ReportFramework_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_CSI_ReportFramework_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_CSI_ReportFramework_H_ */
#include <asn_internal.h>