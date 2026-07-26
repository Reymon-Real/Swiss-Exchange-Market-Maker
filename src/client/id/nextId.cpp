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

OrderId SXMMClient::nextId() {

	m_orderId = m_orderId + 1;

	return m_orderId;
}