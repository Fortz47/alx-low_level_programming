#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 * Return: encoded string
 */

char *leet(char *s)
{
	int i, j;

	char lower[6] = {'a', 'e', 'o', 't', 'l'};
	char upper[6] = {'A', 'E', 'O', 'T', 'L'};
	int encode[6] = {52, 51, 48, 55, 49};

	i = 0;

	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == lower[j] || s[i] == upper[j])
				s[i] = encode[j];
		}
		i++;
	}
	return (s);
}
