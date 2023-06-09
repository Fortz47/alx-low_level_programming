#include <stdio.h>

/**
 * main - entry point
 * @argc: cmd argument count
 * @argv: array of cmd line argument
 *
 * Return: 0, success
 *
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
