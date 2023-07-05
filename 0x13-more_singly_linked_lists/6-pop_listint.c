#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to pointer of first node
 *
 * Return: the head node’s data (n) or 0 if empty list
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *ptr;

	if (!*head)
		return (0);
	num = (*head)->n;
	ptr = (*head)->next;
	free(*head);
	*head = ptr;

	return (num);
}
