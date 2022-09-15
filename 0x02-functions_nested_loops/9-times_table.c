#include "main.h"

/**
 * times_table - check the code
 * @void: takes no argument
 * Return: void.
 */

void times_table(void)
{
	int i, n, mul;
	i = 0;

	while (i < 10)
	{
		for (n = 0 ; n < 10; n++)
		{
			mul = i * n;
			if (n == 0)
				_putchar(mul + '0');
			if (mul < 10 && n != 0)
			{
				_putchar(',');
				_putchar(32);
				_putchar(32);
				_putchar(mul + '0');
			}
			else if (mul >=10 && mul <= 81)
			{
				_putchar(',');
				_putchar(32);
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
			}
		}
		i++;
		_putchar('\n');
	}
}
