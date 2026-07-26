// *******************************
// *** Autor: Reymon Dev       ***
// *** Datum: 20. April. 2026  ***
// *** Aktua: 28. Mai. 2026    ***
// *** License: AGPL-3-or-later***
// *******************************

#ifndef SXMM_MATH_H
#define SXMM_MATH_H

// ***************
// *** Aliases ***
// ***************

// ******************
// *** Enumerates ***
// ******************

// ******************
// *** Structures ***
// ******************

typedef struct AvellanedaStoikov {

	double Pb; // Market Best Bid Price
	double Pa; // Market Best Ask Price
	size_t Qb; // My stock on bid
	size_t Qa; // My stock on ask
	double I;  // Order Book Imbalance
	double M;  // Mid Price

	double bid;  // Number of positions on bid
	double ask;  // Number of positions on ask
	double size; // Size of the orders

	double minimum;   // Minimum stock levels
	double inventory; // Max stock levels

	double gamma; // Risk Aversion
	double kappa; // 
		
	double imbalance; // Market failure

	double lmtBuy;  // Limit price for buy order
	double lmtSell; // Limit price for sell order

} AvellanedaStoikov_t;

// *****************
// *** Functions ***
// *****************

void mid_price(AvellanedaStoikov_t*);
void orderbook_imbalance(AvellanedaStoikov_t*);

#endif // SXMM_MATH_H