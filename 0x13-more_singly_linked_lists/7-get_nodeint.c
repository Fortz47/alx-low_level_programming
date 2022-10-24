#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to first element
 * @index: index of the node, starting at 0index of the node, starting at 0
 *
 * Return: nth node or NULL if node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int count;

	ptr = head;
	count = 0;

	while (ptr)
	{
		if (index == count)
			return (ptr);

		ptr = ptr->next;
		count++;
	}
	return (ptr);
}
