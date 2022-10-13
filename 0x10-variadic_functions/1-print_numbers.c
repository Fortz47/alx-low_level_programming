#include "variadic_functions.h"
#include <stdio.h>


/**
 * print_numbers - prints numbers followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, flag = 0;
	va_list list;

	if (!separator)
		return;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		if (flag == 0)
		{
			printf("%d", va_arg(list, int));
			flag = 1;
		}
		else if (flag == 1)
			printf("%s%d", separator, va_arg(list, int));
	}
	printf("\n");
}
