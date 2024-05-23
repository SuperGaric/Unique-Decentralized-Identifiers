/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_CG_ConfigInfo_v1540_IEs_H_
#define	_NR_CG_ConfigInfo_v1540_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_ARFCN-ValueNR.h"
#include "NR_PhysCellId.h"
#include "NR_CGI-InfoNR.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_PH_TypeListMCG;
struct NR_CG_ConfigInfo_v1560_IEs;

/* NR_CG-ConfigInfo-v1540-IEs */
typedef struct NR_CG_ConfigInfo_v1540_IEs {
	struct NR_PH_TypeListMCG	*ph_InfoMCG;	/* OPTIONAL */
	struct NR_CG_ConfigInfo_v1540_IEs__measResultReportCGI {
		NR_ARFCN_ValueNR_t	 ssbFrequency;
		NR_PhysCellId_t	 cellForWhichToReportCGI;
		NR_CGI_InfoNR_t	 cgi_Info;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *measResultReportCGI;
	struct NR_CG_ConfigInfo_v1560_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_CG_ConfigInfo_v1540_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_CG_ConfigInfo_v1540_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_CG_ConfigInfo_v1540_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_CG_ConfigInfo_v1540_IEs_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_PH-TypeListMCG.h"
#include "NR_CG-ConfigInfo-v1560-IEs.h"

#endif	/* _NR_CG_ConfigInfo_v1540_IEs_H_ */
#include <asn_internal.h>
