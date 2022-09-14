#include "main.h"

/**
 * _islower - entry point
 * @c: function parameter
 * description: prints 1 if 'c' is
 * a lower case letter else prints 0
 * Return: 0 (success)
 */
int _islower(int c)
{
	char ch;
	int yes = 0;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == c)
			yes = 1;
	}
	_putchar(yes);
	return (0);
}
