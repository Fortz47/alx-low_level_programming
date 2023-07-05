#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked
 * a linked list listint_t
 * @h: pointer to first node
 *
 * Return: number of nodes/element
 *
 */
size_t listint_len(const listint_t *h)
{
	listint_t const *ptr;
	unsigned int count;

	ptr = h;
	count = 0;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
