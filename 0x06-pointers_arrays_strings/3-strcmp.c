#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0, 15 or -15
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = 0;

	do {
		if (s1[i] == s2[i])
			j = 0;
		else if (s1[i] > s2[i])
			j = s1[i] - s2[i];
		else if (s1[i] < s2[i])
			j = s1[i] - s2[i];

		if (j < 0 || j > 0)
			break;
		i++;

	} while (s1[i] != '\0' || s2[i] != '\0');

	return (j);
}
