#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list
 * @head: pointer to first element
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr, *temp;

	if (*head == NULL)
		return;
	ptr = *head;
	while (ptr)
	{
		temp = ptr;
		ptr = ptr->next;
		free(temp);
	}
	*head = NULL;
}
