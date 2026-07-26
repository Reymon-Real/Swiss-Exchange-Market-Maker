# ********************************
# *** Author: Reymon Dev       ***
# *** Date:   14. April. 2026  ***
# *** Update: 14. Mai. 2026    ***
# *** License: AGPL-3-or-later ***
# ********************************

# *************
# *** Files ***
# *************

SOURCE_FILES_AVELLANEDA_STOIKOV = files(
	'ask_size.c',
	'bid_size.c',
	'inventory.c',
	'kappa.c',
	'mid_price.c',
	'spread_max.c',
	'spread_min.c',
	'volatility.c'
)

# *****************
# *** Libraries ***
# *****************

libsxmm_as = static_library(
	'sxmm_as',

	SOURCE_FILES_AVELLANEDA_STOIKOV,

	dependencies: dependencies,
	include_directories: inc,
	
	pic: true,
	build_subdir: 'lib',
	build_by_default: true,

	install: true,
	install_dir: 'usr/lib'
)

libsxmm_as_shared = shared_library(
	'sxmm_as',

	SOURCE_FILES_AVELLANEDA_STOIKOV,

	dependencies: dependencies,
	include_directories: inc,

	version: '0.1.0',
	soversion: '0.1',
	build_subdir: 'lib',
	build_by_default: true,

	install: true,
	install_dir: 'usr/lib'
)