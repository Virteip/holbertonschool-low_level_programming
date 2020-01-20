#include "hash_tables.h"
/**
 * hash_table_get - get values in hash
 * @ht: hashtable
 * @key: key for value to print
 *
 *
 * Return: Pointer to values.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i = key_index((const unsigned char *)key, ht->size);
	hash_node_t *new_node = ht->array[i];

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}

	for (new_node = ht->array[i]; new_node != NULL;
	    new_node = new_node->next)
	{
		if (strcmp(new_node->key, key) == 0)
		{
			return (new_node->value);
		}
	}

	return (NULL);

}
