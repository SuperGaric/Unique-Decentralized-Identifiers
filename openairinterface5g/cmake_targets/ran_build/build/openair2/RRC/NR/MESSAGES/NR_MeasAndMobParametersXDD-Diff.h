/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_MeasAndMobParametersXDD_Diff_H_
#define	_NR_MeasAndMobParametersXDD_Diff_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_MeasAndMobParametersXDD_Diff__intraAndInterF_MeasAndReport {
	NR_MeasAndMobParametersXDD_Diff__intraAndInterF_MeasAndReport_supported	= 0
} e_NR_MeasAndMobParametersXDD_Diff__intraAndInterF_MeasAndReport;
typedef enum NR_MeasAndMobParametersXDD_Diff__eventA_MeasAndReport {
	NR_MeasAndMobParametersXDD_Diff__eventA_MeasAndReport_supported	= 0
} e_NR_MeasAndMobParametersXDD_Diff__eventA_MeasAndReport;
typedef enum NR_MeasAndMobParametersXDD_Diff__ext1__handoverInterF {
	NR_MeasAndMobParametersXDD_Diff__ext1__handoverInterF_supported	= 0
} e_NR_MeasAndMobParametersXDD_Diff__ext1__handoverInterF;
typedef enum NR_MeasAndMobParametersXDD_Diff__ext1__handoverLTE_EPC {
	NR_MeasAndMobParametersXDD_Diff__ext1__handoverLTE_EPC_supported	= 0
} e_NR_MeasAndMobParametersXDD_Diff__ext1__handoverLTE_EPC;
typedef enum NR_MeasAndMobParametersXDD_Diff__ext1__handoverLTE_5GC {
	NR_MeasAndMobParametersXDD_Diff__ext1__handoverLTE_5GC_supported	= 0
} e_NR_MeasAndMobParametersXDD_Diff__ext1__handoverLTE_5GC;
typedef enum NR_MeasAndMobParametersXDD_Diff__ext2__sftd_MeasNR_Neigh {
	NR_MeasAndMobParametersXDD_Diff__ext2__sftd_MeasNR_Neigh_supported	= 0
} e_NR_MeasAndMobParametersXDD_Diff__ext2__sftd_MeasNR_Neigh;
typedef enum NR_MeasAndMobParametersXDD_Diff__ext2__sftd_MeasNR_Neigh_DRX {
	NR_MeasAndMobParametersXDD_Diff__ext2__sftd_MeasNR_Neigh_DRX_supported	= 0
} e_NR_MeasAndMobParametersXDD_Diff__ext2__sftd_MeasNR_Neigh_DRX;
typedef enum NR_MeasAndMobParametersXDD_Diff__ext3__dummy {
	NR_MeasAndMobParametersXDD_Diff__ext3__dummy_supported	= 0
} e_NR_MeasAndMobParametersXDD_Diff__ext3__dummy;

/* NR_MeasAndMobParametersXDD-Diff */
typedef struct NR_MeasAndMobParametersXDD_Diff {
	long	*intraAndInterF_MeasAndReport;	/* OPTIONAL */
	long	*eventA_MeasAndReport;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_MeasAndMobParametersXDD_Diff__ext1 {
		long	*handoverInterF;	/* OPTIONAL */
		long	*handoverLTE_EPC;	/* OPTIONAL */
		long	*handoverLTE_5GC;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct NR_MeasAndMobParametersXDD_Diff__ext2 {
		long	*sftd_MeasNR_Neigh;	/* OPTIONAL */
		long	*sftd_MeasNR_Neigh_DRX;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct NR_MeasAndMobParametersXDD_Diff__ext3 {
		long	*dummy;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_MeasAndMobParametersXDD_Diff_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_intraAndInterF_MeasAndReport_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_eventA_MeasAndReport_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_handoverInterF_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_handoverLTE_EPC_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_handoverLTE_5GC_12;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_sftd_MeasNR_Neigh_15;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_sftd_MeasNR_Neigh_DRX_17;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_dummy_20;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_MeasAndMobParametersXDD_Diff;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_MeasAndMobParametersXDD_Diff_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_MeasAndMobParametersXDD_Diff_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_MeasAndMobParametersXDD_Diff_H_ */
#include <asn_internal.h>