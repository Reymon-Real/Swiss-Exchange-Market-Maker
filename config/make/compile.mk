# *******************************
# *** Autor: Reymon Dev       ***
# *** Datum: 23. Juli. 2026   ***
# *** Aktua: 24. Juli. 2026   ***
# *** Lizenz: AGPL-3-or-later ***
# *******************************

# ************************
# *** Static Libraries ***
# ************************

$(BINARY_FILE_STATIC_LIBSXMM_AS): $(OBJECT_FILES_AS)
	@mkdir -p $(dir $@)
	$(AR) $(ARFLAGS) -o $@ $^

$(BINARY_FILE_STATIC_LIBSXMM_CLIENT): $(OBJECT_FILES_CLIENT)
	@mkdir -p $(dir $@)
	$(AR) $(ARFLAGS) -o $@ $^

$(BINARY_FILE_STATIC_LIBSXMM_REPORT): $(OBJECT_FILES_REPORT)
	@mkdir -p $(dir $@)
	$(AR) $(ARFLAGS) -o $@ $^

$(BINARY_FILE_STATIC_LIBSXMM_UTILS): $(OBJECT_FILES_UTILS)
	@mkdir -p $(dir $@)
	$(AR) $(ARFLAGS) -o $@ $^

# ************************
# *** Shared Libraries ***
# ************************

$(BINARY_FILE_SHARED_LIBSXMM_AS): $(OBJECT_FILES_AS)
	@mkdir -p $(dir $@)
	$(CCLD) $(CCLDFLAGS) -shared -Wl,-soname=$(SONAME_FILE_SHARED_LIBSXMM_AS) -o $@ $^ -Wl,--start-group -lm -pthread -lyyjson -lsqlite3 -lTwsSocketClient -Wl,--end-group -Wl,-rpath='$$ORIGIN'

$(MINOR_FILE_SHARED_LIBSXMM_AS): $(BINARY_FILE_SHARED_LIBSXMM_AS)
	@mkdir -p $(dir $@)
	$(LN) $(LNFLAGS) $(notdir $<) $@

$(LINK_FILE_SHARED_LIBSXMM_AS): $(MINOR_FILE_SHARED_LIBSXMM_AS)
	@mkdir -p $(dir $@)
	$(LN) $(LNFLAGS) $(notdir $<) $@

#***

$(BINARY_FILE_SHARED_LIBSXMM_REPORT): $(OBJECT_FILES_REPORT)
	@mkdir -p $(dir $@)
	$(CXXLD) $(CXXLDFLAGS) -shared -Wl,-soname=$(SONAME_FILE_SHARED_LIBSXMM_REPORT) -o $@ $^ -Wl,--start-group -lm -pthread -lyyjson -lsqlite3 -lTwsSocketClient -Wl,--end-group -Wl,-rpath='$$ORIGIN'

$(MINOR_FILE_SHARED_LIBSXMM_REPORT): $(BINARY_FILE_SHARED_LIBSXMM_REPORT)
	@mkdir -p $(dir $@)
	$(LN) $(LNFLAGS) $(notdir $<) $@

$(LINK_FILE_SHARED_LIBSXMM_REPORT): $(MINOR_FILE_SHARED_LIBSXMM_REPORT)
	@mkdir -p $(dir $@)
	$(LN) $(LNFLAGS) $(notdir $<) $@

#****

$(BINARY_FILE_SHARED_LIBSXMM_UTILS): $(OBJECT_FILES_UTILS)
	@mkdir -p $(dir $@)
	$(CCLD) $(CCLDFLAGS) -shared -Wl,-soname=$(SONAME_FILE_SHARED_LIBSXMM_UTILS) -o $@ $^ -Wl,--start-group -lm -pthread -lyyjson -lsqlite3 -lTwsSocketClient -Wl,--end-group -Wl,-rpath='$$ORIGIN'

$(MINOR_FILE_SHARED_LIBSXMM_UTILS): $(BINARY_FILE_SHARED_LIBSXMM_UTILS)
	@mkdir -p $(dir $@)
	$(LN) $(LNFLAGS) $(notdir $<) $@

$(LINK_FILE_SHARED_LIBSXMM_UTILS): $(MINOR_FILE_SHARED_LIBSXMM_UTILS)
	@mkdir -p $(dir $@)
	$(LN) $(LNFLAGS) $(notdir $<) $@

#***

$(BINARY_FILE_SHARED_LIBSXMM_CLIENT): $(OBJECT_FILES_CLIENT)
	@mkdir -p $(dir $@)
	$(CXXLD) $(CXXLDFLAGS) -shared -Wl,-soname=$(SONAME_FILE_SHARED_LIBSXMM_CLIENT) -o $@ $^ -Wl,--start-group -lsxmm_utils -lsxmm_report -lsxmm_as -lm -pthread -lyyjson -lsqlite3 -lTwsSocketClient -Wl,--end-group -Wl,-rpath='$$ORIGIN'

$(MINOR_FILE_SHARED_LIBSXMM_CLIENT): $(BINARY_FILE_SHARED_LIBSXMM_CLIENT)
	@mkdir -p $(dir $@)
	$(LN) $(LNFLAGS) $(notdir $<) $@

$(LINK_FILE_SHARED_LIBSXMM_CLIENT): $(MINOR_FILE_SHARED_LIBSXMM_CLIENT)
	@mkdir -p $(dir $@)
	$(LN) $(LNFLAGS) $(notdir $<) $@

# *******************
# *** Executables ***
# *******************

$(BINARY_FILE_EXECUTABLE_SXMM): $(OBJECT_FILES)
	@mkdir -p $(dir $@)
	$(CXXLD) $(CXXLDFLAGS) -o $@ $^ -Wl,--start-group -lsxmm_client -lsxmm_utils -lsxmm_report -lsxmm_as -lm -pthread -lyyjson -lsqlite3 -lTwsSocketClient -Wl,--end-group -Wl,-rpath='$$ORIGIN:$$ORIGIN/../lib'