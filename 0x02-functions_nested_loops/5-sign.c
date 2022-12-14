#include "main.h"

/**
 * print_sign - entry point
 * @n: function parameter
 * Return: 0 if n is zero, 1 if n is +ve
 * -1 if n -ve
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
