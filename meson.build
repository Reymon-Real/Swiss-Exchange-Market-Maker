project(
	'Swiss Exchange Market Maker',
	'c', 'cpp',
	version: '1.0.0',
	meson_version: '>=1.9.0',
	license: 'AGPL-3-or-later'
)

# ***************************
# *** Important Variables ***
# ***************************

env = environment()

# *********************************
# *** Set Environment Variables ***
# *********************************

env.set('C_INCLUDE_PATH',     'include')
env.set('CPLUS_INCLUDE_PATH', 'include')

env.set('SYSLIB', 'include')
env.set('COBOPT', '-q64')
env.set('COBCPYEXT', '.cpy')
env.set('COBLSTDIR', 'build/list')

env.set('LIBRARY_PATH', 'build')

# ************************************
# *** Append Environment Variables ***
# ************************************


env.append('CPLUS_INCLUDE_PATH', '/usr/local/include/IBKR/TwsSocketClient/protobufUnix', separator: ':')

env.append('COBCPYEXT', '.cbl', '.cob', separator: ',')

env.append('LIBRARY_PATH', '/usr/local/lib', '/opt/ibm/cobol/rte/lib', separator: ':')

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
cob_args = [ ]

# **************************
# *** Search Directories ***
# **************************

inc = include_directories('include', '/usr/local/include/IBKR/TwsSocketClient/protobufUnix')

# ********************
# *** Search Files ***
# ********************

subdir('src/order')
subdir('src/report')
subdir('src/risk')

# *************************
# *** Custom Generators ***
# *************************

COB_COMPILER = generator(COB, arguments: [cob_args, '-c', '@INPUT@', '-o', '@OUTPUT@'], output: '@PLAINNAME@.o')

# ************************
# *** Create Libraries ***
# ************************

target_file_library_sxmm = custom_target('libsxmm', output: 'libsxmm.so', input: COB_COMPILER.process(COBOL_FILES_RISK, COBOL_FILES_REPORT), command: [COB, cob_args, '-dso', '-o', '@OUTPUT@', '@INPUT@'], install: true, install_dir: '/usr/local/lib', build_by_default: true)

# ********************
# *** Dependencies ***
# ********************

binary_file_library_tws  = declare_dependency(include_directories: include_directories('/usr/local/lib'), link_args: ['-L/usr/local/lib', '-lTwsSocketClient'])
binary_file_library_sxmm = declare_dependency(include_directories: include_directories('/usr/local/lib'), link_args: ['-L/usr/local/lib', '-lsxmm'])

# *******************
# *** Executables ***
# *******************

binary_file_executable_sxmm = executable('sxmm', [ C_FILES_ORDER, CPP_FILES_ORDER ], dependencies: [ binary_file_library_tws, binary_file_library_sxmm ], build_rpath: 'lib', build_by_default: true)