/*
 * l2filter
 * author: lo <lodevil@live.cn>
 * 
 */

#include <linux/init.h>
#include <linux/netfilter.h>
#include "filter.h"

static int __init l2filter_init (void) {
    filter_init();
    printk(KERN_INFO "l2filter inited\n");
    return 0;
}

static void __exit l2filter_exit(void) {
    printk(KERN_INFO "l2filter exit\n");
}

module_init(l2filter_init);
module_exit(l2filter_exit);
MODULE_LICENSE("Dual BSD/GPL");