#include "main.h"

/**
 * factorial - calculates factorial of n
 * @n: integer parameter
 * Return: factorial or error if n < 0
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
