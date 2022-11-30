#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of
 * a listint_t linked list.
 * @head: pointer to first node
 *
 * Return: sum of all data (n) or zero if list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int data = 0;

	if (!head)
		return (0);

	ptr = head;

	while (ptr)
	{
		data += ptr->n;
		ptr = ptr->next;
	}
	return (data);
}
