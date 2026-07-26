// **********************************
// *** Author: Enosis Technology  ***
// *** Date:   April 20 from 2026 ***
// *** Update: April 20 from 2026 ***
// *** License: AGPL-3-or-later   ***
// **********************************

#ifndef SXMM_RISK_H
#define SXMM_RISK_H

// ***************
// *** Aliases ***
// ***************

// ******************
// *** Enumerates ***
// ******************

// **************
// *** Unions ***
// **************

// ****************************
// *** Structure and Clases ***
// ****************************

typedef struct PZH_RISK_AVERSION_LIMIT {

	double d_gamma_max;
	double d_sigma_max;
	double d_inventory_max;

	double d_inventory_current;
	double d_sigma_current;
	
	double d_imbalance;

} PZHRiskAversion_t;

// ************************
// *** Global Variables ***
// ************************

// *****************
// *** Functions ***
// *****************

#endif // SXMM_RISK_H