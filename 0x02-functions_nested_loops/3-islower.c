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
	int yes;
	int no = 0;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (c == ch)
			yes = 1;
	}
	if (yes == 1)
		_putchar(yes);
	else
		_putchar(no);
	return (0);
}
