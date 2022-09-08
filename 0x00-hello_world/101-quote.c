#include <stdio.h>

/**
 * main - prints the phrase stored in h
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	const char h[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(h, sizeof(h) - 1, 1, stdout);
	return (1);
}
