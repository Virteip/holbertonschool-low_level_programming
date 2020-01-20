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

	for (i = 0 ; i < ht->size; i += 1)
	{
		new = ht->array[i];

		for ( ; new; new = new->next)
		{
			new_new = new;
			free(new_new->key);
			free(new_new->value);
			free(new_new);
		}
	}
	free(ht->array);
	free(ht);
}
