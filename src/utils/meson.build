# *******************************
# *** Autor: Reymon Dev       ***
# *** Datum: 25. April. 2026  ***
# *** Aktua: 23. Juni. 2026   ***
# *** Lizenz: AGPL-3-or-later ***
# *******************************

# **********************
# *** Subdirectories ***
# **********************

subdir('json')
subdir('setting')

# *************
# *** Files ***
# *************

SOURCE_FILES_UTILS = [
	SOURCE_FILES_UTILS_JSON,
	SOURCE_FILES_UTILS_SETTING
]

# *****************
# *** Libraries ***
# *****************

libsxmm_utils = static_library(
	'sxmm_utils',

	SOURCE_FILES_UTILS,

	dependencies: dependencies,
	include_directories: inc,

	pic: true,
	build_subdir: 'lib',
	build_by_default: true,

	install: true,
	install_dir: 'usr/lib'
)

libsxmm_utils_shared = shared_library(
	'sxmm_utils',

	SOURCE_FILES_UTILS,

	dependencies: dependencies,
	include_directories: inc,

	version: '0.1.0',
	soversion: '0.1',
	build_subdir: 'lib',
	build_by_default: true,

	install: true,
	install_dir: 'usr/lib'
)