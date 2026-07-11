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
	m_state = ST_ORDEROPERATIONS;

}

OrderId PZHClient::nextId() {

	m_orderId = m_orderId + 1;

	return m_orderId;
}

// ****************************
// *** Connection Functions ***
// ****************************

bool PZHClient::connect(const char* name, int one, int two) {

	return true;
}

void PZHClient::disconnect() const {

}

bool PZHClient::isConnected() const {

	return true;
}

void PZHClient::connectionClosed() {

}

// *************
// *** Error ***
// *************

void PZHClient::error(int id, time_t errorTime, int errorCode, const std::string& errorString, const std::string& advancedOrderRejectJson) {
	
}

// **********************
// *** Time Functions ***
// **********************

void PZHClient::currentTime(long time) {

}

void PZHClient::currentTimeInMillis(time_t timeInMillis) {

}

// ***************
// *** Tickers ***
// ***************

void PZHClient::tickPrice(TickerId tickerId, TickType field, double price, const TickAttrib& attribs) {

}

void PZHClient::tickSize(TickerId tickerId, TickType field, Decimal size) {

}

void PZHClient::tickString(TickerId tickerId, TickType tickType, const std::string& value) {

}

void PZHClient::tickGeneric(TickerId tickerId, TickType tickType, double value) {

}

void PZHClient::tickEFP(TickerId tickerId, TickType tickType, double basisPoints, const std::string& formattedBasisPoints, double totalDividends, int holdDays, const std::string& futureLastTradeDate, double dividendImpact, double dividendsToLastTradeDate) {

}

void PZHClient::tickOptionComputationOperation() {

}

void PZHClient::tickSnapshotEnd(int reqId) {

}

// *************
// *** Delta ***
// *************

void PZHClient::deltaNeutralValidation(int reqId, const DeltaNeutralContract& deltaNeutralContract) {

}

// ****************
// *** Accounts ***
// ****************

void PZHClient::managedAccounts(const std::string& accountsList) {

}

void PZHClient::accountSummary(int reqId, const std::string& account, const std::string& tag, const std::string& value, const std::string& currency) {

}

void PZHClient::accountSummaryEnd(int reqId) {

}

void PZHClient::updateAccountValue(const std::string& key, const std::string& val, const std::string& currency, const std::string& accountName) {

}

// ******************
// *** Portafolio ***
// ******************

// *************
// *** Bonds ***
// *************

void PZHClient::bondContractDetails(int reqId, const ContractDetails& contractDetails) {

}

// **************************
// *** Protobuf Functions ***
// **************************

