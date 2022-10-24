#include "lists.h"

/**
 * listint_len - returns the number of elements in listint_t list
 * @h: pointer to head
 *
 * Return: number of nodes/elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
