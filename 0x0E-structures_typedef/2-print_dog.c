#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints a struct
 * @d: pointer to struct to be printed
 */

void print_dog(struct dog *d)
{
	int i;

	char dog[4] = {"name", "age", "owner"};
	char _dog[4] = {"Name", "Age", "Owner"};

	if (d == NULL)
		return;

	for (i = 0; i < 3; i++)
	{
		if (d->dog[i] == NULL)
			printf("%s: nil\n", _dog[i]);
		else
			printf("%s: %s\n", _dog[i], d->dog[i]);
	}
}
