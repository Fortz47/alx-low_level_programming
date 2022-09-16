#include <stdio.h>

/**
 * description: prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: 0 (success)
 */
int main(void)
{
	unsigned long int i, j, k;

	i = 3;
	j = 2;
	k = 1;
	printf("1, 2");
	while (i <= 98)
	{
		j = j + k;
		k = j - k;
		printf("%lu", j);
		i++;
	}
	putchar('\n');
	return (0);
}
