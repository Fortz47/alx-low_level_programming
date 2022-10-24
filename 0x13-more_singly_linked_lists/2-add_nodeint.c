#include "lists.h"

/**
 * add_nodeint - adds node at the beginning of listint_t list
 * @head: head of node
 * @n: value to add to new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
