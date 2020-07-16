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
	{ 0x208614a6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xa1e43714, __VMLINUX_SYMBOL_STR(usb_gstrings_attach) },
	{ 0xa097548, __VMLINUX_SYMBOL_STR(usb_free_all_descriptors) },
	{ 0x4a8e9fb8, __VMLINUX_SYMBOL_STR(gether_get_qmult) },
	{ 0xf901fd43, __VMLINUX_SYMBOL_STR(gether_setup_name_default) },
	{ 0xbb7930f0, __VMLINUX_SYMBOL_STR(gether_get_host_addr_cdc) },
	{ 0x49fcab7e, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xccaca8ce, __VMLINUX_SYMBOL_STR(gether_get_ifname) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x8878cfa6, __VMLINUX_SYMBOL_STR(gether_cleanup) },
	{ 0xd3b2fafa, __VMLINUX_SYMBOL_STR(usb_function_unregister) },
	{ 0x17c8db49, __VMLINUX_SYMBOL_STR(gether_set_host_addr) },
	{ 0xfa58f556, __VMLINUX_SYMBOL_STR(gether_get_dev_addr) },
	{ 0x247c5f5f, __VMLINUX_SYMBOL_STR(gether_connect) },
	{ 0xb3e09e9a, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x5a5a94a6, __VMLINUX_SYMBOL_STR(kstrtou8) },
	{ 0xef9f22bb, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf3bb59b5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x4ed6d71e, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig) },
	{ 0x993ec919, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x70d10345, __VMLINUX_SYMBOL_STR(gether_set_gadget) },
	{ 0x7267eeee, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xe46a7355, __VMLINUX_SYMBOL_STR(gether_get_host_addr) },
	{ 0x8f1d669d, __VMLINUX_SYMBOL_STR(config_group_init_type_name) },
	{ 0x47c0d7a0, __VMLINUX_SYMBOL_STR(gether_set_qmult) },
	{ 0x2a62b8b4, __VMLINUX_SYMBOL_STR(usb_function_register) },
	{ 0x5fd8ca90, __VMLINUX_SYMBOL_STR(gether_register_netdev) },
	{ 0xcca6874c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xd85b6087, __VMLINUX_SYMBOL_STR(gether_set_dev_addr) },
	{ 0x18c4f9c2, __VMLINUX_SYMBOL_STR(config_ep_by_speed) },
	{ 0x40dcb149, __VMLINUX_SYMBOL_STR(gether_disconnect) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd9f674dd, __VMLINUX_SYMBOL_STR(usb_assign_descriptors) },
	{ 0x8ac51720, __VMLINUX_SYMBOL_STR(usb_interface_id) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,u_ether,configfs";


MODULE_INFO(srcversion, "0107991EEC65ED71DE71DB4");
