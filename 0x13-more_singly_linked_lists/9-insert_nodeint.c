#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to pointer of first node
 * @idx: index to insert node
 * @n: value to initialize new node
 *
 * Return: address of new node or Null if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr_forward, *ptr_backward, *newNode;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (!*head && idx > 0)
	{
		free(newNode);
		return (NULL);
	}
	if (!*head && idx == 0)
		*head = newNode;

	ptr_forward = *head;
	while (ptr_forward && idx > 0)
	{
		if (idx - 1 == 0)
			ptr_backward = ptr_forward;
		ptr_forward = ptr_forward->next;
		idx--;
	}
	if (ptr_forward && idx == 0)
	{
		newNode->next = ptr_forward;
		ptr_backward->next = newNode;
		return (newNode);
	}
	free(newNode);
	return (NULL);
}
