#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * then uppercase followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char chLower;
	char chUpper;

	for (chLower = 'a'; chLower <= 'z'; chLower++)
	{
		putchar(chLower);
	}
	for (chUpper = 'A'; chUpper <= 'Z'; chUpper++)
	{
		putchar(chUpper);
	}
	putchar('\n');
	return (0);
}
