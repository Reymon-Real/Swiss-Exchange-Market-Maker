project(
	'Swiss Exchange Market Maker',
	
	['c', 'cpp'],

	version: '1.0.0',
	meson_version: '>=1.9.0',
	license: 'AGPL-3-or-later',

	default_options: [
		'c_std=c99',
		'cpp_std=c++20',
		'warning_level=3',
		'buildtype=debug',
		'strip=true',
	]
)

# *************************
# *** Porject Arguments ***
# *************************

add_project_link_arguments(

#	'-L/ust/local/lib',
	'-lm',
	'-lTwsSocketClient',

	language: [ 'c', 'cpp' ]
)

# ***************************
# *** Install Directories ***
# ***************************

install_dir_bin = 'libsxmm-dev/usr/bin'
install_dir_lib = 'libsxmm-dev/usr/lib'
install_dir_inc = 'libsxmm-dev/usr/include'

# ********************
# *** Dependencies ***
# ********************

json = dependency('yyjson')

dependencies = [
	json
]

# *************
# *** Tools ***
# *************

CC  = find_program('cc',   required: true)
CXX = find_program('c++',  required: true)

# *******************
# *** Tools Flags ***
# *******************

# **************************
# *** Search Directories ***
# **************************

search_inc = include_directories(
	'include',
	'/usr/local/include/IBKR/TwsSocketClient/protobufUnix'
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
	
	include_directories: search_inc
)

# ***********************
# *** Install Headers ***
# ***********************

install_headers(
	'include/pzh/sxmm/Client.hpp',
	'include/pzh/sxmm/Report.h',
	'include/pzh/sxmm/Order.h',
	'include/pzh/sxmm/Risk.h',
	'include/pzh/sxmm.hpp',

	install_dir: 'libsxmm-dev/usr/include/pzh/sxmm'
)