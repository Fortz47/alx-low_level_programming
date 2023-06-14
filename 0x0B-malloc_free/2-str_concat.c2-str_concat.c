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
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to new string or Null if failed
 *
 */

char *str_concat(char *s1, char *s2)
{
	char *arr;
	int i, j;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	arr = malloc(_strlen(s1) + _strlen(s2) + 1);
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		arr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		arr[i] = s2[j];
		i++;
		j++;
	}
	arr[i] = '\0';
	return (arr);
}
