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
	unsigned long int mask;
	unsigned long int bit;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask = 1UL << index;
	bit = n & mask;

	return ((bit != 0) ? 1 : 0);
}
