#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number
 * @index: index
 *
 * Return: the value of the  bit at the index or -1 if error
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

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number
 * @index: index
 *
 * Return: 1 if it worked, or -1 if an error occurred
 * occured.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int bit_to_set;
	unsigned long int bit;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	bit_to_set = get_bit(*n, index);
	if (bit_to_set == 0)
		return (1);

	bit = 1UL << index;
	*n = *n ^ bit;
	return (1);
}
