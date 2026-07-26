# *******************************
# *** Autor: Reymon Dev       ***
# *** Datum: 23. Juli. 2026   ***
# *** Aktua: 23. Juli. 2026   ***
# *** Lizenz: AGPL-3-or-later ***
# *******************************

# ********************
# *** Source Files ***
# ********************

SOURCE_FILE_KERN := $(SOURCE_FOLDER)/kern.cpp

# ********************
# *** Object Files ***
# ********************

OBJECT_FILE_KERN := $(OBJECT_FOLDER)/kern.cpp.o

# ********************
# *** Binary Files ***
# ********************

BINARY_FILE_STATIC_LIBSXMM_AS := $(BINARY_FOLDER_LIB)/libsxmm_as.a
SONAME_FILE_SHARED_LIBSXMM_AS := libsxmm_as.so.$(MAJOR_VERSION)
BINARY_FILE_SHARED_LIBSXMM_AS := $(BINARY_FOLDER_LIB)/libsxmm_as.so.$(MAJOR_VERSION)
MINOR_FILE_SHARED_LIBSXMM_AS  := $(BINARY_FOLDER_LIB)/libsxmm_as.so.$(MINOR_VERSION)
LINK_FILE_SHARED_LIBSXMM_AS   := $(BINARY_FOLDER_LIB)/libsxmm_as.so

BINARY_FILE_STATIC_LIBSXMM_CLIENT := $(BINARY_FOLDER_LIB)/libsxmm_client.a
SONAME_FILE_SHARED_LIBSXMM_CLIENT := libsxmm_client.so.$(MAJOR_VERSION)
BINARY_FILE_SHARED_LIBSXMM_CLIENT := $(BINARY_FOLDER_LIB)/libsxmm_client.so.$(MAJOR_VERSION)
MINOR_FILE_SHARED_LIBSXMM_CLIENT  := $(BINARY_FOLDER_LIB)/libsxmm_client.so.$(MINOR_VERSION)
LINK_FILE_SHARED_LIBSXMM_CLIENT   := $(BINARY_FOLDER_LIB)/libsxmm_client.so

BINARY_FILE_STATIC_LIBSXMM_REPORT := $(BINARY_FOLDER_LIB)/libsxmm_report.a
SONAME_FILE_SHARED_LIBSXMM_REPORT := libsxmm_report.so.$(MAJOR_VERSION)
BINARY_FILE_SHARED_LIBSXMM_REPORT := $(BINARY_FOLDER_LIB)/libsxmm_report.so.$(MAJOR_VERSION)
MINOR_FILE_SHARED_LIBSXMM_REPORT  := $(BINARY_FOLDER_LIB)/libsxmm_report.so.$(MINOR_VERSION)
LINK_FILE_SHARED_LIBSXMM_REPORT   := $(BINARY_FOLDER_LIB)/libsxmm_report.so

BINARY_FILE_STATIC_LIBSXMM_UTILS := $(BINARY_FOLDER_LIB)/libsxmm_utils.a
SONAME_FILE_SHARED_LIBSXMM_UTILS := libsxmm_utils.so.$(MAJOR_VERSION)
BINARY_FILE_SHARED_LIBSXMM_UTILS := $(BINARY_FOLDER_LIB)/libsxmm_utils.so.$(MAJOR_VERSION)
MINOR_FILE_SHARED_LIBSXMM_UTILS  := $(BINARY_FOLDER_LIB)/libsxmm_utils.so.$(MINOR_VERSION)
LINK_FILE_SHARED_LIBSXMM_UTILS   := $(BINARY_FOLDER_LIB)/libsxmm_utils.so

BINARY_FILE_EXECUTABLE_SXMM := $(BINARY_FOLDER_BIN)/sxmm