#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destinstion string
 * @src: source string
 * Return: appended string
 */

char *_strcat(char *dest, char *src)
{
	int i, j, k, m, z;
	int dest_append, src_len, len;
	char dest_appended[];

	for (i = 0; dest[i] != '\0'; i++)
	dest_append = i;

	for (j = 0; src[j] != '\0'; j++)
	src_len = j;
	len = dest_append + src_len;

	for (z = 0; dest[z] != '\0'; z++)
		dest_appended[z] = dest[z];

	m = 0;
	k = dest_append + 1;

	while ((k <= len) && (src[m] != '\0'))
	{
		dest_appended[k] = src[m];
		m++;
		k++;
	}
	dest_appended[k] = '\0';

	return (dest_appended);
}
