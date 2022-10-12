#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of integers to be searched
 * @size: size of array
 * @cmp: pointer to the function used to compare values
 *
 * Return: returns the index of the first element for which the cmp
 * function does not return 0, if no element matches, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	}

	return (-1);
}
