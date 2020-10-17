# Adaptation from u-boot-common_${PV}.inc

HOMEPAGE = "http://www.denx.de/wiki/U-Boot/WebHome"
SECTION = "bootloaders"

LICENSE = "GPLv2+"
LIC_FILES_CHKSUM = "file://Licenses/README;md5=30503fd321432fc713238f582193b78e"

DEPENDS += "dtc-native bc-native"
DEPENDS += "flex-native bison-native"

COMPATIBLE_MACHINE = "(stm32mpcommon)"

SRC_URI = "git://github.com/shiratech-solutions/stinger96-uboot.git;protocol=https"
SRCREV  = "f65cbfb68521c08949c21f813928694967dc8bf3"

U_BOOT_VERSION = "2018.11"
PV = "${U_BOOT_VERSION}"

S = "${WORKDIR}/git"
