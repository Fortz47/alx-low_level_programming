#include "dog.h"

/**
 * _strlen - cal lenght of a string
 * @str: string
 *
 * Return: lenght of string
 *
 */

unsigned int _strlen(char *str)
{
	unsigned int i = 0;

	while (str[i])
		i++;
	return (i);
}

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

	ptr->name = malloc(_strlen(name) + 1);
	ptr->owner = malloc(_strlen(owner) + 1);
	if (ptr->name == NULL || ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr->owner);
		free(ptr);
		return (NULL);
	}
	_strcpy(ptr->name, name);
	_strcpy(ptr->owner, owner);
	ptr->age = age;

	return (ptr);
}
