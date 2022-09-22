#include "main.h"

/**
 * cap_string - capitalize a string
 * @s: string
 * Return: pointer to capitalized string
 */

char *cap_string(char *s)
{
	int i, k;

	int separator[14] = {9, 32, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	i = 0;

	while (s[i] != '\0')
	{
		if (i == 0 && s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;

		for (k = 0; k < 13; k++)
		{
			if (s[i] == separator[k])
			{
				if (s[i + 1] >= 97 && s[i + 1] <= 122)
					s[i + 1] -= 32;
			}
		}
		i++;
	}
	return (s);
}
