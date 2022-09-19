#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: function parameter
 */

void print_rev(char *s)
{
	 j;

	j = '\0';

	do {
		j--;
		_putchar(s[j]);
	} while (s[j] >= 0);
	_putchar('\n');
}
