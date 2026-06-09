// *******************************
// *** Autor: PZH Gesellschaft ***
// *** Datum: 25. Mai. 2026    ***
// *** Aktua: 25. Mai. 2026    ***
// *** Lizenz: AGPL-3-or-later ***
// *******************************

#ifdef __cplusplus
extern "C" {
#endif


#ifndef PZH_SXMM_UTILS_H
#define PZH_SXMM_UTILS_H

// **************************
// *** Standard Libraries ***
// **************************

#include <stddef.h>

// ***************
// *** Aliases ***
// ***************

// ******************
// *** Enumerates ***
// ******************

// **************
// *** Unions ***
// **************

// ******************
// *** Structures ***
// ******************

// ************************
// *** Global Variables ***
// ************************

// *****************
// *** Functions ***
// *****************

extern void pzh_get_order_info(PZHOrder_t*, PZHSetting_t*);
extern void pzh_get_contract_info(PZHContract_t*, PZHSetting_t*);
extern void pzh_get_connection_info(PZHSetting_t*);

#endif // PZH_SXMM_UTILS_H

#ifdef __cplusplus
}
#endif