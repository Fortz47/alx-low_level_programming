#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list
 * @head: pointer to first element
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (*head == NULL)
		return;
	ptr = *head;

	while (ptr)
	{
		ptr = ptr->next;
		free(*head);
		*head = ptr;
	}
	*head = NULL;
}
