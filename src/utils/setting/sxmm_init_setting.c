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

static void update(struct SXMMSetting* setting, SXMMJson_t* json) {

	yyjson_val* root = json -> mp_root;

	setting -> mpc_host     = (char*) yyjson_get_str(yyjson_obj_get(root, "host"));
	setting -> mi_port      = (int)   yyjson_get_int(yyjson_obj_get(root, "port"));
	setting -> mi_userId    = (int)   yyjson_get_int(yyjson_obj_get(root, "userId"));
	setting -> mb_extraAuth = (_Bool) yyjson_get_bool(yyjson_obj_get(root, "extraAuth"));
	
	setting -> mpc_symbol    = (char*) yyjson_get_str(yyjson_obj_get(root, "symbol"));
	setting -> mpc_secType   = (char*) yyjson_get_str(yyjson_obj_get(root, "secType"));
	setting -> mpc_exchange  = (char*) yyjson_get_str(yyjson_obj_get(root, "exchange"));
	setting -> mpc_currency  = (char*) yyjson_get_str(yyjson_obj_get(root, "currency"));

	setting -> md_bid       = (double) yyjson_get_num(yyjson_obj_get(root, "bid"));
	setting -> md_ask       = (double) yyjson_get_num(yyjson_obj_get(root, "ask"));
	setting -> md_quantity  = (double) yyjson_get_num(yyjson_obj_get(root, "quantity"));
	setting -> md_inventory = (double) yyjson_get_num(yyjson_obj_get(root, "inventory"));
}

// ****************
// *** Function ***
// ****************

void sxmm_init_setting(struct SXMMSetting* setting, SXMMJson_t* json) {

	setting -> update = update;

	setting -> update(setting, json);
}