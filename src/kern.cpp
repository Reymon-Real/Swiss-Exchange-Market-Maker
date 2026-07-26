// *******************************
// *** Author: Reymon Dev      ***
// *** Datum: 04. April. 2026  ***
// *** Aktua: 15. Juli. 2026   ***
// *** Lizenz: AGPL-3-or-later ***
// *******************************

// ******************************
// *** Standard C++ Libraries ***
// ******************************

#include <iostream>
#include <cstdlib>
#include <pthread.h>

// *****************
// *** Libraries ***
// *****************

#include <sxmm.hpp>

// ************************
// *** Global Variables ***
// ************************

char instruments[SXMM_MAX_INSTRUMENTS][SXMM_INSTRUMENT_SIZE];

// ************************
// *** Static Variables ***
// ************************

static size_t array_size;
static pthread_t* threads;

// ************************
// *** Static Functions ***
// ************************

// *******************
// *** Entry Point ***
// *******************

int main(void) {

	// *****************
	// *** Variables ***
	// *****************

	SXMMClient client; // Variable for use TwsApi

	// Json Sample Structure
	SXMMJson_t json = {
		.mpc_nameFile = (char*) "config.json",
		.mp_document  = NULL,
		.mp_root      = NULL,
		
		.m_flg       = 0,
		.m_err       = { 0, "Hola", 0 },

		.update = NULL,
		.free   = NULL
	};

	// ******************
	// *** Initialize ***
	// ******************

	sxmm_init_json(&json);

	if (!json.mp_document) return EXIT_FAILURE;

	// *****************
	// *** Get Files ***
	// *****************

	yyjson_val* p_instruments = yyjson_obj_get(json.mp_root, "instruments"); // Get Array of files to the config for the instruments

	// Verifie if the instruments array exist
	if (!p_instruments) {

		json.free(&json);
		return EXIT_FAILURE;
	
	}

	array_size = yyjson_arr_size(p_instruments); // Get size from array

	// Verifie limit of instruments supported for ibkr
	if (array_size > SXMM_MAX_INSTRUMENTS || array_size == 0) {

		printf(
			"Instrument limit: %d\n"
			"Past instruments: %ld\n",
			SXMM_MAX_INSTRUMENTS,
			array_size
		);

		json.free(&json);

		return EXIT_FAILURE;
	}

	// Save the configuration files for the instruments to be used
	for (size_t i = SXMM_ZERO; i < array_size; i = i + 1) {

		yyjson_val* p_file = yyjson_arr_get(p_instruments, i); // Get file of the array

		// Save File
		snprintf(
			instruments[i],
			SXMM_INSTRUMENT_SIZE,
			"%s",
			yyjson_get_str(p_file)
		);
	
	}

	// **************************
	// *** Program Main Logic ***
	// **************************

	threads = (pthread_t*) malloc(sizeof(pthread_t) * array_size);

	for (size_t i = SXMM_ZERO; i < array_size; i = i + 1) {
		
		int rc = 0;

		switch (i) {

			case SXMM_CONNECTION_00:
				rc = pthread_create(&threads[i], NULL, ibkr_connection_00, NULL);
				break;

			case SXMM_CONNECTION_01:
				rc = pthread_create(&threads[i], NULL, ibkr_connection_01, NULL);
				break;

			case SXMM_CONNECTION_02:
				rc = pthread_create(&threads[i], NULL, ibkr_connection_02, NULL);
				break;

			case SXMM_CONNECTION_03:
				rc = pthread_create(&threads[i], NULL, ibkr_connection_03, NULL);
				break;

			case SXMM_CONNECTION_04:
				rc = pthread_create(&threads[i], NULL, ibkr_connection_04, NULL);
				break;

			case SXMM_CONNECTION_05:
				rc = pthread_create(&threads[i], NULL, ibkr_connection_05, NULL);
				break;

			case SXMM_CONNECTION_06:
				rc = pthread_create(&threads[i], NULL, ibkr_connection_06, NULL);
				break;

			case SXMM_CONNECTION_07:
				rc = pthread_create(&threads[i], NULL, ibkr_connection_07, NULL);
				break;

			case SXMM_CONNECTION_08:
				rc = pthread_create(&threads[i], NULL, ibkr_connection_08, NULL);
				break;

			case SXMM_CONNECTION_09:
				rc = pthread_create(&threads[i], NULL, ibkr_connection_09, NULL);
				break;

			case SXMM_CONNECTION_0A:
				rc = pthread_create(&threads[i], NULL, ibkr_connection_0A, NULL);
				break;

			case SXMM_CONNECTION_0B:
				rc = pthread_create(&threads[i], NULL, ibkr_connection_0B, NULL);
				break;

			case SXMM_CONNECTION_0C:
				rc = pthread_create(&threads[i], NULL, ibkr_connection_0C, NULL);
				break;

			case SXMM_CONNECTION_0D:
				rc = pthread_create(&threads[i], NULL, ibkr_connection_0D, NULL);
				break;

			case SXMM_CONNECTION_0E:
				rc = pthread_create(&threads[i], NULL, ibkr_connection_0E, NULL);
				break;

			case SXMM_CONNECTION_0F:
				rc = pthread_create(&threads[i], NULL, ibkr_connection_0F, NULL);
				break;

			case SXMM_CONNECTION_10:
				rc = pthread_create(&threads[i], NULL, ibkr_connection_10, NULL);
				break;

			case SXMM_CONNECTION_11:
				rc = pthread_create(&threads[i], NULL, ibkr_connection_11, NULL);
				break;

			case SXMM_CONNECTION_12:
				rc = pthread_create(&threads[i], NULL, ibkr_connection_12, NULL);
				break;

			case SXMM_CONNECTION_13:
				rc = pthread_create(&threads[i], NULL, ibkr_connection_13, NULL);
				break;

			case SXMM_CONNECTION_14:
				rc = pthread_create(&threads[i], NULL, ibkr_connection_14, NULL);
				break;

			case SXMM_CONNECTION_15:
				rc = pthread_create(&threads[i], NULL, ibkr_connection_15, NULL);
				break;

			case SXMM_CONNECTION_16:
				rc = pthread_create(&threads[i], NULL, ibkr_connection_16, NULL);
				break;

			case SXMM_CONNECTION_17:
				rc = pthread_create(&threads[i], NULL, ibkr_connection_17, NULL);
				break;

			case SXMM_CONNECTION_18:
				rc = pthread_create(&threads[i], NULL, ibkr_connection_18, NULL);
				break;

			case SXMM_CONNECTION_19:
				rc = pthread_create(&threads[i], NULL, ibkr_connection_19, NULL);
				break;

			case SXMM_CONNECTION_1A:
				rc = pthread_create(&threads[i], NULL, ibkr_connection_1A, NULL);
				break;

			case SXMM_CONNECTION_1B:
				rc = pthread_create(&threads[i], NULL, ibkr_connection_1B, NULL);
				break;

			case SXMM_CONNECTION_1C:
				rc = pthread_create(&threads[i], NULL, ibkr_connection_1C, NULL);
				break;

			case SXMM_CONNECTION_1D:
				rc = pthread_create(&threads[i], NULL, ibkr_connection_1D, NULL);
				break;

			case SXMM_CONNECTION_1E:
				rc = pthread_create(&threads[i], NULL, ibkr_connection_1E, NULL);
				break;

			case SXMM_CONNECTION_1F:
				rc = pthread_create(&threads[i], NULL, ibkr_connection_1F, NULL);
				break;
			
			default:
				json.free(&json);
				fprintf(stderr, "pthread_create fail: %d\n", rc);
				free(threads);
				break;
		}

	}

	// *************************
	// *** Join Into Threads ***
	// *************************

	for (size_t i = SXMM_ZERO; i < array_size; i = i + 1)
		pthread_join(threads[i], NULL);

	// ************
	// *** Free ***
	// ************

	json.free(&json);
	free(threads);

	// *******************
	// *** End Program ***
	// *******************

		return EXIT_SUCCESS;
}