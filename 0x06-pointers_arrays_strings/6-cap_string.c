#include "main.h"

/**
 * cap_string - capitalize a string
 * @s: string
 * Return: pointer to capitalized string
 */

char *cap_string(char *s)
{
	int i, j, k;

	int separator[14] = {9, 32, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	i = 0;

	while (s[i] != '\0')
	{
		if (i == 0 && s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
		
		for (k = 0; k < 14; k++)
		{
			if (s[i] == separator[k])
			{
				for (j = i + 1;; j++)
				{
					if (s[j] >= 97 && s[j] <= 122)
					{
						s[j] = s[j] - 32;
						break;
					}
					else if (s[j] >= 65 && s[j] <= 90)
						break;
					else if (s[j] >= 48 && s[j] <= 57)
						break;
				}
			}
		}
		i++;
	}
	return (s);
}
