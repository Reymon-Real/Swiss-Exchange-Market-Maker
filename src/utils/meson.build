# *******************************
# *** Autor: PZH Gesellschaft ***
# *** Datum: 25. April. 2026  ***
# *** Aktua: 23. Juni. 2026   ***
# *** Lizenz: AGPL-3-or-later ***
# *******************************

# **********************
# *** Subdirectories ***
# **********************

subdir('connection')
subdir('contract')
subdir('orders')

# *****************
# *** Libraries ***
# *****************

libsxmm_utils = static_library(
	'libsxmm_utils',

	SOURCE_FILES_UTILS_CONNECTION,
	SOURCE_FILES_UTILS_CONTRACT,
	SOURCE_FILES_UTILS_ORDERS,

	dependencies: dependencies,
	include_directories: inc,

	pic: true,
	build_subdir: 'lib',
	build_by_default: true
)

libsxmm_utils_shared = shared_library(
	'libsxmm_utils',

	SOURCE_FILES_UTILS_CONNECTION,
	SOURCE_FILES_UTILS_CONTRACT,
	SOURCE_FILES_UTILS_ORDERS,

	dependencies: dependencies,
	include_directories: inc,

	version: '0.1.0',
	soversion: '0.1',
	build_subdir: 'lib',
	build_by_default: true
)