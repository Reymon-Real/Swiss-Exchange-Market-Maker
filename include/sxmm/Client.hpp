// **********************************
// *** Author: Enosis Technology  ***
// *** Date:   April 15 from 2026 ***
// *** Update: April 15 from 2026 ***
// *** License: AGPL-3-or-later   ***
// **********************************

#ifndef SXMM_CLIENT_HPP
#define SXMM_CLIENT_HPP

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

class SXMMClient : EWrapper {
private:

	// ***************
	// *** Members ***
	// ***************

	EReaderOSSignal m_osSignal;
	EClientSocket*  m_pClient;

	SXMMState_t  m_state;
	time_t      m_sleepDeadline;
	OrderId     m_orderId;
	std::unique_ptr<EReader> m_pReader;
	bool        m_extraAuth;
	std::string m_bboExchange;

	SXMMSetting_t m_setting;
	AvellanedaStoikov m_avellanedaStoikov;

public:

	// ***********************
	// *** Class Functions ***
	// ***********************

	SXMMClient();

	~SXMMClient();

	// ***************************
	// *** Getters and Setters ***
	// ***************************

	inline const AvellanedaStoikov& get_avellanedaStoikov() const {
		return m_avellanedaStoikov;
	}

	// ****************************
	// *** Connection Functions ***
	// ****************************

	bool connect(const char*, int, int);
	void disconnect() const;
	bool isConnected() const;

	// ************************
	// *** Unique Functions ***
	// ************************

	OrderId nextId();

	// ****************************
	// *** Virtual Declarations ***
	// ****************************

	#include <IBKR/TwsSocketClient/EWrapper_prototypes.h>

	// ***********************
	// *** Order Functions ***
	// ***********************

	void submitLimitStockBuyOrder(void);

	// *************************
	// *** Private Functions ***
	// *************************

private:
	void accountOperations();

    void pnlOperation();
    void pnlSingleOperation();

	void tickDataOperation();
	void tickOptionComputationOperation();
	
	void delayedTickDataOperation();
	
	void marketDepthOperations();
	void realTimeBars();
	void marketDataType();
	
	void historicalDataRequests();
	void optionsOperations();
	void orderOperations();
	void ocaSamples();
	void conditionSamples();
	void bracketSample();
	void hedgeSample();
	void contractOperations();
	void marketScanners();
	void fundamentals();
	void bulletins();
	void testAlgoSamples();
	void financialAdvisorOrderSamples();
	void financialAdvisorOperations();
	void testDisplayGroups();
	void miscellaneous();
	void reqFamilyCodes();
	void reqMatchingSymbols();
	void reqMktDepthExchanges();
	void reqNewsTicks();
	void reqSmartComponents();
	void reqNewsProviders();
	void reqNewsArticle();
	void reqHistoricalNews();
	void reqHeadTimestamp();
	void reqHistogramData();
	
	void marketRuleOperations();
    
    void reqHistoricalTicks();
    void reqTickByTickData();
	
	void whatIfSamples();
	void ibkratsSample();
	
	void wshCalendarOperations();

	void reqCurrentTime();

};

#endif // SXMM_CLIENT_HPP