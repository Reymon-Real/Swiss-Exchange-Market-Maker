// *******************************
// *** Autor: Reymon Dev       ***
// *** Datum: 08. Juli. 2026   ***
// *** Aktua: 08. Juli. 2026   ***
// *** Lizenz: AGPL-3-or-later ***
// *******************************

// *****************
// *** Libraries ***
// *****************

#include <sxmm.hpp>

// ****************
// *** Function ***
// ****************

void SXMMClient::nextValidId(OrderId orderId) {

	m_orderId = orderId;
	m_state = ST_ORDEROPERATIONS;

}