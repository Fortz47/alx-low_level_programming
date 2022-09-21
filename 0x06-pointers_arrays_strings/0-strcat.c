#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destinstion string
 * @src: source string
 * Return: appended string
 */

char *_strcat(char *dest, char *src)
{
	int i, k, m;
	int dest_append, src_len, len;

	for (i = 0; dest[i] != '\0'; i++)
	dest_append = i + 1;

	m = 0;
	k = dest_append;
	while (src[m] != '\0')
	{
		dest[k] = src[m];
		m++;
		k++;
	}
	dest[k] = '\0';

	return (dest);
}
