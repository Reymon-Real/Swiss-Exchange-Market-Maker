// *******************************
// *** Autor: Reymon Dev       ***
// *** Datum: 25. Mai. 2026    ***
// *** Aktua: 11. Juli. 2026    ***
// *** Lizenz: AGPL-3-or-later ***
// *******************************

#ifndef SXMM_COMMON_H
#define SXMM_COMMON_H

// ***************
// *** Aliases ***
// ***************

#define SXMM_ZERO (0)
#define SXMM_INSTRUMENT_SIZE (255)
#define SXMM_MAX_INSTRUMENTS (32)

typedef void* SXMMClientHandle;

// ******************
// *** Enumerates ***
// ******************

typedef enum SXMMConnection {

	SXMM_CONNECTION_00 = 0x00,
	SXMM_CONNECTION_01 = 0x01,
	SXMM_CONNECTION_02 = 0x02,
	SXMM_CONNECTION_03 = 0x03,
	SXMM_CONNECTION_04 = 0x04,
	SXMM_CONNECTION_05 = 0x05,
	SXMM_CONNECTION_06 = 0x06,
	SXMM_CONNECTION_07 = 0x07,

	SXMM_CONNECTION_08 = 0x08,
	SXMM_CONNECTION_09 = 0x09,
	SXMM_CONNECTION_0A = 0x0A,
	SXMM_CONNECTION_0B = 0x0B,
	SXMM_CONNECTION_0C = 0x0C,
	SXMM_CONNECTION_0D = 0x0D,
	SXMM_CONNECTION_0E = 0x0E,
	SXMM_CONNECTION_0F = 0x0F,

	SXMM_CONNECTION_10 = 0x10,
	SXMM_CONNECTION_11 = 0x11,
	SXMM_CONNECTION_12 = 0x12,
	SXMM_CONNECTION_13 = 0x13,
	SXMM_CONNECTION_14 = 0x14,
	SXMM_CONNECTION_15 = 0x15,
	SXMM_CONNECTION_16 = 0x16,
	SXMM_CONNECTION_17 = 0x17,

	SXMM_CONNECTION_18 = 0x18,
	SXMM_CONNECTION_19 = 0x19,
	SXMM_CONNECTION_1A = 0x1A,
	SXMM_CONNECTION_1B = 0x1B,
	SXMM_CONNECTION_1C = 0x1C,
	SXMM_CONNECTION_1D = 0x1D,
	SXMM_CONNECTION_1E = 0x1E,
	SXMM_CONNECTION_1F = 0x1F

} SXMMConnection_t;

typedef enum SXMMState {

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

} SXMMState_t;

// **************
// *** Unions ***
// **************

// ******************
// *** Structures ***
// ******************

typedef struct SXMMJson {

	// File
	char* mpc_nameFile;

	// Json config
	yyjson_doc* mp_document;
	yyjson_val* mp_root;
		
	yyjson_read_flag m_flg;
	yyjson_read_err  m_err;

	// *****************************
	// *** Pointers to Functions ***
	// *****************************

	void (*update)(struct SXMMJson*);
	void (*free)(struct SXMMJson*);

} SXMMJson_t;

typedef struct SXMMSetting {

	// Connection Settings
	char* mpc_host;
	int   mi_port;
	int   mi_userId;
	bool  mb_extraAuth;

	// Json Members
	char* mpc_symbol;    // Symbol to operate
	char* mpc_secType;   // Sector Type
	char* mpc_exchange;  // The exchange on which the security is listed
	char* mpc_currency;  // Currency
	
	double md_bid;       // Number of orders on bid
	double md_ask;       // Number of orders on ask
	double md_quantity;  // Size of the orders
	double md_inventory; // Max inventory

	// *****************************
	// *** Pointers to Functions ***
	// *****************************

	void (*update)(struct SXMMSetting*, SXMMJson_t*);

} SXMMSetting_t;

// ************************
// *** Global Variables ***
// ************************

// *****************
// *** Functions ***
// *****************

extern void sxmm_init_json(SXMMJson_t*);
extern void sxmm_init_setting(SXMMSetting_t*, SXMMJson_t*);

#endif // SXMM_COMMON_H