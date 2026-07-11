# *******************************
# *** Autor: PZH Gesellschaft ***
# *** Datum: 03/04/2026       ***
# *** Aktua: 03/04/2026       ***
# *** Lizenz: AGPL-3-or-later ***
# *******************************

# **********************
# *** Subdirectories ***
# **********************

subdir('exceptions')

# *************
# *** Files ***
# *************

SOURCE_FILES_REPORT = files(
	'generate.cpp'
)

# *****************
# *** Libraries ***
# *****************

libsxmm_report = static_library(
	'sxmm_report',

	SOURCE_FILES_REPORT,
	SOURCE_FILES_REPORT_EXCEPTIONS,

	dependencies: dependencies,
	include_directories: inc,

	pic: true,
	build_subdir: 'lib',
	build_by_default: true
)

libsxmm_report = shared_library(
	'sxmm_report',

	SOURCE_FILES_REPORT,
	SOURCE_FILES_REPORT_EXCEPTIONS,

	dependencies: dependencies,
	include_directories: inc,

	version: '0.1.0',
	soversion: '0.1',
	build_subdir: 'lib',
	build_by_default: true
)