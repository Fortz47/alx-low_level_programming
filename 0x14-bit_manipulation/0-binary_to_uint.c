#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: binary num in string
 *
 * Return: converted number, or 0 if b is Null or Non-binary
 */
unsigned int binary_to_uint(const char *b)
{	int i;

	unsigned int res = 0;

	if (!b)
		return (res);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
			res = res << 1;
		else if (b[i] == '1')
			res = (res << 1) | 1;
		else
			return (0);
	}
	return (res);
}
