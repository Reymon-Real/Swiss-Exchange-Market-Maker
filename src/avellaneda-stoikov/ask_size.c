// *******************************
// *** Autor: Reymon Dev       ***
// *** Datum: 24. Juli. 2026   ***
// *** Aktua: 24. Juli. 2026   ***
// *** Lizenz: AGPL-3-or-later ***
// *******************************

// *****************
// *** Libraries ***
// *****************

#include <sxmm.h>

// ****************
// *** Function ***
// ****************

void mid_price(AvellanedaStoikov_t* as) {
	as -> M = ((as -> Pb / as -> Pa) / 2);
}