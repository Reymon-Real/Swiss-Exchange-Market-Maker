// *******************************
// *** Autor: PZH Gesellschaft ***
// *** Datum: 20. April. 2026  ***
// *** Aktua: 28. Mai. 2026    ***
// *** License: AGPL-3-or-later***
// *******************************

#ifdef __cplusplus
extern "C" {
#endif

#ifndef PZH_SXMM_ORDER_H
#define PZH_SXMM_ORDER_H

// ***************
// *** Aliases ***
// ***************

typedef void* PZHClientHandle;

// ******************
// *** Enumerates ***
// ******************

// ******************
// *** Structures ***
// ******************

typedef struct PZHOrder {

	struct {

		double bid; // Market Best Bid
		double ask; // Market Best Ask

	} market;

	struct {

		double bid;  // Number of positions on bid
		double ask;  // Number of positions on ask
		double size; // Size of the orders

		double minimum;   // Minimum stock levels
		double inventory; // Max stock levels

		double gamma; // Risk Aversion
		double kappa; // 
		
		double imbalance; // Market failure

	} risk;

	struct {

		double buy;  // Limit price for buy order
		double sell; // Limit price for sell order

	} price;

} PZHOrder_t;

// *****************
// *** Functions ***
// *****************

void PZHSubmitOrder(const char*, PZHOrder_t*, PZHClientHandle);

#endif // PZH_SXMM_ORDER_HPP

#ifdef __cplusplus
}
#endif