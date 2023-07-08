#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: flip from number n
 * @m: flip to number m
 *
 * Return: number of bits fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned int res;

	res = n ^ m;
	while (res != 0)
	{
		count += res & 1;
		res = res >> 1;
	}
	return (count);
}
