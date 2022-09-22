#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destinstion string
 * @src: source string
 * Return: appended string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	while (dest[i] != '\0')
		i++;

	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
