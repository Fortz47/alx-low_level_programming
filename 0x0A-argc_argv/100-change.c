#include <stdio.h>
#include <stdlib.h>

/**
 * calculateMinCoins - Calculates the minimum number
 * of coins required to make change for a given amount.
 * @cents: The amount of money in cents.
 *
 * Return: The minimum number of coins needed.
 */

int calculateMinCoins(int cents)
{
	int coins[] = {25, 10, 5, 2, 1};
	int numCoins = sizeof(coins) / sizeof(coins[0]);
	int minCoins = 0;
	int i;

	if (cents < 0)
		return (0);

	for (i = 0; i < numCoins; i++)
	{
		minCoins += cents / coins[i];
		cents %= coins[i];
	}

	return (minCoins);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings representing the
 * command-line arguments.
 *
 * Return: 0 on success, 1 on error.
 */

int main(int argc, char *argv[])
{
	int cents, minCoins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
		printf("0\n");
	else
	{
		minCoins = calculateMinCoins(cents);

		printf("%d\n", minCoins);
	}

	return (0);
}
