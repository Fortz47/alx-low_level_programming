#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: array of int
 * @size: size of array
 * @cmp: pointer to function compares values
 *
 * Return: index of the first element for which the cmp
 * function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
