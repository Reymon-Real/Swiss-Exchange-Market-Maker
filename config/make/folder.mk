# *******************************
# *** Autor: Reymon Dev       ***
# *** Datum: 23. Juli. 2026   ***
# *** Aktua: 23. Juli. 2026   ***
# *** Lizenz: AGPL-3-or-later ***
# *******************************

# **************************
# *** Source Directories ***
# **************************

SOURCE_FOLDER        := ./src
SOURCE_FOLDER_AS     := ./src/avellaneda-stoikov
SOURCE_FOLDER_CLIENT := ./src/client
SOURCE_FOLDER_REPORT := ./src/report
SOURCE_FOLDER_UTILS  := ./src/utils

# **************************
# *** Object Directories ***
# **************************

OBJECT_FOLDER        := ./build/make/$(buildtype)/$(TGT)
OBJECT_FOLDER_AS     := ./build/make/$(buildtype)/$(TGT)/avellaneda-stoikov
OBJECT_FOLDER_CLIENT := ./build/make/$(buildtype)/$(TGT)/client
OBJECT_FOLDER_REPORT := ./build/make/$(buildtype)/$(TGT)/report
OBJECT_FOLDER_UTILS  := ./build/make/$(buildtype)/$(TGT)/utils

# **************************
# *** Binary Directories ***
# **************************

BINARY_FOLDER_BIN := ./build/make/$(buildtype)/$(TGT)/bin
BINARY_FOLDER_LIB := ./build/make/$(buildtype)/$(TGT)/lib

# ************************
# *** Buildtype folder ***
# ************************

BUILDTYPE := ./build/make/$(buildtype)