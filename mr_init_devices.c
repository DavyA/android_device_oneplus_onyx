#include <stdlib.h>

// These are paths to folders in /sys which contain "uevent" file
// need to init this device.
// MultiROM needs to init framebuffer, mmc blocks, input devices,
// some ADB-related stuff and USB drives, if OTG is supported
// You can use * at the end to init this folder and all its subfolders
const char *mr_init_devices[] =
{
    "/sys/class/graphics/fb0",

    "/sys/block/mmcblk0",
    //"/sys/devices/platform/msm_sdcc.1",
    //"/sys/devices/platform/msm_sdcc.1/mmc_host/mmc0",
    //"/sys/devices/platform/msm_sdcc.1/mmc_host/mmc0/mmc0:0001",
    //"/sys/devices/platform/msm_sdcc.1/mmc_host/mmc0/mmc0:0001/block/mmcblk0",
    //"/sys/devices/platform/msm_sdcc.1/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p6",
    //"/sys/devices/platform/msm_sdcc.1/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p23",
    //"/sys/devices/platform/msm_sdcc.1/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p21",

    "/sys/bus/mmc",
    "/sys/bus/mmc/drivers/mmcblk",
    "/sys/bus/sdio/drivers/bcmsdh_sdmmc",
    "/sys/module/mmc_core",
    "/sys/module/mmcblk",

    "/sys/devices/virtual/input*",
    "/sys/devices/virtual/misc/uinput",
    "/sys/devices/platform/msm_pm*",
    "/sys/devices/platform/power",

    // for adb
    //"/sys/class/tty/ptmx",
    //"/dev/block/platform/msm_sdcc.1/by-name/system", //system
    //"/dev/block/platform/msm_sdcc.1/by-name/cache", // /cache
    //"/sys/class/misc/android_adb",
    //"/sys/class/android_usb/android0/f_adb",
    //"/sys/bus/usb",

    // Mount persist and firmware
    "/dev/block/platform/msm_sdcc.1/by-name/persist ", //persist
    "/dev/block/platform/msm_sdcc.1/by-name/modem1", //firmware

    // USB Drive is in here
    //"/sys/devices/platform/msm_hsusb_host*",

    NULL
};