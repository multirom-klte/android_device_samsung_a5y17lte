#include <stdlib.h>

// These are paths to folders in /sys which contain "uevent" file
// need to init this device.
// MultiROM needs to init framebuffer, mmc blocks, input devices,
// some ADB-related stuff and USB drives, if OTG is supported
// You can use * at the end to init this folder and all its subfolders
const char *mr_init_devices[] =
{
	// Framebuffer
	"/sys/class/graphics/fb0",
	"/sys/class/graphics/fb1",
	"/sys/class/graphics/fb2",

	// EMMC stuff
	"/sys/block/mmcblk0",
	"/sys/devices/13540000.dwmmc0",
	"/sys/devices/13540000.dwmmc0*",
	"/sys/devices/13540000.dwmmc0/mmc_host/mmc0",
	"/sys/devices/13540000.dwmmc0/mmc_host/mmc0/mmc0:0001",
	"/sys/devices/13540000.dwmmc0/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0*",
	"/sys/bus/mmc",
	"/sys/bus/mmc/drivers/mmcblk",
	"/sys/bus/sdio/drivers/bcmsdh_sdmmc",
	"/sys/module/mmc_core",
	"/sys/module/mmcblk",

	// Input stuff
	"/sys/class/input*",
	"/sys/class/misc/uinput",
	"/sys/class/sec/sec_key*",
	"/sys/class/sec/sec_touchkey*",
	"/sys/class/sec/sec_touchscreen*",
	"/sys/devices/gpio_keys/input/input*",
	"/sys/devices/10610000.hsi2c/i2c-0/0-a004/input*",
	"/sys/devices/13890000.i2c/i2c-9/9-0020/input*",
	"/sys/devices/i2c@20/i2c-6/6-0020/input*",
	"/sys/devices/virtual/input*",
	"/sys/devices/virtual/misc/uinput",
	"/sys/devices/virtual/sec/sec_key*",
	"/sys/devices/virtual/sec/sec_touchkey*",
	"/sys/module/uinput",

	// for adb
	"/sys/class/tty/ptmx",
	"/sys/class/misc/android_adb",
	"/sys/class/android_usb/android0/f_adb",
	"/sys/class/android_usb/android0/f_ffs/aliases",
	"/sys/bus/usb",

	// MicroSD card
	"/sys/block/mmcblk1",
	"/sys/devices/platform/dw_mmc*",

	// USB Drive & USB-OTG is in here
	"/sys/module/xhci_hcd*",
	"/sys/devices/platform/s5p-xhci*",

	NULL
};
