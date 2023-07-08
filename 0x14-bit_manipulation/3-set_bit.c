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
	int i = (int) index;
	unsigned long int bit = 1;

	if (!n)
		return (-1);
	while (i >= 0)
	{
		if (i == 0)
		{
			*n = *n | bit;
			return (1);
		}
		bit = bit << 1;
		i--;
	}
	return (-1);
}
