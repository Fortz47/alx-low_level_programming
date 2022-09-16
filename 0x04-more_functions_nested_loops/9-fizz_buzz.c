#include <stdio.h>

/**
 * main - entry point
 * @void: takes no argument
 * Return: 0 (succes)
 */
int main(void)
{
	int i;

	puts("1 ");
	for (i = 2; i <= 100; i++)
	{
		if ((i % 15) == 0)
			puts(" FizzBuzz");
		else if ((i % 3) == 0)
			puts(" Fizz");
		else if ((i % 5) == 0)
			puts(" Buzz");
		else
			printf(" %d", i);
	}
	putchar('\n');
	return (0);
}
