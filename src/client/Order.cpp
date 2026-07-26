// **********************************
// *** Author: Enosis Technology  ***
// *** Date:   April 04 from 2026 ***
// *** Update: April 16 from 2026 ***
// *** License: AGPL-3-or-later   ***
// **********************************

/*

// ***********************************
// *** Enosis Technology Libraries ***
// ***********************************

#include <sxmm.hpp>

// ************************
// *** Global Variables ***
// ************************

// ***************************
// *** Send Order Function ***
// ***************************

void PZHSubmitBuyOrder(PZHOrder_t* ps_order, SXMMClientHandle handle) {

	// *****************
	// *** Variables ***
	// *****************

	Order order;

	double lmtPrice = ps_order -> price.buy;
	
	SXMMClient* client = (SXMMClient*) handle;

	Decimal quantity = DecimalFunctions::doubleToDecimal(ps_order -> risk.size);

	// **********************
	// *** Order Settings ***
	// **********************

	order.action        = "BUY";
	order.orderType     = "LMT";
	order.totalQuantity = quantity;
	order.lmtPrice      = lmtPrice;
	order.tif           = "DAY";

	// ********************
	// *** Submit Order ***
	// ********************

}

*/