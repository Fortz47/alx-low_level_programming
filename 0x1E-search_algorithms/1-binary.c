#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: array to search
 * @size: size of array
 * @value: value to search in array
 *
 * Return: -1 if NULL array or value not present else index of value
 */

int binary_search(int *array, size_t size, int value)
{
	int L = 0;
	int R = size - 1;
	int m;
	int i;

	while (L <= R)
	{
		printf("Searching in array: %d", array[L]);
		for (i = L + 1; i <= R; i++)
			printf(", %d", array[i]);
		printf("\n");
		m = (L + R) / 2;
		if (array[m] < value)
			L = m + 1;
		else if (array[m] > value)
			R = m - 1;
		else
			return (m);
	}
	return (-1);
}
