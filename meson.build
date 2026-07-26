# *******************************
# *** Autor: Reymon Dev       ***
# *** Datum: 01. Juli. 2026   ***
# *** Aktua: 07. Juli. 2026   ***
# *** Lizenz: AGPL-3-or-later ***
# *******************************

project(
	'Swiss Exchange Market Maker',
	
	[ 'c', 'cpp' ],

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
	'-Wno-unused-function',

	language: [ 'c', 'cpp' ]
)

add_project_link_arguments(
	'-lm',
	'-pthread',
	'-lTwsSocketClient',

	language: [ 'c', 'cpp' ]
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
	'/usr/local/include/IBKR/',
	'/usr/local/include/IBKR/TwsSocketClient/',
	'/usr/local/include/IBKR/TwsSocketClient/protobufUnix/'
)

# **********************
# *** Subdirectories ***
# **********************

subdir('src/utils')
subdir('src/avellaneda-stoikov')
subdir('src/report')
subdir('src/client')

# ********************
# *** Search Files ***
# ********************

SOURCE_FILES_KERN = files(
	'src/kern.cpp'
)

# *****************
# *** Libraries ***
# *****************

libraries = [
	libsxmm_as,
	libsxmm_utils,
	libsxmm_report,
	libsxmm_client,
]

# *******************
# *** Executables ***
# *******************

BINARY_SXMM = executable(
	'sxmm',
	
	SOURCE_FILES_KERN,

	link_with: libraries,

	dependencies: dependencies,
	
	include_directories: inc,

	build_rpath: '$ORIGIN:$ORIGIN/lib:$ORIGIN/../lib',
	install_rpath: '$ORIGIN:$ORIGIN/lib:$ORIGIN/../lib:/usr/lib:/usr/lib',

	install: true,
	install_dir: 'usr/bin'
)

# ***********************
# *** Install Headers ***
# ***********************

install_headers(
	'include/sxmm/Common.h',
	'include/sxmm/Math.h',
	'include/sxmm/Report.h',
	'include/sxmm/Risk.h',
	'include/sxmm/Utils.h',

	install_dir: 'usr/include/sxmm'
)

install_headers(
	'include/sxmm.h',
	'include/sxmm.hpp',

	install_dir: 'usr/include/'
)

# *******************
# *** Run Targets ***
# *******************

run_target('run', command: [ BINARY_SXMM ])