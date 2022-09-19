#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: parameter 1
 * @b: parameter 2
 */

void swap_int(int *a, int *b)
{
	*a = &b;
	*b = &a;
}
