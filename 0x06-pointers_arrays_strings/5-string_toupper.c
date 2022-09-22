#include "main.h"

/**
 * string_toupper - converts lowercase to uppercase
 * @s: string
 * Return: Uppercase string
 */

char *string_toupper(char *s)
{
	int i, j, k;
	char upper[27];

	i = 0;
	j = 0;

	for (k = 'A'; k <= 'Z'; k++)
	{
		*(upper + i) = k;
		i++;
	}

	while (s[j] != '\0')
	{
		if (s[j] >= 'a' && s[j] <= 'z')
		{
			i = 0;
			for (k = 'a'; k <= 'z'; k++)
			{
				if (s[j] == k)
					break;
				i++;
			}
			s[j] = upper[i];
		}

		j++;
	}
	return (s);
}
