#include<stdio.h>

/**
 * myStartupFun - Apply the constructor attribute
 */
void myStartupFun(void) __attribute__ ((constructor));

/**
 * myStartupFun - appilication of myStartupFun
 */
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
