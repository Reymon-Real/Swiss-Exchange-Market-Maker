// *******************************
// *** Autor: PZH Gesellschaft ***
// *** Datum: 23. Juni. 2026   ***
// *** Aktua: 23. JUni. 2026   ***
// *** Lizenz: AGPL-3-or-later ***
// *******************************

// *****************
// *** Libraries ***
// *****************

#include <pzh/sxmm.hpp>

// ***************************
// *** Send Order Function ***
// ***************************

void PZHSubmitBuyOrder(PZHOrder* ps_order, PZHClient handle) {

	// *****************
	// *** Variables ***
	// *****************

	Order order;

	double lmtPrice = ps_order -> price.buy;

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