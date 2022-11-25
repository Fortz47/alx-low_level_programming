#include "lists.h"

/**
 * print_list - prints the number elements of a list_t
 * @h: pointer to head node
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr;

	ptr = h;
	while (ptr)
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
