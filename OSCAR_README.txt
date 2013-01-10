1. How to build Kernel source of Pantech8010
	a.	Firstly Get Toolchain from android git server and etc ¡¦
        GCC correct version is arm-eabi-4.4.3
		
	b.	export CROSS_COMPILE=../prebuilt/linux-x86/toolchain/arm-eabi-4.4.3/bin/arm-eabi-
	
	c.	make CONFIG_DEBUG_SECTION_MISMATCH=y ARCH=arm msm8960_oscar_tp20_defconfig
		make CONFIG_DEBUG_SECTION_MISMATCH=y ARCH=arm
	
2.	Kernel Image Location is arch/arm/boot/zImage
	Module Image Location is drivers/*/*.ko
	
3.	How to Clean Kernel object files
	a.	make ARCH=arm clean
