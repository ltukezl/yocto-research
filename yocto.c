#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static int __init entry(void)
{
    printk("Hello yocto project from kernel!\n");
    return 0;
}

static void __exit end(void)
{
    printk("yocto unloading\n");
}

module_init(entry);
module_exit(end);
