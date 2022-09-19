#include "main.h"

/**
 * print_rev - reverse a string
 * @s: function parameter
 */

void rev_string(char *s)
{
	char j, tmp;
	int i, k, len;

	j = '\0';
	i = 0;
	len = 0;

	while (s[i] != j)
		i++;
	len = i - 1;
	for (k = 0; k < i / 2; k++)
	{
		tmp = s[k];
		s[k] = s[len];
		s[len--] = tmp;
	}
}
