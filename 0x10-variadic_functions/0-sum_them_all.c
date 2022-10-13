#include "variadic_functions.h"
#include <stdlib.h>

/**
 * sum_them_all - sums all the parameters
 * @n: number of parameters passsed
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;

	int sum = 0;
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	return (sum);
}
