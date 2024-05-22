/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/dmt/openairinterface5g/openair2/RRC/NR/MESSAGES/ASN.1/nr-rrc-17.3.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-UPER -no-gen-BER -no-gen-JER -no-gen-OER -gen-APER -no-gen-example -findirect-choice -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/NR/MESSAGES`
 */

#ifndef	_NR_SDT_ConfigCommonSIB_r17_H_
#define	_NR_SDT_ConfigCommonSIB_r17_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_RSRP-Range.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_SDT_ConfigCommonSIB_r17__sdt_LogicalChannelSR_DelayTimer_r17 {
	NR_SDT_ConfigCommonSIB_r17__sdt_LogicalChannelSR_DelayTimer_r17_sf20	= 0,
	NR_SDT_ConfigCommonSIB_r17__sdt_LogicalChannelSR_DelayTimer_r17_sf40	= 1,
	NR_SDT_ConfigCommonSIB_r17__sdt_LogicalChannelSR_DelayTimer_r17_sf64	= 2,
	NR_SDT_ConfigCommonSIB_r17__sdt_LogicalChannelSR_DelayTimer_r17_sf128	= 3,
	NR_SDT_ConfigCommonSIB_r17__sdt_LogicalChannelSR_DelayTimer_r17_sf512	= 4,
	NR_SDT_ConfigCommonSIB_r17__sdt_LogicalChannelSR_DelayTimer_r17_sf1024	= 5,
	NR_SDT_ConfigCommonSIB_r17__sdt_LogicalChannelSR_DelayTimer_r17_sf2560	= 6,
	NR_SDT_ConfigCommonSIB_r17__sdt_LogicalChannelSR_DelayTimer_r17_spare1	= 7
} e_NR_SDT_ConfigCommonSIB_r17__sdt_LogicalChannelSR_DelayTimer_r17;
typedef enum NR_SDT_ConfigCommonSIB_r17__sdt_DataVolumeThreshold_r17 {
	NR_SDT_ConfigCommonSIB_r17__sdt_DataVolumeThreshold_r17_byte32	= 0,
	NR_SDT_ConfigCommonSIB_r17__sdt_DataVolumeThreshold_r17_byte100	= 1,
	NR_SDT_ConfigCommonSIB_r17__sdt_DataVolumeThreshold_r17_byte200	= 2,
	NR_SDT_ConfigCommonSIB_r17__sdt_DataVolumeThreshold_r17_byte400	= 3,
	NR_SDT_ConfigCommonSIB_r17__sdt_DataVolumeThreshold_r17_byte600	= 4,
	NR_SDT_ConfigCommonSIB_r17__sdt_DataVolumeThreshold_r17_byte800	= 5,
	NR_SDT_ConfigCommonSIB_r17__sdt_DataVolumeThreshold_r17_byte1000	= 6,
	NR_SDT_ConfigCommonSIB_r17__sdt_DataVolumeThreshold_r17_byte2000	= 7,
	NR_SDT_ConfigCommonSIB_r17__sdt_DataVolumeThreshold_r17_byte4000	= 8,
	NR_SDT_ConfigCommonSIB_r17__sdt_DataVolumeThreshold_r17_byte8000	= 9,
	NR_SDT_ConfigCommonSIB_r17__sdt_DataVolumeThreshold_r17_byte9000	= 10,
	NR_SDT_ConfigCommonSIB_r17__sdt_DataVolumeThreshold_r17_byte10000	= 11,
	NR_SDT_ConfigCommonSIB_r17__sdt_DataVolumeThreshold_r17_byte12000	= 12,
	NR_SDT_ConfigCommonSIB_r17__sdt_DataVolumeThreshold_r17_byte24000	= 13,
	NR_SDT_ConfigCommonSIB_r17__sdt_DataVolumeThreshold_r17_byte48000	= 14,
	NR_SDT_ConfigCommonSIB_r17__sdt_DataVolumeThreshold_r17_byte96000	= 15
} e_NR_SDT_ConfigCommonSIB_r17__sdt_DataVolumeThreshold_r17;
typedef enum NR_SDT_ConfigCommonSIB_r17__t319a_r17 {
	NR_SDT_ConfigCommonSIB_r17__t319a_r17_ms100	= 0,
	NR_SDT_ConfigCommonSIB_r17__t319a_r17_ms200	= 1,
	NR_SDT_ConfigCommonSIB_r17__t319a_r17_ms300	= 2,
	NR_SDT_ConfigCommonSIB_r17__t319a_r17_ms400	= 3,
	NR_SDT_ConfigCommonSIB_r17__t319a_r17_ms600	= 4,
	NR_SDT_ConfigCommonSIB_r17__t319a_r17_ms1000	= 5,
	NR_SDT_ConfigCommonSIB_r17__t319a_r17_ms2000	= 6,
	NR_SDT_ConfigCommonSIB_r17__t319a_r17_ms3000	= 7,
	NR_SDT_ConfigCommonSIB_r17__t319a_r17_ms4000	= 8,
	NR_SDT_ConfigCommonSIB_r17__t319a_r17_spare7	= 9,
	NR_SDT_ConfigCommonSIB_r17__t319a_r17_spare6	= 10,
	NR_SDT_ConfigCommonSIB_r17__t319a_r17_spare5	= 11,
	NR_SDT_ConfigCommonSIB_r17__t319a_r17_spare4	= 12,
	NR_SDT_ConfigCommonSIB_r17__t319a_r17_spare3	= 13,
	NR_SDT_ConfigCommonSIB_r17__t319a_r17_spare2	= 14,
	NR_SDT_ConfigCommonSIB_r17__t319a_r17_spare1	= 15
} e_NR_SDT_ConfigCommonSIB_r17__t319a_r17;

/* NR_SDT-ConfigCommonSIB-r17 */
typedef struct NR_SDT_ConfigCommonSIB_r17 {
	NR_RSRP_Range_t	*sdt_RSRP_Threshold_r17;	/* OPTIONAL */
	long	*sdt_LogicalChannelSR_DelayTimer_r17;	/* OPTIONAL */
	long	 sdt_DataVolumeThreshold_r17;
	long	 t319a_r17;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_SDT_ConfigCommonSIB_r17_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_sdt_LogicalChannelSR_DelayTimer_r17_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_sdt_DataVolumeThreshold_r17_12;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_t319a_r17_29;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_SDT_ConfigCommonSIB_r17;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_SDT_ConfigCommonSIB_r17_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_SDT_ConfigCommonSIB_r17_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_SDT_ConfigCommonSIB_r17_H_ */
#include <asn_internal.h>