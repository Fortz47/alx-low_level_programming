#include "lists.h"

/**
 * _strlen - returns the lenght of a string
 * @s: string parameter
 *
 * Return: lenght of the string s
 */

int _strlen(char *s)
{
	if (*s != '\0')
		return (1 + _strlen(s += 1));
	return (0);
}

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to first node
 * @str: string
 *
 * Return: pointer to new node or Null if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dupStr;
	list_t *ptr;
	int lenght;

	if (!head || !str)
		return (NULL);
	ptr = *head;
	dupStr = strdup(str);
	if (dupStr != NULL)
		lenght = _strlen(dupStr);
	else
		return (NULL);
	ptr = malloc(sizeof(list_t));
	if (!ptr)
	{
		free(dupStr);
		return (NULL);
	}
	ptr->str = dupStr;
	ptr->len = lenght;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
