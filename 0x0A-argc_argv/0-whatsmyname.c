#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: pointer to char array of arguments
 *
 * Return: 0 (success)
 */

int main(int argc, char **argv)
{
	if (argc)
		printf("%s\n", argv[0]);
	return (0);
}
