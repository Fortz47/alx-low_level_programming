#include "lists.h"

/**
 * print_listint - prints a all elements of a list_tint
 * @h: pointer to first node
 *
 * Return: number of nodes
 *
 */
size_t print_listint(const listint_t *h)
{
	listint_t const *ptr;
	unsigned int count;

	count = 0;
	ptr = h;
	while (ptr != NULL)
	{
		count++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (count);
}
