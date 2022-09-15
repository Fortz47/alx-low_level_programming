#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from
 * n to 98 followed by a newline
 * @n: function parameter
 * Return: void
 */
void print_to_98(int n)
{
	int i, j, k;

	if (n == 98)
	{
		putchar((n / 10) + '0');
		putchar((n % 10) + '0');
		putchar('\n');
	}
	else if (n < 0)
	{
		for (i = n; i < 98; i++)
			printf("%d, ", i);
		printf("%d\n", 98);
	}
	else if (n >= 0)
	{
		for (j = n; j < 98; j++)
			printf("%d, ", j);
		printf("%d\n", 98);
	}
	else if (n > 98)
	{
		k = n;

		while (k > 98)
		{
			printf("%d, ", k);
			k--;
		}
		printf("%d\n", 98);

	}
}
