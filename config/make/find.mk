# *******************************
# *** Autor: Reymon Dev       ***
# *** Datum: 23. Juli. 2026   ***
# *** Aktua: 23. Juli. 2026   ***
# *** Lizenz: AGPL-3-or-later ***
# *******************************

# ********************
# *** Source Files ***
# ********************

SOURCE_FILES        := $(wildcard   $(SOURCE_FOLDER)/*.cpp)
SOURCE_FILES_AS     := $(shell find $(SOURCE_FOLDER_AS) -type f -name '*.c')
SOURCE_FILES_CLIENT := $(shell find $(SOURCE_FOLDER_CLIENT) -type f -name '*.cpp')
SOURCE_FILES_REPORT := $(shell find $(SOURCE_FOLDER_REPORT) -type f -name '*.cpp')
SOURCE_FILES_UTILS  := $(shell find $(SOURCE_FOLDER_UTILS) -type f -name '*.c')

# ********************
# *** Object Files ***
# ********************

OBJECT_FILES        := $(patsubst $(SOURCE_FOLDER)/%.cpp,$(OBJECT_FOLDER)/%.cpp.o,$(SOURCE_FILES))
OBJECT_FILES_AS     := $(patsubst $(SOURCE_FOLDER_AS)/%.c,$(OBJECT_FOLDER_AS)/%.c.o,$(SOURCE_FILES_AS))
OBJECT_FILES_CLIENT := $(patsubst $(SOURCE_FOLDER_CLIENT)/%.cpp,$(OBJECT_FOLDER_CLIENT)/%.cpp.o,$(SOURCE_FILES_CLIENT))
OBJECT_FILES_REPORT := $(patsubst $(SOURCE_FOLDER_REPORT)/%.cpp,$(OBJECT_FOLDER_REPORT)/%.cpp.o,$(SOURCE_FILES_REPORT))
OBJECT_FILES_UTILS  := $(patsubst $(SOURCE_FOLDER_UTILS)/%.c,$(OBJECT_FOLDER_UTILS)/%.c.o,$(SOURCE_FILES_UTILS))