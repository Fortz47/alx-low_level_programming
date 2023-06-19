#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to struct dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", (d->name) ? d->name : "(nil)");
	if (d->age != NULL)
		printf("Age: %f\n", d->age);
	else
		printf("Age: %s\n", "(nil)");
	printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
}
