// **********************************
// *** Author: Enosis Technology  ***
// *** Date:   April 04 from 2026 ***
// *** Update: April 16 from 2026 ***
// *** License: AGPL-3-or-later   ***
// **********************************

/*

// ***********************************
// *** Enosis Technology Libraries ***
// ***********************************

#include <sxmm.hpp>

// ***********************
// *** Class Functions ***
// ***********************

SXMMClient::SXMMClient():

	  m_osSignal(2000)//2-seconds timeout
	, m_pClient(new EClientSocket(this, &m_osSignal))
	, m_state(ST_CONNECT)
	, m_sleepDeadline(0)
	, m_orderId(0)
	, m_extraAuth(false)

{}

SXMMClient::~SXMMClient() {

}

// *************************
// *** OrderId Functions ***
// *************************

void SXMMClient::nextValidId(OrderId orderId) {

	m_orderId = orderId;
	m_state = ST_ORDEROPERATIONS;

}

OrderId SXMMClient::nextId() {

	m_orderId = m_orderId + 1;

	return m_orderId;
}

// ****************************
// *** Connection Functions ***
// ****************************

bool SXMMClient::connect(const char* name, int one, int two) {

	return true;
}

void SXMMClient::disconnect() const {

}

bool SXMMClient::isConnected() const {

	return true;
}

void SXMMClient::connectionClosed() {

}

// *************
// *** Error ***
// *************

void SXMMClient::error(int id, time_t errorTime, int errorCode, const std::string& errorString, const std::string& advancedOrderRejectJson) {
	
}

// **********************
// *** Time Functions ***
// **********************

void SXMMClient::currentTime(long time) {

}

void SXMMClient::currentTimeInMillis(time_t timeInMillis) {

}

// ***************
// *** Tickers ***
// ***************

void SXMMClient::tickPrice(TickerId tickerId, TickType field, double price, const TickAttrib& attribs) {

}

void SXMMClient::tickSize(TickerId tickerId, TickType field, Decimal size) {

}

void SXMMClient::tickString(TickerId tickerId, TickType tickType, const std::string& value) {

}

void SXMMClient::tickGeneric(TickerId tickerId, TickType tickType, double value) {

}

void SXMMClient::tickEFP(TickerId tickerId, TickType tickType, double basisPoints, const std::string& formattedBasisPoints, double totalDividends, int holdDays, const std::string& futureLastTradeDate, double dividendImpact, double dividendsToLastTradeDate) {

}

void SXMMClient::tickOptionComputationOperation() {

}

void SXMMClient::tickSnapshotEnd(int reqId) {

}

// *************
// *** Delta ***
// *************

void SXMMClient::deltaNeutralValidation(int reqId, const DeltaNeutralContract& deltaNeutralContract) {

}

// ****************
// *** Accounts ***
// ****************

void SXMMClient::managedAccounts(const std::string& accountsList) {

}

void SXMMClient::accountSummary(int reqId, const std::string& account, const std::string& tag, const std::string& value, const std::string& currency) {

}

void SXMMClient::accountSummaryEnd(int reqId) {

}

void SXMMClient::updateAccountValue(const std::string& key, const std::string& val, const std::string& currency, const std::string& accountName) {

}

// ******************
// *** Portafolio ***
// ******************

// *************
// *** Bonds ***
// *************

void SXMMClient::bondContractDetails(int reqId, const ContractDetails& contractDetails) {

}

// **************************
// *** Protobuf Functions ***
// **************************

// protobuf
#if !defined(USE_WIN_DLL)
void SXMMClient::execDetailsProtoBuf(const protobuf::ExecutionDetails& executionDetailsProto) {}
void SXMMClient::execDetailsEndProtoBuf(const protobuf::ExecutionDetailsEnd& executionDetailsEndProto) {}
void SXMMClient::orderStatusProtoBuf(const protobuf::OrderStatus& orderStatusProto) {}
void SXMMClient::openOrderProtoBuf(const protobuf::OpenOrder& openOrderProto) {}
void SXMMClient::openOrdersEndProtoBuf(const protobuf::OpenOrdersEnd& openOrderEndProto) {}
void SXMMClient::errorProtoBuf(const protobuf::ErrorMessage& errorProto) {}
void SXMMClient::completedOrderProtoBuf(const protobuf::CompletedOrder& completedOrderProto) {}
void SXMMClient::completedOrdersEndProtoBuf(const protobuf::CompletedOrdersEnd& completedOrdersEndProto) {}
void SXMMClient::orderBoundProtoBuf(const protobuf::OrderBound& orderBoundProto) {}
void SXMMClient::contractDataProtoBuf(const protobuf::ContractData& contractDataProto) {}
void SXMMClient::bondContractDataProtoBuf(const protobuf::ContractData& contractDataProto) {}
void SXMMClient::contractDataEndProtoBuf(const protobuf::ContractDataEnd& contractDataEndProto) {}
void SXMMClient::tickPriceProtoBuf(const protobuf::TickPrice& tickPriceProto) {}
void SXMMClient::tickSizeProtoBuf(const protobuf::TickSize& tickSizeProto) {}
void SXMMClient::tickOptionComputationProtoBuf(const protobuf::TickOptionComputation& tickOptionComputationProto) {}
void SXMMClient::tickGenericProtoBuf(const protobuf::TickGeneric& tickGenericProto) {}
void SXMMClient::tickStringProtoBuf(const protobuf::TickString& tickStringProto) {}
void SXMMClient::tickSnapshotEndProtoBuf(const protobuf::TickSnapshotEnd& tickSnapshotEndProto) {}
void SXMMClient::updateMarketDepthProtoBuf(const protobuf::MarketDepth& marketDepthProto) {}
void SXMMClient::updateMarketDepthL2ProtoBuf(const protobuf::MarketDepthL2& marketDepthL2Proto) {}
void SXMMClient::marketDataTypeProtoBuf(const protobuf::MarketDataType& marketDataTypeProto) {}
void SXMMClient::tickReqParamsProtoBuf(const protobuf::TickReqParams& tickReqParamnsProto) {}
void SXMMClient::updateAccountValueProtoBuf(const protobuf::AccountValue& accountValueProto) {}
void SXMMClient::updatePortfolioProtoBuf(const protobuf::PortfolioValue& portfolioValueProto) {}
void SXMMClient::updateAccountTimeProtoBuf(const protobuf::AccountUpdateTime& accountUpdateTimeProto) {}
void SXMMClient::accountDataEndProtoBuf(const protobuf::AccountDataEnd& accountDataEndProto) {}
void SXMMClient::managedAccountsProtoBuf(const protobuf::ManagedAccounts& managedAccountsProto) {}
void SXMMClient::positionProtoBuf(const protobuf::Position& positionProto) {}
void SXMMClient::positionEndProtoBuf(const protobuf::PositionEnd& positionEndProto) {}
void SXMMClient::accountSummaryProtoBuf(const protobuf::AccountSummary& accountSummaryProto) {}
void SXMMClient::accountSummaryEndProtoBuf(const protobuf::AccountSummaryEnd& accountSummaryEndProto) {}
void SXMMClient::positionMultiProtoBuf(const protobuf::PositionMulti& positionMultiProto) {}
void SXMMClient::positionMultiEndProtoBuf(const protobuf::PositionMultiEnd& positionMultiEndProto) {}
void SXMMClient::accountUpdateMultiProtoBuf(const protobuf::AccountUpdateMulti& accountUpdateMultiProto) {}
void SXMMClient::accountUpdateMultiEndProtoBuf(const protobuf::AccountUpdateMultiEnd& accountUpdateMultiEndProto) {}
void SXMMClient::historicalDataProtoBuf(const protobuf::HistoricalData& historicalDataProto) {}
void SXMMClient::historicalDataUpdateProtoBuf(const protobuf::HistoricalDataUpdate& historicalDataUpdateProto) {}
void SXMMClient::historicalDataEndProtoBuf(const protobuf::HistoricalDataEnd& historicalDataEndProto) {}
void SXMMClient::realTimeBarTickProtoBuf(const protobuf::RealTimeBarTick& realTimeBarTickProto) {}
void SXMMClient::headTimestampProtoBuf(const protobuf::HeadTimestamp& headTimestampProto) {}
void SXMMClient::histogramDataProtoBuf(const protobuf::HistogramData& histogramDataProto) {}
void SXMMClient::historicalTicksProtoBuf(const protobuf::HistoricalTicks& historicalTicksProto) {}
void SXMMClient::historicalTicksBidAskProtoBuf(const protobuf::HistoricalTicksBidAsk& historicalTicksBidAskProto) {}
void SXMMClient::historicalTicksLastProtoBuf(const protobuf::HistoricalTicksLast& historicalTicksLastProto) {}
void SXMMClient::tickByTickDataProtoBuf(const protobuf::TickByTickData& tickByTickDataProto) {}
void SXMMClient::updateNewsBulletinProtoBuf(const protobuf::NewsBulletin& newsBulletinProto) {}
void SXMMClient::newsArticleProtoBuf(const protobuf::NewsArticle& newsArticleProto) {}
void SXMMClient::newsProvidersProtoBuf(const protobuf::NewsProviders& newsProvidersProto) {}
void SXMMClient::historicalNewsProtoBuf(const protobuf::HistoricalNews& historicalNewsProto) {}
void SXMMClient::historicalNewsEndProtoBuf(const protobuf::HistoricalNewsEnd& historicalNewsEndProto) {}
void SXMMClient::wshMetaDataProtoBuf(const protobuf::WshMetaData& wshMetaDataProto) {}
void SXMMClient::wshEventDataProtoBuf(const protobuf::WshEventData& wshEventDataProto) {}
void SXMMClient::tickNewsProtoBuf(const protobuf::TickNews& tickNewsProto) {}
void SXMMClient::scannerParametersProtoBuf(const protobuf::ScannerParameters& scannerParametersProto) {}
void SXMMClient::scannerDataProtoBuf(const protobuf::ScannerData& scannerDataProto) {}
void SXMMClient::fundamentalsDataProtoBuf(const protobuf::FundamentalsData& fundamentalsDataProto) {}
void SXMMClient::pnlProtoBuf(const protobuf::PnL& pnlProto) {}
void SXMMClient::pnlSingleProtoBuf(const protobuf::PnLSingle& pnlSingleProto) {}
void SXMMClient::receiveFAProtoBuf(const protobuf::ReceiveFA& receiveFAProto) {}
void SXMMClient::replaceFAEndProtoBuf(const protobuf::ReplaceFAEnd& replaceFAEndProto) {}
void SXMMClient::commissionAndFeesReportProtoBuf(const protobuf::CommissionAndFeesReport& commissionAndFeesReportProto) {}
void SXMMClient::historicalScheduleProtoBuf(const protobuf::HistoricalSchedule& historicalScheduleProto) {}
void SXMMClient::rerouteMarketDataRequestProtoBuf(const protobuf::RerouteMarketDataRequest& rerouteMarketDataRequestProto) {}
void SXMMClient::rerouteMarketDepthRequestProtoBuf(const protobuf::RerouteMarketDepthRequest& rerouteMarketDepthRequestProto) {}
void SXMMClient::secDefOptParameterProtoBuf(const protobuf::SecDefOptParameter& secDefOptParameterProto) {}
void SXMMClient::secDefOptParameterEndProtoBuf(const protobuf::SecDefOptParameterEnd& secDefOptParameterEndProto) {}
void SXMMClient::softDollarTiersProtoBuf(const protobuf::SoftDollarTiers& softDollarTiersProto) {}
void SXMMClient::familyCodesProtoBuf(const protobuf::FamilyCodes& familyCodesProto) {}
void SXMMClient::symbolSamplesProtoBuf(const protobuf::SymbolSamples& symbolSamplesProto) {}
void SXMMClient::smartComponentsProtoBuf(const protobuf::SmartComponents& smartComponentsProto) {}
void SXMMClient::marketRuleProtoBuf(const protobuf::MarketRule& marketRuleProto) {}
void SXMMClient::userInfoProtoBuf(const protobuf::UserInfo& userInfoProto) {}
void SXMMClient::nextValidIdProtoBuf(const protobuf::NextValidId& nextValidIdProto) {}
void SXMMClient::currentTimeProtoBuf(const protobuf::CurrentTime& currentTimeProto) {}
void SXMMClient::currentTimeInMillisProtoBuf(const protobuf::CurrentTimeInMillis& currentTimeInMillisProto) {}
void SXMMClient::verifyMessageApiProtoBuf(const protobuf::VerifyMessageApi& verifyMessageApiProto) {}
void SXMMClient::verifyCompletedProtoBuf(const protobuf::VerifyCompleted& verifyCompletedProto) {}
void SXMMClient::displayGroupListProtoBuf(const protobuf::DisplayGroupList& displayGroupListProto) {}
void SXMMClient::displayGroupUpdatedProtoBuf(const protobuf::DisplayGroupUpdated& displayGroupUpdatedProto) {}
void SXMMClient::marketDepthExchangesProtoBuf(const protobuf::MarketDepthExchanges& marketDepthExchangesProto) {}
#endif

*/