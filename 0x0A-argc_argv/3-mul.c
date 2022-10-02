#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: pointer to a char array
 *
 * Return: 0 (success)
 */

int main(int argc, char **argv)
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		return (0);
	}
	printf("Error\n");
	return (1);
}
