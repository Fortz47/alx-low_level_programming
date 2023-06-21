#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given as a
 * parameter on each element of an array.
 * @array: array
 * @size: size of array
 * @action: function parameter
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	while (size)
	{
		action(array[i]);
		i++;
		size--;
	}
}
