#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ptr;
	unsigned long int count = ht->size, index = 0;
	int flag = 0;

	if (ht == NULL)
		return;
	putchar('{');
	while (count)
	{
		if (ht->array[index])
		{
			ptr = ht->array[index];
			if (flag == 0)
			{
				while (ptr)
				{
					printf("'%s': '%s'", ptr->key, ptr->value);
					ptr = ptr->next;
					flag = 1;

				}
			}
			else
			{
				while (ptr)
				{
					printf(", '%s': '%s'", ptr->key, ptr->value);
					ptr = ptr->next;
				}
			}
		}
		index++;
		count--;
	}
	printf("}\n");
}
