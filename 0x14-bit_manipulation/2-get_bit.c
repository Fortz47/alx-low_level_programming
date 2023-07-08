#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number
 * @index: index
 *
 * Return: the value of the  bit at a index or -1 if error
 * occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i = (int) index;

	while (*n && i >= 0)
	{
		if (i == 0)
			return (n & 1);
		n = n >> 1;
		i--;
	}
	return (-1);
}
