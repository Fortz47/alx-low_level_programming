#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 * @head: pointer to first element in list
 *
 * Return: head node data or 0 if linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head)
	{
		temp = (*head)->next;
		data = (*head)->n;
		free(*head);
		*head = temp;
		return (data);
	}

	return (0);
}
