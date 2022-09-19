#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: function parameter
 */

void print_rev(char *s)
{
	char j;
	int i, k;

	j = '\0';
	i = 0;

	while (s[i] != j)
		i++;
	for (k = i; k <= 0; k--)
	{
		_putchar(s[k]);
	}
	_putchar('\n');
}
