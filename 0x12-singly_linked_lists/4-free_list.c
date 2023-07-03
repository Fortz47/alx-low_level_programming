#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: pointer to first node
 */
void free_list(list_t *head)
{
	list_t *ptr;

	if (!head)
		return;
	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
}
