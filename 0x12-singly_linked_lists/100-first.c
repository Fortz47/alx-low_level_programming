#include <stdio.h>

/**
 * smth - prints a string before the main function
 * is executed
 */

void smth(void) __attribute__ ((constructor));
void smth(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
