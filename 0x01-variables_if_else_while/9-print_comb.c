#include <stdio.h>

/**
 * main - prints all possible combination of,
 *  a single digit-numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int comma = 44;
	int space = 32;

	for (n = 48; n < 57; n++)
	{
		putchar(n);
		putchar(comma);
		putchar(space);
	}
	putchar(57);
	return (0);
}
