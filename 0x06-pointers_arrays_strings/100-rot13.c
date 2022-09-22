#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string to encode;
 * Return: resulting string
 */

char *rot13(char *s)
{
	int i, j;

	char *a = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char *b = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	i = 0;

	while (s[i] != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if (s[i] == a[j])
				s[i] = b[j];
		}
		i++;
	}
	return (s);
}
