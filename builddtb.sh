make distclean
export CROSS_COMPILE=../gcc-linaro-4.9.4-2017.01-x86_64_arm-linux-gnueabihf/bin/arm-linux-gnueabihf-
export ARCH=arm

make imx_v7_defconfig
#make imx_v7_mfg_defconfig
make imx6ull-14x14-evk.dtb
cp arch/arm/boot/dts/imx6ull-14x14-evk.dtb install_pach/boot/imx6ull-14x14-evk.dtb 
# cp arch/arm/boot/dts/imx6ul-asdu-ls.dtb /home/hy/tftproot/imx6ul-asdu-ls.dtb  
