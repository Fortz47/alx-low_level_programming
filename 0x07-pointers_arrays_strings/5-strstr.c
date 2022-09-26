#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, ptr;

	i = 0;
	j = 0;
	ptr = 0;

	for (; haystack[j] != '\0';)
	{
		if (needle[i] == haystack[j])
		{
			i++;
			j++;

			if (needle[i] == '\0')
			{
				j -= 1;
				return (haystack + (j - ptr));
			}
			else
			{
				ptr++;
				continue;
			}
		}
		ptr = 0;
		i = 0;
		j++;
	}
	return (0);

}
