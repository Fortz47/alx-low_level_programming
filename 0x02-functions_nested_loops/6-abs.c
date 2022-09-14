#include "main.h"

/**
 * _abs - entry point
 * @value: function parameter
 * Return: 0 (success)
 */

int _abs(int value)
{
	int cal[] = {value};

	if (value < 0)
		cal[0] = value * -1;
	else if (value == 0)
		cal[0] = 0;
	else if (value > 0)
		cal[0] = value;
	_putchar(cal[0]);
	return (0);
}
