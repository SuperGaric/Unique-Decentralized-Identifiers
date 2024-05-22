/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/LTE/MESSAGES/ASN.1/lte-rrc-16.13.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/LTE/MESSAGES`
 */

#ifndef	_LTE_RLF_Report_r9_H_
#define	_LTE_RLF_Report_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_RSRP-Range.h"
#include "LTE_RSRQ-Range.h"
#include <constr_SEQUENCE.h>
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include "LTE_CellGlobalIdEUTRA.h"
#include "LTE_PhysCellId.h"
#include "LTE_ARFCN-ValueEUTRA.h"
#include <constr_CHOICE.h>
#include "LTE_ARFCN-ValueEUTRA-v9e0.h"
#include "LTE_C-RNTI.h"
#include "LTE_TimeSinceFailure-r11.h"
#include "LTE_ARFCN-ValueUTRA.h"
#include "LTE_PhysCellIdUTRA-FDD.h"
#include "LTE_PhysCellIdUTRA-TDD.h"
#include "LTE_RSRQ-Range-v1250.h"
#include "LTE_TrackingAreaCode.h"
#include "LTE_RSRP-Range-v1360.h"
#include "LTE_TimeUntilReconnection-r16.h"
#include "LTE_CellGlobalIdNR-r16.h"
#include "LTE_PhysCellIdNR-r15.h"
#include "LTE_ARFCN-ValueNR-r15.h"
#include "LTE_TrackingAreaCode-5GC-r15.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_RLF_Report_r9__ext1__failedPCellId_r10_PR {
	LTE_RLF_Report_r9__ext1__failedPCellId_r10_PR_NOTHING,	/* No components present */
	LTE_RLF_Report_r9__ext1__failedPCellId_r10_PR_cellGlobalId_r10,
	LTE_RLF_Report_r9__ext1__failedPCellId_r10_PR_pci_arfcn_r10
} LTE_RLF_Report_r9__ext1__failedPCellId_r10_PR;
typedef enum LTE_RLF_Report_r9__ext1__connectionFailureType_r10 {
	LTE_RLF_Report_r9__ext1__connectionFailureType_r10_rlf	= 0,
	LTE_RLF_Report_r9__ext1__connectionFailureType_r10_hof	= 1
} e_LTE_RLF_Report_r9__ext1__connectionFailureType_r10;
typedef enum LTE_RLF_Report_r9__ext3__basicFields_r11__rlf_Cause_r11 {
	LTE_RLF_Report_r9__ext3__basicFields_r11__rlf_Cause_r11_t310_Expiry	= 0,
	LTE_RLF_Report_r9__ext3__basicFields_r11__rlf_Cause_r11_randomAccessProblem	= 1,
	LTE_RLF_Report_r9__ext3__basicFields_r11__rlf_Cause_r11_rlc_MaxNumRetx	= 2,
	LTE_RLF_Report_r9__ext3__basicFields_r11__rlf_Cause_r11_t312_Expiry_r12	= 3
} e_LTE_RLF_Report_r9__ext3__basicFields_r11__rlf_Cause_r11;
typedef enum LTE_RLF_Report_r9__ext3__previousUTRA_CellId_r11__physCellId_r11_PR {
	LTE_RLF_Report_r9__ext3__previousUTRA_CellId_r11__physCellId_r11_PR_NOTHING,	/* No components present */
	LTE_RLF_Report_r9__ext3__previousUTRA_CellId_r11__physCellId_r11_PR_fdd_r11,
	LTE_RLF_Report_r9__ext3__previousUTRA_CellId_r11__physCellId_r11_PR_tdd_r11
} LTE_RLF_Report_r9__ext3__previousUTRA_CellId_r11__physCellId_r11_PR;
typedef enum LTE_RLF_Report_r9__ext3__selectedUTRA_CellId_r11__physCellId_r11_PR {
	LTE_RLF_Report_r9__ext3__selectedUTRA_CellId_r11__physCellId_r11_PR_NOTHING,	/* No components present */
	LTE_RLF_Report_r9__ext3__selectedUTRA_CellId_r11__physCellId_r11_PR_fdd_r11,
	LTE_RLF_Report_r9__ext3__selectedUTRA_CellId_r11__physCellId_r11_PR_tdd_r11
} LTE_RLF_Report_r9__ext3__selectedUTRA_CellId_r11__physCellId_r11_PR;
typedef enum LTE_RLF_Report_r9__ext5__drb_EstablishedWithQCI_1_r13 {
	LTE_RLF_Report_r9__ext5__drb_EstablishedWithQCI_1_r13_qci1	= 0
} e_LTE_RLF_Report_r9__ext5__drb_EstablishedWithQCI_1_r13;
typedef enum LTE_RLF_Report_r9__ext8__failedNR_PCellId_r16_PR {
	LTE_RLF_Report_r9__ext8__failedNR_PCellId_r16_PR_NOTHING,	/* No components present */
	LTE_RLF_Report_r9__ext8__failedNR_PCellId_r16_PR_cellGlobalId,
	LTE_RLF_Report_r9__ext8__failedNR_PCellId_r16_PR_pci_arfcn
} LTE_RLF_Report_r9__ext8__failedNR_PCellId_r16_PR;
typedef enum LTE_RLF_Report_r9__ext8__reconnectCellId_r16_PR {
	LTE_RLF_Report_r9__ext8__reconnectCellId_r16_PR_NOTHING,	/* No components present */
	LTE_RLF_Report_r9__ext8__reconnectCellId_r16_PR_nrReconnectCellId,
	LTE_RLF_Report_r9__ext8__reconnectCellId_r16_PR_eutraReconnectCellId
} LTE_RLF_Report_r9__ext8__reconnectCellId_r16_PR;

/* Forward declarations */
struct LTE_MeasResultList2EUTRA_r9;
struct LTE_MeasResultList2UTRA_r9;
struct LTE_MeasResultListGERAN;
struct LTE_MeasResultList2CDMA2000_r9;
struct LTE_LocationInfo_r10;
struct LTE_CellGlobalIdEUTRA;
struct LTE_CellGlobalIdUTRA;
struct LTE_RSRQ_Type_r12;
struct LTE_MeasResultList2EUTRA_v1250;
struct LTE_LogMeasResultListBT_r15;
struct LTE_LogMeasResultListWLAN_r15;
struct LTE_MeasResultCellListNR_r15;
struct LTE_CellGlobalIdNR_r16;
struct LTE_MeasResultFreqListNR_r16;

/* LTE_RLF-Report-r9 */
typedef struct LTE_RLF_Report_r9 {
	struct LTE_RLF_Report_r9__measResultLastServCell_r9 {
		LTE_RSRP_Range_t	 rsrpResult_r9;
		LTE_RSRQ_Range_t	*rsrqResult_r9;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} measResultLastServCell_r9;
	struct LTE_RLF_Report_r9__measResultNeighCells_r9 {
		struct LTE_MeasResultList2EUTRA_r9	*measResultListEUTRA_r9;	/* OPTIONAL */
		struct LTE_MeasResultList2UTRA_r9	*measResultListUTRA_r9;	/* OPTIONAL */
		struct LTE_MeasResultListGERAN	*measResultListGERAN_r9;	/* OPTIONAL */
		struct LTE_MeasResultList2CDMA2000_r9	*measResultsCDMA2000_r9;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *measResultNeighCells_r9;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_RLF_Report_r9__ext1 {
		struct LTE_LocationInfo_r10	*locationInfo_r10;	/* OPTIONAL */
		struct LTE_RLF_Report_r9__ext1__failedPCellId_r10 {
			LTE_RLF_Report_r9__ext1__failedPCellId_r10_PR present;
			union LTE_RLF_Report_r9__LTE_ext1__LTE_failedPCellId_r10_u {
				LTE_CellGlobalIdEUTRA_t	 cellGlobalId_r10;
				struct LTE_RLF_Report_r9__ext1__failedPCellId_r10__pci_arfcn_r10 {
					LTE_PhysCellId_t	 physCellId_r10;
					LTE_ARFCN_ValueEUTRA_t	 carrierFreq_r10;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} pci_arfcn_r10;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *failedPCellId_r10;
		struct LTE_CellGlobalIdEUTRA	*reestablishmentCellId_r10;	/* OPTIONAL */
		long	*timeConnFailure_r10;	/* OPTIONAL */
		long	*connectionFailureType_r10;	/* OPTIONAL */
		struct LTE_CellGlobalIdEUTRA	*previousPCellId_r10;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct LTE_RLF_Report_r9__ext2 {
		struct LTE_RLF_Report_r9__ext2__failedPCellId_v1090 {
			LTE_ARFCN_ValueEUTRA_v9e0_t	 carrierFreq_v1090;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *failedPCellId_v1090;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct LTE_RLF_Report_r9__ext3 {
		struct LTE_RLF_Report_r9__ext3__basicFields_r11 {
			LTE_C_RNTI_t	 c_RNTI_r11;
			long	 rlf_Cause_r11;
			LTE_TimeSinceFailure_r11_t	 timeSinceFailure_r11;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *basicFields_r11;
		struct LTE_RLF_Report_r9__ext3__previousUTRA_CellId_r11 {
			LTE_ARFCN_ValueUTRA_t	 carrierFreq_r11;
			struct LTE_RLF_Report_r9__ext3__previousUTRA_CellId_r11__physCellId_r11 {
				LTE_RLF_Report_r9__ext3__previousUTRA_CellId_r11__physCellId_r11_PR present;
				union LTE_RLF_Report_r9__LTE_ext3__LTE_previousUTRA_CellId_r11__LTE_physCellId_r11_u {
					LTE_PhysCellIdUTRA_FDD_t	 fdd_r11;
					LTE_PhysCellIdUTRA_TDD_t	 tdd_r11;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} physCellId_r11;
			struct LTE_CellGlobalIdUTRA	*cellGlobalId_r11;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *previousUTRA_CellId_r11;
		struct LTE_RLF_Report_r9__ext3__selectedUTRA_CellId_r11 {
			LTE_ARFCN_ValueUTRA_t	 carrierFreq_r11;
			struct LTE_RLF_Report_r9__ext3__selectedUTRA_CellId_r11__physCellId_r11 {
				LTE_RLF_Report_r9__ext3__selectedUTRA_CellId_r11__physCellId_r11_PR present;
				union LTE_RLF_Report_r9__LTE_ext3__LTE_selectedUTRA_CellId_r11__LTE_physCellId_r11_u {
					LTE_PhysCellIdUTRA_FDD_t	 fdd_r11;
					LTE_PhysCellIdUTRA_TDD_t	 tdd_r11;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} physCellId_r11;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *selectedUTRA_CellId_r11;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	struct LTE_RLF_Report_r9__ext4 {
		struct LTE_RLF_Report_r9__ext4__failedPCellId_v1250 {
			LTE_TrackingAreaCode_t	 tac_FailedPCell_r12;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *failedPCellId_v1250;
		LTE_RSRQ_Range_v1250_t	*measResultLastServCell_v1250;	/* OPTIONAL */
		struct LTE_RSRQ_Type_r12	*lastServCellRSRQ_Type_r12;	/* OPTIONAL */
		struct LTE_MeasResultList2EUTRA_v1250	*measResultListEUTRA_v1250;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext4;
	struct LTE_RLF_Report_r9__ext5 {
		long	*drb_EstablishedWithQCI_1_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext5;
	struct LTE_RLF_Report_r9__ext6 {
		LTE_RSRP_Range_v1360_t	*measResultLastServCell_v1360;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext6;
	struct LTE_RLF_Report_r9__ext7 {
		struct LTE_LogMeasResultListBT_r15	*logMeasResultListBT_r15;	/* OPTIONAL */
		struct LTE_LogMeasResultListWLAN_r15	*logMeasResultListWLAN_r15;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext7;
	struct LTE_RLF_Report_r9__ext8 {
		struct LTE_MeasResultCellListNR_r15	*measResultListNR_r16;	/* OPTIONAL */
		struct LTE_CellGlobalIdNR_r16	*previousNR_PCellId_r16;	/* OPTIONAL */
		struct LTE_RLF_Report_r9__ext8__failedNR_PCellId_r16 {
			LTE_RLF_Report_r9__ext8__failedNR_PCellId_r16_PR present;
			union LTE_RLF_Report_r9__LTE_ext8__LTE_failedNR_PCellId_r16_u {
				LTE_CellGlobalIdNR_r16_t	 cellGlobalId;
				struct LTE_RLF_Report_r9__ext8__failedNR_PCellId_r16__pci_arfcn {
					LTE_PhysCellIdNR_r15_t	 physCellId_r16;
					LTE_ARFCN_ValueNR_r15_t	 carrierFreq_r16;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} pci_arfcn;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *failedNR_PCellId_r16;
		struct LTE_RLF_Report_r9__ext8__reconnectCellId_r16 {
			LTE_RLF_Report_r9__ext8__reconnectCellId_r16_PR present;
			union LTE_RLF_Report_r9__LTE_ext8__LTE_reconnectCellId_r16_u {
				LTE_CellGlobalIdNR_r16_t	 nrReconnectCellId;
				struct LTE_RLF_Report_r9__ext8__reconnectCellId_r16__eutraReconnectCellId {
					LTE_CellGlobalIdEUTRA_t	 cellGlobalId_r16;
					LTE_TrackingAreaCode_t	*trackingAreaCode_EPC_r16;	/* OPTIONAL */
					LTE_TrackingAreaCode_5GC_r15_t	*trackingAreaCode_5GC_r16;	/* OPTIONAL */
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} eutraReconnectCellId;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *reconnectCellId_r16;
		LTE_TimeUntilReconnection_r16_t	*timeUntilReconnection_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext8;
	struct LTE_RLF_Report_r9__ext9 {
		struct LTE_RLF_Report_r9__ext9__measResultListNR_v1640 {
			LTE_ARFCN_ValueNR_r15_t	 carrierFreqNR_r16;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *measResultListNR_v1640;
		struct LTE_MeasResultFreqListNR_r16	*measResultListExtNR_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext9;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RLF_Report_r9_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_connectionFailureType_r10_20;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_rlf_Cause_r11_30;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_drb_EstablishedWithQCI_1_r13_54;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RLF_Report_r9;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_RLF_Report_r9_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RLF_Report_r9_1[11];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_MeasResultList2EUTRA-r9.h"
#include "LTE_MeasResultList2UTRA-r9.h"
#include "LTE_MeasResultListGERAN.h"
#include "LTE_MeasResultList2CDMA2000-r9.h"
#include "LTE_LocationInfo-r10.h"
#include "LTE_CellGlobalIdEUTRA.h"
#include "LTE_CellGlobalIdUTRA.h"
#include "LTE_RSRQ-Type-r12.h"
#include "LTE_MeasResultList2EUTRA-v1250.h"
#include "LTE_LogMeasResultListBT-r15.h"
#include "LTE_LogMeasResultListWLAN-r15.h"
#include "LTE_MeasResultCellListNR-r15.h"
#include "LTE_CellGlobalIdNR-r16.h"
#include "LTE_MeasResultFreqListNR-r16.h"

#endif	/* _LTE_RLF_Report_r9_H_ */
#include <asn_internal.h>