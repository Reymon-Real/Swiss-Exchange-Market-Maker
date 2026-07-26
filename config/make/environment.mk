# *******************************
# *** Autor: Reymon Dev       ***
# *** Datum: 23. Juli. 2026   ***
# *** Aktua: 23. Juli. 2026   ***
# *** Lizenz: AGPL-3-or-later ***
# *******************************

# *****************************
# *** Environment Variables ***
# *****************************

export C_INCLUDE_PATH     := include
export CPLUS_INCLUDE_PATH := include:/usr/local/include/IBKR/TwsSocketClient/protobufUnix

# **********************
# *** Define Targets ***
# **********************

ifdef TARGET

TGT := $(TARGET)

else ifndef TGT

TGT := x86_64

endif

# *****************
# *** Buildtype ***
# *****************

ifndef buildtype

buildtype := debug

endif