#include "lists.h"

/**
 * _strlen - returns the lenght of a string
 * @s: string parameter
 *
 * Return: lenght of the string s
 */
int _strlen(char const *s)
{
	if (*s != '\0')
		return (1 + _strlen(s += 1));
	return (0);
}

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to pointer of first node
 * @str: string
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr;
	list_t *newNode;
	char *dupStr;
	int lenght;

	if (!head || !str)
		return (NULL);
	dupStr = strdup(str);
	lenght = _strlen(str);
	if (!dupStr)
		return (NULL);
	newNode = malloc(sizeof(list_t));
	if (!newNode)
	{
		free(dupStr);
		return (NULL);
	}
	newNode->str = dupStr;
	newNode->len = lenght;
	newNode->next = NULL;
	if (*head == NULL)
		*head = newNode;
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = newNode;
	}
	return (newNode);
}
