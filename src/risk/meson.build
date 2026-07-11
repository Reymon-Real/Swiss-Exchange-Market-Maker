# ********************************
# *** Author: PZH Gesellschaft ***
# *** Date:   03. April. 2026  ***
# *** Update: 14. Mai. 2026    ***
# *** License: AGPL-3-or-later ***
# ********************************

subdir('inventory')
subdir('microprice')
subdir('spread')
subdir('stoikov')

# ***************
# *** Library ***
# ***************

libsxmm_risk = static_library(
	'sxmm_risk',

	SOURCE_FILES_RISK_INVENTORY,
	SOURCE_FILES_RISK_MICROPRICE,
	SOURCE_FILES_RISK_SPREAD,
	SOURCE_FILES_RISK_STOIKOV,

	dependencies: dependencies,
	include_directories: inc,

	pic: true,
	build_subdir: 'lib',
	build_by_default: true
)

libsxmm_risk_shared = shared_library(
	'sxmm_risk',

	SOURCE_FILES_RISK_INVENTORY,
	SOURCE_FILES_RISK_MICROPRICE,
	SOURCE_FILES_RISK_SPREAD,
	SOURCE_FILES_RISK_STOIKOV,

	dependencies: dependencies,
	include_directories: inc,

	version: '0.1.0',
	soversion: '0.1',
	build_subdir: 'lib',
	build_by_default: true
)