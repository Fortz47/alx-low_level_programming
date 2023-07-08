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

	while (n && i >= 0)
	{
		if (i == 0)
			return (n & 1);
		n = n >> 1;
		i--;
	}
	return (-1);
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

	int i = (int) index;
	unsigned int bit = 1;

	bit_to_set = get_bit(*n, index);
	if (bit_to_set == -1)
		return (-1);
	if (bit_to_set == 0)
		return (1);
	while (i >= 0)
	{
		if (i == 0)
		{
			*n = *n ^ bit;
			return (1);
		}
		bit = bit << 1;
		i--;
	}
	return (-1);
}
