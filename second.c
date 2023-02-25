#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");

static int div = 25;
static int dis = 4;

static int __init find_quo_rem_init(void)
{
	int quo = div / dis;
	int rem = div % dis;
	printk(KERN_INFO "The quotient and remainder of %d and %d are %d and %d\n", div, dis, quo, rem);
	return 0;
}
static void __exit find_quo_rem_exit(void)
{
	printk(KERN_INFO "Exiting module\n");
}

module_init(find_quo_rem_init);
module_exit(find_quo_rem_exit);
