#include "lists.h"

/**
 * free_listint2 - frees a singly linked list
 * @head: pointer to first element in list
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	ptr = *head;

	if (*head == NULL)
		return;

	while (*head)
	{
		ptr = ptr->next;
		free(*head);
		*head = ptr;
	}
}
