# *******************************
# *** Autor: PZH Gesellschaft ***
# *** Datum: 03/04/2026       ***
# *** Aktua: 23. Juni. 2026   ***
# *** Lizenz: AGPL-3-or-later ***
# *******************************

# **********************
# *** Subdirectories ***
# **********************

subdir('Client')
subdir('Orders')

# *****************
# *** Libraries ***
# *****************

libsxmm_websocket = static_library(
	'sxmm_websocket',

	SOURCE_FILES_WEBSOCKET_CLIENT,
	SOURCE_FILES_WEBSOCKET_ORDERS,

	dependencies: dependencies,
	include_directories: inc,

	pic: true,
	build_subdir: 'lib',
	build_by_default: true
)

libsxmm_websocket_shared = shared_library(
	'sxmm_websocket',

	SOURCE_FILES_WEBSOCKET_CLIENT,
	SOURCE_FILES_WEBSOCKET_ORDERS,

	link_with: [ libsxmm_report, libsxmm_risk, libsxmm_utils ],
	dependencies: dependencies,
	include_directories: inc,

	version: '0.1.0',
	soversion: '0.1',
	build_subdir: 'lib',
	build_by_default: true
)