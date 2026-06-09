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
#include <pzh/sxmm/common.h> 
#include <pzh/sxmm/Order.h> 

// ****************
// *** Function ***
// ****************

void pzh_get_order_info(PZHOrder_t* order, PZHSetting_t* setting) {

	setting -> document = yyjson_read_file("setting.json", setting -> flg, NULL, &setting -> err);
	setting -> root     = yyjson_doc_get_root(setting -> document);

	setting -> bid       = yyjson_obj_get(setting -> root, "bid");
	setting -> ask       = yyjson_obj_get(setting -> root, "ask");
	setting -> size      = yyjson_obj_get(setting -> root, "size");
	setting -> minimum   = yyjson_obj_get(setting -> root, "minimum");
	setting -> inventory = yyjson_obj_get(setting -> root, "inventory");

	order -> risk.bid       = yyjson_get_num(setting -> bid);
	order -> risk.ask       = yyjson_get_num(setting -> ask);
	order -> risk.size      = yyjson_get_num(setting -> size);
	order -> risk.minimum   = yyjson_get_num(setting -> minimum);
	order -> risk.inventory = yyjson_get_num(setting -> inventory);

	yyjson_doc_free(setting -> document);
}