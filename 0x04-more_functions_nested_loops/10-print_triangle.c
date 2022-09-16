#include "main.h"

/**
 * print_triangle - prints a trianle followed by
 * a new line
 * @size: function parameter
 */
void print_triangle(int size)
{
	int i, j;

	i = 1;
	if (size <= 0)
		_putchar('\n');
	else
	{
		while (i <= size)
		{
			for (j = i; j < size; j++)
				_putchar('_');
			for (j = 1; j <= i; j++)
				_putchar('#');
		}
			i++;
			_putchar('\n');
	}
}
