#include "main.h"

/**
 * set_bit -sets the value of a bit to 1 at a given index.
 * @n: number
 * @index: index
 *
 * Return: 1 if it worked, or -1 if an error occurred
 * occured.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	bit = 1UL << index;
	n = n | bit;
	return (1);
}
