#include "main.h"
#include <stdlib>

/**
 * create_array - creates an array of chars and
 * initialises it with a specific char.
 * @size: size of array
 * @c: character to initialise array with
 *
 * Return: pointer to the array or Null if it fails
 *
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	a = malloc(sizeof(char) * size);

	if (a == NULL)
		return (0);

	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;

	/* a[i + 1] = '\0';*/

	return (a);
}
