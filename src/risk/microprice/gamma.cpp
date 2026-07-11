// ********************************
// *** Author: PZH Gesellschaft ***
// *** Date:   10. Jun. 2026    ***
// *** Update: 10. Jun. 2026    ***
// *** License: AGPL-3-or-later ***
// ********************************

#include <math.h>
#include <pzh/sxmm.hpp>

double PZHRiskAversionLimit(PZHRiskAversion_t* PZHRiskAversion) {

	if (PZHRiskAversion -> d_imbalance < 0)
		PZHRiskAversion -> d_imbalance = PZHRiskAversion -> d_imbalance * -1;

	return	PZHRiskAversion -> d_gamma_max
			* ((PZHRiskAversion -> d_imbalance *  PZHRiskAversion -> d_sigma_current *  PZHRiskAversion -> d_inventory_current)
			/ (PZHRiskAversion -> d_inventory_max * PZHRiskAversion -> d_sigma_max));
}