#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *ptr, *tmp;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		while (ptr)
		{
			tmp = ptr;
			ptr = ptr->next;
			free_item(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
