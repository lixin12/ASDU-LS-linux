#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xfa985410, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x60ee9172, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x2d6d2d8c, __VMLINUX_SYMBOL_STR(usb_serial_deregister_drivers) },
	{ 0xf30f0077, __VMLINUX_SYMBOL_STR(usb_serial_register_drivers) },
	{ 0xe8ea1a3a, __VMLINUX_SYMBOL_STR(usb_serial_suspend) },
	{ 0x1c063d41, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0xc8c132fe, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x6d662533, __VMLINUX_SYMBOL_STR(_find_first_bit_le) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x76e72726, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x31a39f41, __VMLINUX_SYMBOL_STR(usb_serial_generic_open) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v05C6p920Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05C6p920Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05C6p1E0Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1E0Ep9001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "7BF9C73286D531B618ABBD8");
