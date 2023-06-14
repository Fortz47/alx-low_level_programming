#include "main.h"

/**
 * _strlen - cal lenght of a string
 * @str: string
 *
 * Return: lenght of string
 *
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

/**
 * _strcat - concatenates two strings
 * @dest: destinstion string
 * @src: source string
 * Return: appended string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: argument count
 * @av: array of arguments
 *
 * Return: pointer to new string or Null if failed
 *
 */

char *argstostr(int ac, char **av)
{
	int i, Tlenght;
	char *newStr;

	if (ac == 0 || !av)
		return (NULL);

	for (i = 0; i < ac; i++)
		Tlenght += _strlen(av[i]);

	Tlenght += ac + 1;
	newStr = malloc(sizeof(char) * Tlenght);
	if (!newStr)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		if (i)
			_strcat(newStr, "\n");
		_strcat(newStr, av[i]);
	}
	_strcat(newStr, "\n");
	return (newStr);
}
