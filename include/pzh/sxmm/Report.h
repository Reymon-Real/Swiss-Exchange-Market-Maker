// **********************************
// *** Author: Enosis Technology  ***
// *** Date:   April 20 from 2026 ***
// *** Update: April 20 from 2026 ***
// *** License: AGPL-3-or-later   ***
// **********************************

#ifdef __cplusplus
extern "C" {
#endif

#ifndef PZH_SXMM_REPORT_H
#define PZH_SXMM_REPORT_H

// **************************
// *** Standard Libraries ***
// **************************

#include <stddef.h>

// ***************
// *** Aliases ***
// ***************

// ******************
// *** Enumerates ***
// ******************

// **************
// *** Unions ***
// **************

// ******************
// *** Structures ***
// ******************

typedef struct {
	
	size_t bid;
	size_t ask;

	size_t inventory;

	double spread_min;
	double spread_max;
	
	double volatility;

} PZHReport;

// *****************
// *** Functions ***
// *****************

extern void sxmm_generate_report();

#endif // PZH_SXMM_REPORT_H

#ifdef __cplusplus
}
#endif