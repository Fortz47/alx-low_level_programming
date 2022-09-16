#include <stdio.h>

/**
 * main - entry point
 * description: prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: 0 (success)
 */
int main(void)
{
	long int i, j, k;

	i = 3;
	j = 2;
	k = 1;
	printf("1, 2");
	while (i <= 50)
	{
		j = j + k;
		k = j - k;
		printf(", %d", j);
		i++;
	}
	putchar('\n');
	return (0);
}
