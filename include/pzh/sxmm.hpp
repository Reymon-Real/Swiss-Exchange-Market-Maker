// **********************************
// *** Author: Enosis Technology  ***
// *** Date:   April 15 from 2026 ***
// *** Update: April 15 from 2026 ***
// *** License: AGPL-3-or-later   ***
// **********************************

#ifndef PZH_SXMM_HPP
#define PZH_SXMM_HPP

// *****************
// *** Libraries ***
// *****************

#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <cstdint>
#include <cstring>
#include <ctime>
#include <yyjson.h>

#include <IBKR/TwsSocketClient/EWrapper.h>
#include <IBKR/TwsSocketClient/EReader.h>
#include <IBKR/TwsSocketClient/EClient.h>
#include <IBKR/TwsSocketClient/EClientSocket.h>
#include <IBKR/TwsSocketClient/CommonDefs.h>
#include <IBKR/TwsSocketClient/Decimal.h>
#include <IBKR/TwsSocketClient/Order.h>
#include <IBKR/TwsSocketClient/Contract.h>
#include <IBKR/TwsSocketClient/EClientException.h>
#include <IBKR/TwsSocketClient/OrderState.h>

#include "sxmm/common.h"
#include "sxmm/Order.h"
#include "sxmm/utils.h"
#include "sxmm/Report.h"
#include "sxmm/Risk.h"

#include "sxmm/Client.hpp"

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

// ************************
// *** Global Variables ***
// ************************

// *****************
// *** Functions ***
// *****************

extern void sxmm_init();
extern bool sxmm_loop();
extern void sxmm_free();

#endif // PZH_SXMM_HPP