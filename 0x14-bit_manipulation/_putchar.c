#include "main.h"

/**
 * _putchar - prints a character
 * @c: character
 *
 * Return: character to standard output
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
