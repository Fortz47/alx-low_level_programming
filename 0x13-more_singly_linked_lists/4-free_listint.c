#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: pointer to first node
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	if (!head)
		return;
	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
