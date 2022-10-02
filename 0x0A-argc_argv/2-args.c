#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: pointer to a char array
 *
 * Return: 0 (success)
 */

int main(int argc, char* argv[])
{
	int i;

	if (argc)
	{
		for (i = 1; i < argc; i++)
			printf("%s\n", argv[i]);
	}
	return (0);
}
