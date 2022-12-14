#include "main.h"
#include <stdlib.h>

/**
 * _strlen - returns the lenght of a string
 * @string: pointer to a string
 *
 * Return: lenght of string
 */

int _strlen(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
		continue;
	return (i + 1);
}

/**
 * _strdup - returns a pointer to the duplicate of a string
 * @str: source string
 *
 * Return: pointer to duplicated string
 */

char *_strdup(char *str)
{
	char *p;
	int i;

	int lenght = _strlen(str);

	if (str == NULL)
		return (NULL);

	p = malloc(sizeof(*p) * lenght);

	if (p == NULL)
		return (NULL);

	i = 0;

	while ((p[i] = str[i]) != '\0')
		i++;

	return (p);
}
