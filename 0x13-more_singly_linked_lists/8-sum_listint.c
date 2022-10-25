#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to first element
 *
 * Return: sum or 0 if empty list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = head;

	if (head)
	{
		while (ptr)
		{
			sum += ptr->n;
			ptr = ptr->next;
		}
		return (sum);
	}
	return (0);
}
