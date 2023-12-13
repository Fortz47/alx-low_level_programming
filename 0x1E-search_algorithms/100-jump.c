#include "search_algos.h"
#include <math.h>

/**
 * jump_search -  searches for a value in a sorted array of integers
 * using the jump search algorithm
 * @array: array of int to search
 * @size: size of the array
 * @value: value to search in array
 *
 * Return: -1 if array is NULL or value not found else index of value
 */

int jump_search(int *array, size_t size, int value)
{
	int k, m = (int)sqrt((double)size);
	int min, max, j;

	if (!array)
		return (-1);

	for (k = 0; k * m <= (int)size; k++)
	{
		min = k * m;
		max = (k + 1) * m;
		printf("Value checked array[%d] = [%d]\n", min, array[min]);
		if (array[max] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n", min, max);
			if (k == m)
				max = (size % 2 == 0) ? max : max + 1;
			for (j = min; j < max; j++)
			{
				printf("Value checked array[%d] = [%d]\n", j, array[j]);
				if (array[j] == value)
					return (j);
			}
		}
	}
	return (-1);
}
