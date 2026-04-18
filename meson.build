project(
	'Swiss Exchange Market Maker',
	'cpp',
	version: '1.0.0',
	meson_version: '>=1.9.0',
	license: 'AGPL-3-or-later'
)

# ***************************
# *** Install Directories ***
# ***************************

install_dir_bin = '/usr/local/bin'
install_dir_lib = '/usr/local/lib'
install_dir_inc = '/usr/local/include'

# *************
# *** Tools ***
# *************

CC  = find_program('cc',   required: true)
CXX = find_program('c++',  required: true)
COB = find_program('cob2', required: true)

# *******************
# *** Tools Flags ***
# *******************

c_args   = [ '-Wall', '-Wextra', '-Werror' ]
cpp_args = [ '-Wall', '-Wextra', '-Werror' ]
cob_args = [ '-q64', '-I../include/cobol' ]

# **************************
# *** Search Directories ***
# **************************

inc_search  = include_directories('include', install_dir_inc + '/IBKR/TwsSocketClient/protobufUnix')
link_search = include_directories(install_dir_lib)

# ********************
# *** Search Files ***
# ********************

subdir('src/order')
subdir('src/report')
subdir('src/risk')
subdir('src/sxmm')

# *************************
# *** Custom Generators ***
# *************************

COB_COMPILER = generator(COB, output: '@PLAINNAME@.o', arguments: [cob_args, '-c', '@INPUT@', '-o', '@OUTPUT@'])

# ************************
# *** Create Libraries ***
# ************************

target_file_library_sxmm = custom_target(
								'libsxmm',

								output: 'libsxmm.so',
							
								input: COB_COMPILER.process(COBOL_FILES_RISK, COBOL_FILES_REPORT),

								command: [ COB, cob_args, '-dso', '-o', '@OUTPUT@', '@INPUT@' ],

								install: true,
								install_dir: install_dir_lib,

								build_by_default: true
							)

# ********************
# *** Dependencies ***
# ********************

binary_file_library_tws  = declare_dependency(
								include_directories: link_search,
								link_args: [
									'-L/usr/local/lib',
									'-Lbuild',
									'-lTwsSocketClient'
								]
							)


binary_file_library_sxmm = declare_dependency(
								include_directories: link_search,
								link_args: [
									'-L/usr/local/lib',
									'-Lbuild',
									'-lsxmm'
								]
							)

# *******************
# *** Executables ***
# *******************

binary_file_executable_sxmm = executable(
								'sxmm',
	
								[ CPP_FILES_ORDER, CPP_FILES_SXMM],
	
								include_directories: inc_search,
	
								dependencies: [
									binary_file_library_tws,
									binary_file_library_sxmm
								],

								install: true,
								install_dir: install_dir_bin,
	
								build_rpath: 'build:lib:' + install_dir_lib,
								build_by_default: true
							)