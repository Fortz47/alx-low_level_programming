#include "lists.h"

/**
 * add_node_end - adds node at the end of a list_t list
 * @head: pointer to head node
 * @str: string to add to new node
 *
 * Return: address of new node or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr;
	list_t *new;
	int i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (str[i])
		i++;

	new->len = i;
	new->str = strdup(str);
	new->next = NULL;
	ptr = *head;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = new;
	return (*head);
}
