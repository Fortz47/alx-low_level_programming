#include "hash_tables.h"

/**
 * create_item - creates an item (hash_node_t *)
 * @key: item key
 * @value: item value
 *
 * Return: item or NULL if failed
 */
hash_node_t *create_item(const char *key, const char *value)
{
	hash_node_t *item;

	item = malloc(sizeof(hash_node_t));
	if (!item)
		return (NULL);
	item->key = strdup(key);
	if (!item->key)
	{
		free(item);
		return (NULL);
	}
	item->value = strdup(value);
	if (!item->value)
	{
		free(item->key);
		free(item);
		return (NULL);
	}
	item->next = NULL;
	return (item);
}

/**
 * free_item - frees an item (hash_node_t *)
 * @item: item
 */
void free_item(hash_node_t *item)
{
	if (item)
	{
		free(item->key);
		free(item->value);
		free(item);
	}
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to hash table
 * @key: element key
 * @value: element value
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item, *current_item;
	unsigned long int index;

	if (!ht || !key || !value)
		return (0);
	item = create_item(key, value);
	if (!item)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current_item = ht->array[index];
	while (current_item)
	{
		if (strcmp(current_item->key, key) == 0)
		{
			free(ht->array[index]->value);
			ht->array[index]->value = strdup(value);
			if (ht->array[index]->value == NULL)
			{
				free_item(item);
				return (0);
			}
			return (1);
		}
		current_item = current_item->next;
	}
	item->next = ht->array[index];
	ht->array[index] = item;
	return (1);
}
