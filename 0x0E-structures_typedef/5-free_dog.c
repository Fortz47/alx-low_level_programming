#include "dog.h"

/**
 * free_dog - frees dog
 * @d: pointer to struct dog
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->age);
	free(d);
}
