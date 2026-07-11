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

PZHClient::PZHClient():

	  m_osSignal(2000) // 2-seconds timeout
	, m_pClient(new EClientSocket(this, &m_osSignal))
	, m_state(ST_CONNECT)
	, m_sleepDeadline(0)
	, m_orderId(0)
	, m_extraAuth(false)

{}