# *******************************
# *** Autor: Reymon Dev       ***
# *** Datum: 23. Juli. 2026   ***
# *** Aktua: 23. Juli. 2026   ***
# *** Lizenz: AGPL-3-or-later ***
# *******************************

$(OBJECT_FOLDER)/%.cpp.o: $(SOURCE_FOLDER)/%.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJECT_FOLDER_AS)/%.c.o: $(SOURCE_FOLDER_AS)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJECT_FOLDER_CLIENT)/%.cpp.o: $(SOURCE_FOLDER_CLIENT)/%.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJECT_FOLDER_REPORT)/%.cpp.o: $(SOURCE_FOLDER_REPORT)/%.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJECT_FOLDER_UTILS)/%.c.o: $(SOURCE_FOLDER_UTILS)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

-include $(shell find $(BUILDTYPE) -type f -name '*.d')