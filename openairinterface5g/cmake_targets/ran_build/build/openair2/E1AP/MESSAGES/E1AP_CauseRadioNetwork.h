/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E1AP-IEs"
 * 	found in "/home/dmt/openairinterface5g/openair2/E1AP/MESSAGES/ASN.1/38463-g80.R16.78.0.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-JER -no-gen-BER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/E1AP/MESSAGES`
 */

#ifndef	_E1AP_CauseRadioNetwork_H_
#define	_E1AP_CauseRadioNetwork_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum E1AP_CauseRadioNetwork {
	E1AP_CauseRadioNetwork_unspecified	= 0,
	E1AP_CauseRadioNetwork_unknown_or_already_allocated_gnb_cu_cp_ue_e1ap_id	= 1,
	E1AP_CauseRadioNetwork_unknown_or_already_allocated_gnb_cu_up_ue_e1ap_id	= 2,
	E1AP_CauseRadioNetwork_unknown_or_inconsistent_pair_of_ue_e1ap_id	= 3,
	E1AP_CauseRadioNetwork_interaction_with_other_procedure	= 4,
	E1AP_CauseRadioNetwork_pPDCP_Count_wrap_around	= 5,
	E1AP_CauseRadioNetwork_not_supported_QCI_value	= 6,
	E1AP_CauseRadioNetwork_not_supported_5QI_value	= 7,
	E1AP_CauseRadioNetwork_encryption_algorithms_not_supported	= 8,
	E1AP_CauseRadioNetwork_integrity_protection_algorithms_not_supported	= 9,
	E1AP_CauseRadioNetwork_uP_integrity_protection_not_possible	= 10,
	E1AP_CauseRadioNetwork_uP_confidentiality_protection_not_possible	= 11,
	E1AP_CauseRadioNetwork_multiple_PDU_Session_ID_Instances	= 12,
	E1AP_CauseRadioNetwork_unknown_PDU_Session_ID	= 13,
	E1AP_CauseRadioNetwork_multiple_QoS_Flow_ID_Instances	= 14,
	E1AP_CauseRadioNetwork_unknown_QoS_Flow_ID	= 15,
	E1AP_CauseRadioNetwork_multiple_DRB_ID_Instances	= 16,
	E1AP_CauseRadioNetwork_unknown_DRB_ID	= 17,
	E1AP_CauseRadioNetwork_invalid_QoS_combination	= 18,
	E1AP_CauseRadioNetwork_procedure_cancelled	= 19,
	E1AP_CauseRadioNetwork_normal_release	= 20,
	E1AP_CauseRadioNetwork_no_radio_resources_available	= 21,
	E1AP_CauseRadioNetwork_action_desirable_for_radio_reasons	= 22,
	E1AP_CauseRadioNetwork_resources_not_available_for_the_slice	= 23,
	E1AP_CauseRadioNetwork_pDCP_configuration_not_supported	= 24,
	/*
	 * Enumeration is extensible
	 */
	E1AP_CauseRadioNetwork_ue_dl_max_IP_data_rate_reason	= 25,
	E1AP_CauseRadioNetwork_uP_integrity_protection_failure	= 26,
	E1AP_CauseRadioNetwork_release_due_to_pre_emption	= 27,
	E1AP_CauseRadioNetwork_rsn_not_available_for_the_up	= 28,
	E1AP_CauseRadioNetwork_nPN_not_supported	= 29,
	E1AP_CauseRadioNetwork_report_characteristic_empty	= 30,
	E1AP_CauseRadioNetwork_existing_measurement_ID	= 31,
	E1AP_CauseRadioNetwork_measurement_temporarily_not_available	= 32,
	E1AP_CauseRadioNetwork_measurement_not_supported_for_the_object	= 33
} e_E1AP_CauseRadioNetwork;

/* E1AP_CauseRadioNetwork */
typedef long	 E1AP_CauseRadioNetwork_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_E1AP_CauseRadioNetwork_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_E1AP_CauseRadioNetwork;
extern const asn_INTEGER_specifics_t asn_SPC_E1AP_CauseRadioNetwork_specs_1;
asn_struct_free_f E1AP_CauseRadioNetwork_free;
asn_struct_print_f E1AP_CauseRadioNetwork_print;
asn_constr_check_f E1AP_CauseRadioNetwork_constraint;
xer_type_decoder_f E1AP_CauseRadioNetwork_decode_xer;
xer_type_encoder_f E1AP_CauseRadioNetwork_encode_xer;
per_type_decoder_f E1AP_CauseRadioNetwork_decode_uper;
per_type_encoder_f E1AP_CauseRadioNetwork_encode_uper;
per_type_decoder_f E1AP_CauseRadioNetwork_decode_aper;
per_type_encoder_f E1AP_CauseRadioNetwork_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _E1AP_CauseRadioNetwork_H_ */
#include <asn_internal.h>