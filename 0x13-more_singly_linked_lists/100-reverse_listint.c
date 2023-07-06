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
		next = current->next;  /* Store the next node */

		current->next = prev;  /* Reverse the link of the current node */

		prev = current;  /* Move prev and current pointers one step forward */
		current = next;
	}

	*head = prev;  /* Update the head to the last node (previously the tail) */

	return (*head);
}
