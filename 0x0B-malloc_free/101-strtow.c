#include "main.h"

/**
 * str_parse - extract a word from a string
 * @str: input string
 *
 * Return: extracted word or NULL if no word found
 *
 */

char *str_parse(char *str)
{
	char *word;
	int i, j, k;

	i = 0;
	j = 0;

	while (str[i] == ' ')
		i++;
	while (str[i + j] != ' ' && str[i + j] != '\0')
		j++;
	if (j == 0)
		return (NULL);
	word = malloc(sizeof(char) * (j + 1));
	if (!word)
		return (NULL);
	for (k = 0; k < j; k++)
		word[k] = str[i++];
	word[k] = '\0';

	while (str[i] == ' ')
		i++;
	str = &str[i];

	return (word);
}

/**
 * strtow - split a string into an array of words
 * @str: input string
 *
 * Return: array of words or NULL if invalid input
 *
 */

char **strtow(char *str)
{
	char *word;
	char **newStr;
	int i, j, word_count, word_index;

	if (str == NULL || str[0] == '\0' || str == " ")
	return (NULL);

	word_count = 0;
	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			word_count++;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
		}
		else
			 i++;
	}

	newStr = malloc(sizeof(char *) * (word_count + 1));
	if (newStr == NULL)
		return (NULL);

	word_index = 0;
	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			word = str_parse(&str[i]);
			if (word == NULL)
			{
				for (j = 0; j < word_index; j++)
					free(newStr[j]);
				free(newStr);
				return (NULL);
			}
		newStr[word_index++] = word;

		while (str[i] != ' ' && str[i] != '\0')
		i++;
		}
		else
			i++;
	}

	newStr[word_index] = NULL;

	return (newStr);
}
