#include "main.h"

/**
 * helper_func - prints the binary representation of a number.
 * @n: number
 */
void helper_func(unsigned long int n)
{
	unsigned int bit;

	if (n == 0)
		return;
	bit = n & 1;
	helper_func(n = n >> 1);
	_putchar(bit + '0');
}

/**
 * print_binary - prints the binary representation of a number.
 * @n: number
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	helper_func(n);
}
