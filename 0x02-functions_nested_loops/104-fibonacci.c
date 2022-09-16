#include <stdio.h>

/**
 * main - entry point
 * description: prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: 0 (success)
 */
int main(void)
{
	unsigned long int i, j, k, j1, j2, k1, k2;

	i = 3;
	j = 2;
	k = 1;
	printf("1, 2");
	while (i < 92)
	{
		j = j + k;
		k = j - k;
		printf(", %lu", j);
		i++;
	}
	j1 = j / 1000000000;
	j2 = j % 1000000000;
	k1 = k / 1000000000;
	k2 = k % 1000000000;
	
	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", k1 + (k2 / 1000000000));
		printf("%lu", k2 % 1000000000);
		k1 = k1 + j1;
		j1 = k1 - j1;
		k2 = k2 + j2;
		j2 = k2 - j2;
	}
	putchar('\n');
	return (0);
}
