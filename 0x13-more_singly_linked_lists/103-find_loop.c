#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to pointer of first node
 *
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise = head;
	listint_t *hare = head;

	while (hare != NULL && hare->next != NULL)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare) /* Loop detected */
		{
			tortoise = head;
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			return (tortoise); /* Return the start of the loop */
		}
	}

	return (NULL); /* No loop found */
}

