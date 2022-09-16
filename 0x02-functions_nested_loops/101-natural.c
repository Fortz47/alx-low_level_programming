#include <stdio.h>

/**
 * main - entry point
 * description: computes and prints the sum of all the multiples
 * of 3 or 5 below 1024 (excluded) followed by a new line
 * return: 0 (success))
 */
int main(void)
{
	int i, j;

	i = 1;
	j = 0;
	while (i < 1024)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			j = j + i;
			printf("%d ", i);
		}
		i++;
	}
	putchar('\n');
	printf("total sum is: %d\n", j);
	return (0);
}
