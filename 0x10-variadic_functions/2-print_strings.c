#include "variadic_functions.h"
#include <stdio.h>


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
		if (!string)
			string = "(nil)";
		if (!separator)
		{
			printf("%s", string);
		}
		else if (separator && i == 0)
		{
			printf("%s", string);
		}
		else 
			printf("%s%s", separator, string);
	}
	va_end(list);
	printf("\n");
}
