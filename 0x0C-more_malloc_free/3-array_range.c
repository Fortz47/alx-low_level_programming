#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: minimum
 * @max: maximum
 *
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int len, _min, i;

	if (min > max)
		return (NULL);

	_min = min;
	len = 0;
	while (min <= max)
	{
		len++;
		_min++;
	}
	ptr = malloc(sizeof(int) * len);
	if (!ptr)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
