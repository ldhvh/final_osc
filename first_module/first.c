#include <linux/init.h>
#include <linux/module.h>

static int __init hello_init(void)
{
	printk(KERN_INFO "Hello world!\n");
	return 0;
}

static void __exit bye_init(void)
{
	printk(KERN_INFO "Goodbye world!\n");
}

module_init(hello_init);
module_exit(bye_init);

MODULE_LICENSE("GPL");
