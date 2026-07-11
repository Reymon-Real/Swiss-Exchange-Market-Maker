// *******************************
// *** Autor: PZH Gesellschaft ***
// *** Datum: 25. Mai. 2026    ***
// *** Aktua: 25. Mai. 2026    ***
// *** Lizenz: AGPL-3-or-later ***
// *******************************


#ifndef PZH_SXMM_COMMON_HPP
#define PZH_SXMM_COMMON_HPP

// ***************
// *** Aliases ***
// ***************

// ******************
// *** Enumerates ***
// ******************

typedef enum PZHState {

	ST_CONNECT,
	ST_TICKDATAOPERATION,
	ST_TICKDATAOPERATION_ACK,
	ST_TICKOPTIONCOMPUTATIONOPERATION,
	ST_TICKOPTIONCOMPUTATIONOPERATION_ACK,
	ST_DELAYEDTICKDATAOPERATION,
	ST_DELAYEDTICKDATAOPERATION_ACK,
	ST_MARKETDEPTHOPERATION,
	ST_MARKETDEPTHOPERATION_ACK,
	ST_REALTIMEBARS,
	ST_REALTIMEBARS_ACK,
	ST_MARKETDATATYPE,
	ST_MARKETDATATYPE_ACK,
	ST_HISTORICALDATAREQUESTS,
	ST_HISTORICALDATAREQUESTS_ACK,
	ST_OPTIONSOPERATIONS,
	ST_OPTIONSOPERATIONS_ACK,
	ST_CONTRACTOPERATION,
	ST_CONTRACTOPERATION_ACK,
	ST_MARKETSCANNERS,
	ST_MARKETSCANNERS_ACK,
	ST_FUNDAMENTALS,
	ST_FUNDAMENTALS_ACK,
	ST_BULLETINS,
	ST_BULLETINS_ACK,
	ST_ACCOUNTOPERATIONS,
	ST_ACCOUNTOPERATIONS_ACK,
	ST_ORDEROPERATIONS,
	ST_ORDEROPERATIONS_ACK,
	ST_OCASAMPLES,
	ST_OCASAMPLES_ACK,
	ST_CONDITIONSAMPLES,
	ST_CONDITIONSAMPLES_ACK,
	ST_BRACKETSAMPLES,
	ST_BRACKETSAMPLES_ACK,
	ST_HEDGESAMPLES,
	ST_HEDGESAMPLES_ACK,
	ST_TESTALGOSAMPLES,
	ST_TESTALGOSAMPLES_ACK,
	ST_FAORDERSAMPLES,
	ST_FAORDERSAMPLES_ACK,
	ST_FAOPERATIONS,
	ST_FAOPERATIONS_ACK,
	ST_DISPLAYGROUPS,
	ST_DISPLAYGROUPS_ACK,
	ST_MISCELANEOUS,
	ST_MISCELANEOUS_ACK,
	ST_CANCELORDER,
	ST_CANCELORDER_ACK,
	ST_FAMILYCODES,
	ST_FAMILYCODES_ACK,
	ST_SYMBOLSAMPLES,
	ST_SYMBOLSAMPLES_ACK,
	ST_REQMKTDEPTHEXCHANGES,
	ST_REQMKTDEPTHEXCHANGES_ACK,
	ST_REQNEWSTICKS,
	ST_REQNEWSTICKS_ACK,
	ST_REQSMARTCOMPONENTS,
	ST_REQSMARTCOMPONENTS_ACK,
	ST_NEWSPROVIDERS,
	ST_NEWSPROVIDERS_ACK,
	ST_REQNEWSARTICLE,
	ST_REQNEWSARTICLE_ACK,
	ST_REQHISTORICALNEWS,
	ST_REQHISTORICALNEWS_ACK,
	ST_REQHEADTIMESTAMP,
	ST_REQHEADTIMESTAMP_ACK,
	ST_REQHISTOGRAMDATA,
	ST_REQHISTOGRAMDATA_ACK,
	ST_REROUTECFD,
	ST_REROUTECFD_ACK,
	ST_MARKETRULE,
	ST_MARKETRULE_ACK,
	ST_PNL,
	ST_PNL_ACK,
	ST_PNLSINGLE,
	ST_PNLSINGLE_ACK,
	ST_CONTFUT,
	ST_CONTFUT_ACK,
	ST_PING,
	ST_PING_ACK,
	ST_REQHISTORICALTICKS,
	ST_REQHISTORICALTICKS_ACK,
	ST_REQTICKBYTICKDATA,
	ST_REQTICKBYTICKDATA_ACK,
	ST_WHATIFSAMPLES,
	ST_WHATIFSAMPLES_ACK,
	ST_IDLE,
	ST_IBKRATSSAMPLE,
	ST_IBKRATSSAMPLE_ACK,
	ST_WSH,
	ST_WSH_ACK

} PZHState_t;

// **************
// *** Unions ***
// **************

// ******************
// *** Structures ***
// ******************

class PZHJson {
private:

	std::string nameFile;

	yyjson_doc* doc;
	yyjson_val* root;
	yyjson_read_flag flg;
	yyjson_read_err err;

public:

	PZHJson():
		doc(nullptr),
		root(nullptr),
		flg(YYJSON_READ_ALLOW_COMMENTS | YYJSON_READ_ALLOW_TRAILING_COMMAS)
	{}
	
	~PZHJson() {
		yyjson_doc_free(doc);
	}

	void set_file(std::string nameFile) {
		this -> nameFile = nameFile;
	}

	std::string get_file() const {
		return nameFile;
	}

	void set_document() {
		yyjson_read_file(
			this -> nameFile,
			this -> flg,
			NULL,
			&this -> err
		);
	}

};

struct PZHSetting {

	// Json config
	yyjson_doc* document;
	yyjson_val* root;
		
	yyjson_read_flag flg;
	yyjson_read_err  err;

	// Connection Settings
	char* host;
	int   port;
	int   userId;
	bool  extraAuth;

	// Json Members
	yyjson_val* symbol;    // Symbol to operate
	yyjson_val* sectype;   // Sector Type
	yyjson_val* exchange;  // The exchange on which the security is listed
	yyjson_val* currency;  // Currency
	yyjson_val* bid;       // Number of orders on long
	yyjson_val* ask;       // Number of orders on short
	yyjson_val* size;      // Size of the orders
	yyjson_val* minimum;   // Minimun inventory
	yyjson_val* inventory; // Max inventory

};


struct PZHContract {

	char* symbol;   // Symbol to operate 
	char* sectype;  // Sector Type
	char* exchange; //  The exchange on which the security is listed 
	char* currency; // Currency

};

using PZHSetting_t  = PZHSetting;
using PZHContract_t = PZHContract;

// ************************
// *** Global Variables ***
// ************************

// *****************
// *** Functions ***
// *****************

#endif // PZH_SXMM_COMMON_HPP