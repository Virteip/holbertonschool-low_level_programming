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
	/*reserve space for hash table*/
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));
	/*if malloc fails return NULL and free table*/
	if (hash_table == NULL)
	{
		return (NULL);
	}
	/*set size and array nodes space*/
	hash_table->size = size;
	hash_table->array = calloc(size, sizeof(hash_node_t *) * 0);

	if (!(hash_table->array))
	{
		free(hash_table);
		return (NULL);
	}

	return (hash_table);
}
