// *******************************
// *** Autor: Reymon Dev       ***
// *** Datum: 11. Juli. 2026   ***
// *** Aktua: 11. Juli. 2026   ***
// *** Lizenz: AGPL-3-or-later ***
// *******************************

// *****************
// *** Libraries ***
// *****************

#include <sxmm.hpp>

// ***************************
// *** Send Order Function ***
// ***************************

void SXMMClient::submitLimitStockBuyOrder(void) {

	// *****************
	// *** Variables ***
	// *****************

	Order order;

	Decimal quantity = DecimalFunctions::doubleToDecimal(m_setting.md_quantity);

	// **********************
	// *** Order Settings ***
	// **********************

	order.action        = "BUY";
	order.orderType     = "LMT";
	order.totalQuantity = quantity;
	order.lmtPrice      = m_avellanedaStoikov.Pb;
	order.tif           = "DAY";

	// ********************
	// *** Submit Order ***
	// ********************

}