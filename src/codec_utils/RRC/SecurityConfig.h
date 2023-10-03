/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../ASN1_Input/rrc_15_3_asn.asn1"
 * 	`asn1c -D ../RRC_output_14Nov/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_SecurityConfig_H_
#define	_SecurityConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SecurityConfig__keyToUse {
	SecurityConfig__keyToUse_master	= 0,
	SecurityConfig__keyToUse_secondary	= 1
} e_SecurityConfig__keyToUse;

/* Forward declarations */
struct SecurityAlgorithmConfig;

/* SecurityConfig */
typedef struct SecurityConfig {
	struct SecurityAlgorithmConfig	*securityAlgorithmConfig;	/* OPTIONAL */
	long	*keyToUse;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SecurityConfig_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_keyToUse_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SecurityConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_SecurityConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_SecurityConfig_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SecurityConfig_H_ */
#include <asn_internal.h>
