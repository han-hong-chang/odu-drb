/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "2022_E2AP.asn1"
 * 	`asn1c -D ./E2AP/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_GlobalRIC_ID_H_
#define	_GlobalRIC_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PLMN-Identity.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GlobalRIC-ID */
typedef struct GlobalRIC_ID {
	PLMN_Identity_t	 pLMN_Identity;
	BIT_STRING_t	 ric_ID;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GlobalRIC_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GlobalRIC_ID;

#ifdef __cplusplus
}
#endif

#endif	/* _GlobalRIC_ID_H_ */
#include <asn_internal.h>
