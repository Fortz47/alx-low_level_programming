#include "main.h"

/**
 * _exp - calculates 2 raised to the power of anything
 * @pow: power
 *
 * Return: unsigned int
 */

unsigned int _exp(unsigned int pow)
{
	unsigned int c = 1;

	if (pow == 0)
		return (1);
	while (pow != 0)
	{
		c *= 2;
		pow--;
	}
	return (c);
}

/**
 * _ctoi - converts a character to an unsigned int
 * @c: character
 *
 * Return: unsigned integer
 */

unsigned int _ctoi(char c)
{
	return (c - '0');
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string of binary
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int k, i = 0, result = 0;

	if (!b)
		return (0);

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	for (k = 0; b[k]; k++)
	{
		i--;
		result +=  _ctoi(b[k]) * _exp(i);
	}
	return (result);
}
