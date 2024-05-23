/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair3/LPP/MESSAGES/ASN1/37355-g60.asn"
 * 	`asn1c -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair3/LPP/MESSAGES`
 */

#ifndef	_LPP_CNAV_ClockModel_H_
#define	_LPP_CNAV_ClockModel_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LPP_CNAV-ClockModel */
typedef struct LPP_CNAV_ClockModel {
	long	 cnavToc;
	long	 cnavTop;
	long	 cnavURA0;
	long	 cnavURA1;
	long	 cnavURA2;
	long	 cnavAf2;
	long	 cnavAf1;
	long	 cnavAf0;
	long	 cnavTgd;
	long	*cnavISCl1cp;	/* OPTIONAL */
	long	*cnavISCl1cd;	/* OPTIONAL */
	long	*cnavISCl1ca;	/* OPTIONAL */
	long	*cnavISCl2c;	/* OPTIONAL */
	long	*cnavISCl5i5;	/* OPTIONAL */
	long	*cnavISCl5q5;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_CNAV_ClockModel_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LPP_CNAV_ClockModel;
extern asn_SEQUENCE_specifics_t asn_SPC_LPP_CNAV_ClockModel_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_CNAV_ClockModel_1[15];

#ifdef __cplusplus
}
#endif

#endif	/* _LPP_CNAV_ClockModel_H_ */
#include <asn_internal.h>
