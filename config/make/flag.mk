# *******************************
# *** Autor: Reymon Dev       ***
# *** Datum: 23. Juli. 2026   ***
# *** Aktua: 23. Juli. 2026   ***
# *** Lizenz: AGPL-3-or-later ***
# *******************************

# ****************
# *** Compiler ***
# ****************

CCOMMON := -Wall -Wextra -Wpedantic -Wno-switch -Wno-unused-parameter -Wno-unused-function -fPIC -MD

CFLAGS   := $(CCOMMON) -std=c23
CXXFLAGS := $(CCOMMON) -std=c++26


ifeq ($(buildtype), debug)

CFLAGS   += -Og
CXXFLAGS += -Og

else ifeq ($(buildtype), release)

CFLAGS   += -O3 
CXXFLAGS += -O3

endif

# ********************
# *** Gnu Binutils ***
# ********************

ARFLAGS := rcs
LNFLAGS := -sf

# **************
# *** Linker ***
# **************

CLDCOMMON  := -Wl,--warn-once -L$(BINARY_FOLDER_LIB)

CCLDFLAGS  := $(CLDCOMMON)
CXXLDFLAGS := $(CLDCOMMON)