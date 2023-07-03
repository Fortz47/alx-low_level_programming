#include "lists.h"

/**
 * print_list - prints a all elements of a list_t
 * @h: pointer to first node
 *
 * Return: number of nodes
 *
 */
size_t print_list(const list_t *h)
{
	list_t const *ptr;
	unsigned int count;

	ptr = h;
	count = 0;

	while (ptr != NULL)
	{
		count++;
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
	}
	return (count);
}
