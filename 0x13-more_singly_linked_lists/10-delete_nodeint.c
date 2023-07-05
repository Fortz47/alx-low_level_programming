#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given position.
 * @head: pointer to pointer of first node
 * @index: index to delete node
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr_forward, *ptr_backward;

	if (!*head)
	{
		return (0);
	}

	if (index == 0)
	{
		ptr_forward = (*head)->next;
		free(*head);
		*head = ptr_forward;
		return (1);
	}
	ptr_forward = *head;
	while (ptr_forward && index > 0)
	{
		if (index - 1 == 0)
			ptr_backward = ptr_forward;
		ptr_forward = ptr_forward->next;
		index--;
	}
	if (ptr_forward && index == 0)
	{
		ptr_backward->next = ptr_forward->next;
		free(ptr_forward);
		return (1);
	}
	return (0);
}
