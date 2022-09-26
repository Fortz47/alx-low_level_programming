#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a
 * square matrix of integers.
 * @a: pointer parameter
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int i, x, y;

	x = 0;
	y = 0;

	for (i = 0; i < size; i++)
	{
		x += a[(size * i) + i];
		y += a[(size * (i + 1)) - (i - 1)];
	}
	printf("%d, %d\n", x, y);
}
