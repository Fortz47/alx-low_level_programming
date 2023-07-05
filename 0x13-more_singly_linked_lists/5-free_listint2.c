#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to pointer of first node
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (!*head)
			return;
	while (*head)
	{
		ptr = *head;
		*head = *head->next;
		free(ptr);
	}
}
