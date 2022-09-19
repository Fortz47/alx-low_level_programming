#include "main.h"

/**
 * _puts - prints a string
 * @str: function parameter
 */

void _puts(char *str)
{
	int i;

	i = 0;

	while (i != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
