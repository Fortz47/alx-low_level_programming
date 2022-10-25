#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to first element in node
 * @idx: index of list where node is to be added
 * @n: - data of new node
 *
 * Return: address of new node or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *ptr = *head, *new;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head)
	{
		while (ptr)
		{
			if (idx == 0)
			{
				new->next = *head;
				*head = new;
				return (new);
			}
			if (count == idx && idx > 0)
			{
				new->next = ptr->next;
				ptr->next = new; 
				return (new);
			}
			count++;
			ptr = ptr->next;
		}
	}
	return (NULL);
}
