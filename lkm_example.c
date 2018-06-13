/*
 *
 *
 *  Author: Feng Li (fengggli@yahoo.com)
 */
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Feng Li");
MODULE_DESCRIPTION("A simple module to test travis build");
MODULE_VERSION("0.01");

static int __init lkm_example_init(void){
  printk(KERN_INFO "hello world\n");
  return 0;
}


static void __exit lkm_example_exit(void){
  printk(KERN_INFO "bye!\n");
}

module_init(lkm_example_init);
module_exit(lkm_example_exit);

