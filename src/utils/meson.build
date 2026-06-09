# *******************************
# *** Autor: PZH Gesellschaft ***
# *** Datum: 25. April. 2026  ***
# *** Aktua: 25. Mai. 2026    ***
# *** Lizenz: AGPL-3-or-later ***
# *******************************

SOURCE_FILES_UTILS = files(
	'get_connection_info.c',
	'get_contract_info.c',
	'get_order_info.c'
)

libsxmm_utils = static_library(
	'libsxmm_utils',
	SOURCE_FILES_UTILS,

	dependencies: dependencies,
	include_directories: search_inc
)