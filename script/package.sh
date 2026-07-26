# *******************************
# *** Autor: Reymon Dev       ***
# *** Datum: 10. Juli. 2026   ***
# *** Aktua: 10. Juli, 2026   ***
# *** Lizenz: AGPL-3-or-later ***
# *******************************

# ************************
# *** Global Variables ***
# ************************

ARCH="$1"
DISTRO="$2"
PREFIX="$(pwd)/sxmm"

# *****************************
# *** Architecture Settings ***
# *****************************

case $ARCH in

	--x86_64)
		ARCH_CPU=amd64
		BUILDDIR="./build/meson/x86_64"
		;;

	*)
		echo "Don't support architecture"
		echo "List of architectures supported"
		echo "--x86_64" \n "--aarch64"
		exit 0
		;;

esac

# **************************
# *** Config Distro File ***
# **************************

case $DISTRO in

	--debian)
		CONFIG_FILE="
			Package: sxmm
			Version: 1.0.0
			Architecture: $ARCH_CPU
			Essential: no
			Priority: optional
			Depends: yyjson;sqlite3
			Maintainer: Reymon Dev
			Description: email: contact@reymon.dev
		"
		;;

	*)
		echo "Don't support distro"
		echo "List of distros supported"
		echo "Debian"
		exit 0
		;;

esac

# **********************
# *** Create Package ***
# **********************

meson install -C "$BUILDDIR"