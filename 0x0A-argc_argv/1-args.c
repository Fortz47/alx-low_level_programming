#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: pointer to a char array
 *
 * Return: 0 (success)
 */

int main(int argc, char* argv[] __attribute__((unused)))
{
	int i = 0;

	while (i < argc)
		i++;

	printf("%d\n", i - 1);

	return (0);
}
