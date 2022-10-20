#include "lists.h"
#include <string.h>

/**
 * _strlen - returns the lenght of a string
 * @string: string to find lenght
 *
 * Return: lenght
 */

int _strlen(const char *string)
{
	int i = 0;

	while (string[i])
		i++;
	return (i);
}

/**
 * add_node - adds a new node at beginning of list_t
 * @head: pointer
 * @str: string to add in new node
 *
 * Return: pointer to new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	ptr = malloc(sizeof(list_t));
	if (!ptr)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = _strlen(str);
	ptr->next = (*head);
	(*head) = ptr;

	return (*head);
}
