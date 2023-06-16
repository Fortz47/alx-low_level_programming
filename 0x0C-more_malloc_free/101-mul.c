#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * multiply_numbers - Multiply two positive numbers.
 * @num1: First positive number as a string.
 * @num2: Second positive number as a string.
 */

void multiply_numbers(const char *num1, const char *num2);

/**
 * is_positive_number - Check if a string represents a positive number.
 * @num: String to be checked.
 *
 * Return: 1 if the string represents a positive number, 0 otherwise.
 */

int is_positive_number(const char *num);

/**
 * main - entry point
 * @argc: cmd line argument count
 * @argv: array of cmd line arguments
 *
 * Return: 0, success
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!is_positive_number(argv[1]) || !is_positive_number(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	multiply_numbers(argv[1], argv[2]);

	return (0);
}

void multiply_numbers(const char *num1, const char *num2)
{
	int i, start, j, digit1, digit2, product, pos1;
	int pos2, sum;

	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int result_len = len1 + len2;
	int *result = calloc(result_len, sizeof(int));

	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			digit1 = num1[i] - '0';
			digit2 = num2[j] - '0';
			product = digit1 * digit2;
			pos1 = i + j;
			pos2 = i + j + 1;
			sum = product + result[pos2];

			result[pos2] = sum % 10;
			result[pos1] += sum / 10;
		}
	}

	start = 0;
	while (result[start] == 0 && start < result_len - 1)
		start++;

	for (i = start; i < result_len; i++)
		printf("%d", result[i]);
	printf("\n");

	free(result);
}

int is_positive_number(const char *num)
{
	int i;

	for (i = 0; num[i] != '\0'; i++)
	{
		if (!isdigit(num[i]))
			return (0);
	}
	return (1);
}

