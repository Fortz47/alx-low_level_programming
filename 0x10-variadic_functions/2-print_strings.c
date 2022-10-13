#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings -  prints strings, followed by a new line.
 * @separator: he string to be printed between the strings
 * @n: the number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i, flag = 0;
	va_list list;
	char *string;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(list, char *);

		if (!separator)
		{
			if (!string)
				string = "nil":
			printf("%s", string);
		}
		else if (separator && i == 0)
		{
			if (!string)
				string = "nil";
			printf("%s", string);
		}
		else 
			printf("%s%s", separator, string);
	}
	va_end(list);
	printf("\n");
}
