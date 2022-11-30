#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to first node
 * @idx: index of node to add
 * @n: data of new node
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new;

	if (!*head)
		return (NULL);

	current = *head;
	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = NULL;

	if (idx == 0)
{
		new->next = current->next;
		*head = new;
		return (*head);
	}
	while (idx > 1)
	{
		current = current->next;
		idx--;
		if (!current)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = current->next;
	current->next = new;
	return (new);
}
