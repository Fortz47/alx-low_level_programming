#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to first node
 */

void free_list(list_t *head)
{
	list_t *ptr;

	ptr = head;

	while (ptr)
	{
		ptr = ptr->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
