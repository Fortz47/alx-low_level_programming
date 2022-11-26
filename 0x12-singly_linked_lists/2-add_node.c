#include "lists.h"

/**
 * add_node - adds a node at the beginning of list_t list
 * @head: pointer to head node
 * @str: string to add to new node
 *
 * Return: address of new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i;

	i = 0;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		i++;
	}

	new->len = i;
	new->str = strdup(str);
	new->next = *head;

	*head = new;
	return (*head);
}
