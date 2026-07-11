// **********************************
// *** Author: Enosis Technology  ***
// *** Date:   April 20 from 2026 ***
// *** Update: April 20 from 2026 ***
// *** License: AGPL-3-or-later   ***
// **********************************

#ifndef PZH_SXMM_REPORT_HPP
#define PZH_SXMM_REPORT_HPP

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

#endif // PZH_SXMM_REPORT_HPP