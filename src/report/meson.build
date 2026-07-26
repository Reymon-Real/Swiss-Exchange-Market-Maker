# *******************************
# *** Autor: Reymon Dev       ***# *** Datum: 03/04/2026       ***
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

SOURCE_FILES_REPORT_LOCAL = files(
	'generate.cpp'
)

SOURCE_FILES_REPORT = [
	SOURCE_FILES_REPORT_LOCAL,
	SOURCE_FILES_REPORT_EXCEPTIONS
]

# *****************
# *** Libraries ***
# *****************

libsxmm_report = static_library(
	'sxmm_report',

	SOURCE_FILES_REPORT,

	dependencies: dependencies,
	include_directories: inc,

	pic: true,
	build_subdir: 'lib',
	build_by_default: true,

	install: true,
	install_dir: 'usr/lib'
)

libsxmm_report = shared_library(
	'sxmm_report',

	SOURCE_FILES_REPORT,

	dependencies: dependencies,
	include_directories: inc,

	version: '0.1.0',
	soversion: '0.1',
	build_subdir: 'lib',
	build_by_default: true,

	install: true,
	install_dir: 'usr/lib'
)