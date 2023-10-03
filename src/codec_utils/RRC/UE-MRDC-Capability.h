/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../ASN1_Input/rrc_15_3_asn.asn1"
 * 	`asn1c -D ../RRC_output_14Nov/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_UE_MRDC_Capability_H_
#define	_UE_MRDC_Capability_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RF-ParametersMRDC.h"
#include <OCTET_STRING.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MeasAndMobParametersMRDC;
struct Phy_ParametersMRDC;
struct GeneralParametersMRDC_XDD_Diff;
struct UE_MRDC_CapabilityAddXDD_Mode;
struct UE_MRDC_CapabilityAddFRX_Mode;
struct PDCP_ParametersMRDC;
struct FeatureSetCombination;

/* UE-MRDC-Capability */
typedef struct UE_MRDC_Capability {
	struct MeasAndMobParametersMRDC	*measAndMobParametersMRDC;	/* OPTIONAL */
	struct Phy_ParametersMRDC	*phy_ParametersMRDC_v1530;	/* OPTIONAL */
	RF_ParametersMRDC_t	 rf_ParametersMRDC;
	struct GeneralParametersMRDC_XDD_Diff	*generalParametersMRDC;	/* OPTIONAL */
	struct UE_MRDC_CapabilityAddXDD_Mode	*fdd_Add_UE_MRDC_Capabilities;	/* OPTIONAL */
	struct UE_MRDC_CapabilityAddXDD_Mode	*tdd_Add_UE_MRDC_Capabilities;	/* OPTIONAL */
	struct UE_MRDC_CapabilityAddFRX_Mode	*fr1_Add_UE_MRDC_Capabilities;	/* OPTIONAL */
	struct UE_MRDC_CapabilityAddFRX_Mode	*fr2_Add_UE_MRDC_Capabilities;	/* OPTIONAL */
	struct UE_MRDC_Capability__featureSetCombinations {
		A_SEQUENCE_OF(struct FeatureSetCombination) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *featureSetCombinations;
	struct PDCP_ParametersMRDC	*pdcp_ParametersMRDC_v1530;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct UE_MRDC_Capability__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_MRDC_Capability_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_MRDC_Capability;

#ifdef __cplusplus
}
#endif

#endif	/* _UE_MRDC_Capability_H_ */
#include <asn_internal.h>
