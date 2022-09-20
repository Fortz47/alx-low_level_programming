#include "main.h"

/**
 * puts_half - that prints half of a string, followed by a new line.
 * @str: function parameter
 */

void puts_half(char *str)
{
	int i, len, n;

	i = 0;

	while (str[i] != '\0')
		i++;

	len = i - 1;

	if ((len / 2) != 0)
	{
		n = (len - 1) / 2;
		for (j = n + 2; j <= len; j++)
			_putchar(str[j]);
	}
	else if (len / 2 == 0)
	{
		n = (len / 2);
		for (j = n + 1; j <= len; j++)
			_putchar(str[j]);
	}

	_putchar('\n');
}
