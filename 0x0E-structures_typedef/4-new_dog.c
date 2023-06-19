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
 * _strcpy - copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest
 * @dest: function parameter 1
 * @src: function parameter 2
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	dest[0] = '\0';

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
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
