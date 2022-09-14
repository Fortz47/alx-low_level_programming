#include "main.h"

/**
 * _abs - entry point
 * @value: function parameter
 * Return: 0 (success)
 */

int _abs(int n)
{
	int cal[1];

	if (n < 0)
		n = n * -1;
	else if (n >= 0)
		n = n;
	_putchar(n);
	return (0);
}
