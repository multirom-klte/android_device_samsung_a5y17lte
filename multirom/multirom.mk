##==================================
##  RECOVERY_VARIANT := multirom
TARGET_RECOVERY_IS_MULTIROM := true

# Still needed by MultiROM Boot Menu
MR_PIXEL_FORMAT := "ABGR_8888"

# Custom Flags
MR_NO_KEXEC := enabled

# MultiROM version
MR_DEVICE_SPECIFIC_VERSION := a

include device/samsung/a5y17lte/multirom/version-info/MR_REC_VERSION.mk

ifeq ($(MR_REC_VERSION),)
MR_REC_VERSION := $(shell date -u +%Y%m%d)-01
endif

BOARD_MKBOOTIMG_ARGS += --board mrom$(MR_REC_VERSION)

# MultiROM config
MR_INPUT_TYPE := type_b
MR_INIT_DEVICES := device/samsung/a5y17lte/multirom/mr_init_devices.c
MR_DPI := xhdpi
MR_DPI_FONT := 340

MR_DEVICE_HOOKS := device/samsung/a5y17lte/multirom/mr_hooks.c
MR_DEVICE_HOOKS_VER := 4

MR_FSTAB := device/samsung/a5y17lte/multirom/mrom.fstab
MR_USE_MROM_FSTAB := true

MR_DEVICE_VARIANTS := a5y17lte a5y17ltexx SM-A520F

# not just yet :(
MR_KEXEC_MEM_MIN := 0x7E400000
