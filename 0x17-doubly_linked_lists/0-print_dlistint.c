#include "lists.h"

/**
 * print_dlistint - prints all the element of a doubly linked list
 * @h: pointer to first node
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	int count = 0;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}
	return (count);
}
