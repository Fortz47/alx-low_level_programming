#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to hash table or Null if failed
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	if (size == 0)
		return (NULL);
	ht = malloc(sizeof(hash_table_t) + sizeof(hash_node_t *) * size);
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	return (ht);
}
