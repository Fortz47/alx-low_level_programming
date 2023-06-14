#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string parameter
 *
 * Return: pointer to new string or Null
 *
 */

char *_strdup(char *str)
{
	char *arr;
	int i, len;

	len = 0;
	while (str[len])
		len++;

	arr = malloc(len + 1);
	if (str == NULL || !arr)
		return (NULL);
	i = 0;
	while (str[i])
	{
		arr[i] = str[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
