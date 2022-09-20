#include "main.h"

/**
 * puts2 - prints every other character of a string, starting
 * with the first character, followed by a new line
 * @str: function parameter
 */

void puts2(char *str)
{
	int i;

	i = 1;
	if (*str != "")
	{
		_putchar(str[0]);
		while (str[i] != '\0')
		{
			if (i % 2 == 0)
				_putchar(str[i]);
			i++;
		}
	}
	_putchar('\n');
}
