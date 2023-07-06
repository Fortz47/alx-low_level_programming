#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list.
 * @h: pointer to pointer of first node
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	listint_t *next;
	size_t count = 0;

	while (current != NULL)
	{
		count++;
		next = current->next;
		free(current);
		current = next;

		if (current >= next)
		{
			*h = NULL;
			exit(98);
		}
	}

	*h = NULL;
	return (count);
}

