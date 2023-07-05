#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to first node
 * @index: index of the nth node
 *
 * Return: the nth node or NULL if n doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;

	if (!head)
		return (NULL);
	if (index == 0)
		return (head);
	ptr = head;
	while (ptr && index > 0)
	{
		ptr = ptr->next;
		index--;
	}
	return (ptr);
}
