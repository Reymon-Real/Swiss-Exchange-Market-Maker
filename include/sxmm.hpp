// *******************************
// *** Autor: Reymon Dev       ***
// *** Datum: 23. Juni. 2026   ***
// *** Aktua: 23. Juni. 2026   ***
// *** Lizenz: AGPL-3-or-later ***
// *******************************

#ifndef SXMM_HPP
#define SXMM_HPP

#include <cstdio>
#include <cstdlib>
#include <cstddef>
#include <cstdint>
#include <string>
#include <ctime>
#include <memory>
#include <yyjson.h>

#include <IBKR/TwsSocketClient/EWrapper.h>
#include <IBKR/TwsSocketClient/EClient.h>
#include <IBKR/TwsSocketClient/EDecoder.h>
#include <IBKR/TwsSocketClient/EReader.h>
#include <IBKR/TwsSocketClient/EClientSocket.h>
#include <IBKR/TwsSocketClient/Contract.h>
#include <IBKR/TwsSocketClient/Order.h>
#include <IBKR/TwsSocketClient/CommonDefs.h>

#include "sxmm.h"
#include "sxmm/Exception.hpp"
#include "sxmm/Client.hpp"

// ************************
// *** Global Variables ***
// ************************

extern char instruments[SXMM_MAX_INSTRUMENTS][SXMM_INSTRUMENT_SIZE];

// *****************
// *** Functions ***
// *****************

extern void* ibkr_connection_00(void*);
extern void* ibkr_connection_01(void*);
extern void* ibkr_connection_02(void*);
extern void* ibkr_connection_03(void*);
extern void* ibkr_connection_04(void*);
extern void* ibkr_connection_05(void*);
extern void* ibkr_connection_06(void*);
extern void* ibkr_connection_07(void*);
extern void* ibkr_connection_08(void*);
extern void* ibkr_connection_09(void*);
extern void* ibkr_connection_0A(void*);
extern void* ibkr_connection_0B(void*);
extern void* ibkr_connection_0C(void*);
extern void* ibkr_connection_0D(void*);
extern void* ibkr_connection_0E(void*);
extern void* ibkr_connection_0F(void*);
extern void* ibkr_connection_10(void*);
extern void* ibkr_connection_11(void*);
extern void* ibkr_connection_12(void*);
extern void* ibkr_connection_13(void*);
extern void* ibkr_connection_14(void*);
extern void* ibkr_connection_15(void*);
extern void* ibkr_connection_16(void*);
extern void* ibkr_connection_17(void*);
extern void* ibkr_connection_18(void*);
extern void* ibkr_connection_19(void*);
extern void* ibkr_connection_1A(void*);
extern void* ibkr_connection_1B(void*);
extern void* ibkr_connection_1C(void*);
extern void* ibkr_connection_1D(void*);
extern void* ibkr_connection_1E(void*);
extern void* ibkr_connection_1F(void*);

#endif // SXMM_HPP