#include "lists.h"

/**
 * list_len - returns the number of elements in a linked
 * a linked list list_t
 * @h: pointer to first node
 *
 * Return: number of nodes/element
 *
 */
size_t list_len(const list_t *h)
{
	list_t const *ptr;
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
