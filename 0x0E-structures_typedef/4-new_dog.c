#include "dog.h"

/**
 * new_dog - creates a new dog.
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: pointer to new dog_t of NULL if failed
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (!ptr)
		return (NULL);

	(*ptr).name = name;
	ptr->age = age;
	(*ptr).owner = owner;

	return (ptr);
}
