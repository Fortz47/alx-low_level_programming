#include "main.h"

/**
 * print_last_digit - prints the last digit of a number n
 * @n: function parameter
 * Return: c
 */
int print_last_digit(int n)
{
	int c = n % 10;

	_putchar(c + '0');
	return (c);
}
