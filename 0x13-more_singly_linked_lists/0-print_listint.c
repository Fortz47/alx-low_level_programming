#include "lists.h"

/**
 * print_listint - prints the elements of a listint list
 * @h: pointer to head
 *
 * Return: number or nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
