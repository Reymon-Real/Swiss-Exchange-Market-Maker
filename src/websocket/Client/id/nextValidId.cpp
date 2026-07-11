// *******************************
// *** Autor: PZH Gesellschaft ***
// *** Datum: 08. Juli. 2026   ***
// *** Aktua: 08. Juli. 2026   ***
// *** Lizenz: AGPL-3-or-later ***
// *******************************

// *****************
// *** Libraries ***
// *****************

#include <pzh/sxmm.hpp>

// ****************
// *** Function ***
// ****************

void PZHClient::nextValidId(OrderId orderId) {

	m_orderId = orderId;
	m_state = ST_ORDEROPERATIONS;

}