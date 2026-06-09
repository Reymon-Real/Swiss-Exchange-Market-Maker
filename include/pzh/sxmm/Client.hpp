// **********************************
// *** Author: Enosis Technology  ***
// *** Date:   April 15 from 2026 ***
// *** Update: April 15 from 2026 ***
// *** License: AGPL-3-or-later   ***
// **********************************

#ifndef PZH_SXMM_CLIENT_HPP
#define PZH_SXMM_CLIENT_HPP

// **************************
// *** Standard Libraries ***
// **************************

// *************************************
// *** Interactive Brokers Libraries ***
// *************************************

// ***************
// *** Aliases ***
// ***************

// ******************
// *** Enumerates ***
// ******************

// **************
// *** Unions ***
// **************

// **************
// *** Clases ***
// **************

class PZHClient : EWrapper {
private:

	// ***************
	// *** Members ***
	// ***************

	EReaderOSSignal m_osSignal;
	EClientSocket*  m_pClient;

	PZHState_t m_state;
	time_t     m_sleepDeadline;
	OrderId    m_orderId;
	std::unique_ptr<EReader> m_pReader;
	bool       m_extraAuth;
	std::string m_bboExchange;

public:

	// ***********************
	// *** Class Functions ***
	// ***********************

	PZHClient();

	~PZHClient();

	// ****************************
	// *** Connection Functions ***
	// ****************************

public:

	bool connect(const char*, int, int);
	void disconnect() const;
	bool isConnected() const;

	// ************************
	// *** Unique Functions ***
	// ************************

public:

	OrderId nextId();

	// ****************************
	// *** Virtual Declarations ***
	// ****************************

public:

	#include <IBKR/TwsSocketClient/EWrapper_prototypes.h>

};

#endif // PZH_SXMM_CLIENT_HPP