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

SXMMClient::SXMMClient():

	m_osSignal(2000), // 2-seconds timeout
	m_pClient(new EClientSocket(this, &m_osSignal)),
	m_state(ST_CONNECT),
	m_sleepDeadline(0),
	m_orderId(0),
	m_extraAuth(false),
	m_bboExchange(""),
	m_setting(),
	m_avellanedaStoikov()

{}