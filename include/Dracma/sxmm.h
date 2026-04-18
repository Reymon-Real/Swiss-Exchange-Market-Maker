// **********************************
// *** Author: Dracma Capital     ***
// *** Date:   April 15 from 2026 ***
// *** Update: April 15 from 2026 ***
// *** License: AGPL-3-or-later   ***
// **********************************

#ifndef DRACMA_CAPITAL_SXMM_H
#define DRACMA_CAPITAL_SXMM_H

#ifdef _cplusplus
extern "C" {
#endif

// **************************
// *** Standard Libraries ***
// **************************

#ifdef _cplusplus
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <cstdint>
#include <cstring>
#endif

#ifndef _cplusplus
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdbool.h>
#endif

// *********************
// *** Define Macros ***
// *********************

extern void SXMM_INIT(int, char**);
extern bool SXMM_LOOP(int, char**);
extern void SXMM_FREE(int, char**);

#ifdef _cplusplus
}
#endif

#endif // DRACMA_CAPITAL_SXMM_H