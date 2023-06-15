#include "main.h"

/**
 * _strlen - cal lenght of a string
 * @str: string
 *
 * Return: lenght of string
 *
 */

unsigned int _strlen(char *str)
{
	unsigned int i = 0;

	while (str[i])
		i++;
	return (i);
}

/**
 * string_nconcat - concatenates two strings.
 * @s1: string one
 * @s2: string two
 * @n: number of byte from s2 to concatenate
 *
 * Return: pointer to a newly allocated space in memory
 * containing s1 + n byte of s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, len;
	unsigned int j;
	char *s3;

	i = 0;
	j = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	if (n > _strlen(s2))
		n = _strlen(s2);
	len = _strlen(s1) + n + 1;
	s3 = malloc(sizeof(char) * len);
	if (!s3)
		return (NULL);
	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0' && j < n)
	{
		s3[i] = s2[j];
		i++;
		j++;
	}
	s3[i] = '\0';
	return (s3);
}
