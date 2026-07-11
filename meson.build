# *******************************
# *** Autor: PZH Gesellschaft ***
# *** Datum: 01. Juli. 2026   ***
# *** Aktua: 07. Juli. 2026   ***
# *** Lizenz: AGPL-3-or-later ***
# *******************************

project(
	'Swiss Exchange Market Maker',
	
	'cpp',

	version: '0.1.0',
	meson_version: '>=1.11.0',
	license: 'AGPL-3-or-later',

	default_options: [
		'c_std=c23',
		'cpp_std=c++26',
		'warning_level=3',
		'buildtype=debug',
		'strip=true',
	]
)

# *************************
# *** Project Arguments ***
# *************************

add_project_arguments(
	'-Wno-switch',
	'-Wno-unused-parameter',
#	'-Wno-unused-function',

	language: 'cpp'
)

add_project_link_arguments(
	'-lm',
	'-pthread',
	'-lTwsSocketClient',

	language: 'cpp'
)

# ********************
# *** Dependencies ***
# ********************

json   = dependency('yyjson')
sqlite = dependency('sqlite3')

dependencies = [
	json,
	sqlite
]

# **************************
# *** Search Directories ***
# **************************

inc = include_directories(
	'include',
	'/usr/local/include/IBKR/TwsSocketClient/',
	'/usr/local/include/IBKR/TwsSocketClient/protobufUnix/'
)

# ********************
# *** Search Files ***
# ********************

subdir('src/utils')
subdir('src/risk')
subdir('src/report')
subdir('src/websocket')
subdir('src/sxmm')

# *****************
# *** Libraries ***
# *****************

libraries = [
	libsxmm_risk,
	libsxmm_utils,
	libsxmm_report,
	libsxmm_websocket,
]

# *******************
# *** Executables ***
# *******************

BINARY_SXMM = executable(
	'sxmm',
	
	SOURCE_FILES_SXMM,

	link_with: libraries,

	dependencies: dependencies,
	
	include_directories: inc,

	build_rpath: '$ORIGIN/lib',
	install_rpath: '$ORIGIN/lib'
)

# ***********************
# *** Install Headers ***
# ***********************

install_headers(
	'include/pzh/sxmm.hpp',
	'include/pzh/sxmm/Risk.hpp',
	'include/pzh/sxmm/Order.hpp',
	'include/pzh/sxmm/Report.hpp',
	'include/pzh/sxmm/Client.hpp',

	install_dir: 'libsxmm-dev/usr/include/pzh/sxmm'
)