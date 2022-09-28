#include "main.h"

/**
 * _pow_recursion - returns x rasied to the power of y
 * @x: paramter 1
 * @y: parameter 2
 * Return: result
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
