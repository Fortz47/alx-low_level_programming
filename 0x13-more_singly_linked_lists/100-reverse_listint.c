#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to pointer of first node
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next = NULL;

	while (current != NULL)
	{
		next = current->next;

		current->next = prev;

		prev = current;
		current = next;
	}

	*head = prev;

	return (*head);
}
