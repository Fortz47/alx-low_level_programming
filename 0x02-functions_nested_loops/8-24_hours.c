#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * @void: returns nothing
 */
void jack_bauer(void)
{
	int i, j;

	i = 0;
	j = 0;
	while (i < 24)
	{
		while (j < 60)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			j++;
			_putchar('\n');
		}
		i++;
	}
}
