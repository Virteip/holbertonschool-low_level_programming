#include "hash_tables.h"

/**
 * hash_table_delete - everybody is free
 * @ht: hash table
 *
 *
 * Return: Clean mem.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *new;
	hash_node_t *new_new;

	for (i = 0 ; i < ht->size; ++i)
	{
		new = ht->array[i];

		while(new != NULL)
		{
			new_new = new;
			free(new_new->key);
			free(new_new->value);
			free(new_new);
			new = new->next;
		}
	}
	free(ht->array);
	free(ht);
}
