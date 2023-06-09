#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: cmd argument count
 * @argv: array of cmd line argument
 *
 * Return: 0, success
 *
 */

int main(int argc, char *argv[])
{
	int add, i, num;
	char *endptr;

	add = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	for (i = 1; i < argc; i++)
	{
		num = strtol(argv[i], &endptr, 10);
		if (endptr != '\0')
		{
			printf("Error\n");
			return (1);
		}
		add += num;
	}
	printf("%d\n", add);
	return (0);
}
