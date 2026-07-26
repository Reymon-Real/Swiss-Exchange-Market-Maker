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

# ******************
# *** Set Config ***
# ******************

case $ARCH in

	--x86_64)
		BUILDDIR="./build/meson/x86_64"
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

ninja -v -C "$BUILDDIR" $@