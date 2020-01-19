#include "hash_tables.h"
/**
 * hash_table_create - Create hash table
 *
 * @size: size of the hash table
 *
 * Return: hash_table array
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));

	if (size == 0)
	{
		return (NULL);
	}

	if (hash_table == NULL)
	{
		return (NULL);
	}

	hash_table->array = malloc(sizeof(hash_node_t *) * size);

	if (hash_table->array == NULL)
	{
		return (NULL);
	}

	hash_table->size = size;

	return (hash_table);
}
