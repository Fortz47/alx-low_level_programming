#include "main.h"

#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: pointer to a char array
 * description: adds the arguments of the main function
 *
 * Return: 0 (success)
 */

int main(int argc, char **argv)
{
	int i, j, k, sum;

	if (argc == 1)
		printf("0\n");
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					puts("Error");
					return (1);
				}
			}
		}
		for (k = 1; k < argc; k++)
		{
			sum = sum + atoi(argv[k]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
