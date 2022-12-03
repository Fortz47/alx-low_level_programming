#include  "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number
 */

void print_binary(unsigned long int n)
{
	unsigned int i, flag = 0,k;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	k = sizeof(n) * 8 - 1;

	for (i = 1 << k; i > 0; i = i >> 1)
	{
		if (n & i)
		{
			_putchar('1');
			flag = 1;
		}
		else
		{
			if (flag)
				_putchar('0');
		}
	}
}
