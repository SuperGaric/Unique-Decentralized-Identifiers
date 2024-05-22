/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M2AP-PDU-Descriptions"
 * 	found in "/home/dmt/openairinterface5g/openair2/M2AP/MESSAGES/ASN1/m2ap-14.0.0.asn"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -fno-include-deps -D /home/dmt/openairinterface5g/cmake_targets/ran_build/build/openair2/M2AP/MESSAGES`
 */

#include "M2AP_InitiatingMessage.h"

static const long asn_VAL_1_M2AP_id_sessionStart = 0;
static const long asn_VAL_1_M2AP_reject = 0;
static const long asn_VAL_2_M2AP_id_sessionStop = 1;
static const long asn_VAL_2_M2AP_reject = 0;
static const long asn_VAL_3_M2AP_id_sessionUpdate = 9;
static const long asn_VAL_3_M2AP_reject = 0;
static const long asn_VAL_4_M2AP_id_mbmsSchedulingInformation = 2;
static const long asn_VAL_4_M2AP_reject = 0;
static const long asn_VAL_5_M2AP_id_reset = 4;
static const long asn_VAL_5_M2AP_reject = 0;
static const long asn_VAL_6_M2AP_id_m2Setup = 5;
static const long asn_VAL_6_M2AP_reject = 0;
static const long asn_VAL_7_M2AP_id_eNBConfigurationUpdate = 6;
static const long asn_VAL_7_M2AP_reject = 0;
static const long asn_VAL_8_M2AP_id_mCEConfigurationUpdate = 7;
static const long asn_VAL_8_M2AP_reject = 0;
static const long asn_VAL_9_M2AP_id_mbmsServiceCounting = 10;
static const long asn_VAL_9_M2AP_reject = 0;
static const long asn_VAL_10_M2AP_id_errorIndication = 3;
static const long asn_VAL_10_M2AP_ignore = 1;
static const long asn_VAL_11_M2AP_id_privateMessage = 8;
static const long asn_VAL_11_M2AP_ignore = 1;
static const long asn_VAL_12_M2AP_id_mbmsServiceCountingResultsReport = 11;
static const long asn_VAL_12_M2AP_reject = 0;
static const long asn_VAL_13_M2AP_id_mbmsOverloadNotification = 12;
static const long asn_VAL_13_M2AP_reject = 0;
static const asn_ioc_cell_t asn_IOS_M2AP_M2AP_ELEMENTARY_PROCEDURES_1_rows[] = {
	{ "&InitiatingMessage", aioc__type, &asn_DEF_M2AP_SessionStartRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_M2AP_SessionStartResponse },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_M2AP_SessionStartFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_M2AP_ProcedureCode, &asn_VAL_1_M2AP_id_sessionStart },
	{ "&criticality", aioc__value, &asn_DEF_M2AP_Criticality, &asn_VAL_1_M2AP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_M2AP_SessionStopRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_M2AP_SessionStopResponse },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_M2AP_ProcedureCode, &asn_VAL_2_M2AP_id_sessionStop },
	{ "&criticality", aioc__value, &asn_DEF_M2AP_Criticality, &asn_VAL_2_M2AP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_M2AP_SessionUpdateRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_M2AP_SessionUpdateResponse },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_M2AP_SessionUpdateFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_M2AP_ProcedureCode, &asn_VAL_3_M2AP_id_sessionUpdate },
	{ "&criticality", aioc__value, &asn_DEF_M2AP_Criticality, &asn_VAL_3_M2AP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_M2AP_MbmsSchedulingInformation },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_M2AP_MbmsSchedulingInformationResponse },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_M2AP_ProcedureCode, &asn_VAL_4_M2AP_id_mbmsSchedulingInformation },
	{ "&criticality", aioc__value, &asn_DEF_M2AP_Criticality, &asn_VAL_4_M2AP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_M2AP_Reset },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_M2AP_ResetAcknowledge },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_M2AP_ProcedureCode, &asn_VAL_5_M2AP_id_reset },
	{ "&criticality", aioc__value, &asn_DEF_M2AP_Criticality, &asn_VAL_5_M2AP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_M2AP_M2SetupRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_M2AP_M2SetupResponse },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_M2AP_M2SetupFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_M2AP_ProcedureCode, &asn_VAL_6_M2AP_id_m2Setup },
	{ "&criticality", aioc__value, &asn_DEF_M2AP_Criticality, &asn_VAL_6_M2AP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_M2AP_ENBConfigurationUpdate },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_M2AP_ENBConfigurationUpdateAcknowledge },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_M2AP_ENBConfigurationUpdateFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_M2AP_ProcedureCode, &asn_VAL_7_M2AP_id_eNBConfigurationUpdate },
	{ "&criticality", aioc__value, &asn_DEF_M2AP_Criticality, &asn_VAL_7_M2AP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_M2AP_MCEConfigurationUpdate },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_M2AP_MCEConfigurationUpdateAcknowledge },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_M2AP_MCEConfigurationUpdateFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_M2AP_ProcedureCode, &asn_VAL_8_M2AP_id_mCEConfigurationUpdate },
	{ "&criticality", aioc__value, &asn_DEF_M2AP_Criticality, &asn_VAL_8_M2AP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_M2AP_MbmsServiceCountingRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_M2AP_MbmsServiceCountingResponse },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_M2AP_MbmsServiceCountingFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_M2AP_ProcedureCode, &asn_VAL_9_M2AP_id_mbmsServiceCounting },
	{ "&criticality", aioc__value, &asn_DEF_M2AP_Criticality, &asn_VAL_9_M2AP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_M2AP_ErrorIndication },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_M2AP_ProcedureCode, &asn_VAL_10_M2AP_id_errorIndication },
	{ "&criticality", aioc__value, &asn_DEF_M2AP_Criticality, &asn_VAL_10_M2AP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_M2AP_PrivateMessage },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_M2AP_ProcedureCode, &asn_VAL_11_M2AP_id_privateMessage },
	{ "&criticality", aioc__value, &asn_DEF_M2AP_Criticality, &asn_VAL_11_M2AP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_M2AP_MbmsServiceCountingResultsReport },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_M2AP_ProcedureCode, &asn_VAL_12_M2AP_id_mbmsServiceCountingResultsReport },
	{ "&criticality", aioc__value, &asn_DEF_M2AP_Criticality, &asn_VAL_12_M2AP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_M2AP_MbmsOverloadNotification },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_M2AP_ProcedureCode, &asn_VAL_13_M2AP_id_mbmsOverloadNotification },
	{ "&criticality", aioc__value, &asn_DEF_M2AP_Criticality, &asn_VAL_13_M2AP_reject }
};
static const asn_ioc_set_t asn_IOS_M2AP_M2AP_ELEMENTARY_PROCEDURES_1[] = {
	{ 13, 5, asn_IOS_M2AP_M2AP_ELEMENTARY_PROCEDURES_1_rows }
};
static int
memb_M2AP_procedureCode_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 255L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_type_selector_result_t
select_InitiatingMessage_M2AP_criticality_type(const asn_TYPE_descriptor_t *parent_type, const void *parent_sptr) {
	asn_type_selector_result_t result = {0, 0};
	const asn_ioc_set_t *itable = asn_IOS_M2AP_M2AP_ELEMENTARY_PROCEDURES_1;
	size_t constraining_column = 3; /* &procedureCode */
	size_t for_column = 4; /* &criticality */
	size_t row, presence_index = 0;
	const long *constraining_value = (const long *)((const char *)parent_sptr + offsetof(struct M2AP_InitiatingMessage, procedureCode));
	
	for(row=0; row < itable->rows_count; row++) {
	    const asn_ioc_cell_t *constraining_cell = &itable->rows[row * itable->columns_count + constraining_column];
	    const asn_ioc_cell_t *type_cell = &itable->rows[row * itable->columns_count + for_column];
	
	    if(type_cell->cell_kind == aioc__undefined)
	        continue;
	
	    presence_index++;
	    if(constraining_cell->type_descriptor->op->compare_struct(constraining_cell->type_descriptor, constraining_value, constraining_cell->value_sptr) == 0) {
	        result.type_descriptor = type_cell->type_descriptor;
	        result.presence_index = presence_index;
	        break;
	    }
	}
	
	return result;
}

static int
memb_M2AP_criticality_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

static asn_type_selector_result_t
select_InitiatingMessage_M2AP_value_type(const asn_TYPE_descriptor_t *parent_type, const void *parent_sptr) {
	asn_type_selector_result_t result = {0, 0};
	const asn_ioc_set_t *itable = asn_IOS_M2AP_M2AP_ELEMENTARY_PROCEDURES_1;
	size_t constraining_column = 3; /* &procedureCode */
	size_t for_column = 0; /* &InitiatingMessage */
	size_t row, presence_index = 0;
	const long *constraining_value = (const long *)((const char *)parent_sptr + offsetof(struct M2AP_InitiatingMessage, procedureCode));
	
	for(row=0; row < itable->rows_count; row++) {
	    const asn_ioc_cell_t *constraining_cell = &itable->rows[row * itable->columns_count + constraining_column];
	    const asn_ioc_cell_t *type_cell = &itable->rows[row * itable->columns_count + for_column];
	
	    if(type_cell->cell_kind == aioc__undefined)
	        continue;
	
	    presence_index++;
	    if(constraining_cell->type_descriptor->op->compare_struct(constraining_cell->type_descriptor, constraining_value, constraining_cell->value_sptr) == 0) {
	        result.type_descriptor = type_cell->type_descriptor;
	        result.presence_index = presence_index;
	        break;
	    }
	}
	
	return result;
}

static int
memb_M2AP_value_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_M2AP_procedureCode_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_M2AP_criticality_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_M2AP_value_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_M2AP_value_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct M2AP_InitiatingMessage__value, choice.SessionStartRequest),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_M2AP_SessionStartRequest,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"SessionStartRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct M2AP_InitiatingMessage__value, choice.SessionStopRequest),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_M2AP_SessionStopRequest,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"SessionStopRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct M2AP_InitiatingMessage__value, choice.SessionUpdateRequest),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_M2AP_SessionUpdateRequest,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"SessionUpdateRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct M2AP_InitiatingMessage__value, choice.MbmsSchedulingInformation),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_M2AP_MbmsSchedulingInformation,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"MbmsSchedulingInformation"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct M2AP_InitiatingMessage__value, choice.Reset),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_M2AP_Reset,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"Reset"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct M2AP_InitiatingMessage__value, choice.M2SetupRequest),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_M2AP_M2SetupRequest,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"M2SetupRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct M2AP_InitiatingMessage__value, choice.ENBConfigurationUpdate),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_M2AP_ENBConfigurationUpdate,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"ENBConfigurationUpdate"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct M2AP_InitiatingMessage__value, choice.MCEConfigurationUpdate),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_M2AP_MCEConfigurationUpdate,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"MCEConfigurationUpdate"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct M2AP_InitiatingMessage__value, choice.MbmsServiceCountingRequest),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_M2AP_MbmsServiceCountingRequest,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"MbmsServiceCountingRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct M2AP_InitiatingMessage__value, choice.ErrorIndication),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_M2AP_ErrorIndication,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"ErrorIndication"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct M2AP_InitiatingMessage__value, choice.PrivateMessage),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_M2AP_PrivateMessage,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"PrivateMessage"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct M2AP_InitiatingMessage__value, choice.MbmsServiceCountingResultsReport),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_M2AP_MbmsServiceCountingResultsReport,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"MbmsServiceCountingResultsReport"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct M2AP_InitiatingMessage__value, choice.MbmsOverloadNotification),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_M2AP_MbmsOverloadNotification,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"MbmsOverloadNotification"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_M2AP_value_tag2el_4[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 12 }, /* SessionStartRequest */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, -1, 11 }, /* SessionStopRequest */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 2, -2, 10 }, /* SessionUpdateRequest */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 3, -3, 9 }, /* MbmsSchedulingInformation */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 4, -4, 8 }, /* Reset */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 5, -5, 7 }, /* M2SetupRequest */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 6, -6, 6 }, /* ENBConfigurationUpdate */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 7, -7, 5 }, /* MCEConfigurationUpdate */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 8, -8, 4 }, /* MbmsServiceCountingRequest */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 9, -9, 3 }, /* ErrorIndication */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 10, -10, 2 }, /* PrivateMessage */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 11, -11, 1 }, /* MbmsServiceCountingResultsReport */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 12, -12, 0 } /* MbmsOverloadNotification */
};
static asn_CHOICE_specifics_t asn_SPC_M2AP_value_specs_4 = {
	sizeof(struct M2AP_InitiatingMessage__value),
	offsetof(struct M2AP_InitiatingMessage__value, _asn_ctx),
	offsetof(struct M2AP_InitiatingMessage__value, present),
	sizeof(((struct M2AP_InitiatingMessage__value *)0)->present),
	asn_MAP_M2AP_value_tag2el_4,
	13,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_M2AP_value_4 = {
	"value",
	"value",
	&asn_OP_OPEN_TYPE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		OPEN_TYPE_constraint
	},
	asn_MBR_M2AP_value_4,
	13,	/* Elements count */
	&asn_SPC_M2AP_value_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_M2AP_InitiatingMessage_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct M2AP_InitiatingMessage, procedureCode),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_M2AP_ProcedureCode,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_M2AP_procedureCode_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_M2AP_procedureCode_constraint_1
		},
		0, 0, /* No default value */
		"procedureCode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct M2AP_InitiatingMessage, criticality),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_M2AP_Criticality,
		select_InitiatingMessage_M2AP_criticality_type,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_M2AP_criticality_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_M2AP_criticality_constraint_1
		},
		0, 0, /* No default value */
		"criticality"
		},
	{ ATF_OPEN_TYPE | ATF_NOFLAGS, 0, offsetof(struct M2AP_InitiatingMessage, value),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_M2AP_value_4,
		select_InitiatingMessage_M2AP_value_type,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_M2AP_value_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_M2AP_value_constraint_1
		},
		0, 0, /* No default value */
		"value"
		},
};
static const ber_tlv_tag_t asn_DEF_M2AP_InitiatingMessage_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_M2AP_InitiatingMessage_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* procedureCode */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* criticality */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* value */
};
asn_SEQUENCE_specifics_t asn_SPC_M2AP_InitiatingMessage_specs_1 = {
	sizeof(struct M2AP_InitiatingMessage),
	offsetof(struct M2AP_InitiatingMessage, _asn_ctx),
	asn_MAP_M2AP_InitiatingMessage_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_M2AP_InitiatingMessage = {
	"InitiatingMessage",
	"InitiatingMessage",
	&asn_OP_SEQUENCE,
	asn_DEF_M2AP_InitiatingMessage_tags_1,
	sizeof(asn_DEF_M2AP_InitiatingMessage_tags_1)
		/sizeof(asn_DEF_M2AP_InitiatingMessage_tags_1[0]), /* 1 */
	asn_DEF_M2AP_InitiatingMessage_tags_1,	/* Same as above */
	sizeof(asn_DEF_M2AP_InitiatingMessage_tags_1)
		/sizeof(asn_DEF_M2AP_InitiatingMessage_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_M2AP_InitiatingMessage_1,
	3,	/* Elements count */
	&asn_SPC_M2AP_InitiatingMessage_specs_1	/* Additional specs */
};

