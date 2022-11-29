#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to first node
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	size_t count;

	ptr = h;
	count = 0;

	while (ptr)
	{
		count++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (count);
}
