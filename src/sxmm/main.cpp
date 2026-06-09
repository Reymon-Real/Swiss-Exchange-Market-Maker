// **********************************
// *** Author: Enosis Technology  ***
// *** Date:   April 4 from 2026  ***
// *** Update: April 15 from 2026 ***
// *** License: AGPL-3-or-later   ***
// **********************************

// ******************************
// *** Standard C++ Libraries ***
// ******************************

#include <cstdlib>

// ***********************************
// *** Enosis Technology Libraries ***
// ***********************************

#include <pzh/sxmm.hpp>

// *******************
// *** Entry Point ***
// *******************

int main() {

	// *****************
	// *** Variables ***
	// *****************

	PZHClient client;

	PZHSetting setting = {
		.document = NULL,
		.root     = NULL,

		.flg = YYJSON_READ_ALLOW_COMMENTS | YYJSON_READ_ALLOW_TRAILING_COMMAS,
		.err = { 0, "Hola", 0 },

		.host      = NULL,
		.port      = 0,
		.userId    = 0,
		.extraAuth = false,

		.symbol   = NULL,
		.sectype  = NULL,
		.exchange = NULL,
		.currency = NULL,

		.bid  = NULL,
		.ask  = NULL,
		.size = NULL,

		.minimum = NULL,
		.inventory = NULL
	};

	// ******************
	// *** Initialize ***
	// ******************

	pzh_get_connection_info(&setting);

	// **************************
	// *** Program Main Logic ***
	// **************************

	client.connect(setting.host, setting.port, setting.userId);

	// ************
	// *** Free ***
	// ************
	
	local_free:

	// *******************
	// *** End Program ***
	// *******************

	end:

		return EXIT_SUCCESS;
}