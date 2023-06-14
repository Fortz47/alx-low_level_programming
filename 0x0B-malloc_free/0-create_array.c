#include "main.h"

/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char
 * @size: size of array
 * @c: character to initialize array
 *
 * Return: pointer to array or Null if failed
 *
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(sizeof(char) * size);
	if (!arr || size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
