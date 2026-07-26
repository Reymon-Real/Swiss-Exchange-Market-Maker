// **********************************
// *** Author: Enosis Technology  ***
// *** Date:   April 20 from 2026 ***
// *** Update: April 20 from 2026 ***
// *** License: AGPL-3-or-later   ***
// **********************************

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <yyjson.h>
#include <sxmm.h>

// ************************
// *** Static Functions ***
// ************************

static void update(SXMMJson_t* json) {

	if (json -> mp_document) yyjson_doc_free(json -> mp_document);

	json -> m_flg        = YYJSON_READ_ALLOW_COMMENTS | YYJSON_READ_ALLOW_TRAILING_COMMAS;
	json -> mp_document  = yyjson_read_file(json -> mpc_nameFile, json -> m_flg, NULL, &json -> m_err);
	json -> mp_root      = yyjson_doc_get_root(json -> mp_document);

}

static void free_s(SXMMJson_t* json) {
	if (json -> mp_document)
		yyjson_doc_free(json -> mp_document);
}

// ****************
// *** Function ***
// ****************

void sxmm_init_json(SXMMJson_t* json) {

	json -> update = update;
	json -> free   = free_s;

	json -> update(json);
}