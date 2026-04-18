// **********************************
// *** Author: Dracma Capital     ***
// *** Date:   April 4 from 2026  ***
// *** Update: April 15 from 2026 ***
// *** License: AGPL-3-or-later   ***
// **********************************

// ******************************
// *** Standard C++ Libraries ***
// ******************************

#include <cstdlib>

// ************************
// *** Dracma Libraries ***
// ************************

#include <Dracma/sxmm.h>

// *******************
// *** Entry Point ***
// *******************

int main(int argc, char** argv) {

	SXMM_INIT(argc, argv);
	while(SXMM_LOOP(argc, argv) == true);
	SXMM_FREE(argc, argv);

	return EXIT_SUCCESS;
}