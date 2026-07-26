# *******************************
# *** Autor: Reymon Dev       ***
# *** Datum: 03/04/2026       ***
# *** Aktua: 10. Juni. 2026   ***
# *** Lizenz: AGPL-3-or-later ***
# *******************************

# **********************
# *** Subdirectories ***
# **********************

subdir('other')
subdir('market')
subdir('historical')
subdir('codes')
subdir('analysis')
subdir('pnl')
subdir('time')
subdir('news')
subdir('price')
subdir('scanner')
subdir('id')
subdir('options')
subdir('account')
subdir('Client')
subdir('advisor')
subdir('connection')
subdir('portfolio')
subdir('ticker')
subdir('protobuf')
subdir('contract')
subdir('test')
subdir('orders')
subdir('system')
subdir('bond')
subdir('error')
subdir('miscellaneous')

# ********************
# *** Source Files ***
# ********************

SOURCE_FILES_CLIENT = [
	SOURCE_FILES_CLIENT_ACCOUNT,
	SOURCE_FILES_CLIENT_ADVISOR,
	SOURCE_FILES_CLIENT_ANALYSIS,
	SOURCE_FILES_CLIENT_BOND,
	SOURCE_FILES_CLIENT_CLIENT,

	SOURCE_FILES_CLIENT_CODES,
	SOURCE_FILES_CLIENT_CONNECTION,
	SOURCE_FILES_CLIENT_CONTRACT,
	SOURCE_FILES_CLIENT_ERROR,
	SOURCE_FILES_CLIENT_HISTORICAL,
	
	SOURCE_FILES_CLIENT_ID,
	SOURCE_FILES_CLIENT_MARKET,
	SOURCE_FILES_CLIENT_MISCELLANEOUS,
	SOURCE_FILES_CLIENT_NEWS,
	SOURCE_FILES_CLIENT_OPTIONS,

	SOURCE_FILES_CLIENT_ORDERS,
	SOURCE_FILES_CLIENT_OTHER,
	SOURCE_FILES_CLIENT_PNL,
	SOURCE_FILES_CLIENT_PORTFOLIO,
	SOURCE_FILES_CLIENT_PRICE,
	SOURCE_FILES_CLIENT_PROTOBUF,

	SOURCE_FILES_CLIENT_SCANNER,
	SOURCE_FILES_CLIENT_SYSTEM,
	SOURCE_FILES_CLIENT_TEST,
	SOURCE_FILES_CLIENT_TICKER,
	SOURCE_FILES_CLIENT_TIME
]

# *****************
# *** Libraries ***
# *****************

libsxmm_client = static_library(
	'sxmm_client',

	SOURCE_FILES_CLIENT,

	dependencies: dependencies,
	include_directories: inc,

	pic: true,
	build_subdir: 'lib',
	build_by_default: true,

	install: true,
	install_dir: 'usr/lib'
)

libsxmm_client_shared = shared_library(
	'sxmm_client',

	SOURCE_FILES_CLIENT,

	link_with: [ libsxmm_report, libsxmm_as, libsxmm_utils ],
	dependencies: dependencies,
	include_directories: inc,

	version: '0.1.0',
	soversion: '0.1',
	
	build_rpath: '$ORIGIN',
	install_rpath: '$ORIGIN:/usr/lib:/usr/local/lib',

	build_subdir: 'lib',
	build_by_default: true,

	install: true,
	install_dir: 'usr/lib'
)