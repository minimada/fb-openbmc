FILESEXTRAPATHS:prepend := "${THISDIR}/6.6:"

#
# Patches to be upstreamed soon.
#
SRC_URI:append = " \
    file://0001-ARM-dts-aspeed-Remove-eMMC-from-ast2600-facebook-net.patch \
    file://0002-ARM-dts-aspeed-elbert-Enable-eMMC-device.patch \
    file://0003-ARM-dts-aspeed-fuji-Enable-eMMC-device.patch \
    file://0004-ARM-dts-aspeed-Add-Facebook-fblite-r1-BMC.patch \
"

#
# JFFS2 patches to workaround kernel panic.
# Highly recommended for all the OpenBMC platforms running JFFS2.
#
SRC_URI:append = " \
    file://0100-jffs2-kill-garbage-collect-thread-when-filesystem-is.patch \
    file://0101-jffs2-suppress-jffs2-messages-when-reading-inode.patch \
"

#
# Aspeed OTP patch used by multiple OpenBMC platforms for AST2600 ABR feature.
#
SRC_URI:append = " \
    file://0102-drivers-misc-Add-Aspeed-OTP-control-register.patch \
"

#
# JTAG patches.
# Used by multiple OpenBMC platforms for firmware upgrade.
#
SRC_URI:append = " \
    file://0120-drivers-jtag-Add-JTAG-core-driver.patch \
    file://0121-dt-binding-jtag-Aspeed-2400-and-2500-series.patch \
    file://0122-Add-Aspeed-SoC-24xx-and-25xx-families-JTAG-master-dr.patch \
    file://0123-jtag-aspeed-support-sysfs-interface.patch \
    file://0124-jtag-support-driver-specific-ioctl-commands.patch \
    file://0125-jtag-aspeed-support-JTAG_RUN_CYCLE-ioctl-command.patch \
    file://0126-jtag-aspeed-add-AST2600-support.patch \
    file://0127-Documentation-jtag-Add-ABI-documentation.patch \
    file://0128-Documentation-jtag-Add-JTAG-core-driver-ioctl-number.patch \
    file://0129-drivers-jtag-Add-JTAG-core-driver-Maintainers.patch \
    file://0130-fixup-jtag-patch-series.patch \
    file://0131-ARM-dts-aspeed-g6-add-jtag-controllers.patch \
    file://0132-ARM-dts-aspeed-g5-add-jtag-controller.patch \
"

#
# SPI patches.
# "0150-spi-aspeed-add-shutdown-path..." is required for all the AST25XX
# platforms.
# "0151-spi-add-user-mode..." is used by several FBOSS platforms to access
# flashes using spidev/flashrom.
#
SRC_URI:append = " \
    file://0150-spi-aspeed-add-shutdown-path-for-AST25XX-SPI-control.patch \
    file://0151-spi-add-user-mode-aspeed-spi-driver.patch \
"

#
# I2C patches used by multiple OpenBMC platforms.
#
SRC_URI:append = " \
    file://0160-aspeed-i2c-add-clock-duty-cycle-property.patch \
    file://0161-dt-bindings-aspeed-i2c-add-properties-for-setting-i2.patch \
    file://0162-i2c-aspeed-update-ast2400-timing-settings.patch \
    file://0163-i2c-add-a-slave-backend-to-receive-and-queue-message.patch \
    file://0164-i2c-aspeed-add-i2c-slave-inactive-timeout-support.patch \
"

#
# PWM patches used by multiple OpenBMC platforms.
#
SRC_URI:append = " \
    file://0165-aspeed-g6.dtsi-update-for-PWM-and-TACH-driver.patch \
"

#
# NCSI patches used by multiple OpenBMC platforms.
#
SRC_URI:append = " \
    file://0170-net-ncsi-Add-NC-SI-1.2-Get-MC-MAC-Address-command.patch \
    file://0171-meta-facebook-common-add-pcc-config.patch \
    file://0172-drivers-watchdog-ast2600-support-bootstatus.patch \
    file://0173-NCSI-Add-propety-no-channel-monitor-and-start-redo-p.patch \
    file://0174-net-ncsi-specify-maximum-package-and-channel-to-prob.patch \
"

#
# eMMC patch used by FBOSS OpenBMC platforms.
#
SRC_URI:append = " \
    file://0200-mmc-sdhci-of-aspeed-add-skip_probe-module-parameter.patch \
"

#
# Aspeed Soc drivers used by multiple OpenBMC platforms.
#
SRC_URI:append = " \
    file://0201-soc-aspeed-Add-Post-Code-Control.patch \
"

#
# Device drvier for OpenBMC platforms.
#
SRC_URI:append = " \
    file://0300-To-support-MCP9600-temperature-driver.patch \
    file://0301-To-support-LTC4286-LTC4287-driver.patch \
    file://0302-Kernel6v5-Support-apml-driver.patch \
    file://0303-hwmon-Add-driver-for-Astera-Labs-PT5161L-retimer.patch \
"

#
# Enable JTAG in "fblite-r1" dts (patch #0005) to support the recovery
# path (programming CPLD) in OpenBMC.
#
SRC_URI:append = " \
    file://0310-ARM-dts-aspeed-Enable-jtag1-in-fblite-r1-dts.patch \
"

SRC_URI:append = " \
    file://0502-Revert-linux-kernel-patch-usb-gadget-f_ecm-Add-suspe.patch \
"
