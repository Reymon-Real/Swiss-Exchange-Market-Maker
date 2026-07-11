// *******************************
// *** Autor: PZH Gesellschaft ***
// *** Datum: 28. Mai. 2026    ***
// *** Aktua: 28. Mai. 2026    ***
// *** Lizenz: AGPL-3-or-later ***
// *******************************

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <yyjson.h>
#include <pzh/sxmm.hpp>

// ****************
// *** Function ***
// ****************

void pzh_get_connection_info(PZHSetting_t* setting) {

	setting -> document = yyjson_read_file("setting.json", setting -> flg, NULL, &setting -> err);
	setting -> root     = yyjson_doc_get_root(setting -> document);

	setting -> host      = (char*) yyjson_get_str(yyjson_obj_get(setting -> root, "host"));
	setting -> port      = yyjson_get_int(yyjson_obj_get(setting -> root, "port"));
	setting -> userId    = yyjson_get_int(yyjson_obj_get(setting -> root, "userId"));
	setting -> extraAuth = yyjson_get_bool(yyjson_obj_get(setting -> root, "extraAuth"));

	yyjson_doc_free(setting -> document);
}