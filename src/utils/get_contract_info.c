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
#include <pzh/sxmm/common.h> 
#include <pzh/sxmm/Order.h> 

// ****************
// *** Function ***
// ****************

void pzhsx_get_order_info(PZHContract_t* contract, PZHSetting_t* setting) {

	setting -> document = yyjson_read_file("setting.json", setting -> flg, NULL, &setting -> err);
	setting -> root     = yyjson_doc_get_root(setting -> document);

	setting -> symbol   = yyjson_obj_get(setting -> root, "symbol");
	setting -> sectype  = yyjson_obj_get(setting -> root, "sectype");
	setting -> exchange = yyjson_obj_get(setting -> root, "exchange");
	setting -> currency = yyjson_obj_get(setting -> root, "currency");

	contract -> symbol   = (char*) yyjson_get_str(setting -> symbol);
	contract -> sectype  = (char*) yyjson_get_str(setting -> sectype);
	contract -> exchange = (char*) yyjson_get_str(setting -> exchange);
	contract -> currency = (char*) yyjson_get_str(setting -> currency);

	yyjson_doc_free(setting -> document);
}