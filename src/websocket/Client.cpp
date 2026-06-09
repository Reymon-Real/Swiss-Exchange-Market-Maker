// **********************************
// *** Author: Enosis Technology  ***
// *** Date:   April 04 from 2026 ***
// *** Update: April 16 from 2026 ***
// *** License: AGPL-3-or-later   ***
// **********************************

// ***********************************
// *** Enosis Technology Libraries ***
// ***********************************

#include <pzh/sxmm.hpp>

// ***********************
// *** Class Functions ***
// ***********************

PZHClient::PZHClient():

	  m_osSignal(2000)//2-seconds timeout
	, m_pClient(new EClientSocket(this, &m_osSignal))
	, m_state(ST_CONNECT)
	, m_sleepDeadline(0)
	, m_orderId(0)
	, m_extraAuth(false)

{}

PZHClient::~PZHClient() {

}

// *************************
// *** OrderId Functions ***
// *************************

void PZHClient::nextValidId(OrderId orderId) {

	m_orderId = orderId;

}

OrderId PZHClient::nextId() {

	m_orderId = m_orderId + 1;

	return m_orderId;
}

// **********************
// *** Time Functions ***
// **********************