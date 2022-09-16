#include "main.h"

/**
 * print_times_table - prints n times table starting with 0
 * @n: function parameter
 */
void print_times_table(int n)
{
	int i, j, mul;

	i = 0;
	if (n >= 0 && n < 16)
	{
		while (i <= n)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				mul = i * j;
				if (mul < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(mul + '0');
				}
				else if (mul >= 10 && mul < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((mul / 10) + '0');
					_putchar((mul % 10) + '0');
				}
				else if (mul >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((mul / 100) + '0');
					_putchar(((mul / 10) % 10) + '0');
					_putchar((mul % 10) + '0');
				}
			}
			i++;
			_putchar('\n');
		}
	}
}
