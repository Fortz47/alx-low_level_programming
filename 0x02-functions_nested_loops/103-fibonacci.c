#include <stdio.h>

/**
 * main - entry point
 * Return: 0 (success)
 */
int main(void)
{
	unsigned int i, j, k, z;

	i = 1;
	j = 2;
	k = 1;
	z = 0;
	while (i > 0 && z <= 4000000)
	{
		j = j + k;
		k = j - k
		if ((j % 2) == 0)
			z = z + j;
		i++;
	}
	printf("%u\n", z); 
	return (0);
}
