# *******************************
# *** Autor: Reymon Dev       ***
# *** Datum: 23. Juli. 2026   ***
# *** Aktua: 23. Juli. 2026   ***
# *** Lizenz: AGPL-3-or-later ***
# *******************************

# *************
# *** Shell ***
# *************

include config/make/shell.mk

# *******************
# *** Environment ***
# *******************

include config/make/environment.mk

# ***************
# *** Project ***
# ***************

include config/make/project.mk

# *******************
# *** Directories ***
# *******************

include config/make/folder.mk

# *************
# *** Files ***
# *************

include config/make/file.mk
include config/make/find.mk

# *************
# *** Tools ***
# *************

include config/make/tool.mk
include config/make/flag.mk

# *************
# *** Rules ***
# *************

include config/make/phony.mk
include config/make/rule.mk
include config/make/compile.mk
include config/make/pattern.mk