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
	{ 0x79476b7a, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0xe8fce5f7, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x2a43472f, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0x3719162f, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0xb6548c36, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x3cc03229, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xbf199dd2, __VMLINUX_SYMBOL_STR(usb_driver_release_interface) },
	{ 0x3a653123, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0xd341275f, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x2c1d880b, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xfc59e0d0, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x995bc11b, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xdd120d48, __VMLINUX_SYMBOL_STR(usbnet_device_suggests_idle) },
	{ 0x2d5a0e0a, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xd69b9955, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0x7b32d479, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x6f983e91, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x47326bb6, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xf91b12df, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x4edde7c3, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x896479c8, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x8631fd3d, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Cip07in*");

MODULE_INFO(srcversion, "07A97BE75F2F8E124A49096");