// protobuf
#if !defined(USE_WIN_DLL)
void PZHClient::execDetailsProtoBuf(const protobuf::ExecutionDetails& executionDetailsProto) {}
void PZHClient::execDetailsEndProtoBuf(const protobuf::ExecutionDetailsEnd& executionDetailsEndProto) {}
void PZHClient::orderStatusProtoBuf(const protobuf::OrderStatus& orderStatusProto) {}
void PZHClient::openOrderProtoBuf(const protobuf::OpenOrder& openOrderProto) {}
void PZHClient::openOrdersEndProtoBuf(const protobuf::OpenOrdersEnd& openOrderEndProto) {}
void PZHClient::errorProtoBuf(const protobuf::ErrorMessage& errorProto) {}
void PZHClient::completedOrderProtoBuf(const protobuf::CompletedOrder& completedOrderProto) {}
void PZHClient::completedOrdersEndProtoBuf(const protobuf::CompletedOrdersEnd& completedOrdersEndProto) {}
void PZHClient::orderBoundProtoBuf(const protobuf::OrderBound& orderBoundProto) {}
void PZHClient::contractDataProtoBuf(const protobuf::ContractData& contractDataProto) {}
void PZHClient::bondContractDataProtoBuf(const protobuf::ContractData& contractDataProto) {}
void PZHClient::contractDataEndProtoBuf(const protobuf::ContractDataEnd& contractDataEndProto) {}
void PZHClient::tickPriceProtoBuf(const protobuf::TickPrice& tickPriceProto) {}
void PZHClient::tickSizeProtoBuf(const protobuf::TickSize& tickSizeProto) {}
void PZHClient::tickOptionComputationProtoBuf(const protobuf::TickOptionComputation& tickOptionComputationProto) {}
void PZHClient::tickGenericProtoBuf(const protobuf::TickGeneric& tickGenericProto) {}
void PZHClient::tickStringProtoBuf(const protobuf::TickString& tickStringProto) {}
void PZHClient::tickSnapshotEndProtoBuf(const protobuf::TickSnapshotEnd& tickSnapshotEndProto) {}
void PZHClient::updateMarketDepthProtoBuf(const protobuf::MarketDepth& marketDepthProto) {}
void PZHClient::updateMarketDepthL2ProtoBuf(const protobuf::MarketDepthL2& marketDepthL2Proto) {}
void PZHClient::marketDataTypeProtoBuf(const protobuf::MarketDataType& marketDataTypeProto) {}
void PZHClient::tickReqParamsProtoBuf(const protobuf::TickReqParams& tickReqParamnsProto) {}
void PZHClient::updateAccountValueProtoBuf(const protobuf::AccountValue& accountValueProto) {}
void PZHClient::updatePortfolioProtoBuf(const protobuf::PortfolioValue& portfolioValueProto) {}
void PZHClient::updateAccountTimeProtoBuf(const protobuf::AccountUpdateTime& accountUpdateTimeProto) {}
void PZHClient::accountDataEndProtoBuf(const protobuf::AccountDataEnd& accountDataEndProto) {}
void PZHClient::managedAccountsProtoBuf(const protobuf::ManagedAccounts& managedAccountsProto) {}
void PZHClient::positionProtoBuf(const protobuf::Position& positionProto) {}
void PZHClient::positionEndProtoBuf(const protobuf::PositionEnd& positionEndProto) {}
void PZHClient::accountSummaryProtoBuf(const protobuf::AccountSummary& accountSummaryProto) {}
void PZHClient::accountSummaryEndProtoBuf(const protobuf::AccountSummaryEnd& accountSummaryEndProto) {}
void PZHClient::positionMultiProtoBuf(const protobuf::PositionMulti& positionMultiProto) {}
void PZHClient::positionMultiEndProtoBuf(const protobuf::PositionMultiEnd& positionMultiEndProto) {}
void PZHClient::accountUpdateMultiProtoBuf(const protobuf::AccountUpdateMulti& accountUpdateMultiProto) {}
void PZHClient::accountUpdateMultiEndProtoBuf(const protobuf::AccountUpdateMultiEnd& accountUpdateMultiEndProto) {}
void PZHClient::historicalDataProtoBuf(const protobuf::HistoricalData& historicalDataProto) {}
void PZHClient::historicalDataUpdateProtoBuf(const protobuf::HistoricalDataUpdate& historicalDataUpdateProto) {}
void PZHClient::historicalDataEndProtoBuf(const protobuf::HistoricalDataEnd& historicalDataEndProto) {}
void PZHClient::realTimeBarTickProtoBuf(const protobuf::RealTimeBarTick& realTimeBarTickProto) {}
void PZHClient::headTimestampProtoBuf(const protobuf::HeadTimestamp& headTimestampProto) {}
void PZHClient::histogramDataProtoBuf(const protobuf::HistogramData& histogramDataProto) {}
void PZHClient::historicalTicksProtoBuf(const protobuf::HistoricalTicks& historicalTicksProto) {}
void PZHClient::historicalTicksBidAskProtoBuf(const protobuf::HistoricalTicksBidAsk& historicalTicksBidAskProto) {}
void PZHClient::historicalTicksLastProtoBuf(const protobuf::HistoricalTicksLast& historicalTicksLastProto) {}
void PZHClient::tickByTickDataProtoBuf(const protobuf::TickByTickData& tickByTickDataProto) {}
void PZHClient::updateNewsBulletinProtoBuf(const protobuf::NewsBulletin& newsBulletinProto) {}
void PZHClient::newsArticleProtoBuf(const protobuf::NewsArticle& newsArticleProto) {}
void PZHClient::newsProvidersProtoBuf(const protobuf::NewsProviders& newsProvidersProto) {}
void PZHClient::historicalNewsProtoBuf(const protobuf::HistoricalNews& historicalNewsProto) {}
void PZHClient::historicalNewsEndProtoBuf(const protobuf::HistoricalNewsEnd& historicalNewsEndProto) {}
void PZHClient::wshMetaDataProtoBuf(const protobuf::WshMetaData& wshMetaDataProto) {}
void PZHClient::wshEventDataProtoBuf(const protobuf::WshEventData& wshEventDataProto) {}
void PZHClient::tickNewsProtoBuf(const protobuf::TickNews& tickNewsProto) {}
void PZHClient::scannerParametersProtoBuf(const protobuf::ScannerParameters& scannerParametersProto) {}
void PZHClient::scannerDataProtoBuf(const protobuf::ScannerData& scannerDataProto) {}
void PZHClient::fundamentalsDataProtoBuf(const protobuf::FundamentalsData& fundamentalsDataProto) {}
void PZHClient::pnlProtoBuf(const protobuf::PnL& pnlProto) {}
void PZHClient::pnlSingleProtoBuf(const protobuf::PnLSingle& pnlSingleProto) {}
void PZHClient::receiveFAProtoBuf(const protobuf::ReceiveFA& receiveFAProto) {}
void PZHClient::replaceFAEndProtoBuf(const protobuf::ReplaceFAEnd& replaceFAEndProto) {}
void PZHClient::commissionAndFeesReportProtoBuf(const protobuf::CommissionAndFeesReport& commissionAndFeesReportProto) {}
void PZHClient::historicalScheduleProtoBuf(const protobuf::HistoricalSchedule& historicalScheduleProto) {}
void PZHClient::rerouteMarketDataRequestProtoBuf(const protobuf::RerouteMarketDataRequest& rerouteMarketDataRequestProto) {}
void PZHClient::rerouteMarketDepthRequestProtoBuf(const protobuf::RerouteMarketDepthRequest& rerouteMarketDepthRequestProto) {}
void PZHClient::secDefOptParameterProtoBuf(const protobuf::SecDefOptParameter& secDefOptParameterProto) {}
void PZHClient::secDefOptParameterEndProtoBuf(const protobuf::SecDefOptParameterEnd& secDefOptParameterEndProto) {}
void PZHClient::softDollarTiersProtoBuf(const protobuf::SoftDollarTiers& softDollarTiersProto) {}
void PZHClient::familyCodesProtoBuf(const protobuf::FamilyCodes& familyCodesProto) {}
void PZHClient::symbolSamplesProtoBuf(const protobuf::SymbolSamples& symbolSamplesProto) {}
void PZHClient::smartComponentsProtoBuf(const protobuf::SmartComponents& smartComponentsProto) {}
void PZHClient::marketRuleProtoBuf(const protobuf::MarketRule& marketRuleProto) {}
void PZHClient::userInfoProtoBuf(const protobuf::UserInfo& userInfoProto) {}
void PZHClient::nextValidIdProtoBuf(const protobuf::NextValidId& nextValidIdProto) {}
void PZHClient::currentTimeProtoBuf(const protobuf::CurrentTime& currentTimeProto) {}
void PZHClient::currentTimeInMillisProtoBuf(const protobuf::CurrentTimeInMillis& currentTimeInMillisProto) {}
void PZHClient::verifyMessageApiProtoBuf(const protobuf::VerifyMessageApi& verifyMessageApiProto) {}
void PZHClient::verifyCompletedProtoBuf(const protobuf::VerifyCompleted& verifyCompletedProto) {}
void PZHClient::displayGroupListProtoBuf(const protobuf::DisplayGroupList& displayGroupListProto) {}
void PZHClient::displayGroupUpdatedProtoBuf(const protobuf::DisplayGroupUpdated& displayGroupUpdatedProto) {}
void PZHClient::marketDepthExchangesProtoBuf(const protobuf::MarketDepthExchanges& marketDepthExchangesProto) {}
#endif