make distclean
export CROSS_COMPILE=../gcc-linaro-4.9.4-2017.01-x86_64_arm-linux-gnueabihf/bin/arm-linux-gnueabihf-
export ARCH=arm

rm -r install_pach/*
make imx_v7_mfg_defconfig
make all -j4
make zImage 
make imx6ull-14x14-evk.dtb
make modules
make headers_install firmware_install modules_install INSTALL_HDR_PATH=install_pach INSTALL_MOD_PATH=install_pach
mkdir install_pach/boot/
cp arch/arm/boot/zImage install_pach-mfg/zImage
cp arch/arm/boot/dts/imx6ull-14x14-evk.dtb install_pach-mfg/imx6ull-14x14-evk.dtb
