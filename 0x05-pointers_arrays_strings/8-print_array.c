#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 * @a: parameter 1
 * @n: parameter 2
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		if (i == 0)
			printf("%d", a[0]);
		else
			printf(", %d", a[i]);
		i++;
	}
	putchar('\n');
}
