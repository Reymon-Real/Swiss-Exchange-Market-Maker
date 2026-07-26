# *******************************
# *** Autor: Reymon Dev       ***
# *** Datum: 11. Juli. 2026   ***
# *** Aktua: 11. Juli, 2026   ***
# *** Lizenz: AGPL-3-or-later ***
# *******************************

# *****************
# *** Variables ***
# *****************

ARCH="$1"
PREFIX="$(pwd)/sxmm-bin"

# ******************
# *** Set Config ***
# ******************

case $ARCH in

	--x86_64)
		BUILDDIR="./build/meson/x86_64"
		NATIVE_FILE="./config/meson/x86_64.meson"
		shift
		;;
	
	*)
		echo "Select your native architrecture"
		exit 0
		;;
esac

# *************
# *** Logic ***
# *************

meson setup "$BUILDDIR" $@ --prefix="$PREFIX" --native-file "$NATIVE_FILE"