#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: parameter
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int i, len;

	len = 0;
	i = 0;
	int nullTerminator = '\0';

	while (s[i] != nullTerminator)
	{
		len = len + 1;
		i++;
	}
	return (len);
}
