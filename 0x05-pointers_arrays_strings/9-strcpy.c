#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest
 * @dest: function parameter 1
 * @src: function parameter 2
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, j;

	dest[0] = '\0';

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	j = i + 1;
	dest[j] = '\0';
	return (dest);
}
