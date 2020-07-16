make distclean
export CROSS_COMPILE=../gcc-linaro-4.9.4-2017.01-x86_64_arm-linux-gnueabihf/bin/arm-linux-gnueabihf-
export ARCH=arm
make imx_v7_defconfig
make menuconfig

# First compile this file
