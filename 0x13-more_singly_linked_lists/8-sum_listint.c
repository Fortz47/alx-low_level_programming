#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list.
 * @head: pointer to first node
 *
 * Return: sum of all the data (n) or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *ptr;

	if (!head)
		return (0);
	sum = 0;
	ptr = head;
	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
