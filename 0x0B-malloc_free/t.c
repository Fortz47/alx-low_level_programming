#include <stdio.h>

int _strlen(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
		continue;
	return (i);
}

int main(void)
{
	int len;

	char *string = "hello world!";

	len = _strlen(string);
	printf("lenght is: %d\n", len);
	return (0);
}
