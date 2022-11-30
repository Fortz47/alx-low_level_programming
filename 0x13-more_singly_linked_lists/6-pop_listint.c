#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 * @head: pointer to first node
 *
 * Return: head node’s data (n) or 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int data;

	if (!*head)
		return (0);

	ptr = *head;
	data = ptr->n;
	ptr = ptr->next;
	free(*head);
	*head = ptr;

	return (data);
}
