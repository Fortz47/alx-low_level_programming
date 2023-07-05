#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to pointer of first node
 * @n: value to initialize new node
 *
 * Return: the address of the new element/node, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);
	newNode->n = (int)n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
