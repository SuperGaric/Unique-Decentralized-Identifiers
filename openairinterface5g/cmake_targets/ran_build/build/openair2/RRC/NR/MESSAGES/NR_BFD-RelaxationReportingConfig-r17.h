/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_BFD_RelaxationReportingConfig_r17_H_
#define	_NR_BFD_RelaxationReportingConfig_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_BFD_RelaxationReportingConfig_r17__bfd_RelaxtionReportingProhibitTimer {
	NR_BFD_RelaxationReportingConfig_r17__bfd_RelaxtionReportingProhibitTimer_s0	= 0,
	NR_BFD_RelaxationReportingConfig_r17__bfd_RelaxtionReportingProhibitTimer_s0dot5	= 1,
	NR_BFD_RelaxationReportingConfig_r17__bfd_RelaxtionReportingProhibitTimer_s1	= 2,
	NR_BFD_RelaxationReportingConfig_r17__bfd_RelaxtionReportingProhibitTimer_s2	= 3,
	NR_BFD_RelaxationReportingConfig_r17__bfd_RelaxtionReportingProhibitTimer_s5	= 4,
	NR_BFD_RelaxationReportingConfig_r17__bfd_RelaxtionReportingProhibitTimer_s10	= 5,
	NR_BFD_RelaxationReportingConfig_r17__bfd_RelaxtionReportingProhibitTimer_s20	= 6,
	NR_BFD_RelaxationReportingConfig_r17__bfd_RelaxtionReportingProhibitTimer_s30	= 7,
	NR_BFD_RelaxationReportingConfig_r17__bfd_RelaxtionReportingProhibitTimer_s60	= 8,
	NR_BFD_RelaxationReportingConfig_r17__bfd_RelaxtionReportingProhibitTimer_s90	= 9,
	NR_BFD_RelaxationReportingConfig_r17__bfd_RelaxtionReportingProhibitTimer_s120	= 10,
	NR_BFD_RelaxationReportingConfig_r17__bfd_RelaxtionReportingProhibitTimer_s300	= 11,
	NR_BFD_RelaxationReportingConfig_r17__bfd_RelaxtionReportingProhibitTimer_s600	= 12,
	NR_BFD_RelaxationReportingConfig_r17__bfd_RelaxtionReportingProhibitTimer_infinity	= 13,
	NR_BFD_RelaxationReportingConfig_r17__bfd_RelaxtionReportingProhibitTimer_spare2	= 14,
	NR_BFD_RelaxationReportingConfig_r17__bfd_RelaxtionReportingProhibitTimer_spare1	= 15
} e_NR_BFD_RelaxationReportingConfig_r17__bfd_RelaxtionReportingProhibitTimer;

/* NR_BFD-RelaxationReportingConfig-r17 */
typedef struct NR_BFD_RelaxationReportingConfig_r17 {
	long	 bfd_RelaxtionReportingProhibitTimer;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_BFD_RelaxationReportingConfig_r17_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_bfd_RelaxtionReportingProhibitTimer_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_BFD_RelaxationReportingConfig_r17;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_BFD_RelaxationReportingConfig_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_BFD_RelaxationReportingConfig_r17_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_BFD_RelaxationReportingConfig_r17_H_ */
#include <asn_internal.h>