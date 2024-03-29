#include "main.h"

/**
 * _pow_recursion - cal the val of x ^ y
 * @x: x parameter
 * @y: y parameter
 *
 * Return: x ^ y
 *
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y -= 1));
}
