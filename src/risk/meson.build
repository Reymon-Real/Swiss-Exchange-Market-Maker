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
	include_directories: search_inc
)