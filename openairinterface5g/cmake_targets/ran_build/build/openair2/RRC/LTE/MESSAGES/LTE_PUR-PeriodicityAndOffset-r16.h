/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_PUR_PeriodicityAndOffset_r16_H_
#define	_LTE_PUR_PeriodicityAndOffset_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_PUR_PeriodicityAndOffset_r16_PR {
	LTE_PUR_PeriodicityAndOffset_r16_PR_NOTHING,	/* No components present */
	LTE_PUR_PeriodicityAndOffset_r16_PR_periodicity8,
	LTE_PUR_PeriodicityAndOffset_r16_PR_periodicity16,
	LTE_PUR_PeriodicityAndOffset_r16_PR_periodicity32,
	LTE_PUR_PeriodicityAndOffset_r16_PR_periodicity64,
	LTE_PUR_PeriodicityAndOffset_r16_PR_periodicity128,
	LTE_PUR_PeriodicityAndOffset_r16_PR_periodicity256,
	LTE_PUR_PeriodicityAndOffset_r16_PR_periodicity512,
	LTE_PUR_PeriodicityAndOffset_r16_PR_periodicity1024,
	LTE_PUR_PeriodicityAndOffset_r16_PR_periodicity2048,
	LTE_PUR_PeriodicityAndOffset_r16_PR_periodicity4096,
	LTE_PUR_PeriodicityAndOffset_r16_PR_periodicity8192
} LTE_PUR_PeriodicityAndOffset_r16_PR;

/* LTE_PUR-PeriodicityAndOffset-r16 */
typedef struct LTE_PUR_PeriodicityAndOffset_r16 {
	LTE_PUR_PeriodicityAndOffset_r16_PR present;
	union LTE_PUR_PeriodicityAndOffset_r16_u {
		long	 periodicity8;
		long	 periodicity16;
		long	 periodicity32;
		long	 periodicity64;
		long	 periodicity128;
		long	 periodicity256;
		long	 periodicity512;
		long	 periodicity1024;
		long	 periodicity2048;
		long	 periodicity4096;
		long	 periodicity8192;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_PUR_PeriodicityAndOffset_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_PUR_PeriodicityAndOffset_r16;
extern asn_CHOICE_specifics_t asn_SPC_LTE_PUR_PeriodicityAndOffset_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_PUR_PeriodicityAndOffset_r16_1[11];
extern asn_per_constraints_t asn_PER_type_LTE_PUR_PeriodicityAndOffset_r16_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_PUR_PeriodicityAndOffset_r16_H_ */
#include <asn_internal.h>